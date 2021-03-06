// File Automatically generated by eLiSe
#include "StdAfx.h"
#include "cREgDistDxx_DCBrown.h"


cREgDistDxx_DCBrown::cREgDistDxx_DCBrown():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("Intr",0,17));
   Close(false);
}



void cREgDistDxx_DCBrown::ComputeVal()
{
   double tmp0_ = mLocRegDistuu1_y * mLocRegDistuu1_y;
   double tmp1_ = mLocRegDistuu1_x * mLocRegDistuu1_x;
   double tmp2_ = tmp1_ * tmp0_;
   double tmp3_ = mCompCoord[3];
   double tmp4_ = 1 + tmp3_;
   double tmp5_ = mCompCoord[4];
   double tmp6_ = mCompCoord[5];
   double tmp7_ = mCompCoord[6];
   double tmp8_ = mCompCoord[7];
   double tmp9_ = mCompCoord[8];
   double tmp10_ = mLocRegDistuu2_y * mLocRegDistuu2_y;
   double tmp11_ = mCompCoord[9];
   double tmp12_ = mLocRegDistuu2_x * mLocRegDistuu2_x;
   double tmp13_ = mCompCoord[15];
   double tmp14_ = tmp12_ * tmp10_;
   double tmp15_ = mCompCoord[16];
   double tmp16_ = mLocRegDistuu3_y * mLocRegDistuu3_y;
   double tmp17_ = mLocRegDistuu3_x * mLocRegDistuu3_x;
   double tmp18_ = tmp17_ * tmp16_;
   double tmp19_ = mLocRegDistuu1_x * mLocRegDistuu1_y;
   double tmp20_ = tmp1_ * mLocRegDistuu1_y;
   double tmp21_ = mLocRegDistuu1_x * tmp0_;
   double tmp22_ = tmp1_ + tmp0_;
   double tmp23_ = mCompCoord[10];
   double tmp24_ = mLocRegDistuu2_x * mLocRegDistuu2_y;
   double tmp25_ = mCompCoord[11];
   double tmp26_ = mCompCoord[12];
   double tmp27_ = tmp12_ * mLocRegDistuu2_y;
   double tmp28_ = mCompCoord[13];
   double tmp29_ = mLocRegDistuu2_x * tmp10_;
   double tmp30_ = mCompCoord[14];
   double tmp31_ = tmp12_ + tmp10_;
   double tmp32_ = mLocRegDistuu3_x * mLocRegDistuu3_y;
   double tmp33_ = tmp17_ * mLocRegDistuu3_y;
   double tmp34_ = mLocRegDistuu3_x * tmp16_;
   double tmp35_ = tmp17_ + tmp16_;

  mVal[0] = ((tmp4_) * mLocRegDistuu1_x + tmp5_ * mLocRegDistuu1_y + tmp6_ * tmp19_ + tmp7_ * tmp0_ + tmp8_ * tmp20_ + tmp9_ * tmp21_ + tmp11_ * tmp2_ + tmp13_ * (mLocRegDistuu1_x / mLocDCBrown_State_0_0) * tmp2_ + tmp15_ * mLocRegDistuu1_x * (tmp22_) + (tmp4_) * mLocRegDistuu2_x + tmp5_ * mLocRegDistuu2_y + tmp6_ * tmp24_ + tmp7_ * tmp10_ + tmp8_ * tmp27_ + tmp9_ * tmp29_ + tmp11_ * tmp14_ + tmp13_ * (mLocRegDistuu2_x / mLocDCBrown_State_0_0) * tmp14_ + tmp15_ * mLocRegDistuu2_x * (tmp31_)) - ((tmp4_) * mLocRegDistuu3_x + tmp5_ * mLocRegDistuu3_y + tmp6_ * tmp32_ + tmp7_ * tmp16_ + tmp8_ * tmp33_ + tmp9_ * tmp34_ + tmp11_ * tmp18_ + tmp13_ * (mLocRegDistuu3_x / mLocDCBrown_State_0_0) * tmp18_ + tmp15_ * mLocRegDistuu3_x * (tmp35_)) * 2.000000;

  mVal[1] = (mLocRegDistuu1_y + tmp23_ * tmp19_ + tmp25_ * tmp1_ + tmp26_ * tmp20_ + tmp28_ * tmp21_ + tmp30_ * tmp2_ + tmp13_ * (mLocRegDistuu1_y / mLocDCBrown_State_0_0) * tmp2_ + tmp15_ * mLocRegDistuu1_y * (tmp22_) + mLocRegDistuu2_y + tmp23_ * tmp24_ + tmp25_ * tmp12_ + tmp26_ * tmp27_ + tmp28_ * tmp29_ + tmp30_ * tmp14_ + tmp13_ * (mLocRegDistuu2_y / mLocDCBrown_State_0_0) * tmp14_ + tmp15_ * mLocRegDistuu2_y * (tmp31_)) - (mLocRegDistuu3_y + tmp23_ * tmp32_ + tmp25_ * tmp17_ + tmp26_ * tmp33_ + tmp28_ * tmp34_ + tmp30_ * tmp18_ + tmp13_ * (mLocRegDistuu3_y / mLocDCBrown_State_0_0) * tmp18_ + tmp15_ * mLocRegDistuu3_y * (tmp35_)) * 2.000000;

}


