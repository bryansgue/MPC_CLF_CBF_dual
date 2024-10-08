/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) Drone_ode_complete_2_cost_ext_cost_fun_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_c0 CASADI_PREFIX(c0)
#define casadi_c1 CASADI_PREFIX(c1)
#define casadi_clear CASADI_PREFIX(clear)
#define casadi_copy CASADI_PREFIX(copy)
#define casadi_dot CASADI_PREFIX(dot)
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_s3 CASADI_PREFIX(s3)
#define casadi_s4 CASADI_PREFIX(s4)
#define casadi_s5 CASADI_PREFIX(s5)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

void casadi_clear(casadi_real* x, casadi_int n) {
  casadi_int i;
  if (x) {
    for (i=0; i<n; ++i) *x++ = 0;
  }
}

void casadi_copy(const casadi_real* x, casadi_int n, casadi_real* y) {
  casadi_int i;
  if (y) {
    if (x) {
      for (i=0; i<n; ++i) *y++ = *x++;
    } else {
      for (i=0; i<n; ++i) *y++ = 0.;
    }
  }
}

casadi_real casadi_dot(casadi_int n, const casadi_real* x, const casadi_real* y) {
  casadi_int i;
  casadi_real r = 0;
  for (i=0; i<n; ++i) r += *x++ * *y++;
  return r;
}

