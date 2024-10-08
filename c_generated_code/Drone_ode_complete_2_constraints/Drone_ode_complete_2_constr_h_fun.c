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
  #define CASADI_PREFIX(ID) Drone_ode_complete_2_constr_h_fun_ ## ID
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
#define casadi_c2 CASADI_PREFIX(c2)
#define casadi_c3 CASADI_PREFIX(c3)
#define casadi_c4 CASADI_PREFIX(c4)
#define casadi_clear CASADI_PREFIX(clear)
#define casadi_copy CASADI_PREFIX(copy)
#define casadi_densify CASADI_PREFIX(densify)
#define casadi_dot CASADI_PREFIX(dot)
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_fill CASADI_PREFIX(fill)
#define casadi_mtimes CASADI_PREFIX(mtimes)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s10 CASADI_PREFIX(s10)
#define casadi_s11 CASADI_PREFIX(s11)
#define casadi_s12 CASADI_PREFIX(s12)
#define casadi_s13 CASADI_PREFIX(s13)
#define casadi_s14 CASADI_PREFIX(s14)
#define casadi_s15 CASADI_PREFIX(s15)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_s3 CASADI_PREFIX(s3)
#define casadi_s4 CASADI_PREFIX(s4)
#define casadi_s5 CASADI_PREFIX(s5)
#define casadi_s6 CASADI_PREFIX(s6)
#define casadi_s7 CASADI_PREFIX(s7)
#define casadi_s8 CASADI_PREFIX(s8)
#define casadi_s9 CASADI_PREFIX(s9)
#define casadi_sq CASADI_PREFIX(sq)
#define casadi_trans CASADI_PREFIX(trans)

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

casadi_real casadi_sq(casadi_real x) { return x*x;}

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

void casadi_mtimes(const casadi_real* x, const casadi_int* sp_x, const casadi_real* y, const casadi_int* sp_y, casadi_real* z, const casadi_int* sp_z, casadi_real* w, casadi_int tr) {
  casadi_int ncol_x, ncol_y, ncol_z, cc;
  const casadi_int *colind_x, *row_x, *colind_y, *row_y, *colind_z, *row_z;
  ncol_x = sp_x[1];
  colind_x = sp_x+2; row_x = sp_x + 2 + ncol_x+1;
  ncol_y = sp_y[1];
  colind_y = sp_y+2; row_y = sp_y + 2 + ncol_y+1;
  ncol_z = sp_z[1];
  colind_z = sp_z+2; row_z = sp_z + 2 + ncol_z+1;
  if (tr) {
    for (cc=0; cc<ncol_z; ++cc) {
      casadi_int kk;
      for (kk=colind_y[cc]; kk<colind_y[cc+1]; ++kk) {
        w[row_y[kk]] = y[kk];
      }
      for (kk=colind_z[cc]; kk<colind_z[cc+1]; ++kk) {
        casadi_int kk1;
        casadi_int rr = row_z[kk];
        for (kk1=colind_x[rr]; kk1<colind_x[rr+1]; ++kk1) {
          z[kk] += x[kk1] * w[row_x[kk1]];
        }
      }
    }
  } else {
    for (cc=0; cc<ncol_y; ++cc) {
      casadi_int kk;
      for (kk=colind_z[cc]; kk<colind_z[cc+1]; ++kk) {
        w[row_z[kk]] = z[kk];
      }
      for (kk=colind_y[cc]; kk<colind_y[cc+1]; ++kk) {
        casadi_int kk1;
        casadi_int rr = row_y[kk];
        for (kk1=colind_x[rr]; kk1<colind_x[rr+1]; ++kk1) {
          w[row_x[kk1]] += x[kk1]*y[kk];
        }
      }
      for (kk=colind_z[cc]; kk<colind_z[cc+1]; ++kk) {
        z[kk] = w[row_z[kk]];
      }
    }
  }
}

#define CASADI_CAST(x,y) ((x) y)

void casadi_densify(const casadi_real* x, const casadi_int* sp_x, casadi_real* y, casadi_int tr) {
  casadi_int nrow_x, ncol_x, i, el;
  const casadi_int *colind_x, *row_x;
  if (!y) return;
  nrow_x = sp_x[0]; ncol_x = sp_x[1];
  colind_x = sp_x+2; row_x = sp_x+ncol_x+3;
  casadi_clear(y, nrow_x*ncol_x);
  if (!x) return;
  if (tr) {
    for (i=0; i<ncol_x; ++i) {
      for (el=colind_x[i]; el!=colind_x[i+1]; ++el) {
        y[i + row_x[el]*ncol_x] = CASADI_CAST(casadi_real, *x++);
      }
    }
  } else {
    for (i=0; i<ncol_x; ++i) {
      for (el=colind_x[i]; el!=colind_x[i+1]; ++el) {
        y[row_x[el]] = CASADI_CAST(casadi_real, *x++);
      }
      y += nrow_x;
    }
  }
}

void casadi_fill(casadi_real* x, casadi_int n, casadi_real alpha) {
  casadi_int i;
  if (x) {
    for (i=0; i<n; ++i) *x++ = alpha;
  }
}

void casadi_trans(const casadi_real* x, const casadi_int* sp_x, casadi_real* y,
    const casadi_int* sp_y, casadi_int* tmp) {
  casadi_int ncol_x, nnz_x, ncol_y, k;
  const casadi_int* row_x, *colind_y;
  ncol_x = sp_x[1];
  nnz_x = sp_x[2 + ncol_x];
  row_x = sp_x + 2 + ncol_x+1;
  ncol_y = sp_y[1];
  colind_y = sp_y+2;
  for (k=0; k<ncol_y; ++k) tmp[k] = colind_y[k];
  for (k=0; k<nnz_x; ++k) {
    y[tmp[row_x[k]]++] = x[k];
  }
}