void cREgDistDxx_DCBrown::ComputeValDeriv()
{
   double tmp0_ = mLocRegDistuu1_y * mLocRegDistuu1_y;
   double tmp1_ = mLocRegDistuu1_x * mLocRegDistuu1_x;
   double tmp2_ = tmp1_ * tmp0_;
   double tmp3_ = mCompCoord[3];
   double tmp4_ = 1 + tmp3_;
   double tmp5_ = mCompCoord[4];
   double tmp6_ = mCompCoord[5];
   double tmp7_ = mCompCoord[6];
   double tmp8_ = mCompCoord[7];
   double tmp9_ = mCompCoord[8];
   double tmp10_ = mLocRegDistuu2_y * mLocRegDistuu2_y;
   double tmp11_ = mCompCoord[9];
   double tmp12_ = mLocRegDistuu2_x * mLocRegDistuu2_x;
   double tmp13_ = mCompCoord[15];
   double tmp14_ = tmp12_ * tmp10_;
   double tmp15_ = mCompCoord[16];
   double tmp16_ = mLocRegDistuu3_y * mLocRegDistuu3_y;
   double tmp17_ = mLocRegDistuu3_x * mLocRegDistuu3_x;
   double tmp18_ = tmp17_ * tmp16_;
   double tmp19_ = mLocRegDistuu1_x * mLocRegDistuu1_y;
   double tmp20_ = mLocRegDistuu2_x * mLocRegDistuu2_y;
   double tmp21_ = mLocRegDistuu3_x * mLocRegDistuu3_y;
   double tmp22_ = tmp1_ * mLocRegDistuu1_y;
   double tmp23_ = tmp12_ * mLocRegDistuu2_y;
   double tmp24_ = tmp17_ * mLocRegDistuu3_y;
   double tmp25_ = mLocRegDistuu1_x * tmp0_;
   double tmp26_ = mLocRegDistuu2_x * tmp10_;
   double tmp27_ = mLocRegDistuu3_x * tmp16_;
   double tmp28_ = mLocRegDistuu1_x / mLocDCBrown_State_0_0;
   double tmp29_ = mLocRegDistuu2_x / mLocDCBrown_State_0_0;
   double tmp30_ = mLocRegDistuu3_x / mLocDCBrown_State_0_0;
   double tmp31_ = tmp1_ + tmp0_;
   double tmp32_ = tmp12_ + tmp10_;
   double tmp33_ = tmp17_ + tmp16_;
   double tmp34_ = mCompCoord[10];
   double tmp35_ = mCompCoord[11];
   double tmp36_ = mCompCoord[12];
   double tmp37_ = mCompCoord[13];
   double tmp38_ = mCompCoord[14];
   double tmp39_ = tmp19_ + tmp20_;
   double tmp40_ = tmp21_ * 2.000000;
   double tmp41_ = (tmp39_) - tmp40_;
   double tmp42_ = tmp22_ + tmp23_;
   double tmp43_ = tmp24_ * 2.000000;
   double tmp44_ = (tmp42_) - tmp43_;
   double tmp45_ = tmp25_ + tmp26_;
   double tmp46_ = tmp27_ * 2.000000;
   double tmp47_ = (tmp45_) - tmp46_;
   double tmp48_ = tmp2_ + tmp14_;
   double tmp49_ = tmp18_ * 2.000000;
   double tmp50_ = (tmp48_) - tmp49_;
   double tmp51_ = mLocRegDistuu1_y / mLocDCBrown_State_0_0;
   double tmp52_ = mLocRegDistuu2_y / mLocDCBrown_State_0_0;
   double tmp53_ = mLocRegDistuu3_y / mLocDCBrown_State_0_0;

  mVal[0] = ((tmp4_) * mLocRegDistuu1_x + tmp5_ * mLocRegDistuu1_y + tmp6_ * tmp19_ + tmp7_ * tmp0_ + tmp8_ * tmp22_ + tmp9_ * tmp25_ + tmp11_ * tmp2_ + tmp13_ * (tmp28_) * tmp2_ + tmp15_ * mLocRegDistuu1_x * (tmp31_) + (tmp4_) * mLocRegDistuu2_x + tmp5_ * mLocRegDistuu2_y + tmp6_ * tmp20_ + tmp7_ * tmp10_ + tmp8_ * tmp23_ + tmp9_ * tmp26_ + tmp11_ * tmp14_ + tmp13_ * (tmp29_) * tmp14_ + tmp15_ * mLocRegDistuu2_x * (tmp32_)) - ((tmp4_) * mLocRegDistuu3_x + tmp5_ * mLocRegDistuu3_y + tmp6_ * tmp21_ + tmp7_ * tmp16_ + tmp8_ * tmp24_ + tmp9_ * tmp27_ + tmp11_ * tmp18_ + tmp13_ * (tmp30_) * tmp18_ + tmp15_ * mLocRegDistuu3_x * (tmp33_)) * 2.000000;

  mCompDer[0][0] = 0;
  mCompDer[0][1] = 0;
  mCompDer[0][2] = 0;
  mCompDer[0][3] = (mLocRegDistuu1_x + mLocRegDistuu2_x) - mLocRegDistuu3_x * 2.000000;
  mCompDer[0][4] = (mLocRegDistuu1_y + mLocRegDistuu2_y) - mLocRegDistuu3_y * 2.000000;
  mCompDer[0][5] = tmp41_;
  mCompDer[0][6] = (tmp0_ + tmp10_) - tmp16_ * 2.000000;
  mCompDer[0][7] = tmp44_;
  mCompDer[0][8] = tmp47_;
  mCompDer[0][9] = tmp50_;
  mCompDer[0][10] = 0;
  mCompDer[0][11] = 0;
  mCompDer[0][12] = 0;
  mCompDer[0][13] = 0;
  mCompDer[0][14] = 0;
  mCompDer[0][15] = ((tmp28_) * tmp2_ + (tmp29_) * tmp14_) - (tmp30_) * tmp18_ * 2.000000;
  mCompDer[0][16] = (mLocRegDistuu1_x * (tmp31_) + mLocRegDistuu2_x * (tmp32_)) - mLocRegDistuu3_x * (tmp33_) * 2.000000;
  mVal[1] = (mLocRegDistuu1_y + tmp34_ * tmp19_ + tmp35_ * tmp1_ + tmp36_ * tmp22_ + tmp37_ * tmp25_ + tmp38_ * tmp2_ + tmp13_ * (tmp51_) * tmp2_ + tmp15_ * mLocRegDistuu1_y * (tmp31_) + mLocRegDistuu2_y + tmp34_ * tmp20_ + tmp35_ * tmp12_ + tmp36_ * tmp23_ + tmp37_ * tmp26_ + tmp38_ * tmp14_ + tmp13_ * (tmp52_) * tmp14_ + tmp15_ * mLocRegDistuu2_y * (tmp32_)) - (mLocRegDistuu3_y + tmp34_ * tmp21_ + tmp35_ * tmp17_ + tmp36_ * tmp24_ + tmp37_ * tmp27_ + tmp38_ * tmp18_ + tmp13_ * (tmp53_) * tmp18_ + tmp15_ * mLocRegDistuu3_y * (tmp33_)) * 2.000000;

  mCompDer[1][0] = 0;
  mCompDer[1][1] = 0;
  mCompDer[1][2] = 0;
  mCompDer[1][3] = 0;
  mCompDer[1][4] = 0;
  mCompDer[1][5] = 0;
  mCompDer[1][6] = 0;
  mCompDer[1][7] = 0;
  mCompDer[1][8] = 0;
  mCompDer[1][9] = 0;
  mCompDer[1][10] = tmp41_;
  mCompDer[1][11] = (tmp1_ + tmp12_) - tmp17_ * 2.000000;
  mCompDer[1][12] = tmp44_;
  mCompDer[1][13] = tmp47_;
  mCompDer[1][14] = tmp50_;
  mCompDer[1][15] = ((tmp51_) * tmp2_ + (tmp52_) * tmp14_) - (tmp53_) * tmp18_ * 2.000000;
  mCompDer[1][16] = (mLocRegDistuu1_y * (tmp31_) + mLocRegDistuu2_y * (tmp32_)) - mLocRegDistuu3_y * (tmp33_) * 2.000000;
}


