/*Header-MicMac-eLiSe-25/06/2007

    MicMac : Multi Image Correspondances par Methodes Automatiques de Correlation
    eLiSe  : ELements of an Image Software Environnement

    www.micmac.ign.fr

   
    Copyright : Institut Geographique National
    Author : Marc Pierrot Deseilligny
    Contributors : Gregoire Maillet, Didier Boldo.

[1] M. Pierrot-Deseilligny, N. Paparoditis.
    "A multiresolution and optimization-based image matching approach:
    An application to surface reconstruction from SPOT5-HRS stereo imagery."
    In IAPRS vol XXXVI-1/W41 in ISPRS Workshop On Topographic Mapping From Space
    (With Special Emphasis on Small Satellites), Ankara, Turquie, 02-2006.

[2] M. Pierrot-Deseilligny, "MicMac, un lociel de mise en correspondance
    d'images, adapte au contexte geograhique" to appears in 
    Bulletin d'information de l'Institut Geographique National, 2007.

Francais :

   MicMac est un logiciel de mise en correspondance d'image adapte 
   au contexte de recherche en information geographique. Il s'appuie sur
   la bibliotheque de manipulation d'image eLiSe. Il est distibue sous la
   licences Cecill-B.  Voir en bas de fichier et  http://www.cecill.info.


English :

    MicMac is an open source software specialized in image matching
    for research in geographic information. MicMac is built on the
    eLiSe image library. MicMac is governed by the  "Cecill-B licence".
    See below and http://www.cecill.info.

Header-MicMac-eLiSe-25/06/2007*/
#include "general/all.h"
#include "private/all.h"
#include "XML_GEN/all.h"
#include <algorithm>

using namespace NS_ParamChantierPhotogram;
using namespace NS_SuperposeImage;


#define DEF_OFSET -12349876

class cOneChannel
{
   public :
       cOneChannel(const cImageCmpCol &);
   private :
};



std::string  mDir = "/mnt/data/Superposition/Avion-Jaune/Superp/";

std::string mNcal1 = "DRad_Sony95-Gray.xml";
std::string mNcal2 = "DRad_Sony95-IR.xml";

//std::string mNHVerif  = "HomGray09472_IR_0072.xml";
// std::string mNHCalc  = "VERIF/4P-HomGray09472_IR_0072.xml";
std::string mNHVerif  = "Test-HomGray09472_IR_0072.xml";
 std::string mNHCalc  = "HomGray09472_IR_0072.xml";

bool mL2 = true;

int main(int argc,char ** argv)
{

   ElPackHomologue aPCalc = ElPackHomologue::FromFile(mDir+mNHCalc);
   
   CamStenope * aCam1 = Std_Cal_From_File(mDir+mNcal1);
   CamStenope * aCam2 = Std_Cal_From_File(mDir+mNcal2);


   for ( ElPackHomologue::iterator itP=aPCalc.begin(); itP!=aPCalc.end(); itP++)
   {
        itP->P1() = aCam1->DistInverse(itP->P1());
        itP->P2() = aCam2->DistInverse(itP->P2());
   }
   
   cElHomographie aH12 (aPCalc,mL2);


   ElPackHomologue aPV = ElPackHomologue::FromFile(mDir+mNHVerif);
   for ( ElPackHomologue::iterator itP=aPV.begin(); itP!=aPV.end(); itP++)
   {
        Pt2dr aQ0 = itP->P1();
	Pt2dr aQ1 = aCam1->DistInverse(aQ0);
	Pt2dr aQ2 = aH12.Direct(aQ1);
	Pt2dr aQ3 = aCam2->DistDirecte(aQ2);

        double aDist = euclid(aQ3,itP->P2());
        std::cout << "Dist " << aDist << "\n";
   }
}




/*Footer-MicMac-eLiSe-25/06/2007

Ce logiciel est un programme informatique servant à la mise en
correspondances d'images pour la reconstruction du relief.

Ce logiciel est régi par la licence CeCILL-B soumise au droit français et
respectant les principes de diffusion des logiciels libres. Vous pouvez
utiliser, modifier et/ou redistribuer ce programme sous les conditions
de la licence CeCILL-B telle que diffusée par le CEA, le CNRS et l'INRIA 
sur le site "http://www.cecill.info".

En contrepartie de l'accessibilité au code source et des droits de copie,
de modification et de redistribution accordés par cette licence, il n'est
offert aux utilisateurs qu'une garantie limitée.  Pour les mêmes raisons,
seule une responsabilité restreinte pèse sur l'auteur du programme,  le
titulaire des droits patrimoniaux et les concédants successifs.

A cet égard  l'attention de l'utilisateur est attirée sur les risques
associés au chargement,  à l'utilisation,  à la modification et/ou au
développement et à la reproduction du logiciel par l'utilisateur étant 
donné sa spécificité de logiciel libre, qui peut le rendre complexe à 
manipuler et qui le réserve donc à des développeurs et des professionnels
avertis possédant  des  connaissances  informatiques approfondies.  Les
utilisateurs sont donc invités à charger  et  tester  l'adéquation  du
logiciel à leurs besoins dans des conditions permettant d'assurer la
sécurité de leurs systèmes et ou de leurs données et, plus généralement, 
à l'utiliser et l'exploiter dans les mêmes conditions de sécurité. 

Le fait que vous puissiez accéder à cet en-tête signifie que vous avez 
pris connaissance de la licence CeCILL-B, et que vous en avez accepté les
termes.
Footer-MicMac-eLiSe-25/06/2007*/