static const casadi_int casadi_s0[7] = {3, 1, 0, 3, 0, 1, 2};
static const casadi_int casadi_s1[9] = {3, 3, 0, 1, 2, 3, 0, 1, 2};
static const casadi_int casadi_s2[7] = {13, 1, 0, 3, 0, 1, 2};
static const casadi_int casadi_s3[5] = {1, 1, 0, 1, 0};
static const casadi_int casadi_s4[17] = {13, 1, 0, 13, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
static const casadi_int casadi_s5[22] = {1, 13, 0, 1, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6, 6, 0, 0, 0, 0, 0, 0};
static const casadi_int casadi_s6[5] = {3, 1, 0, 1, 2};
static const casadi_int casadi_s7[15] = {3, 3, 0, 3, 6, 9, 0, 1, 2, 0, 1, 2, 0, 1, 2};
static const casadi_int casadi_s8[13] = {13, 4, 0, 3, 4, 5, 6, 3, 4, 5, 10, 11, 12};
static const casadi_int casadi_s9[22] = {4, 13, 0, 0, 0, 0, 1, 2, 3, 3, 3, 3, 3, 4, 5, 6, 0, 0, 0, 1, 2, 3};
static const casadi_int casadi_s10[8] = {1, 4, 0, 1, 1, 1, 1, 0};
static const casadi_int casadi_s11[8] = {4, 1, 0, 4, 0, 1, 2, 3};
static const casadi_int casadi_s12[19] = {1, 13, 0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 0};
static const casadi_int casadi_s13[3] = {0, 0, 0};
static const casadi_int casadi_s14[24] = {20, 1, 0, 20, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
static const casadi_int casadi_s15[6] = {2, 1, 0, 2, 0, 1};

static const casadi_real casadi_c0[9] = {1., 0., 0., 0., 1., 0., 0., 0., 1.};
static const casadi_real casadi_c1[3] = {0., 0., 1.};
static const casadi_real casadi_c2[3] = {3.2723905139943781e+02, 6.2619368170575160e+02, 6.2622505275946071e+02};
static const casadi_real casadi_c3[9] = {3.0558700000000000e-03, 0., 0., 0., 1.5969500000000000e-03, 0., 0., 0., 1.5968700000000000e-03};
static const casadi_real casadi_c4[2] = {20., 8.};

/* Drone_ode_complete_2_constr_h_fun:(i0[13],i1[4],i2[],i3[20])->(o0[2]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_int i, j, k;
  casadi_real *rr, *ss, *tt;
  const casadi_real *cs;
  casadi_real w0, *w1=w+4, w2, w3, w4, w5, w6, w7, w8, w9, w10, w11, w12, w13, w14, w15, w16, w17, w18, *w19=w+27, *w20=w+30, *w21=w+39, *w22=w+48, w23, w24, w25, w26, *w27=w+61, w28, *w29=w+66, w30, w31, *w32=w+77, w33, w34, w35, w36, w37, w38, w39, *w40=w+87, *w41=w+90, *w42=w+93, *w43=w+96, w44, w45, *w46=w+101, *w47=w+114, *w48=w+127, *w54=w+133, *w55=w+139, *w56=w+145, *w57=w+147, *w58=w+149;
  /* #0: @0 = 0 */
  w0 = 0.;
  /* #1: @1 = zeros(13x1,6nz) */
  casadi_clear(w1, 6);
  /* #2: @2 = input[0][0] */
  w2 = arg[0] ? arg[0][0] : 0;
  /* #3: @3 = input[3][17] */
  w3 = arg[3] ? arg[3][17] : 0;
  /* #4: @4 = (@2-@3) */
  w4  = (w2-w3);
  /* #5: @5 = (2.*@4) */
  w5 = (2.* w4 );
  /* #6: @6 = input[0][1] */
  w6 = arg[0] ? arg[0][1] : 0;
  /* #7: @7 = input[3][18] */
  w7 = arg[3] ? arg[3][18] : 0;
  /* #8: @8 = (@6-@7) */
  w8  = (w6-w7);
  /* #9: @9 = (2.*@8) */
  w9 = (2.* w8 );
  /* #10: @10 = sq(@4) */
  w10 = casadi_sq( w4 );
  /* #11: @11 = sq(@8) */
  w11 = casadi_sq( w8 );
  /* #12: @10 = (@10+@11) */
  w10 += w11;
  /* #13: @11 = input[0][2] */
  w11 = arg[0] ? arg[0][2] : 0;
  /* #14: @12 = input[3][19] */
  w12 = arg[3] ? arg[3][19] : 0;
  /* #15: @13 = (@11-@12) */
  w13  = (w11-w12);
  /* #16: @14 = sq(@13) */
  w14 = casadi_sq( w13 );
  /* #17: @10 = (@10+@14) */
  w10 += w14;
  /* #18: @10 = sqrt(@10) */
  w10 = sqrt( w10 );
  /* #19: @14 = (2.*@10) */
  w14 = (2.* w10 );
  /* #20: @9 = (@9/@14) */
  w9 /= w14;
  /* #21: @15 = (@9/@14) */
  w15  = (w9/w14);
  /* #22: @16 = input[0][3] */
  w16 = arg[0] ? arg[0][3] : 0;
  /* #23: @17 = input[0][4] */
  w17 = arg[0] ? arg[0][4] : 0;
  /* #24: @18 = input[0][5] */
  w18 = arg[0] ? arg[0][5] : 0;
  /* #25: @19 = zeros(3x1) */
  casadi_clear(w19, 3);
  /* #26: @20 = 
  [[1, 0, 0], 
   [0, 1, 0], 
   [0, 0, 1]] */
  casadi_copy(casadi_c0, 9, w20);
  /* #27: @21 = zeros(3x3) */
  casadi_clear(w21, 9);
  /* #28: @22 = zeros(3x3) */
  casadi_clear(w22, 9);
  /* #29: @23 = input[0][6] */
  w23 = arg[0] ? arg[0][6] : 0;
  /* #30: @24 = input[0][7] */
  w24 = arg[0] ? arg[0][7] : 0;
  /* #31: @25 = input[0][8] */
  w25 = arg[0] ? arg[0][8] : 0;
  /* #32: @26 = input[0][9] */
  w26 = arg[0] ? arg[0][9] : 0;
  /* #33: @27 = vertcat(@23, @24, @25, @26) */
  rr=w27;
  *rr++ = w23;
  *rr++ = w24;
  *rr++ = w25;
  *rr++ = w26;
  /* #34: @28 = ||@27||_F */
  w28 = sqrt(casadi_dot(4, w27, w27));
  /* #35: @27 = (@27/@28) */
  for (i=0, rr=w27; i<4; ++i) (*rr++) /= w28;
  /* #36: @28 = @27[3] */
  for (rr=(&w28), ss=w27+3; ss!=w27+4; ss+=1) *rr++ = *ss;
  /* #37: @28 = (-@28) */
  w28 = (- w28 );
  /* #38: (@22[3] = @28) */
  for (rr=w22+3, ss=(&w28); rr!=w22+4; rr+=1) *rr = *ss++;
  /* #39: @28 = @27[2] */
  for (rr=(&w28), ss=w27+2; ss!=w27+3; ss+=1) *rr++ = *ss;
  /* #40: (@22[6] = @28) */
  for (rr=w22+6, ss=(&w28); rr!=w22+7; rr+=1) *rr = *ss++;
  /* #41: @28 = @27[1] */
  for (rr=(&w28), ss=w27+1; ss!=w27+2; ss+=1) *rr++ = *ss;
  /* #42: @28 = (-@28) */
  w28 = (- w28 );
  /* #43: (@22[7] = @28) */
  for (rr=w22+7, ss=(&w28); rr!=w22+8; rr+=1) *rr = *ss++;
  /* #44: @28 = @27[3] */
  for (rr=(&w28), ss=w27+3; ss!=w27+4; ss+=1) *rr++ = *ss;
  /* #45: (@22[1] = @28) */
  for (rr=w22+1, ss=(&w28); rr!=w22+2; rr+=1) *rr = *ss++;
  /* #46: @28 = @27[2] */
  for (rr=(&w28), ss=w27+2; ss!=w27+3; ss+=1) *rr++ = *ss;
  /* #47: @28 = (-@28) */
  w28 = (- w28 );
  /* #48: (@22[2] = @28) */
  for (rr=w22+2, ss=(&w28); rr!=w22+3; rr+=1) *rr = *ss++;
  /* #49: @28 = @27[1] */
  for (rr=(&w28), ss=w27+1; ss!=w27+2; ss+=1) *rr++ = *ss;
  /* #50: (@22[5] = @28) */
  for (rr=w22+5, ss=(&w28); rr!=w22+6; rr+=1) *rr = *ss++;
  /* #51: @29 = (2.*@22) */
  for (i=0, rr=w29, cs=w22; i<9; ++i) *rr++ = (2.* *cs++ );
  /* #52: @21 = mac(@29,@22,@21) */
  for (i=0, rr=w21; i<3; ++i) for (j=0; j<3; ++j, ++rr) for (k=0, ss=w29+j, tt=w22+i*3; k<3; ++k) *rr += ss[k*3]**tt++;
  /* #53: @20 = (@20+@21) */
  for (i=0, rr=w20, cs=w21; i<9; ++i) (*rr++) += (*cs++);
  /* #54: @28 = @27[0] */
  for (rr=(&w28), ss=w27+0; ss!=w27+1; ss+=1) *rr++ = *ss;
  /* #55: @28 = (2.*@28) */
  w28 = (2.* w28 );
  /* #56: @22 = (@28*@22) */
  for (i=0, rr=w22, cs=w22; i<9; ++i) (*rr++)  = (w28*(*cs++));
  /* #57: @20 = (@20+@22) */
  for (i=0, rr=w20, cs=w22; i<9; ++i) (*rr++) += (*cs++);
  /* #58: @28 = 0 */
  w28 = 0.;
  /* #59: @30 = 0 */
  w30 = 0.;
  /* #60: @31 = input[1][0] */
  w31 = arg[1] ? arg[1][0] : 0;
  /* #61: @32 = vertcat(@28, @30, @31) */
  rr=w32;
  *rr++ = w28;
  *rr++ = w30;
  *rr++ = w31;
  /* #62: @19 = mac(@20,@32,@19) */
  for (i=0, rr=w19; i<1; ++i) for (j=0; j<3; ++j, ++rr) for (k=0, ss=w20+j, tt=w32+i*3; k<3; ++k) *rr += ss[k*3]**tt++;
  /* #63: @28 = 0.85 */
  w28 = 8.4999999999999998e-01;
  /* #64: @19 = (@19/@28) */
  for (i=0, rr=w19; i<3; ++i) (*rr++) /= w28;
  /* #65: @32 = [0, 0, 1] */
  casadi_copy(casadi_c1, 3, w32);
  /* #66: @28 = 9.81 */
  w28 = 9.8100000000000005e+00;
  /* #67: @32 = (@32*@28) */
  for (i=0, rr=w32; i<3; ++i) (*rr++) *= w28;
  /* #68: @19 = (@19-@32) */
  for (i=0, rr=w19, cs=w32; i<3; ++i) (*rr++) -= (*cs++);
  /* #69: @28 = 0.5 */
  w28 = 5.0000000000000000e-01;
  /* #70: @30 = input[0][10] */
  w30 = arg[0] ? arg[0][10] : 0;
  /* #71: @33 = (@24*@30) */
  w33  = (w24*w30);
  /* #72: @33 = (-@33) */
  w33 = (- w33 );
  /* #73: @34 = input[0][11] */
  w34 = arg[0] ? arg[0][11] : 0;
  /* #74: @35 = (@25*@34) */
  w35  = (w25*w34);
  /* #75: @33 = (@33-@35) */
  w33 -= w35;
  /* #76: @35 = input[0][12] */
  w35 = arg[0] ? arg[0][12] : 0;
  /* #77: @36 = (@26*@35) */
  w36  = (w26*w35);
  /* #78: @33 = (@33-@36) */
  w33 -= w36;
  /* #79: @36 = (@23*@30) */
  w36  = (w23*w30);
  /* #80: @37 = (@25*@35) */
  w37  = (w25*w35);
  /* #81: @36 = (@36+@37) */
  w36 += w37;
  /* #82: @37 = (@26*@34) */
  w37  = (w26*w34);
  /* #83: @36 = (@36-@37) */
  w36 -= w37;
  /* #84: @37 = (@23*@34) */
  w37  = (w23*w34);
  /* #85: @38 = (@24*@35) */
  w38  = (w24*w35);
  /* #86: @37 = (@37-@38) */
  w37 -= w38;
  /* #87: @38 = (@26*@30) */
  w38  = (w26*w30);
  /* #88: @37 = (@37+@38) */
  w37 += w38;
  /* #89: @38 = (@23*@35) */
  w38  = (w23*w35);
  /* #90: @39 = (@24*@34) */
  w39  = (w24*w34);
  /* #91: @38 = (@38+@39) */
  w38 += w39;
  /* #92: @39 = (@25*@30) */
  w39  = (w25*w30);
  /* #93: @38 = (@38-@39) */
  w38 -= w39;
  /* #94: @27 = vertcat(@33, @36, @37, @38) */
  rr=w27;
  *rr++ = w33;
  *rr++ = w36;
  *rr++ = w37;
  *rr++ = w38;
  /* #95: @27 = (@28*@27) */
  for (i=0, rr=w27, cs=w27; i<4; ++i) (*rr++)  = (w28*(*cs++));
  /* #96: @32 = zeros(3x1) */
  casadi_clear(w32, 3);
  /* #97: @40 = 
  [[327.239, 00, 00], 
   [00, 626.194, 00], 
   [00, 00, 626.225]] */
  casadi_copy(casadi_c2, 3, w40);
  /* #98: @28 = input[1][1] */
  w28 = arg[1] ? arg[1][1] : 0;
  /* #99: @33 = input[1][2] */
  w33 = arg[1] ? arg[1][2] : 0;
  /* #100: @36 = input[1][3] */
  w36 = arg[1] ? arg[1][3] : 0;
  /* #101: @41 = vertcat(@28, @33, @36) */
  rr=w41;
  *rr++ = w28;
  *rr++ = w33;
  *rr++ = w36;
  /* #102: @42 = zeros(3x1) */
  casadi_clear(w42, 3);
  /* #103: @22 = 
  [[0.00305587, 0, 0], 
   [0, 0.00159695, 0], 
   [0, 0, 0.00159687]] */
  casadi_copy(casadi_c3, 9, w22);
  /* #104: @43 = vertcat(@30, @34, @35) */
  rr=w43;
  *rr++ = w30;
  *rr++ = w34;
  *rr++ = w35;
  /* #105: @42 = mac(@22,@43,@42) */
  for (i=0, rr=w42; i<1; ++i) for (j=0; j<3; ++j, ++rr) for (k=0, ss=w22+j, tt=w43+i*3; k<3; ++k) *rr += ss[k*3]**tt++;
  /* #106: @37 = @42[2] */
  for (rr=(&w37), ss=w42+2; ss!=w42+3; ss+=1) *rr++ = *ss;
  /* #107: @38 = (@34*@37) */
  w38  = (w34*w37);
  /* #108: @39 = @42[1] */
  for (rr=(&w39), ss=w42+1; ss!=w42+2; ss+=1) *rr++ = *ss;
  /* #109: @44 = (@35*@39) */
  w44  = (w35*w39);
  /* #110: @38 = (@38-@44) */
  w38 -= w44;
  /* #111: @44 = @42[0] */
  for (rr=(&w44), ss=w42+0; ss!=w42+1; ss+=1) *rr++ = *ss;
  /* #112: @45 = (@35*@44) */
  w45  = (w35*w44);
  /* #113: @37 = (@30*@37) */
  w37  = (w30*w37);
  /* #114: @45 = (@45-@37) */
  w45 -= w37;
  /* #115: @39 = (@30*@39) */
  w39  = (w30*w39);
  /* #116: @44 = (@34*@44) */
  w44  = (w34*w44);
  /* #117: @39 = (@39-@44) */
  w39 -= w44;
  /* #118: @42 = vertcat(@38, @45, @39) */
  rr=w42;
  *rr++ = w38;
  *rr++ = w45;
  *rr++ = w39;
  /* #119: @41 = (@41-@42) */
  for (i=0, rr=w41, cs=w42; i<3; ++i) (*rr++) -= (*cs++);
  /* #120: @32 = mac(@40,@41,@32) */
  casadi_mtimes(w40, casadi_s1, w41, casadi_s0, w32, casadi_s0, w, 0);
  /* #121: @46 = vertcat(@16, @17, @18, @19, @27, @32) */
  rr=w46;
  *rr++ = w16;
  *rr++ = w17;
  *rr++ = w18;
  for (i=0, cs=w19; i<3; ++i) *rr++ = *cs++;
  for (i=0, cs=w27; i<4; ++i) *rr++ = *cs++;
  for (i=0, cs=w32; i<3; ++i) *rr++ = *cs++;
  /* #122: @38 = 0 */
  w38 = 0.;
  /* #123: @47 = @46; (@47[2] = @38) */
  casadi_copy(w46, 13, w47);
  for (rr=w47+2, ss=(&w38); rr!=w47+3; rr+=1) *rr = *ss++;
  /* #124: @38 = @47[1] */
  for (rr=(&w38), ss=w47+1; ss!=w47+2; ss+=1) *rr++ = *ss;
  /* #125: @15 = (@15*@38) */
  w15 *= w38;
  /* #126: @15 = (-@15) */
  w15 = (- w15 );
  /* #127: @45 = (2.*@13) */
  w45 = (2.* w13 );
  /* #128: @45 = (@45/@14) */
  w45 /= w14;
  /* #129: @39 = (@45/@14) */
  w39  = (w45/w14);
  /* #130: @39 = (@39*@18) */
  w39 *= w18;
  /* #131: @15 = (@15-@39) */
  w15 -= w39;
  /* #132: @39 = (2.*@4) */
  w39 = (2.* w4 );
  /* #133: @39 = (@39/@14) */
  w39 /= w14;
  /* #134: @44 = (@39/@14) */
  w44  = (w39/w14);
  /* #135: @37 = 0 */
  w37 = 0.;
  /* #136: (@47[1] = @37) */
  for (rr=w47+1, ss=(&w37); rr!=w47+2; rr+=1) *rr = *ss++;
  /* #137: @37 = @47[0] */
  for (rr=(&w37), ss=w47+0; ss!=w47+1; ss+=1) *rr++ = *ss;
  /* #138: @44 = (@44*@37) */
  w44 *= w37;
  /* #139: @15 = (@15-@44) */
  w15 -= w44;
  /* #140: @15 = (2.*@15) */
  w15 = (2.* w15 );
  /* #141: @44 = (2.*@10) */
  w44 = (2.* w10 );
  /* #142: @15 = (@15/@44) */
  w15 /= w44;
  /* #143: @5 = (@5*@15) */
  w5 *= w15;
  /* #144: @37 = (@37/@14) */
  w37 /= w14;
  /* #145: @37 = (2.*@37) */
  w37 = (2.* w37 );
  /* #146: @5 = (@5+@37) */
  w5 += w37;
  /* #147: (@1[0] = @5) */
  for (rr=w1+0, ss=(&w5); rr!=w1+1; rr+=1) *rr = *ss++;
  /* #148: @38 = (@38/@14) */
  w38 /= w14;
  /* #149: @38 = (2.*@38) */
  w38 = (2.* w38 );
  /* #150: @5 = (2.*@8) */
  w5 = (2.* w8 );
  /* #151: @5 = (@5*@15) */
  w5 *= w15;
  /* #152: @38 = (@38+@5) */
  w38 += w5;
  /* #153: (@1[1] = @38) */
  for (rr=w1+1, ss=(&w38); rr!=w1+2; rr+=1) *rr = *ss++;
  /* #154: @38 = (@18/@14) */
  w38  = (w18/w14);
  /* #155: @38 = (2.*@38) */
  w38 = (2.* w38 );
  /* #156: @5 = (2.*@13) */
  w5 = (2.* w13 );
  /* #157: @5 = (@5*@15) */
  w5 *= w15;
  /* #158: @38 = (@38+@5) */
  w38 += w5;
  /* #159: (@1[2] = @38) */
  for (rr=w1+2, ss=(&w38); rr!=w1+3; rr+=1) *rr = *ss++;
  /* #160: @19 = zeros(13x1,3nz) */
  casadi_clear(w19, 3);
  /* #161: (@19[0] = @39) */
  for (rr=w19+0, ss=(&w39); rr!=w19+1; rr+=1) *rr = *ss++;
  /* #162: (@19[1] = @9) */
  for (rr=w19+1, ss=(&w9); rr!=w19+2; rr+=1) *rr = *ss++;
  /* #163: (@19[2] = @45) */
  for (rr=w19+2, ss=(&w45); rr!=w19+3; rr+=1) *rr = *ss++;
  /* #164: @47 = dense(@19) */
  casadi_densify(w19, casadi_s2, w47, 0);
  /* #165: {@38, @5, @15, NULL, NULL, NULL} = vertsplit(@47) */
  w38 = w47[0];
  w5 = w47[1];
  w15 = w47[2];
  /* #166: (@1[3] = @38) */
  for (rr=w1+3, ss=(&w38); rr!=w1+4; rr+=1) *rr = *ss++;
  /* #167: (@1[4] = @5) */
  for (rr=w1+4, ss=(&w5); rr!=w1+5; rr+=1) *rr = *ss++;
  /* #168: (@1[5] = @15) */
  for (rr=w1+5, ss=(&w15); rr!=w1+6; rr+=1) *rr = *ss++;
  /* #169: @1 = @1' */
  /* #170: @0 = mac(@1,@46,@0) */
  casadi_mtimes(w1, casadi_s5, w46, casadi_s4, (&w0), casadi_s3, w, 0);
  /* #171: @15 = 0 */
  w15 = 0.;
  /* #172: @5 = zeros(1x4,1nz) */
  w5 = 0.;
  /* #173: @1 = zeros(13x1,6nz) */
  casadi_clear(w1, 6);
  /* #174: @4 = (2.*@4) */
  w4 = (2.* w4 );
  /* #175: @9 = (@9/@14) */
  w9 /= w14;
  /* #176: @38 = 0 */
  w38 = 0.;
  /* #177: @47 = @46; (@47[2] = @38) */
  casadi_copy(w46, 13, w47);
  for (rr=w47+2, ss=(&w38); rr!=w47+3; rr+=1) *rr = *ss++;
  /* #178: @38 = @47[1] */
  for (rr=(&w38), ss=w47+1; ss!=w47+2; ss+=1) *rr++ = *ss;
  /* #179: @9 = (@9*@38) */
  w9 *= w38;
  /* #180: @9 = (-@9) */
  w9 = (- w9 );
  /* #181: @45 = (@45/@14) */
  w45 /= w14;
  /* #182: @45 = (@45*@18) */
  w45 *= w18;
  /* #183: @9 = (@9-@45) */
  w9 -= w45;
  /* #184: @39 = (@39/@14) */
  w39 /= w14;
  /* #185: @45 = 0 */
  w45 = 0.;
  /* #186: (@47[1] = @45) */
  for (rr=w47+1, ss=(&w45); rr!=w47+2; rr+=1) *rr = *ss++;
  /* #187: @45 = @47[0] */
  for (rr=(&w45), ss=w47+0; ss!=w47+1; ss+=1) *rr++ = *ss;
  /* #188: @39 = (@39*@45) */
  w39 *= w45;
  /* #189: @9 = (@9-@39) */
  w9 -= w39;
  /* #190: @9 = (2.*@9) */
  w9 = (2.* w9 );
  /* #191: @39 = (2.*@10) */
  w39 = (2.* w10 );
  /* #192: @9 = (@9/@39) */
  w9 /= w39;
  /* #193: @4 = (@4*@9) */
  w4 *= w9;
  /* #194: @45 = (@45/@14) */
  w45 /= w14;
  /* #195: @45 = (2.*@45) */
  w45 = (2.* w45 );
  /* #196: @4 = (@4+@45) */
  w4 += w45;
  /* #197: (@1[0] = @4) */
  for (rr=w1+0, ss=(&w4); rr!=w1+1; rr+=1) *rr = *ss++;
  /* #198: @38 = (@38/@14) */
  w38 /= w14;
  /* #199: @38 = (2.*@38) */
  w38 = (2.* w38 );
  /* #200: @8 = (2.*@8) */
  w8 = (2.* w8 );
  /* #201: @8 = (@8*@9) */
  w8 *= w9;
  /* #202: @38 = (@38+@8) */
  w38 += w8;
  /* #203: (@1[1] = @38) */
  for (rr=w1+1, ss=(&w38); rr!=w1+2; rr+=1) *rr = *ss++;
  /* #204: @14 = (@18/@14) */
  w14  = (w18/w14);
  /* #205: @14 = (2.*@14) */
  w14 = (2.* w14 );
  /* #206: @13 = (2.*@13) */
  w13 = (2.* w13 );
  /* #207: @13 = (@13*@9) */
  w13 *= w9;
  /* #208: @14 = (@14+@13) */
  w14 += w13;
  /* #209: (@1[2] = @14) */
  for (rr=w1+2, ss=(&w14); rr!=w1+3; rr+=1) *rr = *ss++;
  /* #210: @47 = dense(@19) */
  casadi_densify(w19, casadi_s2, w47, 0);
  /* #211: {@14, @13, @9, NULL, NULL, NULL} = vertsplit(@47) */
  w14 = w47[0];
  w13 = w47[1];
  w9 = w47[2];
  /* #212: (@1[3] = @14) */
  for (rr=w1+3, ss=(&w14); rr!=w1+4; rr+=1) *rr = *ss++;
  /* #213: (@1[4] = @13) */
  for (rr=w1+4, ss=(&w13); rr!=w1+5; rr+=1) *rr = *ss++;
  /* #214: (@1[5] = @9) */
  for (rr=w1+5, ss=(&w9); rr!=w1+6; rr+=1) *rr = *ss++;
  /* #215: @1 = @1' */
  /* #216: @48 = zeros(4x13,6nz) */
  casadi_clear(w48, 6);
  /* #217: @49 = 00 */
  /* #218: @50 = 00 */
  /* #219: @51 = 00 */
  /* #220: @9 = 1.17647 */
  w9 = 1.1764705882352942e+00;
  /* #221: @32 = zeros(3x1) */
  casadi_clear(w32, 3);
  /* #222: @52 = 00 */
  /* #223: @53 = 00 */
  /* #224: @27 = ones(4x1) */
  casadi_fill(w27, 4, 1.);
  /* #225: {@13, @14, @38, @8} = vertsplit(@27) */
  w13 = w27[0];
  w14 = w27[1];
  w38 = w27[2];
  w8 = w27[3];
  /* #226: @4 = vertcat(@52, @53, @13) */
  rr=(&w4);
  *rr++ = w13;
  /* #227: @32 = mac(@20,@4,@32) */
  casadi_mtimes(w20, casadi_s7, (&w4), casadi_s6, w32, casadi_s0, w, 0);
  /* #228: @32 = (@9*@32) */
  for (i=0, rr=w32, cs=w32; i<3; ++i) (*rr++)  = (w9*(*cs++));
  /* #229: @52 = zeros(4x1,0nz) */
  /* #230: @41 = zeros(3x1) */
  casadi_clear(w41, 3);
  /* #231: @42 = vertcat(@14, @38, @8) */
  rr=w42;
  *rr++ = w14;
  *rr++ = w38;
  *rr++ = w8;
  /* #232: @41 = mac(@40,@42,@41) */
  casadi_mtimes(w40, casadi_s1, w42, casadi_s0, w41, casadi_s0, w, 0);
  /* #233: @54 = vertcat(@49, @50, @51, @32, @52, @41) */
  rr=w54;
  for (i=0, cs=w32; i<3; ++i) *rr++ = *cs++;
  for (i=0, cs=w41; i<3; ++i) *rr++ = *cs++;
  /* #234: @55 = @54[:6] */
  for (rr=w55, ss=w54+0; ss!=w54+6; ss+=1) *rr++ = *ss;
  /* #235: (@48[:6] = @55) */
  for (rr=w48+0, ss=w55; rr!=w48+6; rr+=1) *rr = *ss++;
  /* #236: @55 = @48' */
  casadi_trans(w48,casadi_s9, w55, casadi_s8, iw);
  /* #237: @5 = mac(@1,@55,@5) */
  casadi_mtimes(w1, casadi_s5, w55, casadi_s8, (&w5), casadi_s10, w, 0);
  /* #238: @27 = vertcat(@31, @28, @33, @36) */
  rr=w27;
  *rr++ = w31;
  *rr++ = w28;
  *rr++ = w33;
  *rr++ = w36;
  /* #239: @15 = mac(@5,@27,@15) */
  casadi_mtimes((&w5), casadi_s10, w27, casadi_s11, (&w15), casadi_s3, w, 0);
  /* #240: @0 = (@0+@15) */
  w0 += w15;
  /* #241: @15 = 0 */
  w15 = 0.;
  /* #242: @56 = [20, 8] */
  casadi_copy(casadi_c4, 2, w56);
  /* #243: @56 = @56' */
  /* #244: @5 = 0.9 */
  w5 = 9.0000000000000002e-01;
  /* #245: @10 = (@10-@5) */
  w10 -= w5;
  /* #246: @5 = 0 */
  w5 = 0.;
  /* #247: @19 = @19' */
  /* #248: @5 = mac(@19,@46,@5) */
  casadi_mtimes(w19, casadi_s12, w46, casadi_s4, (&w5), casadi_s3, w, 0);
  /* #249: @57 = vertcat(@10, @5) */
  rr=w57;
  *rr++ = w10;
  *rr++ = w5;
  /* #250: @15 = mac(@56,@57,@15) */
  for (i=0, rr=(&w15); i<1; ++i) for (j=0; j<1; ++j, ++rr) for (k=0, ss=w56+j, tt=w57+i*2; k<2; ++k) *rr += ss[k*1]**tt++;
  /* #251: @0 = (@0+@15) */
  w0 += w15;
  /* #252: output[0][0] = @0 */
  if (res[0]) res[0][0] = w0;
  /* #253: @0 = 0 */
  w0 = 0.;
  /* #254: @15 = input[3][0] */
  w15 = arg[3] ? arg[3][0] : 0;
  /* #255: @10 = input[3][1] */
  w10 = arg[3] ? arg[3][1] : 0;
  /* #256: @5 = input[3][2] */
  w5 = arg[3] ? arg[3][2] : 0;
  /* #257: @31 = input[3][3] */
  w31 = arg[3] ? arg[3][3] : 0;
  /* #258: @28 = input[3][4] */
  w28 = arg[3] ? arg[3][4] : 0;
  /* #259: @33 = input[3][5] */
  w33 = arg[3] ? arg[3][5] : 0;
  /* #260: @36 = input[3][6] */
  w36 = arg[3] ? arg[3][6] : 0;
  /* #261: @14 = input[3][7] */
  w14 = arg[3] ? arg[3][7] : 0;
  /* #262: @38 = input[3][8] */
  w38 = arg[3] ? arg[3][8] : 0;
  /* #263: @8 = input[3][9] */
  w8 = arg[3] ? arg[3][9] : 0;
  /* #264: @9 = input[3][10] */
  w9 = arg[3] ? arg[3][10] : 0;
  /* #265: @4 = input[3][11] */
  w4 = arg[3] ? arg[3][11] : 0;
  /* #266: @13 = input[3][12] */
  w13 = arg[3] ? arg[3][12] : 0;
  /* #267: @45 = input[3][13] */
  w45 = arg[3] ? arg[3][13] : 0;
  /* #268: @39 = input[3][14] */
  w39 = arg[3] ? arg[3][14] : 0;
  /* #269: @37 = input[3][15] */
  w37 = arg[3] ? arg[3][15] : 0;
  /* #270: @44 = input[3][16] */
  w44 = arg[3] ? arg[3][16] : 0;
  /* #271: @58 = vertcat(@15, @10, @5, @31, @28, @33, @36, @14, @38, @8, @9, @4, @13, @45, @39, @37, @44, @3, @7, @12) */
  rr=w58;
  *rr++ = w15;
  *rr++ = w10;
  *rr++ = w5;
  *rr++ = w31;
  *rr++ = w28;
  *rr++ = w33;
  *rr++ = w36;
  *rr++ = w14;
  *rr++ = w38;
  *rr++ = w8;
  *rr++ = w9;
  *rr++ = w4;
  *rr++ = w13;
  *rr++ = w45;
  *rr++ = w39;
  *rr++ = w37;
  *rr++ = w44;
  *rr++ = w3;
  *rr++ = w7;
  *rr++ = w12;
  /* #272: @19 = @58[3:6] */
  for (rr=w19, ss=w58+3; ss!=w58+6; ss+=1) *rr++ = *ss;
  /* #273: @32 = @58[:3] */
  for (rr=w32, ss=w58+0; ss!=w58+3; ss+=1) *rr++ = *ss;
  /* #274: @46 = vertcat(@2, @6, @11, @16, @17, @18, @23, @24, @25, @26, @30, @34, @35) */
  rr=w46;
  *rr++ = w2;
  *rr++ = w6;
  *rr++ = w11;
  *rr++ = w16;
  *rr++ = w17;
  *rr++ = w18;
  *rr++ = w23;
  *rr++ = w24;
  *rr++ = w25;
  *rr++ = w26;
  *rr++ = w30;
  *rr++ = w34;
  *rr++ = w35;
  /* #275: @41 = @46[:3] */
  for (rr=w41, ss=w46+0; ss!=w46+3; ss+=1) *rr++ = *ss;
  /* #276: @32 = (@32-@41) */
  for (i=0, rr=w32, cs=w41; i<3; ++i) (*rr++) -= (*cs++);
  /* #277: @2 = dot(@19, @32) */
  w2 = casadi_dot(3, w19, w32);
  /* #278: @32 = (@2*@19) */
  for (i=0, rr=w32, cs=w19; i<3; ++i) (*rr++)  = (w2*(*cs++));
  /* #279: @41 = @32' */
  casadi_copy(w32, 3, w41);
  /* #280: @41 = (-@41) */
  for (i=0, rr=w41, cs=w41; i<3; ++i) *rr++ = (- *cs++ );
  /* #281: @40 = @46[3:6] */
  for (rr=w40, ss=w46+3; ss!=w46+6; ss+=1) *rr++ = *ss;
  /* #282: @2 = dot(@19, @40) */
  w2 = casadi_dot(3, w19, w40);
  /* #283: @19 = (@2*@19) */
  for (i=0, rr=w19, cs=w19; i<3; ++i) (*rr++)  = (w2*(*cs++));
  /* #284: @0 = mac(@41,@19,@0) */
  for (i=0, rr=(&w0); i<1; ++i) for (j=0; j<1; ++j, ++rr) for (k=0, ss=w41+j, tt=w19+i*3; k<3; ++k) *rr += ss[k*1]**tt++;
  /* #285: @2 = 0.1 */
  w2 = 1.0000000000000001e-01;
  /* #286: @6 = 0 */
  w6 = 0.;
  /* #287: @11 = 0.5 */
  w11 = 5.0000000000000000e-01;
  /* #288: @41 = @32' */
  casadi_copy(w32, 3, w41);
  /* #289: @41 = (@11*@41) */
  for (i=0, rr=w41, cs=w41; i<3; ++i) (*rr++)  = (w11*(*cs++));
  /* #290: @6 = mac(@41,@32,@6) */
  for (i=0, rr=(&w6); i<1; ++i) for (j=0; j<1; ++j, ++rr) for (k=0, ss=w41+j, tt=w32+i*3; k<3; ++k) *rr += ss[k*1]**tt++;
  /* #291: @2 = (@2*@6) */
  w2 *= w6;
  /* #292: @0 = (@0+@2) */
  w0 += w2;
  /* #293: output[0][1] = @0 */
  if (res[0]) res[0][1] = w0;
  return 0;
}

CASADI_SYMBOL_EXPORT int Drone_ode_complete_2_constr_h_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int Drone_ode_complete_2_constr_h_fun_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int Drone_ode_complete_2_constr_h_fun_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void Drone_ode_complete_2_constr_h_fun_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int Drone_ode_complete_2_constr_h_fun_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void Drone_ode_complete_2_constr_h_fun_release(int mem) {
}

CASADI_SYMBOL_EXPORT void Drone_ode_complete_2_constr_h_fun_incref(void) {
}

CASADI_SYMBOL_EXPORT void Drone_ode_complete_2_constr_h_fun_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int Drone_ode_complete_2_constr_h_fun_n_in(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_int Drone_ode_complete_2_constr_h_fun_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real Drone_ode_complete_2_constr_h_fun_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* Drone_ode_complete_2_constr_h_fun_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* Drone_ode_complete_2_constr_h_fun_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* Drone_ode_complete_2_constr_h_fun_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s4;
    case 1: return casadi_s11;
    case 2: return casadi_s13;
    case 3: return casadi_s14;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* Drone_ode_complete_2_constr_h_fun_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s15;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int Drone_ode_complete_2_constr_h_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 24;
  if (sz_res) *sz_res = 7;
  if (sz_iw) *sz_iw = 5;
  if (sz_w) *sz_w = 169;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