static const casadi_int casadi_s0[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
static const casadi_int casadi_s1[17] = {13, 1, 0, 13, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
static const casadi_int casadi_s2[8] = {4, 1, 0, 4, 0, 1, 2, 3};
static const casadi_int casadi_s3[3] = {0, 0, 0};
static const casadi_int casadi_s4[24] = {20, 1, 0, 20, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
static const casadi_int casadi_s5[5] = {1, 1, 0, 1, 0};

static const casadi_real casadi_c0[9] = {1., 0., 0., 0., 1., 0., 0., 0., 1.};
static const casadi_real casadi_c1[16] = {2.0000000000000000e-03, 0., 0., 0., 0., 200., 0., 0., 0., 0., 200., 0., 0., 0., 0., 200.};

/* Drone_ode_complete_2_cost_ext_cost_fun:(i0[13],i1[4],i2[],i3[20])->(o0) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_int i, j, k;
  casadi_real *rr, *ss, *tt;
  const casadi_int *cii;
  const casadi_real *cs;
  casadi_real w0, *w1=w+4, *w2=w+7, *w3=w+10, w4, w5, w6, w7, w8, w9, w10, w11, w12, w13, w14, w15, w16, w17, w18, w19, w20, w21, w22, w23, w24, *w25=w+40, *w26=w+60, *w27=w+63, *w28=w+66, *w29=w+75, *w30=w+88, *w31=w+91, *w32=w+95, *w33=w+99, *w34=w+103;
  /* #0: @0 = 0 */
  w0 = 0.;
  /* #1: @1 = zeros(1x3) */
  casadi_clear(w1, 3);
  /* #2: @2 = zeros(3x1) */
  casadi_clear(w2, 3);
  /* #3: @3 = 
  [[1, 0, 0], 
   [0, 1, 0], 
   [0, 0, 1]] */
  casadi_copy(casadi_c0, 9, w3);
  /* #4: @4 = 0 */
  w4 = 0.;
  /* #5: @5 = input[3][0] */
  w5 = arg[3] ? arg[3][0] : 0;
  /* #6: @6 = input[3][1] */
  w6 = arg[3] ? arg[3][1] : 0;
  /* #7: @7 = input[3][2] */
  w7 = arg[3] ? arg[3][2] : 0;
  /* #8: @8 = input[3][3] */
  w8 = arg[3] ? arg[3][3] : 0;
  /* #9: @9 = input[3][4] */
  w9 = arg[3] ? arg[3][4] : 0;
  /* #10: @10 = input[3][5] */
  w10 = arg[3] ? arg[3][5] : 0;
  /* #11: @11 = input[3][6] */
  w11 = arg[3] ? arg[3][6] : 0;
  /* #12: @12 = input[3][7] */
  w12 = arg[3] ? arg[3][7] : 0;
  /* #13: @13 = input[3][8] */
  w13 = arg[3] ? arg[3][8] : 0;
  /* #14: @14 = input[3][9] */
  w14 = arg[3] ? arg[3][9] : 0;
  /* #15: @15 = input[3][10] */
  w15 = arg[3] ? arg[3][10] : 0;
  /* #16: @16 = input[3][11] */
  w16 = arg[3] ? arg[3][11] : 0;
  /* #17: @17 = input[3][12] */
  w17 = arg[3] ? arg[3][12] : 0;
  /* #18: @18 = input[3][13] */
  w18 = arg[3] ? arg[3][13] : 0;
  /* #19: @19 = input[3][14] */
  w19 = arg[3] ? arg[3][14] : 0;
  /* #20: @20 = input[3][15] */
  w20 = arg[3] ? arg[3][15] : 0;
  /* #21: @21 = input[3][16] */
  w21 = arg[3] ? arg[3][16] : 0;
  /* #22: @22 = input[3][17] */
  w22 = arg[3] ? arg[3][17] : 0;
  /* #23: @23 = input[3][18] */
  w23 = arg[3] ? arg[3][18] : 0;
  /* #24: @24 = input[3][19] */
  w24 = arg[3] ? arg[3][19] : 0;
  /* #25: @25 = vertcat(@5, @6, @7, @8, @9, @10, @11, @12, @13, @14, @15, @16, @17, @18, @19, @20, @21, @22, @23, @24) */
  rr=w25;
  *rr++ = w5;
  *rr++ = w6;
  *rr++ = w7;
  *rr++ = w8;
  *rr++ = w9;
  *rr++ = w10;
  *rr++ = w11;
  *rr++ = w12;
  *rr++ = w13;
  *rr++ = w14;
  *rr++ = w15;
  *rr++ = w16;
  *rr++ = w17;
  *rr++ = w18;
  *rr++ = w19;
  *rr++ = w20;
  *rr++ = w21;
  *rr++ = w22;
  *rr++ = w23;
  *rr++ = w24;
  /* #26: @26 = @25[3:6] */
  for (rr=w26, ss=w25+3; ss!=w25+6; ss+=1) *rr++ = *ss;
  /* #27: @27 = @26' */
  casadi_copy(w26, 3, w27);
  /* #28: @4 = mac(@27,@26,@4) */
  for (i=0, rr=(&w4); i<1; ++i) for (j=0; j<1; ++j, ++rr) for (k=0, ss=w27+j, tt=w26+i*3; k<3; ++k) *rr += ss[k*1]**tt++;
  /* #29: @28 = @4[0, 0, 0, 0, 0, 0, 0, 0, 0] */
  for (cii=casadi_s0, rr=w28, ss=(&w4); cii!=casadi_s0+9; ++cii) *rr++ = *cii>=0 ? ss[*cii] : 0;
  /* #30: @3 = (@3-@28) */
  for (i=0, rr=w3, cs=w28; i<9; ++i) (*rr++) -= (*cs++);
  /* #31: @27 = @25[:3] */
  for (rr=w27, ss=w25+0; ss!=w25+3; ss+=1) *rr++ = *ss;
  /* #32: @4 = input[0][0] */
  w4 = arg[0] ? arg[0][0] : 0;
  /* #33: @5 = input[0][1] */
  w5 = arg[0] ? arg[0][1] : 0;
  /* #34: @6 = input[0][2] */
  w6 = arg[0] ? arg[0][2] : 0;
  /* #35: @7 = input[0][3] */
  w7 = arg[0] ? arg[0][3] : 0;
  /* #36: @8 = input[0][4] */
  w8 = arg[0] ? arg[0][4] : 0;
  /* #37: @9 = input[0][5] */
  w9 = arg[0] ? arg[0][5] : 0;
  /* #38: @10 = input[0][6] */
  w10 = arg[0] ? arg[0][6] : 0;
  /* #39: @11 = input[0][7] */
  w11 = arg[0] ? arg[0][7] : 0;
  /* #40: @12 = input[0][8] */
  w12 = arg[0] ? arg[0][8] : 0;
  /* #41: @13 = input[0][9] */
  w13 = arg[0] ? arg[0][9] : 0;
  /* #42: @14 = input[0][10] */
  w14 = arg[0] ? arg[0][10] : 0;
  /* #43: @15 = input[0][11] */
  w15 = arg[0] ? arg[0][11] : 0;
  /* #44: @16 = input[0][12] */
  w16 = arg[0] ? arg[0][12] : 0;
  /* #45: @29 = vertcat(@4, @5, @6, @7, @8, @9, @10, @11, @12, @13, @14, @15, @16) */
  rr=w29;
  *rr++ = w4;
  *rr++ = w5;
  *rr++ = w6;
  *rr++ = w7;
  *rr++ = w8;
  *rr++ = w9;
  *rr++ = w10;
  *rr++ = w11;
  *rr++ = w12;
  *rr++ = w13;
  *rr++ = w14;
  *rr++ = w15;
  *rr++ = w16;
  /* #46: @30 = @29[:3] */
  for (rr=w30, ss=w29+0; ss!=w29+3; ss+=1) *rr++ = *ss;
  /* #47: @27 = (@27-@30) */
  for (i=0, rr=w27, cs=w30; i<3; ++i) (*rr++) -= (*cs++);
  /* #48: @2 = mac(@3,@27,@2) */
  for (i=0, rr=w2; i<1; ++i) for (j=0; j<3; ++j, ++rr) for (k=0, ss=w3+j, tt=w27+i*3; k<3; ++k) *rr += ss[k*3]**tt++;
  /* #49: @30 = @2' */
  casadi_copy(w2, 3, w30);
  /* #50: @3 = 
  [[1, 0, 0], 
   [0, 1, 0], 
   [0, 0, 1]] */
  casadi_copy(casadi_c0, 9, w3);
  /* #51: @1 = mac(@30,@3,@1) */
  for (i=0, rr=w1; i<3; ++i) for (j=0; j<1; ++j, ++rr) for (k=0, ss=w30+j, tt=w3+i*3; k<3; ++k) *rr += ss[k*1]**tt++;
  /* #52: @0 = mac(@1,@2,@0) */
  for (i=0, rr=(&w0); i<1; ++i) for (j=0; j<1; ++j, ++rr) for (k=0, ss=w1+j, tt=w2+i*3; k<3; ++k) *rr += ss[k*1]**tt++;
  /* #53: @4 = 0 */
  w4 = 0.;
  /* #54: @1 = zeros(1x3) */
  casadi_clear(w1, 3);
  /* #55: @5 = dot(@26, @27) */
  w5 = casadi_dot(3, w26, w27);
  /* #56: @27 = (@5*@26) */
  for (i=0, rr=w27, cs=w26; i<3; ++i) (*rr++)  = (w5*(*cs++));
  /* #57: @2 = @27' */
  casadi_copy(w27, 3, w2);
  /* #58: @3 = 
  [[1, 0, 0], 
   [0, 1, 0], 
   [0, 0, 1]] */
  casadi_copy(casadi_c0, 9, w3);
  /* #59: @1 = mac(@2,@3,@1) */
  for (i=0, rr=w1; i<3; ++i) for (j=0; j<1; ++j, ++rr) for (k=0, ss=w2+j, tt=w3+i*3; k<3; ++k) *rr += ss[k*1]**tt++;
  /* #60: @4 = mac(@1,@27,@4) */
  for (i=0, rr=(&w4); i<1; ++i) for (j=0; j<1; ++j, ++rr) for (k=0, ss=w1+j, tt=w27+i*3; k<3; ++k) *rr += ss[k*1]**tt++;
  /* #61: @0 = (@0+@4) */
  w0 += w4;
  /* #62: @4 = 0 */
  w4 = 0.;
  /* #63: @1 = zeros(1x3) */
  casadi_clear(w1, 3);
  /* #64: @11 = (-@11) */
  w11 = (- w11 );
  /* #65: @12 = (-@12) */
  w12 = (- w12 );
  /* #66: @13 = (-@13) */
  w13 = (- w13 );
  /* #67: @31 = vertcat(@10, @11, @12, @13) */
  rr=w31;
  *rr++ = w10;
  *rr++ = w11;
  *rr++ = w12;
  *rr++ = w13;
  /* #68: @32 = @29[6:10] */
  for (rr=w32, ss=w29+6; ss!=w29+10; ss+=1) *rr++ = *ss;
  /* #69: @10 = ||@32||_F */
  w10 = sqrt(casadi_dot(4, w32, w32));
  /* #70: @31 = (@31/@10) */
  for (i=0, rr=w31; i<4; ++i) (*rr++) /= w10;
  /* #71: {@10, @11, @12, @13} = vertsplit(@31) */
  w10 = w31[0];
  w11 = w31[1];
  w12 = w31[2];
  w13 = w31[3];
  /* #72: @31 = @25[6:10] */
  for (rr=w31, ss=w25+6; ss!=w25+10; ss+=1) *rr++ = *ss;
  /* #73: {@5, @6, @7, @8} = vertsplit(@31) */
  w5 = w31[0];
  w6 = w31[1];
  w7 = w31[2];
  w8 = w31[3];
  /* #74: @9 = (@10*@5) */
  w9  = (w10*w5);
  /* #75: @14 = (@11*@6) */
  w14  = (w11*w6);
  /* #76: @9 = (@9-@14) */
  w9 -= w14;
  /* #77: @14 = (@12*@7) */
  w14  = (w12*w7);
  /* #78: @9 = (@9-@14) */
  w9 -= w14;
  /* #79: @14 = (@13*@8) */
  w14  = (w13*w8);
  /* #80: @9 = (@9-@14) */
  w9 -= w14;
  /* #81: @14 = 0 */
  w14 = 0.;
  /* #82: @14 = (@9<@14) */
  w14  = (w9<w14);
  /* #83: @15 = (@10*@6) */
  w15  = (w10*w6);
  /* #84: @16 = (@11*@5) */
  w16  = (w11*w5);
  /* #85: @15 = (@15+@16) */
  w15 += w16;
  /* #86: @16 = (@12*@8) */
  w16  = (w12*w8);
  /* #87: @15 = (@15+@16) */
  w15 += w16;
  /* #88: @16 = (@13*@7) */
  w16  = (w13*w7);
  /* #89: @15 = (@15-@16) */
  w15 -= w16;
  /* #90: @16 = (@10*@7) */
  w16  = (w10*w7);
  /* #91: @17 = (@11*@8) */
  w17  = (w11*w8);
  /* #92: @16 = (@16-@17) */
  w16 -= w17;
  /* #93: @17 = (@12*@5) */
  w17  = (w12*w5);
  /* #94: @16 = (@16+@17) */
  w16 += w17;
  /* #95: @17 = (@13*@6) */
  w17  = (w13*w6);
  /* #96: @16 = (@16+@17) */
  w16 += w17;
  /* #97: @10 = (@10*@8) */
  w10 *= w8;
  /* #98: @11 = (@11*@7) */
  w11 *= w7;
  /* #99: @10 = (@10+@11) */
  w10 += w11;
  /* #100: @12 = (@12*@6) */
  w12 *= w6;
  /* #101: @10 = (@10-@12) */
  w10 -= w12;
  /* #102: @13 = (@13*@5) */
  w13 *= w5;
  /* #103: @10 = (@10+@13) */
  w10 += w13;
  /* #104: @31 = vertcat(@9, @15, @16, @10) */
  rr=w31;
  *rr++ = w9;
  *rr++ = w15;
  *rr++ = w16;
  *rr++ = w10;
  /* #105: @32 = (-@31) */
  for (i=0, rr=w32, cs=w31; i<4; ++i) *rr++ = (- *cs++ );
  /* #106: @32 = (@14?@32:0) */
  for (i=0, rr=w32, cs=w32; i<4; ++i) (*rr++)  = (w14?(*cs++):0);
  /* #107: @14 = (!@14) */
  w14 = (! w14 );
  /* #108: @31 = (@14?@31:0) */
  for (i=0, rr=w31, cs=w31; i<4; ++i) (*rr++)  = (w14?(*cs++):0);
  /* #109: @32 = (@32+@31) */
  for (i=0, rr=w32, cs=w31; i<4; ++i) (*rr++) += (*cs++);
  /* #110: @27 = @32[1:4] */
  for (rr=w27, ss=w32+1; ss!=w32+4; ss+=1) *rr++ = *ss;
  /* #111: @2 = (2.*@27) */
  for (i=0, rr=w2, cs=w27; i<3; ++i) *rr++ = (2.* *cs++ );
  /* #112: @14 = ||@27||_F */
  w14 = sqrt(casadi_dot(3, w27, w27));
  /* #113: @9 = @32[0] */
  for (rr=(&w9), ss=w32+0; ss!=w32+1; ss+=1) *rr++ = *ss;
  /* #114: @9 = atan2(@14,@9) */
  w9  = atan2(w14,w9);
  /* #115: @2 = (@2*@9) */
  for (i=0, rr=w2; i<3; ++i) (*rr++) *= w9;
  /* #116: @2 = (@2/@14) */
  for (i=0, rr=w2; i<3; ++i) (*rr++) /= w14;
  /* #117: @27 = @2' */
  casadi_copy(w2, 3, w27);
  /* #118: @3 = 
  [[1, 0, 0], 
   [0, 1, 0], 
   [0, 0, 1]] */
  casadi_copy(casadi_c0, 9, w3);
  /* #119: @1 = mac(@27,@3,@1) */
  for (i=0, rr=w1; i<3; ++i) for (j=0; j<1; ++j, ++rr) for (k=0, ss=w27+j, tt=w3+i*3; k<3; ++k) *rr += ss[k*1]**tt++;
  /* #120: @4 = mac(@1,@2,@4) */
  for (i=0, rr=(&w4); i<1; ++i) for (j=0; j<1; ++j, ++rr) for (k=0, ss=w1+j, tt=w2+i*3; k<3; ++k) *rr += ss[k*1]**tt++;
  /* #121: @0 = (@0+@4) */
  w0 += w4;
  /* #122: @4 = 0 */
  w4 = 0.;
  /* #123: @32 = zeros(1x4) */
  casadi_clear(w32, 4);
  /* #124: @14 = input[1][0] */
  w14 = arg[1] ? arg[1][0] : 0;
  /* #125: @9 = input[1][1] */
  w9 = arg[1] ? arg[1][1] : 0;
  /* #126: @15 = input[1][2] */
  w15 = arg[1] ? arg[1][2] : 0;
  /* #127: @16 = input[1][3] */
  w16 = arg[1] ? arg[1][3] : 0;
  /* #128: @31 = vertcat(@14, @9, @15, @16) */
  rr=w31;
  *rr++ = w14;
  *rr++ = w9;
  *rr++ = w15;
  *rr++ = w16;
  /* #129: @33 = @31' */
  casadi_copy(w31, 4, w33);
  /* #130: @34 = 
  [[0.002, 0, 0, 0], 
   [0, 200, 0, 0], 
   [0, 0, 200, 0], 
   [0, 0, 0, 200]] */
  casadi_copy(casadi_c1, 16, w34);
  /* #131: @32 = mac(@33,@34,@32) */
  for (i=0, rr=w32; i<4; ++i) for (j=0; j<1; ++j, ++rr) for (k=0, ss=w33+j, tt=w34+i*4; k<4; ++k) *rr += ss[k*1]**tt++;
  /* #132: @4 = mac(@32,@31,@4) */
  for (i=0, rr=(&w4); i<1; ++i) for (j=0; j<1; ++j, ++rr) for (k=0, ss=w32+j, tt=w31+i*4; k<4; ++k) *rr += ss[k*1]**tt++;
  /* #133: @0 = (@0+@4) */
  w0 += w4;
  /* #134: @4 = 0.05 */
  w4 = 5.0000000000000003e-02;
  /* #135: @1 = @29[3:6] */
  for (rr=w1, ss=w29+3; ss!=w29+6; ss+=1) *rr++ = *ss;
  /* #136: @14 = dot(@26, @1) */
  w14 = casadi_dot(3, w26, w1);
  /* #137: @4 = (@4*@14) */
  w4 *= w14;
  /* #138: @0 = (@0-@4) */
  w0 -= w4;
  /* #139: output[0][0] = @0 */
  if (res[0]) res[0][0] = w0;
  return 0;
}

CASADI_SYMBOL_EXPORT int Drone_ode_complete_2_cost_ext_cost_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int Drone_ode_complete_2_cost_ext_cost_fun_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int Drone_ode_complete_2_cost_ext_cost_fun_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void Drone_ode_complete_2_cost_ext_cost_fun_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int Drone_ode_complete_2_cost_ext_cost_fun_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void Drone_ode_complete_2_cost_ext_cost_fun_release(int mem) {
}

CASADI_SYMBOL_EXPORT void Drone_ode_complete_2_cost_ext_cost_fun_incref(void) {
}

CASADI_SYMBOL_EXPORT void Drone_ode_complete_2_cost_ext_cost_fun_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int Drone_ode_complete_2_cost_ext_cost_fun_n_in(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_int Drone_ode_complete_2_cost_ext_cost_fun_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real Drone_ode_complete_2_cost_ext_cost_fun_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* Drone_ode_complete_2_cost_ext_cost_fun_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* Drone_ode_complete_2_cost_ext_cost_fun_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* Drone_ode_complete_2_cost_ext_cost_fun_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    case 1: return casadi_s2;
    case 2: return casadi_s3;
    case 3: return casadi_s4;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* Drone_ode_complete_2_cost_ext_cost_fun_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s5;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int Drone_ode_complete_2_cost_ext_cost_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 24;
  if (sz_res) *sz_res = 5;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 119;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