void cREgDistDxx_DCBrown::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cREgDistDxx_DCBrown Has no Der Sec");
}

void cREgDistDxx_DCBrown::SetDCBrown_State_0_0(double aVal){ mLocDCBrown_State_0_0 = aVal;}
void cREgDistDxx_DCBrown::SetRegDistuu1_x(double aVal){ mLocRegDistuu1_x = aVal;}
void cREgDistDxx_DCBrown::SetRegDistuu1_y(double aVal){ mLocRegDistuu1_y = aVal;}
void cREgDistDxx_DCBrown::SetRegDistuu2_x(double aVal){ mLocRegDistuu2_x = aVal;}
void cREgDistDxx_DCBrown::SetRegDistuu2_y(double aVal){ mLocRegDistuu2_y = aVal;}
void cREgDistDxx_DCBrown::SetRegDistuu3_x(double aVal){ mLocRegDistuu3_x = aVal;}
void cREgDistDxx_DCBrown::SetRegDistuu3_y(double aVal){ mLocRegDistuu3_y = aVal;}



double * cREgDistDxx_DCBrown::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "DCBrown_State_0_0") return & mLocDCBrown_State_0_0;
   if (aName == "RegDistuu1_x") return & mLocRegDistuu1_x;
   if (aName == "RegDistuu1_y") return & mLocRegDistuu1_y;
   if (aName == "RegDistuu2_x") return & mLocRegDistuu2_x;
   if (aName == "RegDistuu2_y") return & mLocRegDistuu2_y;
   if (aName == "RegDistuu3_x") return & mLocRegDistuu3_x;
   if (aName == "RegDistuu3_y") return & mLocRegDistuu3_y;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cREgDistDxx_DCBrown::mTheAuto("cREgDistDxx_DCBrown",cREgDistDxx_DCBrown::Alloc);


cElCompiledFonc *  cREgDistDxx_DCBrown::Alloc()
{  return new cREgDistDxx_DCBrown();
}


