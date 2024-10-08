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
  #define CASADI_PREFIX(ID) Drone_ode_complete_2_cost_ext_cost_0_fun_jac_ ## ID
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
#define casadi_s6 CASADI_PREFIX(s6)
#define casadi_sq CASADI_PREFIX(sq)

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

casadi_real casadi_sq(casadi_real x) { return x*x;}

static const casadi_int casadi_s0[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
static const casadi_int casadi_s1[17] = {13, 1, 0, 13, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
static const casadi_int casadi_s2[8] = {4, 1, 0, 4, 0, 1, 2, 3};
static const casadi_int casadi_s3[3] = {0, 0, 0};
static const casadi_int casadi_s4[24] = {20, 1, 0, 20, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
static const casadi_int casadi_s5[5] = {1, 1, 0, 1, 0};
static const casadi_int casadi_s6[21] = {17, 1, 0, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

static const casadi_real casadi_c0[9] = {1., 0., 0., 0., 1., 0., 0., 0., 1.};
static const casadi_real casadi_c1[16] = {2.0000000000000000e-03, 0., 0., 0., 0., 200., 0., 0., 0., 0., 200., 0., 0., 0., 0., 200.};

/* Drone_ode_complete_2_cost_ext_cost_0_fun_jac:(i0[13],i1[4],i2[],i3[20])->(o0,o1[17]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_int i, j, k;
  casadi_real *rr, *ss, *tt;
  const casadi_int *cii;
  const casadi_real *cr, *cs;
  casadi_real w0, *w1=w+4, *w2=w+7, *w3=w+10, w4, w5, w6, w7, w8, w9, w10, w11, w12, w13, w14, w15, w16, w17, w18, w19, w20, w21, w22, w23, w24, *w25=w+40, *w26=w+60, *w27=w+63, *w28=w+66, *w29=w+75, *w30=w+88, *w31=w+91, *w32=w+94, *w33=w+103, *w34=w+107, *w35=w+111, *w36=w+115, *w37=w+119, *w38=w+122, *w39=w+125, *w40=w+128, *w41=w+131, *w42=w+140, *w43=w+144, *w44=w+160, *w45=w+176, *w46=w+179;
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
  /* #50: @28 = 
  [[1, 0, 0], 
   [0, 1, 0], 
   [0, 0, 1]] */
  casadi_copy(casadi_c0, 9, w28);
  /* #51: @1 = mac(@30,@28,@1) */
  for (i=0, rr=w1; i<3; ++i) for (j=0; j<1; ++j, ++rr) for (k=0, ss=w30+j, tt=w28+i*3; k<3; ++k) *rr += ss[k*1]**tt++;
  /* #52: @0 = mac(@1,@2,@0) */
  for (i=0, rr=(&w0); i<1; ++i) for (j=0; j<1; ++j, ++rr) for (k=0, ss=w1+j, tt=w2+i*3; k<3; ++k) *rr += ss[k*1]**tt++;
  /* #53: @4 = 0 */
  w4 = 0.;
  /* #54: @30 = zeros(1x3) */
  casadi_clear(w30, 3);
  /* #55: @5 = dot(@26, @27) */
  w5 = casadi_dot(3, w26, w27);
  /* #56: @27 = (@5*@26) */
  for (i=0, rr=w27, cs=w26; i<3; ++i) (*rr++)  = (w5*(*cs++));
  /* #57: @31 = @27' */
  casadi_copy(w27, 3, w31);
  /* #58: @32 = 
  [[1, 0, 0], 
   [0, 1, 0], 
   [0, 0, 1]] */
  casadi_copy(casadi_c0, 9, w32);
  /* #59: @30 = mac(@31,@32,@30) */
  for (i=0, rr=w30; i<3; ++i) for (j=0; j<1; ++j, ++rr) for (k=0, ss=w31+j, tt=w32+i*3; k<3; ++k) *rr += ss[k*1]**tt++;
  /* #60: @4 = mac(@30,@27,@4) */
  for (i=0, rr=(&w4); i<1; ++i) for (j=0; j<1; ++j, ++rr) for (k=0, ss=w30+j, tt=w27+i*3; k<3; ++k) *rr += ss[k*1]**tt++;
  /* #61: @0 = (@0+@4) */
  w0 += w4;
  /* #62: @4 = 0 */
  w4 = 0.;
  /* #63: @31 = zeros(1x3) */
  casadi_clear(w31, 3);
  /* #64: @11 = (-@11) */
  w11 = (- w11 );
  /* #65: @12 = (-@12) */
  w12 = (- w12 );
  /* #66: @13 = (-@13) */
  w13 = (- w13 );
  /* #67: @33 = vertcat(@10, @11, @12, @13) */
  rr=w33;
  *rr++ = w10;
  *rr++ = w11;
  *rr++ = w12;
  *rr++ = w13;
  /* #68: @34 = @29[6:10] */
  for (rr=w34, ss=w29+6; ss!=w29+10; ss+=1) *rr++ = *ss;
  /* #69: @10 = ||@34||_F */
  w10 = sqrt(casadi_dot(4, w34, w34));
  /* #70: @33 = (@33/@10) */
  for (i=0, rr=w33; i<4; ++i) (*rr++) /= w10;
  /* #71: {@11, @12, @13, @5} = vertsplit(@33) */
  w11 = w33[0];
  w12 = w33[1];
  w13 = w33[2];
  w5 = w33[3];
  /* #72: @35 = @25[6:10] */
  for (rr=w35, ss=w25+6; ss!=w25+10; ss+=1) *rr++ = *ss;
  /* #73: {@6, @7, @8, @9} = vertsplit(@35) */
  w6 = w35[0];
  w7 = w35[1];
  w8 = w35[2];
  w9 = w35[3];
  /* #74: @14 = (@11*@6) */
  w14  = (w11*w6);
  /* #75: @15 = (@12*@7) */
  w15  = (w12*w7);
  /* #76: @14 = (@14-@15) */
  w14 -= w15;
  /* #77: @15 = (@13*@8) */
  w15  = (w13*w8);
  /* #78: @14 = (@14-@15) */
  w14 -= w15;
  /* #79: @15 = (@5*@9) */
  w15  = (w5*w9);
  /* #80: @14 = (@14-@15) */
  w14 -= w15;
  /* #81: @15 = 0 */
  w15 = 0.;
  /* #82: @15 = (@14<@15) */
  w15  = (w14<w15);
  /* #83: @16 = (@11*@7) */
  w16  = (w11*w7);
  /* #84: @17 = (@12*@6) */
  w17  = (w12*w6);
  /* #85: @16 = (@16+@17) */
  w16 += w17;
  /* #86: @17 = (@13*@9) */
  w17  = (w13*w9);
  /* #87: @16 = (@16+@17) */
  w16 += w17;
  /* #88: @17 = (@5*@8) */
  w17  = (w5*w8);
  /* #89: @16 = (@16-@17) */
  w16 -= w17;
  /* #90: @17 = (@11*@8) */
  w17  = (w11*w8);
  /* #91: @18 = (@12*@9) */
  w18  = (w12*w9);
  /* #92: @17 = (@17-@18) */
  w17 -= w18;
  /* #93: @18 = (@13*@6) */
  w18  = (w13*w6);
  /* #94: @17 = (@17+@18) */
  w17 += w18;
  /* #95: @18 = (@5*@7) */
  w18  = (w5*w7);
  /* #96: @17 = (@17+@18) */
  w17 += w18;
  /* #97: @11 = (@11*@9) */
  w11 *= w9;
  /* #98: @12 = (@12*@8) */
  w12 *= w8;
  /* #99: @11 = (@11+@12) */
  w11 += w12;
  /* #100: @13 = (@13*@7) */
  w13 *= w7;
  /* #101: @11 = (@11-@13) */
  w11 -= w13;
  /* #102: @5 = (@5*@6) */
  w5 *= w6;
  /* #103: @11 = (@11+@5) */
  w11 += w5;
  /* #104: @35 = vertcat(@14, @16, @17, @11) */
  rr=w35;
  *rr++ = w14;
  *rr++ = w16;
  *rr++ = w17;
  *rr++ = w11;
  /* #105: @36 = (-@35) */
  for (i=0, rr=w36, cs=w35; i<4; ++i) *rr++ = (- *cs++ );
  /* #106: @36 = (@15?@36:0) */
  for (i=0, rr=w36, cs=w36; i<4; ++i) (*rr++)  = (w15?(*cs++):0);
  /* #107: @14 = (!@15) */
  w14 = (! w15 );
  /* #108: @35 = (@14?@35:0) */
  for (i=0, rr=w35, cs=w35; i<4; ++i) (*rr++)  = (w14?(*cs++):0);
  /* #109: @36 = (@36+@35) */
  for (i=0, rr=w36, cs=w35; i<4; ++i) (*rr++) += (*cs++);
  /* #110: @37 = @36[1:4] */
  for (rr=w37, ss=w36+1; ss!=w36+4; ss+=1) *rr++ = *ss;
  /* #111: @38 = (2.*@37) */
  for (i=0, rr=w38, cs=w37; i<3; ++i) *rr++ = (2.* *cs++ );
  /* #112: @16 = ||@37||_F */
  w16 = sqrt(casadi_dot(3, w37, w37));
  /* #113: @17 = @36[0] */
  for (rr=(&w17), ss=w36+0; ss!=w36+1; ss+=1) *rr++ = *ss;
  /* #114: @11 = atan2(@16,@17) */
  w11  = atan2(w16,w17);
  /* #115: @39 = (@38*@11) */
  for (i=0, rr=w39, cr=w38; i<3; ++i) (*rr++)  = ((*cr++)*w11);
  /* #116: @39 = (@39/@16) */
  for (i=0, rr=w39; i<3; ++i) (*rr++) /= w16;
  /* #117: @40 = @39' */
  casadi_copy(w39, 3, w40);
  /* #118: @41 = 
  [[1, 0, 0], 
   [0, 1, 0], 
   [0, 0, 1]] */
  casadi_copy(casadi_c0, 9, w41);
  /* #119: @31 = mac(@40,@41,@31) */
  for (i=0, rr=w31; i<3; ++i) for (j=0; j<1; ++j, ++rr) for (k=0, ss=w40+j, tt=w41+i*3; k<3; ++k) *rr += ss[k*1]**tt++;
  /* #120: @4 = mac(@31,@39,@4) */
  for (i=0, rr=(&w4); i<1; ++i) for (j=0; j<1; ++j, ++rr) for (k=0, ss=w31+j, tt=w39+i*3; k<3; ++k) *rr += ss[k*1]**tt++;
  /* #121: @0 = (@0+@4) */
  w0 += w4;
  /* #122: @4 = 0 */
  w4 = 0.;
  /* #123: @36 = zeros(1x4) */
  casadi_clear(w36, 4);
  /* #124: @5 = input[1][0] */
  w5 = arg[1] ? arg[1][0] : 0;
  /* #125: @13 = input[1][1] */
  w13 = arg[1] ? arg[1][1] : 0;
  /* #126: @12 = input[1][2] */
  w12 = arg[1] ? arg[1][2] : 0;
  /* #127: @18 = input[1][3] */
  w18 = arg[1] ? arg[1][3] : 0;
  /* #128: @35 = vertcat(@5, @13, @12, @18) */
  rr=w35;
  *rr++ = w5;
  *rr++ = w13;
  *rr++ = w12;
  *rr++ = w18;
  /* #129: @42 = @35' */
  casadi_copy(w35, 4, w42);
  /* #130: @43 = 
  [[0.002, 0, 0, 0], 
   [0, 200, 0, 0], 
   [0, 0, 200, 0], 
   [0, 0, 0, 200]] */
  casadi_copy(casadi_c1, 16, w43);
  /* #131: @36 = mac(@42,@43,@36) */
  for (i=0, rr=w36; i<4; ++i) for (j=0; j<1; ++j, ++rr) for (k=0, ss=w42+j, tt=w43+i*4; k<4; ++k) *rr += ss[k*1]**tt++;
  /* #132: @4 = mac(@36,@35,@4) */
  for (i=0, rr=(&w4); i<1; ++i) for (j=0; j<1; ++j, ++rr) for (k=0, ss=w36+j, tt=w35+i*4; k<4; ++k) *rr += ss[k*1]**tt++;
  /* #133: @0 = (@0+@4) */
  w0 += w4;
  /* #134: @4 = 0.05 */
  w4 = 5.0000000000000003e-02;
  /* #135: @40 = @29[3:6] */
  for (rr=w40, ss=w29+3; ss!=w29+6; ss+=1) *rr++ = *ss;
  /* #136: @5 = dot(@26, @40) */
  w5 = casadi_dot(3, w26, w40);
  /* #137: @4 = (@4*@5) */
  w4 *= w5;
  /* #138: @0 = (@0-@4) */
  w0 -= w4;
  /* #139: output[0][0] = @0 */
  if (res[0]) res[0][0] = w0;
  /* #140: @36 = @36' */
  /* #141: @42 = zeros(1x4) */
  casadi_clear(w42, 4);
  /* #142: @35 = @35' */
  /* #143: @44 = @43' */
  for (i=0, rr=w44, cs=w43; i<4; ++i) for (j=0; j<4; ++j) rr[i+j*4] = *cs++;
  /* #144: @42 = mac(@35,@44,@42) */
  for (i=0, rr=w42; i<4; ++i) for (j=0; j<1; ++j, ++rr) for (k=0, ss=w35+j, tt=w44+i*4; k<4; ++k) *rr += ss[k*1]**tt++;
  /* #145: @42 = @42' */
  /* #146: @36 = (@36+@42) */
  for (i=0, rr=w36, cs=w42; i<4; ++i) (*rr++) += (*cs++);
  /* #147: {@0, @4, @5, @13} = vertsplit(@36) */
  w0 = w36[0];
  w4 = w36[1];
  w5 = w36[2];
  w13 = w36[3];
  /* #148: output[1][0] = @0 */
  if (res[1]) res[1][0] = w0;
  /* #149: output[1][1] = @4 */
  if (res[1]) res[1][1] = w4;
  /* #150: output[1][2] = @5 */
  if (res[1]) res[1][2] = w5;
  /* #151: output[1][3] = @13 */
  if (res[1]) res[1][3] = w13;
  /* #152: @29 = zeros(13x1) */
  casadi_clear(w29, 13);
  /* #153: @13 = -0.05 */
  w13 = -5.0000000000000003e-02;
  /* #154: @40 = (@13*@26) */
  for (i=0, rr=w40, cs=w26; i<3; ++i) (*rr++)  = (w13*(*cs++));
  /* #155: (@29[3:6] += @40) */
  for (rr=w29+3, ss=w40; rr!=w29+6; rr+=1) *rr += *ss++;
  /* #156: @33 = (@33/@10) */
  for (i=0, rr=w33; i<4; ++i) (*rr++) /= w10;
  /* #157: @33 = (-@33) */
  for (i=0, rr=w33, cs=w33; i<4; ++i) *rr++ = (- *cs++ );
  /* #158: @13 = 1 */
  w13 = 1.;
  /* #159: @14 = (@14?@13:0) */
  w14  = (w14?w13:0);
  /* #160: @36 = zeros(4x1) */
  casadi_clear(w36, 4);
  /* #161: @13 = sq(@16) */
  w13 = casadi_sq( w16 );
  /* #162: @5 = sq(@17) */
  w5 = casadi_sq( w17 );
  /* #163: @13 = (@13+@5) */
  w13 += w5;
  /* #164: @5 = (@16/@13) */
  w5  = (w16/w13);
  /* #165: @31 = @31' */
  /* #166: @40 = zeros(1x3) */
  casadi_clear(w40, 3);
  /* #167: @45 = @39' */
  casadi_copy(w39, 3, w45);
  /* #168: @46 = @41' */
  for (i=0, rr=w46, cs=w41; i<3; ++i) for (j=0; j<3; ++j) rr[i+j*3] = *cs++;
  /* #169: @40 = mac(@45,@46,@40) */
  for (i=0, rr=w40; i<3; ++i) for (j=0; j<1; ++j, ++rr) for (k=0, ss=w45+j, tt=w46+i*3; k<3; ++k) *rr += ss[k*1]**tt++;
  /* #170: @40 = @40' */
  /* #171: @31 = (@31+@40) */
  for (i=0, rr=w31, cs=w40; i<3; ++i) (*rr++) += (*cs++);
  /* #172: @40 = (@31/@16) */
  for (i=0, rr=w40, cr=w31; i<3; ++i) (*rr++)  = ((*cr++)/w16);
  /* #173: @4 = dot(@38, @40) */
  w4 = casadi_dot(3, w38, w40);
  /* #174: @5 = (@5*@4) */
  w5 *= w4;
  /* #175: @5 = (-@5) */
  w5 = (- w5 );
  /* #176: (@36[0] += @5) */
  for (rr=w36+0, ss=(&w5); rr!=w36+1; rr+=1) *rr += *ss++;
  /* #177: @39 = (@39/@16) */
  for (i=0, rr=w39; i<3; ++i) (*rr++) /= w16;
  /* #178: @39 = (-@39) */
  for (i=0, rr=w39, cs=w39; i<3; ++i) *rr++ = (- *cs++ );
  /* #179: @5 = dot(@39, @31) */
  w5 = casadi_dot(3, w39, w31);
  /* #180: @17 = (@17/@13) */
  w17 /= w13;
  /* #181: @17 = (@17*@4) */
  w17 *= w4;
  /* #182: @5 = (@5+@17) */
  w5 += w17;
  /* #183: @5 = (@5/@16) */
  w5 /= w16;
  /* #184: @37 = (@5*@37) */
  for (i=0, rr=w37, cs=w37; i<3; ++i) (*rr++)  = (w5*(*cs++));
  /* #185: @40 = (@11*@40) */
  for (i=0, rr=w40, cs=w40; i<3; ++i) (*rr++)  = (w11*(*cs++));
  /* #186: @40 = (2.*@40) */
  for (i=0, rr=w40, cs=w40; i<3; ++i) *rr++ = (2.* *cs++ );
  /* #187: @37 = (@37+@40) */
  for (i=0, rr=w37, cs=w40; i<3; ++i) (*rr++) += (*cs++);
  /* #188: (@36[1:4] += @37) */
  for (rr=w36+1, ss=w37; rr!=w36+4; rr+=1) *rr += *ss++;
  /* #189: @42 = (@14*@36) */
  for (i=0, rr=w42, cs=w36; i<4; ++i) (*rr++)  = (w14*(*cs++));
  /* #190: @14 = 1 */
  w14 = 1.;
  /* #191: @15 = (@15?@14:0) */
  w15  = (w15?w14:0);
  /* #192: @36 = (@15*@36) */
  for (i=0, rr=w36, cs=w36; i<4; ++i) (*rr++)  = (w15*(*cs++));
  /* #193: @42 = (@42-@36) */
  for (i=0, rr=w42, cs=w36; i<4; ++i) (*rr++) -= (*cs++);
  /* #194: {@15, @14, @11, @5} = vertsplit(@42) */
  w15 = w42[0];
  w14 = w42[1];
  w11 = w42[2];
  w5 = w42[3];
  /* #195: @16 = (@9*@5) */
  w16  = (w9*w5);
  /* #196: @17 = (@8*@11) */
  w17  = (w8*w11);
  /* #197: @16 = (@16+@17) */
  w16 += w17;
  /* #198: @17 = (@7*@14) */
  w17  = (w7*w14);
  /* #199: @16 = (@16+@17) */
  w16 += w17;
  /* #200: @17 = (@6*@15) */
  w17  = (w6*w15);
  /* #201: @16 = (@16+@17) */
  w16 += w17;
  /* #202: @17 = (@8*@5) */
  w17  = (w8*w5);
  /* #203: @4 = (@9*@11) */
  w4  = (w9*w11);
  /* #204: @17 = (@17-@4) */
  w17 -= w4;
  /* #205: @4 = (@6*@14) */
  w4  = (w6*w14);
  /* #206: @17 = (@17+@4) */
  w17 += w4;
  /* #207: @4 = (@7*@15) */
  w4  = (w7*w15);
  /* #208: @17 = (@17-@4) */
  w17 -= w4;
  /* #209: @4 = (@6*@11) */
  w4  = (w6*w11);
  /* #210: @13 = (@7*@5) */
  w13  = (w7*w5);
  /* #211: @4 = (@4-@13) */
  w4 -= w13;
  /* #212: @13 = (@9*@14) */
  w13  = (w9*w14);
  /* #213: @4 = (@4+@13) */
  w4 += w13;
  /* #214: @13 = (@8*@15) */
  w13  = (w8*w15);
  /* #215: @4 = (@4-@13) */
  w4 -= w13;
  /* #216: @6 = (@6*@5) */
  w6 *= w5;
  /* #217: @7 = (@7*@11) */
  w7 *= w11;
  /* #218: @6 = (@6+@7) */
  w6 += w7;
  /* #219: @8 = (@8*@14) */
  w8 *= w14;
  /* #220: @6 = (@6-@8) */
  w6 -= w8;
  /* #221: @9 = (@9*@15) */
  w9 *= w15;
  /* #222: @6 = (@6-@9) */
  w6 -= w9;
  /* #223: @42 = vertcat(@16, @17, @4, @6) */
  rr=w42;
  *rr++ = w16;
  *rr++ = w17;
  *rr++ = w4;
  *rr++ = w6;
  /* #224: @16 = dot(@33, @42) */
  w16 = casadi_dot(4, w33, w42);
  /* #225: @16 = (@16/@10) */
  w16 /= w10;
  /* #226: @34 = (@16*@34) */
  for (i=0, rr=w34, cs=w34; i<4; ++i) (*rr++)  = (w16*(*cs++));
  /* #227: (@29[6:10] += @34) */
  for (rr=w29+6, ss=w34; rr!=w29+10; rr+=1) *rr += *ss++;
  /* #228: @30 = @30' */
  /* #229: @37 = zeros(1x3) */
  casadi_clear(w37, 3);
  /* #230: @27 = @27' */
  /* #231: @46 = @32' */
  for (i=0, rr=w46, cs=w32; i<3; ++i) for (j=0; j<3; ++j) rr[i+j*3] = *cs++;
  /* #232: @37 = mac(@27,@46,@37) */
  for (i=0, rr=w37; i<3; ++i) for (j=0; j<1; ++j, ++rr) for (k=0, ss=w27+j, tt=w46+i*3; k<3; ++k) *rr += ss[k*1]**tt++;
  /* #233: @37 = @37' */
  /* #234: @30 = (@30+@37) */
  for (i=0, rr=w30, cs=w37; i<3; ++i) (*rr++) += (*cs++);
  /* #235: @16 = dot(@26, @30) */
  w16 = casadi_dot(3, w26, w30);
  /* #236: @26 = (@16*@26) */
  for (i=0, rr=w26, cs=w26; i<3; ++i) (*rr++)  = (w16*(*cs++));
  /* #237: @30 = zeros(3x1) */
  casadi_clear(w30, 3);
  /* #238: @46 = @3' */
  for (i=0, rr=w46, cs=w3; i<3; ++i) for (j=0; j<3; ++j) rr[i+j*3] = *cs++;
  /* #239: @1 = @1' */
  /* #240: @37 = zeros(1x3) */
  casadi_clear(w37, 3);
  /* #241: @2 = @2' */
  /* #242: @3 = @28' */
  for (i=0, rr=w3, cs=w28; i<3; ++i) for (j=0; j<3; ++j) rr[i+j*3] = *cs++;
  /* #243: @37 = mac(@2,@3,@37) */
  for (i=0, rr=w37; i<3; ++i) for (j=0; j<1; ++j, ++rr) for (k=0, ss=w2+j, tt=w3+i*3; k<3; ++k) *rr += ss[k*1]**tt++;
  /* #244: @37 = @37' */
  /* #245: @1 = (@1+@37) */
  for (i=0, rr=w1, cs=w37; i<3; ++i) (*rr++) += (*cs++);
  /* #246: @30 = mac(@46,@1,@30) */
  for (i=0, rr=w30; i<1; ++i) for (j=0; j<3; ++j, ++rr) for (k=0, ss=w46+j, tt=w1+i*3; k<3; ++k) *rr += ss[k*3]**tt++;
  /* #247: @26 = (@26+@30) */
  for (i=0, rr=w26, cs=w30; i<3; ++i) (*rr++) += (*cs++);
  /* #248: @26 = (-@26) */
  for (i=0, rr=w26, cs=w26; i<3; ++i) *rr++ = (- *cs++ );
  /* #249: (@29[:3] += @26) */
  for (rr=w29+0, ss=w26; rr!=w29+3; rr+=1) *rr += *ss++;
  /* #250: {@16, @17, @4, @6, @9, @15, @8, @14, @7, @11, @5, @13, @0} = vertsplit(@29) */
  w16 = w29[0];
  w17 = w29[1];
  w4 = w29[2];
  w6 = w29[3];
  w9 = w29[4];
  w15 = w29[5];
  w8 = w29[6];
  w14 = w29[7];
  w7 = w29[8];
  w11 = w29[9];
  w5 = w29[10];
  w13 = w29[11];
  w0 = w29[12];
  /* #251: output[1][4] = @16 */
  if (res[1]) res[1][4] = w16;
  /* #252: output[1][5] = @17 */
  if (res[1]) res[1][5] = w17;
  /* #253: output[1][6] = @4 */
  if (res[1]) res[1][6] = w4;
  /* #254: output[1][7] = @6 */
  if (res[1]) res[1][7] = w6;
  /* #255: output[1][8] = @9 */
  if (res[1]) res[1][8] = w9;
  /* #256: output[1][9] = @15 */
  if (res[1]) res[1][9] = w15;
  /* #257: @42 = (@42/@10) */
  for (i=0, rr=w42; i<4; ++i) (*rr++) /= w10;
  /* #258: {@10, @15, @9, @6} = vertsplit(@42) */
  w10 = w42[0];
  w15 = w42[1];
  w9 = w42[2];
  w6 = w42[3];
  /* #259: @10 = (@10+@8) */
  w10 += w8;
  /* #260: output[1][10] = @10 */
  if (res[1]) res[1][10] = w10;
  /* #261: @14 = (@14-@15) */
  w14 -= w15;
  /* #262: output[1][11] = @14 */
  if (res[1]) res[1][11] = w14;
  /* #263: @7 = (@7-@9) */
  w7 -= w9;
  /* #264: output[1][12] = @7 */
  if (res[1]) res[1][12] = w7;
  /* #265: @11 = (@11-@6) */
  w11 -= w6;
  /* #266: output[1][13] = @11 */
  if (res[1]) res[1][13] = w11;
  /* #267: output[1][14] = @5 */
  if (res[1]) res[1][14] = w5;
  /* #268: output[1][15] = @13 */
  if (res[1]) res[1][15] = w13;
  /* #269: output[1][16] = @0 */
  if (res[1]) res[1][16] = w0;
  return 0;
}

CASADI_SYMBOL_EXPORT int Drone_ode_complete_2_cost_ext_cost_0_fun_jac(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int Drone_ode_complete_2_cost_ext_cost_0_fun_jac_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int Drone_ode_complete_2_cost_ext_cost_0_fun_jac_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void Drone_ode_complete_2_cost_ext_cost_0_fun_jac_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int Drone_ode_complete_2_cost_ext_cost_0_fun_jac_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void Drone_ode_complete_2_cost_ext_cost_0_fun_jac_release(int mem) {
}

CASADI_SYMBOL_EXPORT void Drone_ode_complete_2_cost_ext_cost_0_fun_jac_incref(void) {
}

CASADI_SYMBOL_EXPORT void Drone_ode_complete_2_cost_ext_cost_0_fun_jac_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int Drone_ode_complete_2_cost_ext_cost_0_fun_jac_n_in(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_int Drone_ode_complete_2_cost_ext_cost_0_fun_jac_n_out(void) { return 2;}

CASADI_SYMBOL_EXPORT casadi_real Drone_ode_complete_2_cost_ext_cost_0_fun_jac_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* Drone_ode_complete_2_cost_ext_cost_0_fun_jac_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* Drone_ode_complete_2_cost_ext_cost_0_fun_jac_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* Drone_ode_complete_2_cost_ext_cost_0_fun_jac_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    case 1: return casadi_s2;
    case 2: return casadi_s3;
    case 3: return casadi_s4;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* Drone_ode_complete_2_cost_ext_cost_0_fun_jac_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s5;
    case 1: return casadi_s6;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int Drone_ode_complete_2_cost_ext_cost_0_fun_jac_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 24;
  if (sz_res) *sz_res = 15;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 188;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
