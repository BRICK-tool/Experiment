#ifndef __REAL_H_
#define __REAL_H_

#ifdef __INTEL_COMPILER_
#include <mathimf.h>
#define M_PI   3.14159265358979323846
#define M_E    2.71828182845904523536
#define M_LN2  0.69314718055994530942
#define M_LN10 2.30258509299404568402
#else
#include <math.h>
#endif

#ifdef USE_DOUBLE

#ifndef HAVE_REAL_T
typedef double real_t;
#define HAVE_REAL_T
#endif

#define FLT_EPSILON 2.2204460492503131e-16
#define FLT_MAX 1.7976931348623157e+308
#define FLT_MIN 2.2250738585072014e-308

#else

#ifndef HAVE_REAL_T
typedef float real_t;
#define HAVE_REAL_T
#endif

#define FLT_EPSILON 1.1920928e-7
#define FLT_MAX 3.402823466e+38
#define FLT_MIN 1.175494351e-38

#endif

#endif
#define BASE 100
#include <stdlib.h>
/* ABSMAXMA.C */
real_t absmaxmat(int lr, int ur, int lc, int uc, int *i, int *j, real_t **a);
/* CARPOL.C */
void carpol(real_t ar, real_t ai, real_t *r, real_t *c, real_t *s);
/* CHSH2.C */
void chsh2(real_t a1r, real_t a1i, real_t a2r, real_t a2i, real_t *c, real_t *sr, real_t *si);
/* COLCST.C */
void colcst(int l, int u, int j, real_t **a, real_t x);
/* COMABS.C */
real_t comabs(real_t xr, real_t xi);
/* COMCOLCS.C */
void comcolcst(int l, int u, int j, real_t **ar, real_t **ai, real_t xr, real_t xi);
/* COMDIV.C */
void comdiv(real_t xr, real_t xi, real_t yr, real_t yi, real_t *zr, real_t *zi);
/* COMEUCNR.C */
real_t comeucnrm(real_t **ar, real_t **ai, int lw, int n);
/* COMMATVE.C */
void commatvec(int l, int u, int i, real_t **ar, real_t **ai, real_t br[], real_t bi[], real_t *rr, real_t *ri);
/* COMMUL.C */
void commul(real_t ar, real_t ai, real_t br, real_t bi, real_t *rr, real_t *ri);
/* COMROWCS.C */
void comrowcst(int l, int u, int i, real_t **ar, real_t **ai, real_t xr, real_t xi);
/* COMSCL.C */
void comscl(real_t **a, int n, int n1, int n2, real_t im[]);
/* COMSQRT.C */
void comsqrt(real_t ar, real_t ai, real_t *pr, real_t *pi);
/* DUPCOLVE.C */
void dupcolvec(int l, int u, int j, real_t **a, real_t b[]);
/* DUPMAT.C */
void dupmat(int l, int u, int i, int j, real_t **a, real_t **b);
/* DUPROWVE.C */
void duprowvec(int l, int u, int i, real_t **a, real_t b[]);
/* DUPVEC.C */
void dupvec(int l, int u, int shift, real_t a[], real_t b[]);
/* DUPVECCO.C */
void dupveccol(int l, int u, int j, real_t a[], real_t **b);
/* DUPVECRO.C */
void dupvecrow(int l, int u, int i, real_t a[], real_t **b);
/* ELMCOL.C */
void elmcol(int l, int u, int i, int j, real_t **a, real_t **b, real_t x);
/* ELMCOLRO.C */
void elmcolrow(int l, int u, int i, int j, real_t **a, real_t **b, real_t x);
/* ELMCOLVE.C */
void elmcolvec(int l, int u, int i, real_t **a, real_t b[], real_t x);
/* ELMCOMCO.C */
void elmcomcol(int l, int u, int i, int j, real_t **ar, real_t **ai, real_t **br, real_t **bi, real_t xr, real_t xi);
/* ELMCOMRO.C */
void elmcomrowvec(int l, int u, int i, real_t **ar, real_t **ai, real_t br[], real_t bi[], real_t xr, real_t xi);
/* ELMCOMVE.C */
void elmcomveccol(int l, int u, int j, real_t ar[], real_t ai[], real_t **br, real_t **bi, real_t xr, real_t xi);
/* ELMROW.C */
void elmrow(int l, int u, int i, int j, real_t **a, real_t **b, real_t x);
/* ELMROWCO.C */
void elmrowcol(int l, int u, int i, int j, real_t **a, real_t **b, real_t x);
/* ELMROWVE.C */
void elmrowvec(int l, int u, int i, real_t **a, real_t b[], real_t x);
/* ELMVEC.C */
void elmvec(int l, int u, int shift, real_t a[], real_t b[], real_t x);
/* ELMVECCO.C */
void elmveccol(int l, int u, int i, real_t a[], real_t **b, real_t x);
/* ELMVECRO.C */
void elmvecrow(int l, int u, int i, real_t a[], real_t **b, real_t x);
/* FULMATVE.C */
void fulmatvec(int lr, int ur, int lc, int uc, real_t **a, real_t b[], real_t c[]);
/* FULSYMMA.C */
void fulsymmatvec(int lr, int ur, int lc, int uc, real_t a[], real_t b[], real_t c[]);
/* FULTAMVE.C */
void fultamvec(int lr, int ur, int lc, int uc, real_t **a, real_t b[], real_t c[]);
/* HSHCOLMA.C */
void hshcolmat(int lr, int ur, int lc, int uc, int i, real_t x, real_t **u, real_t **a);
/* HSHCOLTA.C */
void hshcoltam(int lr, int ur, int lc, int uc, int i, real_t x, real_t **u, real_t **a);
/* HSHCOMCO.C */
int hshcomcol(int l, int u, int j, real_t **ar, real_t **ai, real_t tol, real_t *k, real_t *c, real_t *s, real_t *t);
/* HSHCOMPR.C */
void hshcomprd(int i, int ii, int l, int u, int j, real_t **ar, real_t **ai, real_t **br, real_t **bi, real_t t);
/* HSHROWMA.C */
void hshrowmat(int lr, int ur, int lc, int uc, int i, real_t x, real_t **u, real_t **a);
/* HSHROWTA.C */
void hshrowtam(int lr, int ur, int lc, int uc, int i, real_t x, real_t **u, real_t **a);
/* HSHVECMA.C */
void hshvecmat(int lr, int ur, int lc, int uc, real_t x, real_t u[], real_t **a);
/* HSHVECTA.C */
void hshvectam(int lr, int ur, int lc, int uc, real_t x, real_t u[], real_t **a);
/* ICHCOL.C */
void ichcol(int l, int u, int i, int j, real_t **a);
/* ICHROW.C */
void ichrow(int l, int u, int i, int j, real_t **a);
/* ICHROWCO.C */
void ichrowcol(int l, int u, int i, int j, real_t **a);
/* ICHSEQ.C */
void ichseq(int l, int u, int il, int shift, real_t a[]);
/* ICHSEQVE.C */
void ichseqvec(int l, int u, int il, int shift, real_t a[]);
/* ICHVEC.C */
void ichvec(int l, int u, int shift, real_t a[]);
/* INFNRMCO.C */
real_t infnrmcol(int l, int u, int j, int *k, real_t **a);
/* INFNRMMA.C */
real_t infnrmmat(int lr, int ur, int lc, int uc, int *kr, real_t **a);
/* INFNRMRO.C */
real_t infnrmrow(int l, int u, int i, int *k, real_t **a);
/* INFNRMVE.C */
real_t infnrmvec(int l, int u, int *k, real_t a[]);
/* INIMAT.C */
void inimat(int lr, int ur, int lc, int uc, real_t **a, real_t x);
/* INIMATD.C */
void inimatd(int lr, int ur, int shift, real_t **a, real_t x);
/* INISYMD.C */
void inisymd(int lr, int ur, int shift, real_t a[], real_t x);
/* INISYMRO.C */
void inisymrow(int l, int u, int i, real_t a[], real_t x);
/* INIVEC.C */
void inivec(int l, int u, real_t a[], real_t x);
/* LNGINTAD.C */
void lngintadd(int u[], int v[], int sum[]);
/* LNGINTDI.C */
void lngintdivide(int u[], int v[], int quotient[], int remainder[]);
/* LNGINTMU.C */
void lngintmult(int u[], int v[], int product[]);
/* LNGINTPO.C */
void lngintpower(int u[], int exponent, int result[]);
/* LNGINTSU.C */
void lngintsubtract(int u[], int v[], int difference[]);
/* MATMAT.C */
real_t matmat(int l, int u, int i, int j, real_t **a, real_t **b);
/* MATTAM.C */
real_t mattam(int l, int u, int i, int j, real_t **a, real_t **b);
/* MATVEC.C */
real_t matvec(int l, int u, int i, real_t **a, real_t b[]);
/* MAXELMRO.C */
int maxelmrow(int l, int u, int i, int j, real_t **a, real_t **b, real_t x);
/* MULCOL.C */
void mulcol(int l, int u, int i, int j, real_t **a, real_t **b, real_t x);
/* MULROW.C */
void mulrow(int l, int u, int i, int j, real_t **a, real_t **b, real_t x);
/* MULVEC.C */
void mulvec(int l, int u, int shift, real_t a[], real_t b[], real_t x);
/* ONENRMCO.C */
real_t onenrmcol(int l, int u, int j, real_t **a);
/* ONENRMMA.C */
real_t onenrmmat(int lr, int ur, int lc, int uc, int *kc, real_t **a);
/* ONENRMRO.C */
real_t onenrmrow(int l, int u, int i, real_t **a);
/* ONENRMVE.C */
real_t onenrmvec(int l, int u, real_t a[]);
/* REASCL.C */
void reascl(real_t **a, int n, int n1, int n2);
/* RESVEC.C */
void resvec(int lr, int ur, int lc, int uc, real_t **a, real_t b[], real_t c[], real_t x);
/* ROTCOL.C */
void rotcol(int l, int u, int i, int j, real_t **a, real_t c, real_t s);
/* ROTCOMCO.C */
void rotcomcol(int l, int u, int i, int j, real_t **ar, real_t **ai, real_t cr, real_t ci, real_t s);
/* ROTCOMRO.C */
void rotcomrow(int l, int u, int i, int j, real_t **ar, real_t **ai, real_t cr, real_t ci, real_t s);
/* ROTROW.C */
void rotrow(int l, int u, int i, int j, real_t **a, real_t c, real_t s);
/* ROWCST.C */
void rowcst(int l, int u, int i, real_t **a, real_t x);
/* SCAPRD1.C */
real_t scaprd1(int la, int sa, int lb, int sb, int n, real_t a[], real_t b[]);
/* SCLCOM.C */
void sclcom(real_t **ar, real_t **ai, int n, int n1, int n2);
/* SEQVEC.C */
real_t seqvec(int l, int u, int il, int shift, real_t a[], real_t b[]);
/* SYMMATVE.C */
real_t symmatvec(int l, int u, int i, real_t a[], real_t b[]);
/* SYMRESVE.C */
void symresvec(int lr, int ur, int lc, int uc, real_t a[], real_t b[], real_t c[], real_t x);
/* TAMMAT.C */
real_t tammat(int l, int u, int i, int j, real_t **a, real_t **b);
/* TAMVEC.C */
real_t tamvec(int l, int u, int i, real_t **a, real_t b[]);
/* VECVEC.C */
real_t vecvec(int l, int u, int shift, real_t a[], real_t b[]);
real_t absmaxmat(int lr, int ur, int lc, int uc, int *i, int *j, real_t **a)
{
	real_t infnrmcol(int, int, int, int *, real_t **);
	int ii;
	real_t r, max;

	max=0.0;
	*i=lr;
	*j=lc;
	for (; lc<=uc; lc++) {
		r=infnrmcol(lr,ur,lc,&ii,a);
		if (r > max) {
			max=r;
			*i=ii;
			*j=lc;
		}
	}
	return (max);
}



void carpol(real_t ar, real_t ai, real_t *r, real_t *c, real_t *s)
{
	real_t temp;

	if (ar == 0.0 && ai == 0.0) {
		*c = 1.0;
		*r = *s = 0.0;
	} else {
		if (fabs(ar) > fabs(ai)) {
			temp=ai/ar;
			*r = fabs(ar)*sqrt(1.0+temp*temp);
		} else {
			temp=ar/ai;
			*r = fabs(ai)*sqrt(1.0+temp*temp);
		}
		*c = ar / *r;
		*s = ai / *r;
	}
}



void chsh2(real_t a1r, real_t a1i, real_t a2r, real_t a2i,real_t *c, real_t *sr, real_t *si)
{
	real_t r;

	if (a2r != 0.0 || a2i != 0.0) {
		if (a1r != 0.0 || a1i != 0.0) {
			r=sqrt(a1r*a1r+a1i*a1i);
			*c=r;
			*sr=(a1r*a2r+a1i*a2i)/r;
			*si=(a1r*a2i-a1i*a2r)/r;
			r=sqrt(*c * *c + *sr * *sr + *si * *si);
			*c /= r;
			*sr /= r;
			*si /= r;
		} else {
			*si = *c = 0.0;
			*sr=1.0;
		}
	} else {
		*c=1.0;
		*sr = *si = 0.0;
	}
}

void colcst(int l, int u, int j, real_t **a, real_t x)
{
	for (; l<=u; l++) a[l][j] *= x;
}



real_t comabs(real_t xr, real_t xi)
{
	real_t temp;

	xr=fabs(xr);
	xi=fabs(xi);
	if (xi > xr) {
		temp=xr/xi;
		return (sqrt(temp*temp+1.0)*xi);
	}
	if (xi == 0.0)
		return (xr);
	else {
		temp=xi/xr;
		return (sqrt(temp*temp+1.0)*xr);
	}
}

void comcolcst(int l, int u, int j,real_t **ar, real_t **ai, real_t xr, real_t xi)
{
	void commul(real_t, real_t, real_t, real_t, real_t *, real_t *);

	for (; l<=u; l++)
		commul(ar[l][j],ai[l][j],xr,xi,&ar[l][j],&ai[l][j]);
}



void comdiv(real_t xr, real_t xi, real_t yr, real_t yi, real_t *zr, real_t *zi)
{
	real_t h,d;

	if (fabs(yi) < fabs(yr)) {
		if (yi == 0.0) {
			*zr=xr/yr;
			*zi=xi/yr;
		} else {
			h=yi/yr;
			d=h*yi+yr;
			*zr=(xr+h*xi)/d;
			*zi=(xi-h*xr)/d;
		}
	} else {
		h=yr/yi;
		d=h*yr+yi;
		*zr=(xr*h+xi)/d;
		*zi=(xi*h-xr)/d;
	}
}



real_t comeucnrm(real_t **ar, real_t **ai, int lw, int n)
{
	real_t mattam(int, int, int, int, real_t **, real_t **);
	int i,l;
	real_t r;

	r=0.0;
	for (i=1; i<=n; i++) {
		l=(i>lw) ? i-lw : 1;
		r += mattam(l,n,i,i,ar,ar)+mattam(l,n,i,i,ai,ai);
	}
	return (sqrt(r));
}

void commatvec(int l, int u, int i, real_t **ar, real_t **ai,real_t br[], real_t bi[], real_t *rr, real_t *ri)
{
	real_t matvec(int, int, int, real_t **, real_t []);
	real_t mv;

	mv=matvec(l,u,i,ar,br)-matvec(l,u,i,ai,bi);
	*ri=matvec(l,u,i,ai,br)+matvec(l,u,i,ar,bi);
	*rr=mv;
}

void commul(real_t ar, real_t ai, real_t br, real_t bi, real_t *rr, real_t *ri)
{
	*rr=ar*br-ai*bi;
	*ri=ar*bi+ai*br;
}

void comrowcst(int l, int u, int i,real_t **ar, real_t **ai, real_t xr, real_t xi)
{
	void commul(real_t, real_t, real_t, real_t, real_t *, real_t *);

	for (; l<=u; l++)
		commul(ar[i][l],ai[i][l],xr,xi,&ar[i][l],&ai[i][l]);
}



void comscl(real_t **a, int n, int n1, int n2, real_t im[])
{
	int i,j,k;
	real_t s,u,v,w,aij,aij1;

	for (j=n1; j<=n2; j++) {
		s=0.0;
		if (im[j] != 0.0) {
			for (i=1; i<=n; i++) {
				aij=a[i][j];
				aij1=a[i][j+1];
				u=aij*aij+aij1*aij1;
				if (u > s) {
					s=u;
					k=i;
				}
			}
			if (s != 0.0) {
				v=a[k][j]/s;
				w = -a[k][j+1]/s;
				for (i=1; i<=n; i++) {
					u=a[i][j];
					s=a[i][j+1];
					a[i][j]=u*v-s*w;
					a[i][j+1]=u*w+s*v;
				}
			}
			j++;
		} else {
			for (i=1; i<=n; i++)
				if (fabs(a[i][j]) > fabs(s)) s=a[i][j];
			if (s != 0.0)
				for (i=1; i<=n; i++)
					a[i][j] /= s;
		}
	}
}



void comsqrt(real_t ar, real_t ai, real_t *pr, real_t *pi)
{
	real_t br,bi,h,temp;

	if (ar == 0.0 && ai == 0.0)
		*pr = *pi = 0.0;
	else {
		br=fabs(ar);
		bi=fabs(ai);
		if (bi < br) {
			temp=bi/br;
			if (br < 1.0)
				h=sqrt((sqrt(temp*temp+1.0)*0.5+0.5)*br);
			else
				h=sqrt((sqrt(temp*temp+1.0)*0.125+0.125)*br)*2;
		} else {
			if (bi < 1.0) {
				temp=br/bi;
				h=sqrt((sqrt(temp*temp+1.0)*bi+br)*2)*0.5;
			} else {
				if (br+1.0 == 1.0)
					h=sqrt(bi*0.5);
				else {
					temp=br/bi;
					h=sqrt(sqrt(temp*temp+1.0)*bi*0.125+br*0.125)*2;
				}
			}
		}
		if (ar >= 0.0) {
			*pr=h;
			*pi=ai/h*0.5;
		} else {
			*pi = (ai >= 0.0) ? h : -h;
			*pr = bi/h*0.5;
		}
	}
}

void dupcolvec(int l, int u, int j, real_t **a, real_t b[])
{
	for (; l<=u; l++) a[l][j]=b[l];
}


void dupmat(int l, int u, int i, int j, real_t **a, real_t **b)
{
	int k;

	for (; l<=u; l++)
		for (k=i; k<=j; k++) a[l][k]=b[l][k];
}

void duprowvec(int l, int u, int i, real_t **a, real_t b[])
{
	for (; l<=u; l++) a[i][l]=b[l];
}

void dupvec(int l, int u, int shift, real_t a[], real_t b[])
{
	for (; l<=u; l++) a[l]=b[l+shift];
}

void dupveccol(int l, int u, int j, real_t a[], real_t **b)
{
	for (; l<=u; l++) a[l]=b[l][j];
}


void dupvecrow(int l, int u, int i, real_t a[], real_t **b)
{
	for (; l<=u; l++) a[l]=b[i][l];
}

void elmcol(int l, int u, int i, int j, real_t **a, real_t **b, real_t x)
{
	for (; l<=u; l++) a[l][i] += b[l][j]*x;
}

void elmcolrow(int l, int u, int i, int j, real_t **a, real_t **b, real_t x)
{
	for (; l<=u; l++) a[l][i] += b[j][l]*x;
}

void elmcolvec(int l, int u, int i, real_t **a, real_t b[], real_t x)
{
	for (; l<=u; l++) a[l][i] += b[l]*x;
}

void elmcomcol(int l, int u, int i, int j, real_t **ar, real_t **ai,real_t **br, real_t **bi, real_t xr, real_t xi)
{
	void elmcol(int, int, int, int, real_t **, real_t **, real_t);

	elmcol(l,u,i,j,ar,br,xr);
	elmcol(l,u,i,j,ar,bi,-xi);
	elmcol(l,u,i,j,ai,br,xi);
	elmcol(l,u,i,j,ai,bi,xr);
}

void elmcomrowvec(int l, int u, int i, real_t **ar, real_t **ai,real_t br[], real_t bi[], real_t xr, real_t xi)
{
	void elmrowvec(int, int, int, real_t **, real_t [], real_t);

	elmrowvec(l,u,i,ar,br,xr);
	elmrowvec(l,u,i,ar,bi,-xi);
	elmrowvec(l,u,i,ai,br,xi);
	elmrowvec(l,u,i,ai,bi,xr);
}

void elmcomveccol(int l, int u, int j, real_t ar[], real_t ai[],real_t **br, real_t **bi, real_t xr, real_t xi)
{
	void elmveccol(int, int, int, real_t [], real_t **, real_t);

	elmveccol(l,u,j,ar,br,xr);
	elmveccol(l,u,j,ar,bi,-xi);
	elmveccol(l,u,j,ai,br,xi);
	elmveccol(l,u,j,ai,bi,xr);
}

void elmrow(int l, int u, int i, int j, real_t **a, real_t **b, real_t x)
{
	for (; l<=u; l++) a[i][l] += b[j][l]*x;
}

void elmrowcol(int l, int u, int i, int j, real_t **a, real_t **b, real_t x)
{
	for (; l<=u; l++) a[i][l] += b[l][j]*x;
}

void elmrowvec(int l, int u, int i, real_t **a, real_t b[], real_t x)
{
	for (; l<=u; l++) a[i][l] += b[l]*x;
}

void elmvec(int l, int u, int shift, real_t a[], real_t b[], real_t x)
{
	for (; l<=u; l++) a[l] += b[l+shift]*x;
}

void elmveccol(int l, int u, int i, real_t a[], real_t **b, real_t x)
{
	for (; l<=u; l++) a[l] += b[l][i]*x;
}

void elmvecrow(int l, int u, int i, real_t a[], real_t **b, real_t x)
{
	for (; l<=u; l++) a[l] += b[i][l]*x;
}

void fulmatvec(int lr, int ur, int lc, int uc,real_t **a, real_t b[], real_t c[])
{
	real_t matvec(int, int, int, real_t **, real_t []);

	for (; lr<=ur; lr++) c[lr]=matvec(lc,uc,lr,a,b);
}

void fulsymmatvec(int lr, int ur, int lc, int uc,real_t a[], real_t b[], real_t c[])
{
	real_t symmatvec(int, int, int, real_t [], real_t []);

	for (; lr<=ur; lr++) c[lr]=symmatvec(lc,uc,lr,a,b);
}

void fultamvec(int lr, int ur, int lc, int uc,real_t **a, real_t b[], real_t c[])
{
	real_t tamvec(int, int, int, real_t **, real_t []);

	for (; lc<=uc; lc++) c[lc]=tamvec(lr,ur,lc,a,b);
}

void hshcolmat(int lr, int ur, int lc, int uc, int i,real_t x, real_t **u, real_t **a)
{
	void elmcol(int, int, int, int, real_t **, real_t **, real_t);
	real_t tammat(int, int, int, int, real_t **, real_t **);

	for (; lc<=uc; lc++) elmcol(lr,ur,lc,i,a,u,tammat(lr,ur,lc,i,a,u)*x);
}

void hshcoltam(int lr, int ur, int lc, int uc, int i,real_t x, real_t **u, real_t **a)
{
	real_t matmat(int, int, int, int, real_t **, real_t **);
	void elmrowcol(int, int, int, int, real_t **, real_t **, real_t);

	for (; lr<=ur; lr++) elmrowcol(lc,uc,lr,i,a,u,matmat(lc,uc,lr,i,a,u)*x);
}



int hshcomcol(int l, int u, int j, real_t **ar, real_t **ai, real_t tol,real_t *k, real_t *c, real_t *s, real_t *t)
{
	void carpol(real_t, real_t, real_t *, real_t *, real_t *);
	real_t tammat(int, int, int, int, real_t **, real_t **);
	real_t vr, mod, h, arlj, ailj;

	vr=tammat(l+1,u,j,j,ar,ar)+tammat(l+1,u,j,j,ai,ai);
	arlj=ar[l][j];
	ailj=ai[l][j];
	carpol(arlj,ailj,&mod,c,s);
	if (vr > tol) {
		vr += arlj*arlj+ailj*ailj;
		h = *k = sqrt(vr);
		*t=vr+mod*h;
		if (arlj == 0.0 && ailj == 0.0)
			ar[l][j]=h;
		else {
			ar[l][j]=arlj + *c * *k;
			ai[l][j]=ailj + *s * *k;
			*s = - *s;
		}
		*c = - *c;
		return (1);
	} else {
		*k=mod;
		*t = -1.0;
		return (0);
	}
}

void hshcomprd(int i, int ii, int l, int u, int j, real_t **ar,real_t **ai,	real_t **br, real_t **bi, real_t t)
{
	void elmcomcol(int, int, int, int, real_t **, real_t **,
						real_t **, real_t **, real_t, real_t);
	real_t tammat(int, int, int, int, real_t **, real_t **);

	for (; l<=u; l++)
		elmcomcol(i,ii,l,j,ar,ai,br,bi,
					(-tammat(i,ii,j,l,br,ar)-tammat(i,ii,j,l,bi,ai))/t,
					(tammat(i,ii,j,l,bi,ar)-tammat(i,ii,j,l,br,ai))/t);
}

void hshrowmat(int lr, int ur, int lc, int uc, int i,real_t x, real_t **u, real_t **a)
{
	real_t matmat(int, int, int, int, real_t **, real_t **);
	void elmcolrow(int, int, int, int, real_t **, real_t **, real_t);

	for (; lc<=uc; lc++) elmcolrow(lr,ur,lc,i,a,u,matmat(lr,ur,i,lc,u,a)*x);
}

void hshrowtam(int lr, int ur, int lc, int uc, int i,real_t x, real_t **u, real_t **a)
{
	real_t mattam(int, int, int, int, real_t **, real_t **);
	void elmrow(int, int, int, int, real_t **, real_t **, real_t);

	for (; lr<=ur; lr++) elmrow(lc,uc,lr,i,a,u,mattam(lc,uc,lr,i,a,u)*x);
}

void hshvecmat(int lr, int ur, int lc, int uc,real_t x, real_t u[], real_t **a)
{
	void elmcolvec(int, int, int, real_t **, real_t [], real_t);
	real_t tamvec(int, int, int, real_t **, real_t []);

	for (; lc<=uc; lc++) elmcolvec(lr,ur,lc,a,u,tamvec(lr,ur,lc,a,u)*x);
}

void hshvectam(int lr, int ur, int lc, int uc,real_t x, real_t u[], real_t **a)
{
	real_t matvec(int, int, int, real_t **, real_t []);
	void elmrowvec(int, int, int, real_t **, real_t [], real_t);

	for (; lr<=ur; lr++) elmrowvec(lc,uc,lr,a,u,matvec(lc,uc,lr,a,u)*x);
}

void ichcol(int l, int u, int i, int j, real_t **a)
{
	real_t r;

	for (; l<=u; l++) {
		r=a[l][i];
		a[l][i]=a[l][j];
		a[l][j]=r;
	}
}

void ichrow(int l, int u, int i, int j, real_t **a)
{
	real_t r;

	for (; l<=u; l++) {
		r=a[i][l];
		a[i][l]=a[j][l];
		a[j][l]=r;
	}
}

void ichrowcol(int l, int u, int i, int j, real_t **a)
{
	real_t r;

	for (; l<=u; l++) {
		r=a[i][l];
		a[i][l]=a[l][j];
		a[l][j]=r;
	}
}

void ichseq(int l, int u, int il, int shift, real_t a[])
{
	real_t r;

	for (; l<=u; l++) {
		r=a[il];
		a[il]=a[il+shift];
		a[il+shift]=r;
		il += l;
	}
}

void ichseqvec(int l, int u, int il, int shift, real_t a[])
{
	real_t r;

	for (; l<=u; l++) {
		r=a[il];
		a[il]=a[l+shift];
		a[l+shift]=r;
		il += l;
	}
}

void ichvec(int l, int u, int shift, real_t a[])
{
	real_t r;

	for (; l<=u; l++) {
		r=a[l];
		a[l]=a[l+shift];
		a[l+shift]=r;
	}
}



real_t infnrmcol(int l, int u, int j, int *k, real_t **a)
{
	real_t r, max;

	max=0.0;
	*k=l;
	for (; l<=u; l++) {
		r=fabs(a[l][j]);
		if (r > max) {
			max=r;
			*k=l;
		}
	}
	return (max);
}

real_t infnrmmat(int lr, int ur, int lc, int uc, int *kr, real_t **a)
{
	real_t onenrmrow(int, int, int, real_t **);
	real_t r, max;

	max=0.0;
	*kr=lr;
	for (; lr<=ur; lr++) {
		r=onenrmrow(lc,uc,lr,a);
		if (r > max) {
			max=r;
			*kr=lr;
		}
	}
	return (max);
}



real_t infnrmrow(int l, int u, int i, int *k, real_t **a)
{
	real_t r, max;

	max=0.0;
	*k=l;
	for (; l<=u; l++) {
		r=fabs(a[i][l]);
		if (r > max) {
			max=r;
			*k=l;
		}
	}
	return (max);
}



real_t infnrmvec(int l, int u, int *k, real_t a[])
{
	real_t r, max;

	max=0.0;
	*k=l;
	for (; l<=u; l++) {
		r=fabs(a[l]);
		if (r > max) {
			max=r;
			*k=l;
		}
	}
	return (max);
}

void inimat(int lr, int ur, int lc, int uc, real_t **a, real_t x)
{
	int j;

	for (; lr<=ur; lr++)
		for (j=lc; j<=uc; j++) a[lr][j]=x;
}

void inimatd(int lr, int ur, int shift, real_t **a, real_t x)
{
	for (; lr<=ur; lr++) a[lr][lr+shift]=x;
}




void inisymd(int lr, int ur, int shift, real_t a[], real_t x)
{
	shift=abs(shift);
	ur += shift+1;
	shift += lr;
	lr += ((shift-3)*shift)/2;
	lr += shift;
	while (shift < ur) {
		a[lr]=x;
		shift++;
		lr += shift;
	}
}

void inisymrow(int l, int u, int i, real_t a[], real_t x)
{
	int k;

	if (l <= i) {
		k=((i-1)*i)/2;
		l += k;
		k += (u<i) ? u : i;
		for (; l<=k; l++) a[l]=x;
		l=i+1;
	}
	if (u > i) {
		k=((l-1)*l)/2+i;
		do {
			a[k]=x;
			l++;
			k += l-1;
		} while (l <= u);
	}
}


void inivec(int l, int u, real_t a[], real_t x)
{
	for (; l<=u; l++) a[l]=x;
}



void lngintadd(int u[], int v[], int sum[])
{
	int lu,lv,diff,carry,i,t,max;

	lu=u[0];
	lv=v[0];
	if (lu >= lv) {
		max=lu;
		diff=lu-lv+1;
		carry=0;
		for (i=lu; i>=diff; i--) {
			t=u[i]+v[i-diff+1]+carry;
			carry = (t < BASE) ? 0 : 1;
			sum[i]=t-carry*BASE;
		}
		for (i=diff-1; i>=1; i--) {
			t=u[i]+carry;
			carry = (t < BASE) ? 0 : 1;
			sum[i]=t-carry*BASE;
		}
	} else {
		max=lv;
		diff=lv-lu+1;
		carry=0;
		for (i=lv; i>=diff; i--) {
			t=v[i]+u[i-diff+1]+carry;
			carry = (t < BASE) ? 0 : 1;
			sum[i]=t-carry*BASE;
		}
		for (i=diff-1; i>=1; i--) {
			t=v[i]+carry;
			carry = (t < BASE) ? 0 : 1;
			sum[i]=t-carry*BASE;
		}
	}
	if (carry == 1) {
		for (i=max; i>=1; i--) sum[i+1]=sum[i];
		sum[1]=1;
		max=max+1;
	}
	sum[0]=max;
}



void lngintdivide(int u[], int v[], int quotient[], int remainder[])
{
	int *allocate_integer_vector(int, int);
	void free_integer_vector(int *, int);
	int lu,lv,v1,diff,i,t,scale,d,q1,j,carry,*uu,*a;

	lu=u[0];
	lv=v[0];
	v1=v[1];
	diff=lu-lv;

	if (lv == 1) {
		carry=0;
		for (i=1; i<=lu; i++) {
			t=carry*BASE+u[i];
			quotient[i]=t/v1;
			carry=t-quotient[i]*v1;
		}
		remainder[0]=1;
		remainder[1]=carry;
		if (quotient[1] == 0) {
			for (i=2; i<=lu; i++) quotient[i-1]=quotient[i];
			quotient[0]=lu - ((lu == 1) ? 0 : 1);
		} else
			quotient[0]=lu;
		return;
	}

	if (lu < lv) {
		quotient[0]=1;
		quotient[1]=0;
		for (i=0; i<=lu; i++) remainder[i]=u[i];
		return;
	}

	uu=allocate_integer_vector(0,lu);
	a=allocate_integer_vector(0,lv);
	for (i=0; i<=lu; i++) uu[i]=u[i];
	scale=BASE/(v1+1);
	if (scale > 1) {
		/* normalize u */
		carry=0;
		for (i=lu; i>=1; i--) {
			t=scale*uu[i]+carry;
			carry=t/BASE;
			uu[i]=t-carry*BASE;
		}
		uu[0]=carry;
		/* normalize v */
		carry=0;
		for (i=lv; i>=1; i--) {
			t=scale*v[i]+carry;
			carry=t/BASE;
			v[i]=t-carry*BASE;
		}
		v1=v[1];
	} else
		uu[0]=0;

	/* compute quotient and remainder */
	for (i=0; i<=diff; i++) {
		d=uu[i]*BASE+uu[i+1];
		q1 = (uu[i] == v1) ? BASE-1 : d/v1;
		if (v[2]*q1 > (d-q1*v1)*BASE+uu[i+2]) {
			q1--;
			if (v[2]*q1 > (d-q1*v1)*BASE+uu[i+2]) q1--;
		}
		/* uu[i:i+lv]=u[i:i+lv]-q1*v[1:lv] */
		carry=0;
		for (j=lv; j>=1; j--) {
			t=q1*v[j]+carry;
			carry=t/BASE;
			a[j]=t-carry*BASE;
		}
		a[0]=carry;
		carry=0;
		for (j=lv; j>=0; j--) {
			t=uu[i+j]-a[j]+carry;
			carry = (t < 0) ? -1 : 0;
			uu[i+j]=t-carry*BASE;
		}
		/* if carry=-1 then q1 is one too large,
			and v must be added back to uu[i:i+lv] */
		if (carry == -1) {
			q1--;
			carry=0;
			for (j=lv; j>=1; j--) {
				t=uu[i+j]+v[j]+carry;
				carry = (t < BASE) ? 0 :1;
				uu[i+j]=t-carry*BASE;
			}
		}
		quotient[i]=q1;
	}

	/* correct storage of quotient */
	if (quotient[0] != 0) {
		for (i=diff; i>=0; i--) quotient[i+1]=quotient[i];
		quotient[0]=diff+1;
	} else
		if (quotient[1] != 0)
			quotient[0]=diff;
		else {
			for (i=1; i<=diff-1; i++) quotient[i]=quotient[i+1];
			quotient[0]=diff-1;
		}

	/* remainder=uu[diff+1:lu]/scale */
	if (scale > 1) {
		carry=0;
		for (i=1; i<=lv; i++) {
			t=carry*BASE+uu[diff+i];
			remainder[i]=t/scale;
			carry=t-remainder[i]*scale;
		}
	} else
		for (i=1; i<=lv; i++) remainder[i]=uu[diff+i];

	/* correct storage of remainder */
	i=1;
	j=lv;
	while (remainder[i] == 0 && j > 1) {
		j--;
		i++;
	}
	remainder[0]=j;
	if (j < lv)
		for (i=1; i<=j; i++) remainder[i]=remainder[lv+i-j];

	/* unnormalize the divisor v */
	if (scale > 1) {
		carry=0;
		for (i=1; i<=lv; i++) {
			t=carry*BASE+v[i];
			v[i]=t/scale;
			carry=t-v[i]*scale;
		}
	}

	free_integer_vector(uu,0);
	free_integer_vector(a,0);
}



void lngintmult(int u[], int v[], int product[])
{
	int lu,lv,luv,i,j,carry,t;

	lu=u[0];
	lv=v[0];
	luv=lu+lv;
	for (i=lu+1; i<=luv; i++) product[i]=0;
	for (j=lu; j>=1; j--) {
		carry=0;
		for (i=lv; i>=1; i--) {
			t=u[j]*v[i]+product[j+i]+carry;
			carry=t/BASE;
			product[j+i]=t-carry*BASE;
		}
		product[j]=carry;
	}
	if (product[1] == 0) {
		for (i=2; i<=luv; i++) product[i-1]=product[i];
		luv--;
	}
	product[0]=luv;
}

void lngintpower(int u[], int exponent, int result[])
{
	int *allocate_integer_vector(int, int);
	void free_integer_vector(int *, int);
	void lngintmult(int [], int [], int []);
	int max,i,n,exp,*y,*z,*h;

	exp=exponent;
	max=u[0]*exp;
	y=allocate_integer_vector(0,max);
	z=allocate_integer_vector(0,max);
	h=allocate_integer_vector(0,max);

	y[0]=y[1]=1;
	for (i=u[0]; i>=0; i--) z[i]=u[i];
	while (1) {
		n=exp/2;
		if (n+n != exp) {
			lngintmult(y,z,h);
			for (i=h[0]; i>=0; i--) y[i]=h[i];
			if (n == 0) {
				for (i=y[0]; i>=0; i--) result[i]=y[i];
				free_integer_vector(y,0);
				free_integer_vector(z,0);
				free_integer_vector(h,0);
				return;
			}
		}
		lngintmult(z,z,h);
		for (i=h[0]; i>=0; i--) z[i]=h[i];
		exp=n;
	}
}



void lngintsubtract(int u[], int v[], int difference[])
{
	int lu,lv,diff,i,t,j,carry;

	lu=u[0];
	lv=v[0];
	if ((lu < lv) || ((lu == lv) && (u[1] < v[1]))) {
		difference[0]=0;
		return;
	}
	diff=lu-lv+1;
	carry=0;
	for (i=lu; i>=diff; i--) {
		t=u[i]-v[i-diff+1]+carry;
		carry = (t < 0) ? -1 : 0;
		difference[i]=t-carry*BASE;
	}
	for (i=diff-1; i>=1; i--) {
		t=u[i]+carry;
		carry = (t < 0) ? -1 : 0;
		difference[i]=t-carry*BASE;
	}
	if (carry == -1) {
		difference[0]=0;
		return;
	}
	i=1;
	j=lu;
	while ((difference[i] == 0) && (j > 1)) {
		j--;
		i++;
	}
	difference[0]=j;
	if (j < lu)
		for (i=1; i<=j; i++) difference[i]=difference[lu+i-j];
}

real_t matmat(int l, int u, int i, int j, real_t **a, real_t **b)
{
	int k;
	real_t s;

	s=0.0;
	for (k=l; k<=u; k++) s += a[i][k]*b[k][j];
	return (s);
}

real_t mattam(int l, int u, int i, int j, real_t **a, real_t **b)
{
	int k;
	real_t s;

	s=0.0;
	for (k=l; k<=u; k++) s += a[i][k]*b[j][k];
	return (s);
}

real_t matvec(int l, int u, int i, real_t **a, real_t b[])
{
	int k;
	real_t s;

	s=0.0;
	for (k=l; k<=u; k++) s += a[i][k]*b[k];
	return (s);
}



int maxelmrow(int l, int u, int i, int j, real_t **a, real_t **b, real_t x)
{
	int k;
	real_t r, s;

	s=0.0;
	for (k=l; k<=u; k++) {
		r=(a[i][k] += b[j][k]*x);
		if (fabs(r) > s) {
			s=fabs(r);
			l=k;
		}
	}
	return (l);
}

void mulcol(int l, int u, int i, int j, real_t **a, real_t **b, real_t x)
{
	for (; l<=u; l++) a[l][i]=b[l][j]*x;
}

void mulrow(int l, int u, int i, int j, real_t **a, real_t **b, real_t x)
{
	for (; l<=u; l++) a[i][l]=b[j][l]*x;
}

void mulvec(int l, int u, int shift, real_t a[], real_t b[], real_t x)
{
	for (; l<=u; l++) a[l]=b[l+shift]*x;
}



real_t onenrmcol(int l, int u, int j, real_t **a)
{
	real_t sum;

	sum=0.0;
	for (; l<=u; l++) sum += fabs(a[l][j]);
	return (sum);
}

real_t onenrmmat(int lr, int ur, int lc, int uc, int *kc, real_t **a)
{
	real_t onenrmcol(int l, int u, int j, real_t **a);
	real_t r, max;

	max=0.0;
	*kc=lc;
	for (; lc<=uc; lc++) {
		r=onenrmcol(lr,ur,lc,a);
		if (r > max) {
			max=r;
			*kc=lc;
		}
	}
	return (max);
}



real_t onenrmrow(int l, int u, int i, real_t **a)
{
	real_t sum;

	sum=0.0;
	for (; l<=u; l++) sum += fabs(a[i][l]);
	return (sum);
}



real_t onenrmvec(int l, int u, real_t a[])
{
	real_t sum;

	sum=0.0;
	for (; l<=u; l++) sum += fabs(a[l]);
	return (sum);
}



void reascl(real_t **a, int n, int n1, int n2)
{
	int i, j;
	real_t s;

	for (j=n1; j<=n2; j++) {
		s=0.0;
		for (i=1; i<=n; i++)
			if (fabs(a[i][j]) > fabs(s)) s=a[i][j];
		if (s != 0.0)
			for (i=1; i<=n; i++) a[i][j] /= s;
	}
}

void resvec(int lr, int ur, int lc, int uc, real_t **a, real_t b[], real_t c[], real_t x)
{
	real_t matvec(int, int, int, real_t **, real_t []);

	for (; lr<=ur; lr++) c[lr]=matvec(lc,uc,lr,a,b)+c[lr]*x;
}


void rotcol(int l, int u, int i, int j, real_t **a, real_t c, real_t s)
{
	real_t x, y;

	for (; l<=u; l++) {
		x=a[l][i];
		y=a[l][j];
		a[l][i]=x*c+y*s;
		a[l][j]=y*c-x*s;
	}
}

void rotcomcol(int l, int u, int i, int j, real_t **ar, real_t **ai, real_t cr, real_t ci, real_t s)
{
	real_t arli,aili,arlj,ailj;

	for (; l<=u; l++) {
		arli=ar[l][i];
		aili=ai[l][i];
		arlj=ar[l][j];
		ailj=ai[l][j];
		ar[l][i]=cr*arli+ci*aili-s*arlj;
		ai[l][i]=cr*aili-ci*arli-s*ailj;
		ar[l][j]=cr*arlj-ci*ailj+s*arli;
		ai[l][j]=cr*ailj+ci*arlj+s*aili;
	}
}

void rotcomrow(int l, int u, int i, int j, real_t **ar, real_t **ai, real_t cr, real_t ci, real_t s)
{
	real_t aril,aiil,arjl,aijl;

	for (; l<=u; l++) {
		aril=ar[i][l];
		aiil=ai[i][l];
		arjl=ar[j][l];
		aijl=ai[j][l];
		ar[i][l]=cr*aril+ci*aiil+s*arjl;
		ai[i][l]=cr*aiil-ci*aril+s*aijl;
		ar[j][l]=cr*arjl-ci*aijl-s*aril;
		ai[j][l]=cr*aijl+ci*arjl-s*aiil;
	}
}

void rotrow(int l, int u, int i, int j, real_t **a, real_t c, real_t s)
{
	real_t x, y;

	for (; l<=u; l++) {
		x=a[i][l];
		y=a[j][l];
		a[i][l]=x*c+y*s;
		a[j][l]=y*c-x*s;
	}
}

void rowcst(int l, int u, int i, real_t **a, real_t x)
{
	for (; l<=u; l++) a[i][l] *= x;
}

real_t scaprd1(int la, int sa, int lb, int sb, int n, real_t a[], real_t b[])
{
	int k;
	real_t s;

	s=0.0;
	for (k=1; k<=n; k++) {
		s += a[la]*b[lb];
		la += sa;
		lb += sb;
	}
	return (s);
}

void sclcom(real_t **ar, real_t **ai, int n, int n1, int n2)
{
	void comcolcst(int, int, int, real_t **, real_t **, real_t, real_t);
	int i,j,k;
	real_t s,r,arij,aiij;

	for (j=n1; j<=n2; j++) {
		s=0.0;
		for (i=1; i<=n; i++) {
			arij=ar[i][j];
			aiij=ai[i][j];
			r=arij*arij+aiij*aiij;
			if (r > s) {
				s=r;
				k=i;
			}
		}
		if (s != 0.0) comcolcst(1,n,j,ar,ai,ar[k][j]/s,-ai[k][j]/s);
	}
}

real_t seqvec(int l, int u, int il, int shift, real_t a[], real_t b[])
{
	real_t s;

	s=0.0;
	for (; l<=u; l++) {
		s += a[il]*b[l+shift];
		il += l;
	}
	return (s);
}

real_t symmatvec(int l, int u, int i, real_t a[], real_t b[])
{
	int k, m;
	real_t vecvec(int, int, int, real_t [], real_t []);
	real_t seqvec(int, int, int, int, real_t [], real_t []);

	m=(l>i) ? l : i;
	k=(m*(m-1))/2;
	return (vecvec(l, (i<=u) ? i-1 : u, k,b,a) + seqvec(m,u,k+i,0,a,b));
}

void symresvec(int lr, int ur, int lc, int uc, real_t a[], real_t b[], real_t c[], real_t x)
{
	real_t symmatvec(int, int, int, real_t [], real_t []);

	for (; lr<=ur; lr++) c[lr]=symmatvec(lc,uc,lr,a,b)+c[lr]*x;
}

real_t tammat(int l, int u, int i, int j, real_t **a, real_t **b)
{
	int k;
	real_t s;

	s=0.0;
	for (k=l; k<=u; k++) s += a[k][i]*b[k][j];
	return (s);
}

real_t tamvec(int l, int u, int i, real_t **a, real_t b[])
{
	int k;
	real_t s;

	s=0.0;
	for (k=l; k<=u; k++) s += a[k][i]*b[k];
	return (s);
}

real_t vecvec(int l, int u, int shift, real_t a[], real_t b[])
{
	int k;
	real_t s;

	s=0.0;
	for (k=l; k<=u; k++) s += a[k]*b[k+shift];
	return (s);
}
/* ALLCHEPO.C */
void allchepol(int n, real_t x, real_t t[]);
/* ALLORTPO.C */
void allortpol(int n, real_t x, real_t b[], real_t c[], real_t p[]);
/* ALLORTPS.C */
void allortpolsym(int n, real_t x, real_t c[], real_t p[]);
/* CHEPOL.C */
real_t chepol(int n, real_t x);
/* CHEPOLSU.C */
real_t chepolsum(int n, real_t x, real_t a[]);
/* CHSPOL.C */
void chspol(int n, real_t a[]);
/* COMFOUS1.C */
void comfouser1(int n, real_t theta, real_t ar[], real_t ai[], real_t *rr, real_t *ri);
/* COMFOUS2.C */
void comfouser2(int n, real_t theta, real_t ar[], real_t ai[], real_t *rr, real_t *ri);
/* COMFOUSE.C */
void comfouser(int n, real_t theta, real_t a[], real_t *rr, real_t *ri);
/* COSSER.C */
real_t cosser(int n, real_t theta, real_t a[]);
/* DERPOL.C */
void derpol(int n, int k, real_t x, real_t a[]);
/* FOUSER1.C */
real_t fouser1(int n, real_t theta, real_t a[], real_t b[]);
/* FOUSER2.C */
real_t fouser2(int n, real_t theta, real_t a[], real_t b[]);
/* FOUSER.C */
real_t fouser(int n, real_t theta, real_t a[]);
/* GRNNEW.C */
void grnnew(int n, real_t x[], real_t a[]);
/* INTCHS.C */
void intchs(int n, real_t a[], real_t b[]);
/* JFRAC.C */
real_t jfrac(int n, real_t a[], real_t b[]);
/* LINTFMPO.C */
void lintfmpol(real_t p, real_t q, int n, real_t a[]);
/* NEWGRN.C */
void newgrn(int n, real_t x[], real_t a[]);
/* NORDERPO.C */
void norderpol(int n, int k, real_t x, real_t a[]);
/* ODDCHEPO.C */
real_t oddchepolsum(int n, real_t x, real_t a[]);
/* ORTPOL.C */
real_t ortpol(int n, real_t x, real_t b[], real_t c[]);
/* ORTPOLSY.C */
real_t ortpolsym(int n, real_t x, real_t c[]);
/* POL.C */
real_t pol(int n, real_t x, real_t a[]);
/* POLCHS.C */
void polchs(int n, real_t a[]);
/* POLSHTCH.C */
void polshtchs(int n, real_t a[]);
/* SHTCHSPO.C */
void shtchspol(int n, real_t a[]);
/* SINSER.C */
real_t sinser(int n, real_t theta, real_t b[]);
/* SUMORTPO.C */
real_t sumortpol(int n, real_t x, real_t b[], real_t c[], real_t a[]);
/* SUMORTPS.C */
real_t sumortpolsym(int n, real_t x, real_t c[], real_t a[]);
/* TAYPOL.C */
void taypol(int n, int k, real_t x, real_t a[]);
void allchepol(int n, real_t x, real_t t[])
{
	int i;
	real_t t1,t2,h,x2;

	if (n == 0) {
		t[0]=1.0;
		return;
	}
	if (n == 1) {
		t[0]=1.0;
		t[1]=x;
		return;
	}
	t[0]=t1=1.0;
	t[1]=t2=x;
	x2=x+x;
	for (i=2; i<=n; i++) {
		t[i]=h=x2*t2-t1;
		t1=t2;
		t2=h;;
	}
}
 
void allortpol(int n, real_t x, real_t b[], real_t c[], real_t p[])
{
	int k,k1;
	real_t r,s,h;

	if (n == 0) {
		p[0]=1.0;
		return;
	}
	r=p[1]=x-b[0];
	s=p[0]=1.0;
	k=1;
	for (k1=2; k1<=n; k1++) {
		h=r;
		p[k1]=r=(x-b[k])*r-c[k]*s;
		s=h;
		k=k1;
	}
}
 
void allortpolsym(int n, real_t x, real_t c[], real_t p[])
{
	int k;
	real_t r,s,h;

	if (n == 0) {
		p[0]=1.0;
		return;
	}
	r=p[1]=x;
	s=p[0]=1.0;
	for (k=2; k<=n; k++) {
		h=r;
		p[k]=r=x*r-c[k-1]*s;
		s=h;
	}
}
 
real_t chepol(int n, real_t x)
{
	int i;
	real_t t1,t2,h,x2;

	if (n == 0) return (1.0);
	if (n == 1) return (x);
	t2=x;
	t1=1.0;
	x2=x+x;
	for (i=2; i<=n; i++) {
		h=x2*t2-t1;
		t1=t2;
		t2=h;;
	}
	return (h);
}
 
real_t chepolsum(int n, real_t x, real_t a[])
{
	int k;
	real_t h,r,s,tx;

	if (n == 0) return (a[0]);
	if (n == 1) return (a[0]+a[1]*x);
	tx=x+x;
	r=a[n];
	h=a[n-1]+r*tx;
	for (k=n-2; k>=1; k--) {
		s=r;
		r=h;
		h=a[k]+r*tx-s;
	}
	return (a[0]-r+h*x);
}
 
void chspol(int n, real_t a[])
{
	int k,l,twopow;

	if (n > 1) {
		for (k=0; k<=n-2; k++) {
			for (l=n-2; l>=k; l--) a[l] -= a[l+2];
			a[k+1] /= 2.0;
		}
		twopow=2;
		for (k=1; k<=n-2; k++) {
			a[k] *= twopow;
			twopow *= 2;
		}
		a[n-1] *= twopow;
		a[n] *= twopow;
	}
}
 


void comfouser1(int n, real_t theta, real_t ar[], real_t ai[], real_t *rr, real_t *ri)
{
	int k;
	real_t h,hr,hi,co,si;

	hr=hi=0.0;
	co=cos(theta);
	si=sin(theta);
	for (k=n; k>=1; k--) {
		h=co*hr-si*hi+ar[k];
		hi=co*hi+si*hr+ai[k];
		hr=h;
	}
	*rr=co*hr-si*hi+ar[0];
	*ri=co*hi+si*hr+ai[0];
}
 


void comfouser2(int n, real_t theta, real_t ar[], real_t ai[],real_t *rr, real_t *ri)
{
	void comfouser(int, real_t, real_t [], real_t *, real_t *);
	real_t car,cai,sar,sai;

	comfouser(n,theta,ar,&car,&sar);
	comfouser(n,theta,ai,&cai,&sai);
	*rr=car-sai;
	*ri=cai+sar;
}
 


void comfouser(int n, real_t theta, real_t a[], real_t *rr, real_t *ri)
{
	int k;
	real_t c,cc,lambda,h,dun,un,un1,temp;

	c=cos(theta);
	if (c < -0.5) {
		temp=cos(theta/2.0);
		lambda=4.0*temp*temp;
		un=dun=0.0;
		for (k=n; k>=0; k--) {
			un=dun-un;
			dun=lambda*un-dun+a[k];
		}
		*rr=dun-lambda/2.0*un;
	} else {
		if (c > 0.5) {
			temp=sin(theta/2.0);
			lambda = -4.0*temp*temp;
			un=dun=0.0;
			for (k=n; k>=0; k--) {
				un += dun;
				dun += lambda*un+a[k];
			}
			*rr=dun-lambda/2.0*un;
		} else {
			cc=c+c;
			un=un1=0.0;
			for (k=n; k>=1; k--) {
				h=cc*un-un1+a[k];
				un1=un;
				un=h;
			}
			*rr=a[0]+un*c-un1;
		}
	}
	*ri=un*sin(theta);
}
 


real_t cosser(int n, real_t theta, real_t a[])
{
	int k;
	real_t c,cc,lambda,h,dun,un,un1,temp;

	c=cos(theta);
	if (c < -0.5) {
		temp=cos(theta/2.0);
		lambda=4.0*temp*temp;
		un=dun=0.0;
		for (k=n; k>=0; k--) {
			un=dun-un;
			dun=lambda*un-dun+a[k];
		}
		return (dun-lambda/2.0*un);
	} else {
		if (c > 0.5) {
			temp=sin(theta/2.0);
			lambda = -4.0*temp*temp;
			un=dun=0.0;
			for (k=n; k>=0; k--) {
				un += dun;
				dun += lambda*un+a[k];
			}
			return (dun-lambda/2.0*un);
		} else {
			cc=c+c;
			un=un1=0.0;
			for (k=n; k>=1; k--) {
				h=cc*un-un1+a[k];
				un1=un;
				un=h;
			}
			return (a[0]+un*c-un1);
		}
	}
}
 
void derpol(int n, int k, real_t x, real_t a[])
{
	void norderpol(int, int, real_t, real_t []);
	int j;
	real_t fac;

	fac=1.0;
	norderpol(n,k,x,a);
	for (j=2; j<=k; j++) {
		fac *= j;
		a[j] *=fac;
	}
}
 


real_t fouser1(int n, real_t theta, real_t a[], real_t b[])
{
	int i;
	real_t r,s,h,co,si;

	r=s=0.0;
	co=cos(theta);
	si=sin(theta);
	for (i=n; i>=1; i--) {
		h=co*r+si*s+a[i];
		s=co*s-si*r+b[i];
		r=h;
	}
	return (co*r+si*s+a[0]);
}
 


real_t fouser2(int n, real_t theta, real_t a[], real_t b[])
{
	real_t sinser(int, real_t, real_t []);
	real_t cosser(int, real_t, real_t []);

	return (cosser(n,theta,a)+sinser(n,theta,b));
}
 


real_t fouser(int n, real_t theta, real_t a[])
{
	int k;
	real_t c,cc,lambda,h,dun,un,un1,c2,s2;

	c=cos(theta);
	if (c < -0.5) {
		c2=cos(theta/2.0);
		lambda=4.0*c2*c2;
		un=dun=0.0;
		for (k=n; k>=0; k--) {
			un=dun-un;
			dun=lambda*un-dun+a[k];
		}
		return (dun+2.0*c2*(sin(theta/2.0)-c2)*un);
	} else {
		if (c > 0.5) {
			s2=sin(theta/2.0);
			lambda = -4.0*s2*s2;
			un=dun=0.0;
			for (k=n; k>=0; k--) {
				un += dun;
				dun += lambda*un+a[k];
			}
			return (dun+2.0*s2*(s2+cos(theta/2.0))*un);
		} else {
			cc=c+c;
			un=un1=0.0;
			for (k=n; k>=1; k--) {
				h=cc*un-un1+a[k];
				un1=un;
				un=h;
			}
			return (a[0]-un1+(c+sin(theta))*un);
		}
	}
}
 
void grnnew(int n, real_t x[], real_t a[])
{
	int k,l;

	for (k=n-1; k>=0; k--)
		for (l=n-1; l>=n-1-k; l--) a[l] += a[l+1]*x[n-1-k];
}
 
void intchs(int n, real_t a[], real_t b[])
{
	int i;
	real_t h,l,dum;

	if (n == 0) {
		b[1]=a[0];
		return;
	}
	if (n == 1) {
		b[2]=a[1]/4.0;
		b[1]=a[0];
		return;
	}
	h=a[n];
	dum=a[n-1];
	b[n+1]=h/((n+1)*2);
	b[n]=dum/(n*2);
	for (i=n-1; i>=2; i--) {
		l=a[i-1];
		b[i]=(l-h)/(2*i);
		h=dum;
		dum=l;
	}
	b[1]=a[0]-h/2.0;
}
 
real_t jfrac(int n, real_t a[], real_t b[])
{
	int i;
	real_t d;

	d=0.0;
	for (i=n; i>=1; i--) d=a[i]/(b[i]+d);
	return (d+b[0]);
}
 
void lintfmpol(real_t p, real_t q, int n, real_t a[])
{
	void norderpol(int, int, real_t, real_t []);
	int k;
	real_t ppower;

	norderpol(n,n,q,a);
	ppower=p;
	for (k=1; k<=n; k++) {
		a[k] *= ppower;
		ppower *= p;
	}
}
 
void newgrn(int n, real_t x[], real_t a[])
{
	void elmvec(int, int, int, real_t [], real_t [], real_t);
	int k;

	for (k=n-1; k>=0; k--)
		elmvec(k,n-1,1,a,a,-x[k]);
}
 
void norderpol(int n, int k, real_t x, real_t a[])
{
	real_t *allocate_real_vector(int, int);
	void free_real_vector(real_t *, int);
	int i,j,nm1;
	real_t xj,aa,h,*xx;

	if (x != 0.0) {
		xx=allocate_real_vector(0,n);
		xj=1;
		for (j=1; j<=n; j++) {
			xx[j] = xj *= x;
			a[j] *= xj;
		}
		h=aa=a[n];
		nm1=n-1;
		for (i=nm1; i>=0; i--) h = a[i] += h;
		for (j=1; j<=k; j++) {
			h=aa;
			for (i=nm1; i>=j; i--) h = a[i] += h;
			a[j]=h/xx[j];
		}
		free_real_vector(xx,0);
	}
}
 
real_t oddchepolsum(int n, real_t x, real_t a[])
{
	int k;
	real_t h,r,s,y;

	if (n == 0) return (x*a[0]);
	if (n == 1) return (x*(a[0]+a[1]*(4.0*x*x-3.0)));
	y=4.0*x*x-2.0;
	r=a[n];
	h=a[n-1]+r*y;
	for (k=n-2; k>=0; k--) {
		s=r;
		r=h;
		h=a[k]+r*y-s;
	}
	return (x*(h-r));
}
 
real_t ortpol(int n, real_t x, real_t b[], real_t c[])
{
	int k,l;
	real_t r,s,h;

	if (n == 0) return (1.0);
	r=x-b[0];
	s=1.0;
	l=n-1;
	for (k=1; k<=l; k++) {
		h=r;
		r=(x-b[k])*r-c[k]*s;
		s=h;
	}
	return (r);
}
 
real_t ortpolsym(int n, real_t x, real_t c[])
{
	int k,l;
	real_t r,s,h;

	if (n == 0) return (1.0);
	r=x;
	s=1.0;
	l=n-1;
	for (k=1; k<=l; k++) {
		h=r;
		r=x*r-c[k]*s;
		s=h;
	}
	return (r);
}
 
real_t pol(int n, real_t x, real_t a[])
{
	real_t r;

	r=0.0;
	for (; n>=0; n--) r=r*x+a[n];
	return (r);
}
 
void polchs(int n, real_t a[])
{
	int k,l,twopow;

	if (n > 1) {
		twopow=2;
		for (k=1; k<=n-2; k++) {
			a[k] /= twopow;
			twopow *= 2;
		}
		a[n-1]=2.0*a[n-1]/twopow;
		a[n] /= twopow;
		a[n-2] += a[n];
		for (k=n-2; k>=1; k--) {
			a[k-1] += a[k+1];
			a[k]=2.0*a[k]+a[k+2];
			for (l=k+1; l<=n-2; l++) a[l] += a[l+2];
		}
	}
}
 
void polshtchs(int n, real_t a[])
{
	void lintfmpol(real_t, real_t, int, real_t []);
	void polchs(int, real_t []);

	lintfmpol(0.5,0.5,n,a);
	polchs(n,a);
}
 
void shtchspol(int n, real_t a[])
{
	void chspol(int, real_t []);
	void lintfmpol(real_t, real_t, int, real_t []);

	chspol(n,a);
	lintfmpol(2.0,-1.0,n,a);
}
 


real_t sinser(int n, real_t theta, real_t b[])
{
	int k;
	real_t c,cc,lambda,h,dun,un,un1,temp;

	c=cos(theta);
	if (c < -0.5) {
		temp=cos(theta/2.0);
		lambda=4.0*temp*temp;
		un=dun=0.0;
		for (k=n; k>=1; k--) {
			dun=lambda*un-dun+b[k];
			un=dun-un;
		}
	} else {
		if (c > 0.5) {
			temp=sin(theta/2.0);
			lambda = -4.0*temp*temp;
			un=dun=0.0;
			for (k=n; k>=1; k--) {
				dun += lambda*un+b[k];
				un += dun;
			}
		} else {
			cc=c+c;
			un=un1=0.0;
			for (k=n; k>=1; k--) {
				h=cc*un-un1+b[k];
				un1=un;
				un=h;
			}
		}
	}
	return (un*sin(theta));
}
 
real_t sumortpol(int n, real_t x, real_t b[], real_t c[], real_t a[])
{
	int k;
	real_t h,r,s;

	if (n == 0) return (a[0]);
	r=a[n];
	s=0.0;
	for (k=n-1; k>=1; k--) {
		h=r;
		r=a[k]+(x-b[k])*r+s;
		s = -c[k]*h;
	}
	return (a[0]+(x-b[0])*r+s);
}
 
real_t sumortpolsym(int n, real_t x, real_t c[], real_t a[])
{
	int k;
	real_t h,r,s;

	if (n == 0) return (a[0]);
	r=a[n];
	s=0.0;
	for (k=n-1; k>=1; k--) {
		h=r;
		r=a[k]+x*r+s;
		s = -c[k]*h;
	}
	return (a[0]+x*r+s);
}
 
void taypol(int n, int k, real_t x, real_t a[])
{
	int i,j,nm1;
	real_t xj,aa,h;

	if (x != 0.0) {
		xj=1;
		for (j=1; j<=n; j++) {
			xj *= x;
			a[j] *= xj;
		}
		aa=a[n];
		nm1=n-1;
		for (j=0; j<=k; j++) {
			h=aa;
			for (i=nm1; i>=j; i--) h = a[i] += h;
		}
	} else {
		for (; k>=1; n--) a[k]=0;
	}
}
/* ALLJACZE.C */
void alljaczer(int n, real_t alfa, real_t beta, real_t zer[]);
/* ALLLAGZE.C */
void alllagzer(int n, real_t alfa, real_t zer[]);
/* ALLZEROP.C */
void allzerortpol(int n, real_t b[], real_t c[], real_t zer[], real_t em[]);
/* BAKCOMHE.C */
void bakcomhes(real_t **ar, real_t **ai, real_t tr[], real_t ti[], real_t del[], real_t **vr, real_t **vi, int n, int n1, int n2);
/* BAKHRMTR.C */
void bakhrmtri(real_t **a, int n, int n1, int n2, real_t **vecr, real_t **veci, real_t tr[], real_t ti[]);
/* BAKLBR.C */
void baklbr(int n, int n1, int n2, real_t d[], int inter[], real_t **vec);
/* BAKLBRCO.C */
void baklbrcom(int n, int n1, int n2, real_t d[], int inter[], real_t **vr, real_t **vi);
/* BAKREAH1.C */
void bakreahes1(real_t **a, int n, int index[], real_t v[]);
/* BAKREAH2.C */
void bakreahes2(real_t **a, int n, int n1, int n2, int index[], real_t **vec);
/* BAKSYMT1.C */
void baksymtri1(real_t a[], int n, int n1, int n2, real_t **vec);
/* BAKSYMT2.C */
void baksymtri2(real_t **a, int n, int n1, int n2, real_t **vec);
/* BOUNDS.C */
void bounds(int n, real_t a[], real_t re[], real_t im[], real_t rele, real_t abse, real_t recentre[], real_t imcentre[], real_t bound[]);
void kcluster(int k, int m, int n, real_t rc[], real_t re[], real_t im[], real_t recentre[], real_t imcentre[], real_t bound[], real_t clust[]);
/* CHLDEC1.C */
void chldec1(real_t a[], int n, real_t aux[]);
/* CHLDEC2.C */
void chldec2(real_t **a, int n, real_t aux[]);
/* CHLDECBN.C */
void chldecbnd(real_t a[], int n, int w, real_t aux[]);
/* CHLDECI1.C */
void chldecinv1(real_t a[], int n, real_t aux[]);
/* CHLDECI2.C */
void chldecinv2(real_t **a, int n, real_t aux[]);
/* CHLDECS1.C */
void chldecsol1(real_t a[], int n, real_t aux[], real_t b[]);
/* CHLDECS2.C */
void chldecsol2(real_t **a, int n, real_t aux[], real_t b[]);
/* CHLDECSB.C */
void chldecsolbnd(real_t a[], int n, int w, real_t aux[], real_t b[]);
/* CHLDETM1.C */
real_t chldeterm1(real_t a[], int n);
/* CHLDETM2.C */
real_t chldeterm2(real_t **a, int n);
/* CHLDTMBN.C */
real_t chldetermbnd(real_t a[], int n, int w);
/* CHLINV1.C */
void chlinv1(real_t a[], int n);
/* CHLINV2.C */
void chlinv2(real_t **a, int n);
/* CHLSOL1.C */
void chlsol1(real_t a[], int n, real_t b[]);
/* CHLSOL2.C */
void chlsol2(real_t **a, int n, real_t b[]);
/* CHLSOLBN.C */
void chlsolbnd(real_t a[], int n, int w, real_t b[]);
/* COMEIG1.C */
int comeig1(real_t **a, int n, real_t em[], real_t re[], real_t im[], real_t **vec);
/* COMEIGVA.C */
int comeigval(real_t **a, int n, real_t em[], real_t re[], real_t im[]);
/* COMKWD.C */
void comkwd(real_t pr, real_t pi, real_t qr, real_t qi, real_t *gr, real_t *gi, real_t *kr, real_t *ki);
/* COMVALQR.C */
int comvalqri(real_t **a, int n, real_t em[], real_t re[], real_t im[]);
/* COMVECHE.C */
void comveches(real_t **a, int n, real_t lambda, real_t mu, real_t em[], real_t u[], real_t v[]);
/* CONJGRAD.C */
void conjgrad(void (*matvec)(real_t [], real_t []), real_t x[], real_t r[], int l, int n, int (*goon)(int, real_t), int *iterate, real_t *norm2);
/* DECBND.C */
void decbnd(real_t a[], int n, int lw, int rw, real_t aux[], real_t m[], int p[]);
/* DEC.C */
void dec(real_t **a, int n, real_t aux[], int p[]);
/* DECINV.C */
void decinv(real_t **a, int n, real_t aux[]);
/* DECSOLBN.C */
void decsolbnd(real_t a[], int n, int lw, int rw, real_t aux[], real_t b[]);
/* DECSOL.C */
void decsol(real_t **a, int n, real_t aux[], real_t b[]);
/* DECSOLS2.C */
void decsolsym2(real_t **a, int n, real_t b[], real_t tol, int aux[]);
/* DECSOLST.C */
void decsolsymtri(real_t diag[], real_t co[], int n, real_t aux[], real_t b[]);
/* DECSOLTP.C */
void decsoltripiv(real_t sub[], real_t diag[], real_t super[], int n, real_t aux[], real_t b[]);
/* DECSOLTR.C */
void decsoltri(real_t sub[], real_t diag[], real_t super[], int n, real_t aux[], real_t b[]);
/* DECSYM2.C */
void decsym2(real_t **a, int n, real_t tol, int aux[], int p[], real_t detaux[]);
/* DECSYMTR.C */
void decsymtri(real_t diag[], real_t co[], int n, real_t aux[]);
/* DECTRI.C */
void dectri(real_t sub[], real_t diag[], real_t super[], int n, real_t aux[]);
/* DECTRIPI.C */
void dectripiv(real_t sub[], real_t diag[], real_t super[], int n, real_t aid[], real_t aux[], int piv[]);
/* DETERMBN.C */
real_t determbnd(real_t a[], int n, int lw, int rw, int sgndet);
/* DETERM.C */
real_t determ(real_t **a, int n, int sign);
/* DETMSYM2.C */
real_t determsym2(real_t detaux[], int n, int aux[]);
/* EIGCOM.C */
int eigcom(real_t **ar, real_t **ai, int n, real_t em[], real_t valr[], real_t vali[], real_t **vr, real_t **vi);
/* EIGHRM.C */
void eighrm(real_t **a, int n, int numval, real_t val[], real_t **vecr, real_t **veci, real_t em[]);
/* EIGSYM1.C */
void eigsym1(real_t a[], int n, int numval, real_t val[], real_t **vec, real_t em[]);
/* EIGSYM2.C */
void eigsym2(real_t **a, int n, int numval, real_t val[], real_t **vec, real_t em[]);
/* EIGVALCO.C */
int eigvalcom(real_t **ar, real_t **ai, int n, real_t em[], real_t valr[], real_t vali[]);
/* EIGVALHR.C */
void eigvalhrm(real_t **a, int n, int numval, real_t val[], real_t em[]);
/* EIGVALS1.C */
void eigvalsym1(real_t a[], int n, int numval, real_t val[], real_t em[]);
/* EIGVALS2.C */
void eigvalsym2(real_t **a, int n, int numval, real_t val[], real_t em[]);
/* EQILBR.C */
void eqilbr(real_t **a, int n, real_t em[], real_t d[], int inter[]);
/* EQILBRCO.C */
void eqilbrcom(real_t **a1, real_t **a2, int n, real_t em[], real_t d[], int inter[]);
/* ERBELM.C */
void erbelm(int n, real_t aux[], real_t nrminv);
/* FEMLAG.C */
void femlag(real_t x[], real_t y[], int n, real_t (*r)(real_t), real_t (*f)(real_t), int order, real_t e[]);
/* FEMLAGSP.C */
void femlagspher(real_t x[], real_t y[], int n, int nc, real_t (*r)(real_t), real_t (*f)(real_t), int order, real_t e[]);
/* FEMLAGSY.C */
void femlagsym(real_t x[], real_t y[], int n, real_t (*p)(real_t), real_t (*r)(real_t), real_t (*f)(real_t), int order, real_t e[]);
/* GSITSOLE.C */
void gssitisolerb(real_t **a, int n, real_t aux[], real_t b[]);
/* GSSELM.C */
void gsselm(real_t **a, int n, real_t aux[], int ri[], int ci[]);
/* GSSERB.C */
void gsserb(real_t **a, int n, real_t aux[], int ri[], int ci[]);
/* GSSINV.C */
void gssinv(real_t **a, int n, real_t aux[]);
/* GSSINVER.C */
void gssinverb(real_t **a, int n, real_t aux[]);
/* GSSITISO.C */
void gssitisol(real_t **a, int n, real_t aux[], real_t b[]);
/* GSSNRI.C */
void gssnri(real_t **a, int n, real_t aux[], int ri[], int ci[]);
/* GSSSOL.C */
void gsssol(real_t **a, int n, real_t aux[], real_t b[]);
/* GSSSOLER.C */
void gsssolerb(real_t **a, int n, real_t aux[], real_t b[]);
/* HESTGL2.C */
void hestgl2(int n, real_t **a, real_t **b);
/* HESTGL3.C */
void hestgl3(int n, real_t **a, real_t **b, real_t **x);
/* HOMSOL.C */
int homsol(real_t **a, int m, int n, real_t **v, real_t em[]);
/* HOMSOLSV.C */
void homsolsvd(real_t **u, real_t val[], real_t **v, int m, int n);
/* HSH2COL.C */
void hsh2col(int la, int lb, int u, int i, real_t a1, real_t a2, real_t **a, real_t **b);
/* HSH2ROW2.C */
void hsh2row2(int l, int ua, int ub, int j, real_t a1, real_t a2, real_t **a, real_t **b);
/* HSH2ROW3.C */
void hsh2row3(int l, int ua, int ub, int ux, int j, real_t a1, real_t a2, real_t **a, real_t **b, real_t **x);
/* HSH3COL.C */
void hsh3col(int la, int lb, int u, int i, real_t a1, real_t a2, real_t a3, real_t **a, real_t **b);
/* HSH3ROW2.C */
void hsh3row2(int l, int u, int j, real_t a1, real_t a2, real_t a3, real_t **a, real_t **b);
/* HSH3ROW3.C */
void hsh3row3(int l, int u, int ux, int j, real_t a1, real_t a2, real_t a3, real_t **a, real_t **b, real_t **x);
/* HSHCOMHE.C */
void hshcomhes(real_t **ar, real_t **ai, int n, real_t em[], real_t b[], real_t tr[], real_t ti[], real_t del[]);
/* HSHDECMU.C */
void hshdecmul(int n, real_t **a, real_t **b, real_t dwarf);
/* HSHHRMTR.C */
void hshhrmtri(real_t **a, int n, real_t d[], real_t b[], real_t bb[], real_t em[], real_t tr[], real_t ti[]);
/* HSHHRMTV.C */
void hshhrmtrival(real_t **a, int n, real_t d[], real_t bb[], real_t em[]);
/* HSHREABI.C */
void hshreabid(real_t **a, int m, int n, real_t d[], real_t b[], real_t em[]);
/* INV1.C */
real_t inv1(real_t **a, int n, int ri[], int ci[], int withnorm);
/* INV.C */
void inv(real_t **a, int n, int p[]);
/* ITISOL.C */
void itisol(real_t **a, real_t **lu, int n, real_t aux[], int ri[], int ci[], real_t b[]);
/* ITISOLER.C */
void itisolerb(real_t **a, real_t **lu, int n, real_t aux[], int ri[], int ci[], real_t b[]);
/* LSQDECOM.C */
void lsqdecomp(real_t **a, int n, int m, int n1, real_t aux[], real_t aid[], int ci[]);
/* LSQDGLIN.C */
void lsqdglinv(real_t **a, int m, real_t aid[], int ci[], real_t diag[]);
/* LSQINV.C */
void lsqinv(real_t **a, int m, real_t aid[], int c[]);
/* LSQORTDE.C */
void lsqortdec(real_t **a, int n, int m, real_t aux[], real_t aid[], int ci[]);
/* LSQORTDS.C */
void lsqortdecsol(real_t **a, int n, int m, real_t aux[], real_t diag[], real_t b[]);
/* LSQREFSO.C */
void lsqrefsol(real_t **a, real_t **qr, int n, int m, int n1, real_t aux[], real_t aid[], int ci[], real_t b[], real_t *ldx, real_t x[], real_t res[]);
/* LSQSOL.C */
void lsqsol(real_t **a, int n, int m, real_t aid[], int ci[], real_t b[]);
/* LUPZEROP.C */
void lupzerortpol(int n, int m, real_t b[], real_t c[], real_t zer[], real_t em[]);
/* MERGESOR.C */
void mergesort(real_t a[], int p[], int low, int up);
void merge(int lo, int ls, int rs, int p[], real_t a[], int hp[]);
/* ONENRMIN.C */
real_t onenrminv(real_t **a, int n);
/* ORTHOG.C */
void orthog(int n, int lc, int uc, real_t **x);
/* PRETFMMA.C */
void pretfmmat(real_t **a, int m, int n, real_t d[]);
/* PSDINV.C */
int psdinv(real_t **a, int m, int n, real_t em[]);
/* PSDINVSV.C */
void psdinvsvd(real_t **u, real_t val[], real_t **v, int m, int n, real_t em[]);
/* PSTTFMMA.C */
void psttfmmat(real_t **a, int n, real_t **v, real_t b[]);
/* QRICOM.C */
int qricom(real_t **a1, real_t **a2, real_t b[], int n, real_t em[], real_t val1[], real_t val2[], real_t **vec1, real_t **vec2);
/* QRIHRM.C */
int qrihrm(real_t **a, int n, real_t val[], real_t **vr, real_t **vi, real_t em[]);
/* QRISNGVA.C */
int qrisngval(real_t **a, int m, int n, real_t val[], real_t em[]);
/* QRISNGVB.C */
int qrisngvalbid(real_t d[], real_t b[], int n, real_t em[]);
/* QRISNGVD.C */
int qrisngvaldec(real_t **a, int m, int n, real_t val[], real_t **v, real_t em[]);
/* QRISNVDB.C */
int qrisngvaldecbid(real_t d[], real_t b[], int m, int n, real_t **u, real_t **v, real_t em[]);
/* QRISYM.C */
int qrisym(real_t **a, int n, real_t val[], real_t em[]);
/* QRISYMTR.C */
int qrisymtri(real_t **a, int n, real_t d[], real_t b[], real_t bb[], real_t em[]);
/* QRIVALHR.C */
int qrivalhrm(real_t **a, int n, real_t val[], real_t em[]);
/* QRIVALS1.C */
int qrivalsym1(real_t a[], int n, real_t val[], real_t em[]);
/* QRIVALS2.C */
int qrivalsym2(real_t **a, int n, real_t val[], real_t em[]);
/* QRIVALST.C */
int qrivalsymtri(real_t d[], real_t bb[], int n, real_t em[]);
/* QZI.C */
void qzi(int n, real_t **a, real_t **b, real_t **x, real_t alfr[], real_t alfi[], real_t beta[], int iter[], real_t em[]);
/* QZIVAL.C */
void qzival(int n, real_t **a, real_t **b, real_t alfr[], real_t alfi[], real_t beta[], int iter[], real_t em[]);
/* REAEIG1.C */
int reaeig1(real_t **a, int n, real_t em[], real_t val[], real_t **vec);
/* REAEIG3.C */
int reaeig3(real_t **a, int n, real_t em[], real_t val[], real_t **vec);
/* REAEIGVA.C */
int reaeigval(real_t **a, int n, real_t em[], real_t val[]);
/* REAQRI.C */
int reaqri(real_t **a, int n, real_t em[], real_t val[], real_t **vec);
/* REAVALQR.C */
int reavalqri(real_t **a, int n, real_t em[], real_t val[]);
/* REAVECHE.C */
void reaveches(real_t **a, int n, real_t lambda, real_t em[], real_t v[]);
/* ROWPERM.C */
void rowperm(int perm[], int low, int upp, int i, real_t **mat);
/* SELZEROP.C */
void selzerortpol(int n, int n1, int n2, real_t b[], real_t c[], real_t zer[], real_t em[]);
/* SOLBND.C */
void solbnd(real_t a[], int n, int lw, int rw, real_t m[], int p[], real_t b[]);
/* SOL.C */
void sol(real_t **a, int n, int p[], real_t b[]);
/* SOLELM.C */
void solelm(real_t **a, int n, int ri[], int ci[], real_t b[]);
/* SOLOVR.C */
int solovr(real_t **a, int m, int n, real_t x[], real_t em[]);
/* SOLSVDOV.C */
void solsvdovr(real_t **u, real_t val[], real_t **v, int m, int n, real_t x[], real_t em[]);
/* SOLSVDUN.C */
void solsvdund(real_t **u, real_t val[], real_t **v, int m, int n, real_t x[], real_t em[]);
/* SOLSYM2.C */
void solsym2(real_t **a, int n, real_t b[], int p[], real_t detaux[]);
/* SOLSYMTR.C */
void solsymtri(real_t diag[], real_t co[], int n, real_t b[]);
/* SOLTRI.C */
void soltri(real_t sub[], real_t diag[], real_t super[], int n, real_t b[]);
/* SOLTRIPI.C */
void soltripiv(real_t sub[], real_t diag[], real_t super[], int n, real_t aid[], int piv[], real_t b[]);
/* SOLUND.C */
int solund(real_t **a, int m, int n, real_t x[], real_t em[]);
/* SYMEIGIM.C */
void symeigimp(int n, real_t **a, real_t **vec, real_t val[], real_t lbound[], real_t ubound[], real_t aux[]);
/* TFMPREVE.C */
void tfmprevec(real_t **a, int n);
/* TFMREAHE.C */
void tfmreahes(real_t **a, int n, real_t em[], int index[]);
/* TFMSYMT1.C */
void tfmsymtri1(real_t a[], int n, real_t d[], real_t b[], real_t bb[], real_t em[]);
/* TFMSYMT2.C */
void tfmsymtri2(real_t **a, int n, real_t d[], real_t b[], real_t bb[], real_t em[]);
/* VALQRICO.C */
int valqricom(real_t **a1, real_t **a2, real_t b[], int n, real_t em[], real_t val1[], real_t val2[]);
/* VALSYMTR.C */
void valsymtri(real_t d[], real_t bb[], int n, int n1, int n2, real_t val[], real_t em[]);
real_t sturm(real_t d[], real_t bb[], int n, real_t x, int k, real_t machtol, real_t max, int *count, real_t *lb, real_t *ub);
/* VECPERM.C */
void vecperm(int perm[], int low, int upp, real_t vector[]);
/* VECSYMTR.C */
void vecsymtri(real_t d[], real_t b[], int n, int n1, int n2, real_t val[], real_t **vec, real_t em[]);
/* ZERPOL.C */
int zerpol(int n, real_t a[], real_t em[], real_t re[], real_t im[], real_t d[]);
int zerpolfunction(int n, real_t d[], real_t f[], real_t x, real_t y, real_t tol, int *it, real_t *newf);
void bakcomhes(real_t **ar, real_t **ai, real_t tr[], real_t ti[],real_t del[], real_t **vr, real_t **vi, int n,int n1, int n2)
{
	void hshcomprd(int, int, int, int, int, real_t **,
						real_t **, real_t **, real_t **, real_t);
	void comrowcst(int, int, int, real_t **, real_t **, real_t, real_t);
	int i,r,rm1;
	real_t h;

	for (i=2; i<=n; i++) comrowcst(n1,n2,i,vr,vi,tr[i],ti[i]);
	r=n-1;
	for (rm1=n-2; rm1>=1; rm1--) {
		h=del[rm1];
		if (h > 0.0) hshcomprd(r,n,n1,n2,rm1,vr,vi,ar,ai,h);
		r=rm1;
	}
}
 
void bakhrmtri(real_t **a, int n, int n1, int n2, real_t **vecr,real_t **veci, real_t tr[], real_t ti[])
{
	real_t matmat(int, int, int, int, real_t **, real_t **);
	real_t tammat(int, int, int, int, real_t **, real_t **);
	void elmcol(int, int, int, int, real_t **, real_t **, real_t);
	void elmcolrow(int, int, int, int, real_t **, real_t **, real_t);
	void commul(real_t, real_t, real_t, real_t, real_t *, real_t *);
	void comrowcst(int, int, int, real_t **, real_t **, real_t, real_t);
	int i,j,r,rm1;
	real_t c,s,t,qr,qi;

	for (i=1; i<=n; i++)
		for (j=n1; j<=n2; j++) veci[i][j]=0.0;
	c=1.0;
	s=0.0;
	for (j=n-1; j>=1; j--) {
		commul(c,s,tr[j],ti[j],&c,&s);
		comrowcst(n1,n2,j,vecr,veci,c,s);
	}
	rm1=2;
	for (r=3; r<=n; r++) {
		t=a[r][r];
		if (t > 0.0)
			for (j=n1; j<=n2; j++) {
				qr=(tammat(1,rm1,r,j,a,vecr)-matmat(1,rm1,r,j,a,veci))/t;
				qi=(tammat(1,rm1,r,j,a,veci)+matmat(1,rm1,r,j,a,vecr))/t;
				elmcol(1,rm1,j,r,vecr,a,-qr);
				elmcolrow(1,rm1,j,r,vecr,a,-qi);
				elmcolrow(1,rm1,j,r,veci,a,qr);
				elmcol(1,rm1,j,r,veci,a,-qi);
			}
		rm1=r;
	}
}
 
void baklbr(int n, int n1, int n2, real_t d[], int inter[], real_t **vec)
{
	void ichrow(int, int, int, int, real_t **);
	int i,j,k,p,q;
	real_t di;

	p=1;
	q=n;
	for (i=1; i<=n; i++) {
		di=d[i];
		if (di != 1)
			for (j=n1; j<=n2; j++) vec[i][j] *= di;
		k=inter[i];
		if (k > 0)
			p++;
		else
			if (k < 0) q--;
	}
	for (i=p-1+n-q; i>=1; i--) {
		k=inter[i];
		if (k > 0) {
			p--;
			if (k != p) ichrow(n1,n2,k,p,vec);
		} else {
			q++;
			if (-k != q) ichrow(n1,n2,-k,q,vec);
		}
	}
}
 
void baklbrcom(int n, int n1, int n2, real_t d[], int inter[],real_t **vr, real_t **vi)
{
	void baklbr(int, int, int, real_t [], int [], real_t **);

	baklbr(n,n1,n2,d,inter,vr);
	baklbr(n,n1,n2,d,inter,vi);
}
 
void baksymtri2(real_t **a, int n, int n1, int n2, real_t **vec)
{
	real_t tammat(int, int, int, int, real_t **, real_t **);
	void elmcol(int, int, int, int, real_t **, real_t **, real_t);
	int j,k;
	real_t w;

	for (j=2; j<=n; j++) {
		w=a[j][j];
		if (w < 0.0)
			for (k=n1; k<=n2; k++)
				elmcol(1,j-1,k,j,vec,a,tammat(1,j-1,j,k,a,vec)*w);
	}
}
 


void chldec1(real_t a[], int n, real_t aux[])
{
	real_t vecvec(int, int, int, real_t [], real_t []);
	int j,k,kk,kj,low,up;
	real_t r,epsnorm;

	r=0.0;
	kk=0;
	for (k=1; k<=n; k++) {
		kk += k;
		if (a[kk] > r) r=a[kk];
	}
	epsnorm=aux[2]*r;
	kk=0;
	for (k=1; k<=n; k++) {
		kk += k;
		low=kk-k+1;
		up=kk-1;
		r=a[kk]-vecvec(low,up,0,a,a);
		if (r <= epsnorm) {
			aux[3]=k-1;
			return;
		}
		a[kk]=r=sqrt(r);
		kj=kk+k;
		for (j=k+1; j<=n; j++) {
			a[kj]=(a[kj]-vecvec(low,up,kj-kk,a,a))/r;
			kj +=j;
		}
	}
	aux[3]=n;
}
 


void chldec2(real_t **a, int n, real_t aux[])
{
	real_t tammat(int, int, int, int, real_t **, real_t **);
	int k,j;
	real_t r,epsnorm;

	r=0.0;
	for (k=1; k<=n; k++)
		if (a[k][k] > r) r=a[k][k];
	epsnorm=aux[2]*r;
	for (k=1; k<=n; k++) {
		r=a[k][k]-tammat(1,k-1,k,k,a,a);
		if (r <= epsnorm) {
			aux[3]=k-1;
			return;
		}
		a[k][k]=r=sqrt(r);
		for (j=k+1; j<=n; j++)
			a[k][j]=(a[k][j]-tammat(1,k-1,j,k,a,a))/r;
	}
	aux[3]=n;
}
 


void chldecbnd(real_t a[], int n, int w, real_t aux[])
{
	real_t vecvec(int, int, int, real_t [], real_t []);
	int j,k,jmax,kk,kj,w1,start;
	real_t r,eps,max;

	max=0.0;
	kk = -w;
	w1=w+1;
	for (j=1; j<=n; j++) {
		kk += w1;
		if (a[kk] > max) max=a[kk];
	}
	jmax=w;
	w1=w+1;
	kk = -w;
	eps=aux[2]*max;
	for (k=1; k<=n; k++) {
		if (k+w > n) jmax--;
		kk += w1;
		start=kk-k+1;
		r=a[kk]-vecvec(((k <= w1) ? start : kk-w),kk-1,0,a,a);
		if (r <= eps) {
			aux[3]=k-1;
			return;
		}
		a[kk]=r=sqrt(r);
		kj=kk;
		for (j=1; j<=jmax; j++) {
			kj += w;
			a[kj]=(a[kj]-vecvec(((k+j <= w1) ? start : kk-w+j),
							kk-1,kj-kk,a,a))/r;
		}
	}
	aux[3]=n;
}
 
void chldecsol1(real_t a[], int n, real_t aux[], real_t b[])
{
	void chldec1(real_t [], int, real_t []);
	void chlsol1(real_t [], int, real_t []);

	chldec1(a,n,aux);
	if (aux[3] == n) chlsol1(a,n,b);
}
 
void chldecsol2(real_t **a, int n, real_t aux[], real_t b[])
{
	void chldec2(real_t **, int, real_t []);
	void chlsol2(real_t **, int, real_t []);

	chldec2(a,n,aux);
	if (aux[3] == n) chlsol2(a,n,b);
}
 
void chldecsolbnd(real_t a[], int n, int w, real_t aux[], real_t b[])
{
	void chldecbnd(real_t [], int, int, real_t []);
	void chlsolbnd(real_t [], int, int, real_t []);

	chldecbnd(a,n,w,aux);
	if (aux[3] == n) chlsolbnd(a,n,w,b);
}
 
real_t chldeterm1(real_t a[], int n)
{
	int k,kk;
	real_t d;

	d=1.0;
	kk=0;
	for (k=1; k<=n; k++) {
		kk += k;
		d *= a[kk];
	}
	return (d*d);
}
 
real_t chldeterm2(real_t **a, int n)
{
	int k;
	real_t d;

	d=1.0;
	for (k=1; k<=n; k++) d *= a[k][k];
	return (d*d);
}
 
real_t chldetermbnd(real_t a[], int n, int w)
{
	int j,kk,w1;
	real_t p;

	w1=w+1;
	kk = -w;
	p=1.0;
	for (j=1; j<=n; j++) {
		kk += w1;
		p *= a[kk];
	}
	return (p*p);
}
 
void chlsol1(real_t a[], int n, real_t b[])
{
	real_t vecvec(int, int, int, real_t [], real_t []);
	real_t seqvec(int, int, int, int, real_t [], real_t []);
	int i,ii;

	ii=0;
	for (i=1; i<=n; i++) {
		ii += i;
		b[i]=(b[i]-vecvec(1,i-1,ii-i,b,a))/a[ii];
	}
	for (i=n; i>=1; i--) {
		b[i]=(b[i]-seqvec(i+1,n,ii+i,0,a,b))/a[ii];
		ii -= i;
	}
}
 
void chlsol2(real_t **a, int n, real_t b[])
{
	real_t matvec(int, int, int, real_t **, real_t []);
	real_t tamvec(int, int, int, real_t **, real_t []);
	int i;

	for (i=1; i<=n; i++) b[i]=(b[i]-tamvec(1,i-1,i,a,b))/a[i][i];
	for (i=n; i>=1; i--) b[i]=(b[i]-matvec(i+1,n,i,a,b))/a[i][i];
}
 
void chlsolbnd(real_t a[], int n, int w, real_t b[])
{
	real_t vecvec(int, int, int, real_t [], real_t []);
	real_t scaprd1(int, int, int, int, int, real_t [], real_t []);
	int k,imax,kk,w1;

	kk = -w;
	w1=w+1;
	for (k=1; k<=n; k++) {
		kk += w1;
		b[k]=(b[k]-vecvec(((k <= w1) ? 1 : k-w),k-1,kk-k,b,a))/a[kk];
	}
	imax = -1;
	for (k=n; k>=1; k--) {
		if (imax < w) imax++;
		b[k]=(b[k]-scaprd1(kk+w,w,k+1,1,imax,a,b))/a[kk];
		kk -= w1;
	}
}
 


void comkwd(real_t pr, real_t pi, real_t qr, real_t qi,real_t *gr, real_t *gi, real_t *kr, real_t *ki)
{
	void commul(real_t, real_t, real_t, real_t, real_t *, real_t *);
	void comdiv(real_t, real_t, real_t, real_t, real_t *, real_t *);
	void comsqrt(real_t, real_t, real_t *, real_t *);
	real_t hr,hi;

	if (qr == 0.0 && qi == 0.0) {
		*kr = *ki = 0.0;
		*gr = pr*2.0;
		*gi = pi*2.0;
		return;
	}
	if (pr == 0.0 && pi == 0.0) {
		comsqrt(qr,qi,gr,gi);
		*kr = -(*gr);
		*ki = -(*gi);
		return;
	}
	if (fabs(pr) > 1.0 || fabs(pi) > 1.0) {
		comdiv(qr,qi,pr,pi,&hr,&hi);
		comdiv(hr,hi,pr,pi,&hr,&hi);
		comsqrt(1.0+hr,hi,&hr,&hi);
		commul(pr,pi,hr+1.0,hi,gr,gi);
	} else {
		comsqrt(qr+(pr+pi)*(pr-pi),qi+pr*pi*2.0,&hr,&hi);
		if (pr*hr+pi*hi > 0.0) {
			*gr = pr+hr;
			*gi = pi+hi;
		} else {
			*gr = pr-hr;
			*gi = pi-hi;
		}
	}
	comdiv(-qr,-qi,*gr,*gi,kr,ki);
}
 


int comvalqri(real_t **a, int n, real_t em[], real_t re[], real_t im[])
{
	int i,j,p,q,max,count,n1,p1,p2,imin1,i1,i2,i3,b;
	real_t disc,sigma,rho,g1,g2,g3,psi1,psi2,aa,e,k,s,norm,machtol2,
			tol,w;

	norm=em[1];
	w=em[0]*norm;
	machtol2=w*w;
	tol=em[2]*norm;
	max=em[4];
	count=0;
	w=0.0;
	do {
		i=n;
		do {
			q=i;
			i--;
		} while ((i >= 1) ? (fabs(a[i+1][i]) > tol) : 0);
		if (q > 1)
			if (fabs(a[q][q-1]) > w) w=fabs(a[q][q-1]);
		if (q >= n-1) {
			n1=n-1;
			if (q == n) {
				re[n]=a[n][n];
				im[n]=0.0;
				n=n1;
			} else {
				sigma=a[n][n]-a[n1][n1];
				rho = -a[n][n1]*a[n1][n];
				disc=sigma*sigma-4.0*rho;
				if (disc > 0.0) {
					disc=sqrt(disc);
					s = -2.0*rho/(sigma+((sigma >= 0.0) ? disc : -disc));
					re[n]=a[n][n]+s;
					re[n1]=a[n1][n1]-s;
					im[n]=im[n1]=0.0;
				} else {
					re[n]=re[n1]=(a[n1][n1]+a[n][n])/2.0;
					im[n1]=sqrt(-disc)/2.0;
					im[n] = -im[n1];
				}
				n -= 2;
			}
		} else {
			count++;
			if (count > max) break;
			n1=n-1;
			sigma=a[n][n]+a[n1][n1]+sqrt(fabs(a[n1][n-2]*a[n][n1])*em[0]);
			rho=a[n][n]*a[n1][n1]-a[n][n1]*a[n1][n];
			i=n-1;
			do {
				p1=i1=i;
				i--;
			} while ((i-1 >= q) ? (fabs(a[i][i-1]*a[i1][i]*
					(fabs(a[i][i]+a[i1][i1]-sigma)+fabs(a[i+2][i1]))) >
					fabs(a[i][i]*((a[i][i]-sigma)+
						a[i][i1]*a[i1][i]+rho))*tol) : 0);
			p=p1-1;
			p2=p+2;
			for (i=p; i<=n-1; i++) {
				imin1=i-1;
				i1=i+1;
				i2=i+2;
				if (i == p) {
					g1=a[p][p]*(a[p][p]-sigma)+a[p][p1]*a[p1][p]+rho;
					g2=a[p1][p]*(a[p][p]+a[p1][p1]-sigma);
					if (p1 <= n1) {
						g3=a[p1][p]*a[p2][p1];
						a[p2][p]=0.0;
					} else
						g3=0.0;
				} else {
					g1=a[i][imin1];
					g2=a[i1][imin1];
					g3 = (i2 <= n) ? a[i2][imin1] : 0.0;
				}
				k = (g1 >= 0.0) ? sqrt(g1*g1+g2*g2+g3*g3) :
										-sqrt(g1*g1+g2*g2+g3*g3);
				b = (fabs(k) > machtol2);
				aa = (b ? g1/k+1.0 : 2.0);
				psi1 = (b ? g2/(g1+k) : 0.0);
				psi2 = (b ? g3/(g1+k) : 0.0);
				if (i != q)
					a[i][imin1] = (i == p) ? -a[i][imin1] : -k;
				for (j=i; j<=n; j++) {
					e=aa*(a[i][j]+psi1*a[i1][j]+
							((i2 <= n) ? psi2*a[i2][j] : 0.0));
					a[i][j] -= e;
					a[i1][j] -= psi1*e;
					if (i2 <= n) a[i2][j] -= psi2*e;
				}
				for (j=q; j<=((i2 <= n) ? i2 : n); j++) {
					e=aa*(a[j][i]+psi1*a[j][i1]+
							((i2 <= n) ? psi2*a[j][i2] : 0.0));
					a[j][i] -= e;
					a[j][i1] -= psi1*e;
					if (i2 <= n) a[j][i2] -= psi2*e;
				}
				if (i2 <= n1) {
					i3=i+3;
					e=aa*psi2*a[i3][i2];
					a[i3][i] = -e;
					a[i3][i1] = -psi1*e;
					a[i3][i2] -= psi2*e;
				}
			}
		}
	} while (n > 0);
	em[3]=w;
	em[5]=count;
	return n;
}

 
void decsolsymtri(real_t diag[], real_t co[], int n,real_t aux[], real_t b[])
{
	void decsymtri(real_t [], real_t [], int, real_t []);
	void solsymtri(real_t [], real_t [], int, real_t []);

	decsymtri(diag,co,n,aux);
	if (aux[3] == n) solsymtri(diag,co,n,b);
}
 
void decsoltri(real_t sub[], real_t diag[], real_t super[], int n,real_t aux[], real_t b[])
{
	void dectri(real_t [], real_t [], real_t [],	int, real_t []);
	void soltri(real_t [], real_t [], real_t [], int, real_t []);

	dectri(sub,diag,super,n,aux);
	if (aux[3] == n) soltri(sub,diag,super,n,b);
}


void decsym2(real_t **a, int n, real_t tol,int aux[], int p[], real_t detaux[])
{
	void elmrow(int, int, int, int, real_t **, real_t **, real_t);
	void ichrow(int, int, int, int, real_t **);
	void ichrowcol(int, int, int, int, real_t **);
	int i,j,m,ip1,ip2,onebyone,sym;
	real_t det,s,t,alpha,lambda,sigma,aii,aip1,aip1i,temp;

	aux[3]=aux[4]=0;
	sym=1;
	i=0;
	while (sym && (i < n)) {
		i++;
		j=i;
		while (sym && (j < n)) {
			j++;
			sym = sym && (a[i][j] == a[j][i]);
		}
	}
	if (sym)
		aux[2]=1;
	else {
		aux[2]=0;
		aux[5]=n;
		return;
	}
	alpha=(1.0+sqrt(17.0))/8.0;
	p[n]=n;
	i=1;
	while (i < n) {
		ip1=i+1;
		ip2=i+2;
		aii=fabs(a[i][i]);
		p[i]=i;
		lambda=fabs(a[i][ip1]);
		j=ip1;
		for (m=ip2; m<=n; m++)
			if (fabs(a[i][m]) > lambda) {
				j=m;
				lambda=fabs(a[i][m]);
			}
		t=alpha*lambda;
		onebyone=1;
		if (aii < t) {
			sigma=lambda;
			for (m=ip1; m<=j-1; m++)
				if (fabs(a[m][j]) > sigma) sigma=fabs(a[m][j]);
			for (m=j+1; m<=n; m++)
				if (fabs(a[j][m]) > sigma) sigma=fabs(a[j][m]);
			if (sigma*aii < lambda) {
				if (alpha*sigma < fabs(a[j][j])) {
					ichrow(j+1,n,i,j,a);
					ichrowcol(ip1,j-1,i,j,a);
					t=a[i][i];
					a[i][i]=a[j][j];
					a[j][j]=t;
					p[i]=j;
				} else {
					if (j > ip1) {
						ichrow(j+1,n,ip1,j,a);
						ichrowcol(ip2,j-1,ip1,j,a);
						t=a[i][i];
						a[i][i]=a[j][j];
						a[j][j]=t;
						t=a[i][j];
						a[i][j]=a[i][ip1];
						a[i][ip1]=t;
					}
					temp=a[i][ip1];
					det=a[i][i]*a[ip1][ip1]-temp*temp;
					aip1i=a[i][ip1]/det;
					aii=a[i][i]/det;
					aip1=a[ip1][ip1]/det;
					p[i]=j;
					p[ip1]=0;
					detaux[i]=1.0;
					detaux[ip1]=det;
					for (j=ip2; j<=n; j++) {
						s=aip1i*a[ip1][j]-aip1*a[i][j];
						t=aip1i*a[i][j]-aii*a[ip1][j];
						elmrow(j,n,j,i,a,a,s);
						elmrow(j,n,j,ip1,a,a,t);
						a[i][j]=s;
						a[ip1][j]=t;
					}
					aux[3]++;
					aux[4]++;
					i=ip2;
					onebyone=0;
				}
			}
		}
		if (onebyone) {
			if (tol < fabs(a[i][i])) {
				aii=a[i][i];
				detaux[i]=a[i][i];
				if (aii > 0.0)
					aux[3]++;
				else
					aux[4]++;
				for (j=ip1; j<=n; j++) {
					s = -a[i][j]/aii;
					elmrow(j,n,j,i,a,a,s);
					a[i][j]=s;
				}
			}
			i=ip1;
		}
	}
	if (i == n) {
		if (tol < fabs(a[n][n])) {
			if (a[n][n] > 0.0)
				aux[3]++;
			else
				aux[4]++;
		}
		detaux[n]=a[n][n];
	}
	aux[5]=n-aux[3]-aux[4];
}
 


void decsymtri(real_t diag[], real_t co[], int n, real_t aux[])
{
	int i,n1;
	real_t d,r,s,u,tol,norm,normr;

	tol=aux[2];
	d=diag[1];
	r=co[1];
	norm=normr=fabs(d)+fabs(r);
	if (fabs(d) <= normr*tol) {
		aux[3]=0.0;
		aux[5]=d;
		return;
	}
	u=co[1]=r/d;
	n1=n-1;
	for (i=2; i<=n1; i++) {
		s=r;
		r=co[i];
		d=diag[i];
		normr=fabs(s)+fabs(d)+fabs(r);
		diag[i] = d -= u*s;
		if (fabs(d) <= normr*tol) {
			aux[3]=i-1;
			aux[5]=d;
			return;
		}
		u=co[i]=r/d;
		if (normr > norm) norm=normr;
	}
	d=diag[n];
	normr=fabs(d)+fabs(r);
	diag[n] = d -= u*s;
	if (fabs(d) <= normr*tol) {
		aux[3]=n1;
		aux[5]=d;
		return;
	}
	if (normr > norm) norm=normr;
	aux[3]=n;
	aux[5]=norm;
}
 


void dectri(real_t sub[], real_t diag[], real_t super[],int n, real_t aux[])
{
	int i,n1;
	real_t d,r,s,u,norm,norm1,tol;

	tol=aux[2];
	d=diag[1];
	r=super[1];
	norm=norm1=fabs(d)+fabs(r);
	if (fabs(d) <= norm1*tol) {
		aux[3]=0.0;
		aux[5]=d;
		return;
	}
	u=super[1]=r/d;
	s=sub[1];
	n1=n-1;
	for (i=2; i<=n1; i++) {
		d=diag[i];
		r=super[i];
		norm1=fabs(s)+fabs(d)+fabs(r);
		diag[i] = d -= u*s;
		if (fabs(d) <= norm1*tol) {
			aux[3]=i-1;
			aux[5]=d;
			return;
		}
		u=super[i]=r/d;
		s=sub[i];
		if (norm1 > norm) norm=norm1;
	}
	d=diag[n];
	norm1=fabs(d)+fabs(s);
	diag[n] = d -= u*s;
	if (fabs(d) <= norm1*tol) {
		aux[3]=n1;
		aux[5]=d;
		return;
	}
	if (norm1 > norm) norm=norm1;
	aux[3]=n;
	aux[5]=norm;
}
 


void dectripiv(real_t sub[], real_t diag[], real_t super[], int n,real_t aid[], real_t aux[], int piv[])
{
	int i,i1,n1,n2;
	real_t d,r,s,u,t,q,v,w,norm,norm1,norm2,tol;

	tol=aux[2];
	d=diag[1];
	r=super[1];
	norm=norm2=fabs(d)+fabs(r);
	n2=n-2;
	for (i=1; i<=n2; i++) {
		i1=i+1;
		s=sub[i];
		t=diag[i1];
		q=super[i1];
		norm1=norm2;
		norm2=fabs(s)+fabs(t)+fabs(q);
		if (norm2 > norm) norm=norm2;
		if (fabs(d)*norm2 < fabs(s)*norm1) {
			if (fabs(s) <= tol*norm2) {
				aux[3]=i-1;
				aux[5]=s;
				return;
			}
			diag[i]=s;
			u=super[i]=t/s;
			v=aid[i]=q/s;
			sub[i]=d;
			w = super[i1] = -v*d;
			d=diag[i1]=r-u*d;
			r=w;
			norm2=norm1;
			piv[i]=1;
		} else {
			if (fabs(d) <= tol*norm1) {
				aux[3]=i-1;
				aux[5]=d;
				return;
			}
			u=super[i]=r/d;
			d=diag[i1]=t-u*s;
			aid[i]=0.0;
			piv[i]=0;
			r=q;
		}
	}
	n1=n-1;
	s=sub[n1];
	t=diag[n];
	norm1=norm2;
	norm2=fabs(s)+fabs(t);
	if (norm2 > norm) norm=norm2;
	if (fabs(d)*norm2 < fabs(s)*norm1) {
		if (fabs(s) <= tol*norm2) {
			aux[3]=n2;
			aux[5]=s;
			return;
		}
		diag[n1]=s;
		u=super[n1]=t/s;
		sub[n1]=d;
		d=diag[n]=r-u*d;
		norm2=norm1;
		piv[n1]=1;
	} else {
		if (fabs(d) <= tol*norm1) {
			aux[3]=n2;
			aux[5]=d;
			return;
		}
		u=super[n1]=r/d;
		d=diag[n]=t-u*s;
		piv[n1]=0;
	}
	if (fabs(d) <= tol*norm2) {
		aux[3]=n1;
		aux[5]=d;
		return;
	}
	aux[3]=n;
	aux[5]=norm;
}
 


real_t determbnd(real_t a[], int n, int lw, int rw, int sgndet)
{
	int i,l;
	real_t p;

	l=1;
	p=1.0;
	lw += rw+1;
	for (i=1; i<=n; i++) {
		p=a[l]*p;
		l += lw;
	}
	return (fabs(p)*sgndet);
}
 


real_t determ(real_t **a, int n, int sign)
{
	int i;
	real_t det;

	det=1.0;
	for (i=1; i<=n; i++) det *= a[i][i];
	return (sign*fabs(det));
}
 
real_t determsym2(real_t detaux[], int n, int aux[])
{
	int i;
	real_t det;

	if (aux[5] > 0)
		det=0.0;
	else {
		det=1.0;
		for (i=1; i<=n; i++) det *= detaux[i];
	}
	return (det);
}
 


void eqilbr(real_t **a, int n, real_t em[], real_t d[], int inter[])
{
	real_t tammat(int, int, int, int, real_t **, real_t **);
	real_t mattam(int, int, int, int, real_t **, real_t **);
	void ichcol(int, int, int, int, real_t **);
	void ichrow(int, int, int, int, real_t **);
	int i,im,i1,p,q,j,t,count,exponent,ni;
	real_t c,r,eps,omega,factor,di;

	factor=1.0/(2.0*log(2.0));
	eps=em[0];
	omega=1.0/eps;
	t=p=1;
	q=ni=i=n;
	count=((n+1)*n)/2;
	for (j=1; j<=n; j++) {
		d[j]=1.0;
		inter[j]=0;
	}
	i = (i < q) ? i+1 : p;
	while (count > 0 && ni > 0) {
		count--;
		im=i-1;
		i1=i+1;
		c=sqrt(tammat(p,im,i,i,a,a)+tammat(i1,q,i,i,a,a));
		r=sqrt(mattam(p,im,i,i,a,a)+mattam(i1,q,i,i,a,a));
		if (c*omega <= r*eps) {
			inter[t]=i;
			ni=q-p;
			t++;
			if (p != i) {
				ichcol(1,n,p,i,a);
				ichrow(1,n,p,i,a);
				di=d[i];
				d[i]=d[p];
				d[p]=di;
			}
			p++;
		} else
			if (r*omega <= c*eps) {
				inter[t] = -i;
				ni=q-p;
				t++;
				if (q != i) {
					ichcol(1,n,q,i,a);
					ichrow(1,n,q,i,a);
					di=d[i];
					d[i]=d[q];
					d[q]=di;
				}
				q--;
			} else {
				exponent=log(r/c)*factor;
				if (fabs(exponent) > 1.0) {
					ni=q-p;
					c=pow(2.0,exponent);
					r=1.0/c;
					d[i] *= c;
					for (j=1; j<=im; j++) {
						a[j][i] *=c;
						a[i][j] *= r;
					}
					for (j=i1; j<=n; j++) {
						a[j][i] *=c;
						a[i][j] *= r;
					}
				} else
					ni--;
			}
		i = (i < q) ? i+1 : p;
	}
}
 


void erbelm(int n, real_t aux[], real_t nrminv)
{
	real_t aid,eps;

	eps=aux[0];
	aid=(1.06*eps*(0.75*n+4.5)*(n*n)*aux[7]+aux[5]*aux[6])*nrminv;
	aux[11]=(2.0*aid >= (1.0-eps)) ? -1.0 : aid/(1.0-2.0*aid);
	aux[9]=nrminv;
}
 


void gsselm(real_t **a, int n, real_t aux[], int ri[], int ci[])
{
	void elmrow(int, int, int, int, real_t **, real_t **, real_t);
	int maxelmrow(int, int, int, int, real_t **, real_t **, real_t);
	void ichcol(int, int, int, int, real_t **);
	void ichrow(int, int, int, int, real_t **);
	void rowcst(int, int, int, real_t **, real_t);
	real_t absmaxmat(int, int, int, int, int *, int *, real_t **);
	int i,j,p,q,r,r1,jpiv,rank,signdet,partial;
	real_t crit,pivot,rgrow,max,aid,max1,eps;

	aux[5]=rgrow=absmaxmat(1,n,1,n,&i,&j,a);
	crit=n*rgrow*aux[4];
	eps=rgrow*aux[2];
	max=0.0;
	rank=n;
	signdet=1;
	partial = rgrow != 0;
	for (q=1; q<=n; q++)
		if (q != j) {
			aid=fabs(a[i][q]);
			if (aid > max) max=aid;
		}
	rgrow += max;
	for (r=1; r<=n; r++) {
		r1=r+1;
		if (i != r) {
			signdet = -signdet;
			ichrow(1,n,r,i,a);
		}
		if (j != r) {
			signdet = -signdet;
			ichcol(1,n,r,j,a);
		}
		ri[r]=i;
		ci[r]=j;
		pivot=a[r][r];
		if (pivot < 0.0) signdet = -signdet;
		if (partial) {
			max=max1=0.0;
			j=r1;
			rowcst(r1,n,r,a,1.0/pivot);
			for (p=r1; p<=n; p++) {
				elmrow(r1,n,p,r,a,a,-a[p][r]);
				aid=fabs(a[p][r1]);
				if (max < aid) {
					max=aid;
					i=p;
				}
			}
			for (q=r1+1; q<=n; q++) {
				aid=fabs(a[i][q]);
				if (max1 < aid) max1=aid;
			}
			aid=rgrow;
			rgrow += max1;
			if ((rgrow > crit) || (max < eps)) {
				partial=0;
				rgrow=aid;
				max=absmaxmat(r1,n,r1,n,&i,&j,a);
			}
		} else {
			if (max <= eps) {
				rank=r-1;
				if (pivot < 0.0) signdet = -signdet;
				break;
			}
			max = -1.0;
			rowcst(r1,n,r,a,1.0/pivot);
			for (p=r1; p<=n; p++) {
				jpiv=maxelmrow(r1,n,p,r,a,a,-a[p][r]);
				aid=fabs(a[p][jpiv]);
				if (max < aid) {
					max=aid;
					i=p;
					j=jpiv;
				}
			}
			if (rgrow < max) rgrow=max;
		}
	}
	aux[1]=signdet;
	aux[3]=rank;
	aux[7]=rgrow;
}
 
void gsserb(real_t **a, int n, real_t aux[], int ri[], int ci[])
{
	void gsselm(real_t **, int, real_t [], int [], int []);
	real_t onenrminv(real_t **, int);
	void erbelm(int, real_t [], real_t);

	gsselm(a,n,aux,ri,ci);
	if (aux[3] == n) erbelm(n,aux,onenrminv(a,n));
}
 
void gssnri(real_t **a, int n, real_t aux[], int ri[], int ci[])
{
	void gsselm(real_t **, int, real_t [], int [], int []);
	real_t onenrminv(real_t **, int);

	gsselm(a,n,aux,ri,ci);
	if (aux[3] == n) aux[9]=onenrminv(a,n);
}
 
void homsolsvd(real_t **u, real_t val[], real_t **v, int m, int n)
{
	void ichcol(int, int, int, int, real_t **);
	int i,j;
	real_t x;

	for (i=n; i>=2; i--)
		for (j=i-1; j>=1; j--)
			if (val[i] > val[j]) {
				x=val[i];
				val[i]=val[j];
				val[j]=x;
				ichcol(1,m,i,j,u);
				ichcol(1,n,i,j,v);
			}
}

 
void hshcomhes(real_t **ar, real_t **ai, int n, real_t em[], real_t b[],real_t tr[], real_t ti[], real_t del[])
{
	real_t matmat(int, int, int, int, real_t **, real_t **);
	void elmrowcol(int, int, int, int, real_t **, real_t **, real_t);
	void hshcomprd(int, int, int, int, int, real_t **,
						real_t **, real_t **, real_t **, real_t);
	void comcolcst(int, int, int, real_t **, real_t **, real_t, real_t);
	void comrowcst(int, int, int, real_t **, real_t **, real_t, real_t);
	void carpol(real_t, real_t, real_t *, real_t *, real_t *);
	void commul(real_t, real_t, real_t, real_t, real_t *, real_t *);
	int hshcomcol(int, int, int, real_t **, real_t **, real_t,
						real_t *, real_t *, real_t *, real_t *);
	int r,rm1,i,nm1;
	real_t tol,t,xr,xi;

	nm1=n-1;
	t=em[0]*em[1];
	tol=t*t;
	rm1=1;
	for (r=2; r<=nm1; r++) {
		if (hshcomcol(r,n,rm1,ar,ai,tol,&(b[rm1]),&(tr[r]),&(ti[r]),&t)) {
			for (i=1; i<=n; i++) {
				xr=(matmat(r,n,i,rm1,ai,ai)-matmat(r,n,i,rm1,ar,ar))/t;
				xi=(-matmat(r,n,i,rm1,ar,ai)-matmat(r,n,i,rm1,ai,ar))/t;
				elmrowcol(r,n,i,rm1,ar,ar,xr);
				elmrowcol(r,n,i,rm1,ar,ai,xi);
				elmrowcol(r,n,i,rm1,ai,ar,xi);
				elmrowcol(r,n,i,rm1,ai,ai,-xr);
			}
			hshcomprd(r,n,r,n,rm1,ar,ai,ar,ai,t);
		}
		del[rm1]=t;
		rm1=r;
	}
	if (n > 1) carpol(ar[n][nm1],ai[n][nm1],&(b[nm1]),&(tr[n]),&(ti[n]));
	rm1=1;
	tr[1]=1.0;
	ti[1]=0.0;
	for (r=2; r<=n; r++) {
		commul(tr[rm1],ti[rm1],tr[r],ti[r],&(tr[r]),&(ti[r]));
		comcolcst(1,rm1,r,ar,ai,tr[r],ti[r]);
		comrowcst(r+1,n,r,ar,ai,tr[r],-ti[r]);
		rm1=r;
	}
}
 


void hshhrmtri(real_t **a, int n, real_t d[], real_t b[], real_t bb[],real_t em[], real_t tr[], real_t ti[])
{
	real_t matvec(int, int, int, real_t **, real_t []);
	real_t tamvec(int, int, int, real_t **, real_t []);
	real_t matmat(int, int, int, int, real_t **, real_t **);
	real_t tammat(int, int, int, int, real_t **, real_t **);
	real_t mattam(int, int, int, int, real_t **, real_t **);
	void elmveccol(int, int, int, real_t [], real_t **, real_t);
	void elmcolvec(int, int, int, real_t **, real_t [], real_t);
	void elmcol(int, int, int, int, real_t **, real_t **, real_t);
	void elmrow(int, int, int, int, real_t **, real_t **, real_t);
	void elmvecrow(int, int, int, real_t [], real_t **, real_t);
	void elmrowvec(int, int, int, real_t **, real_t [], real_t);
	void elmrowcol(int, int, int, int, real_t **, real_t **, real_t);
	void elmcolrow(int, int, int, int, real_t **, real_t **, real_t);
	void carpol(real_t, real_t, real_t *, real_t *, real_t *);
	int i,j,j1,jm1,r,rm1;
	real_t nrm,w,tol2,x,ar,ai,mod,c,s,h,k,t,q,ajr,arj,bj,bbj;

	nrm=0.0;
	for (i=1; i<=n; i++) {
		w=fabs(a[i][i]);
		for (j=i-1; j>=1; j--) w += fabs(a[i][j])+fabs(a[j][i]);
		for (j=i+1; j<=n; j++) w += fabs(a[i][j])+fabs(a[j][i]);
		if (w > nrm) nrm=w;
	}
	t=em[0]*nrm;
	tol2=t*t;
	em[1]=nrm;
	r=n;
	for (rm1=n-1; rm1>=1; rm1--) {
		x=tammat(1,r-2,r,r,a,a)+mattam(1,r-2,r,r,a,a);
		ar=a[rm1][r];
		ai = -a[r][rm1];
		d[r]=a[r][r];
		carpol(ar,ai,&mod,&c,&s);
		if (x < tol2) {
			a[r][r] = -1.0;
			b[rm1]=mod;
			bb[rm1]=mod*mod;
		} else {
			h=mod*mod+x;
			k=sqrt(h);
			t=a[r][r]=h+mod*k;
			if (ar == 0.0 && ai == 0.0)
				a[rm1][r]=k;
			else {
				a[rm1][r]=ar+c*k;
				a[r][rm1] = -ai-s*k;
				s = -s;
			}
			c = -c;
			j=1;
			jm1=0;
			for (j1=2; j1<=r; j1++) {
				b[j]=(tammat(1,j,j,r,a,a)+matmat(j1,rm1,j,r,a,a)+
						mattam(1,jm1,j,r,a,a)-matmat(j1,rm1,r,j,a,a))/t;
				bb[j]=(matmat(1,jm1,j,r,a,a)-tammat(j1,rm1,j,r,a,a)-
						matmat(1,j,r,j,a,a)-mattam(j1,rm1,j,r,a,a))/t;
				jm1=j;
				j=j1;
			}
			q=(tamvec(1,rm1,r,a,b)-matvec(1,rm1,r,a,bb))/t/2.0;
			elmveccol(1,rm1,r,b,a,-q);
			elmvecrow(1,rm1,r,bb,a,q);
			j=1;
			for (j1=2; j1<=r; j1++) {
				ajr=a[j][r];
				arj=a[r][j];
				bj=b[j];
				bbj=bb[j];
				elmrowvec(j,rm1,j,a,b,-ajr);
				elmrowvec(j,rm1,j,a,bb,arj);
				elmrowcol(j,rm1,j,r,a,a,-bj);
				elmrow(j,rm1,j,r,a,a,bbj);
				elmcolvec(j1,rm1,j,a,b,-arj);
				elmcolvec(j1,rm1,j,a,bb,-ajr);
				elmcol(j1,rm1,j,r,a,a,bbj);
				elmcolrow(j1,rm1,j,r,a,a,bj);
				j=j1;
			}
			bb[rm1]=h;
			b[rm1]=k;
		}
		tr[rm1]=c;
		ti[rm1]=s;
		r=rm1;
	}
	d[1]=a[1][1];
}
 


void hshhrmtrival(real_t **a, int n, real_t d[], real_t bb[], real_t em[])
{
	real_t matvec(int, int, int, real_t **, real_t []);
	real_t tamvec(int, int, int, real_t **, real_t []);
	real_t matmat(int, int, int, int, real_t **, real_t **);
	real_t tammat(int, int, int, int, real_t **, real_t **);
	real_t mattam(int, int, int, int, real_t **, real_t **);
	void elmveccol(int, int, int, real_t [], real_t **, real_t);
	void elmcolvec(int, int, int, real_t **, real_t [], real_t);
	void elmcol(int, int, int, int, real_t **, real_t **, real_t);
	void elmrow(int, int, int, int, real_t **, real_t **, real_t);
	void elmvecrow(int, int, int, real_t [], real_t **, real_t);
	void elmrowvec(int, int, int, real_t **, real_t [], real_t);
	void elmrowcol(int, int, int, int, real_t **, real_t **, real_t);
	void elmcolrow(int, int, int, int, real_t **, real_t **, real_t);
	int i,j,j1,jm1,r,rm1;
	real_t nrm,w,tol2,x,ar,ai,h,t,q,ajr,arj,dj,bbj,mod2;

	nrm=0.0;
	for (i=1; i<=n; i++) {
		w=fabs(a[i][i]);
		for (j=i-1; j>=1; j--) w += fabs(a[i][j])+fabs(a[j][i]);
		for (j=i+1; j<=n; j++) w += fabs(a[i][j])+fabs(a[j][i]);
		if (w > nrm) nrm=w;
	}
	t=em[0]*nrm;
	tol2=t*t;
	em[1]=nrm;
	r=n;
	for (rm1=n-1; rm1>=1; rm1--) {
		x=tammat(1,r-2,r,r,a,a)+mattam(1,r-2,r,r,a,a);
		ar=a[rm1][r];
		ai = -a[r][rm1];
		d[r]=a[r][r];
		if (x < tol2)
			bb[rm1]=ar*ar+ai*ai;
		else {
			mod2=ar*ar+ai*ai;
			if (mod2 == 0.0) {
				a[rm1][r]=sqrt(x);
				t=x;
			} else {
				x += mod2;
				h=sqrt(mod2*x);
				t=x+h;
				h=1.0+x/h;
				a[r][rm1] = -ai*h;
				a[rm1][r]=ar*h;
			}
			j=1;
			jm1=0;
			for (j1=2; j1<=r; j1++) {
				d[j]=(tammat(1,j,j,r,a,a)+matmat(j1,rm1,j,r,a,a)+
						mattam(1,jm1,j,r,a,a)-matmat(j1,rm1,r,j,a,a))/t;
				bb[j]=(matmat(1,jm1,j,r,a,a)-tammat(j1,rm1,j,r,a,a)-
						matmat(1,j,r,j,a,a)-mattam(j1,rm1,j,r,a,a))/t;
				jm1=j;
				j=j1;
			}
			q=(tamvec(1,rm1,r,a,d)-matvec(1,rm1,r,a,bb))/t/2.0;
			elmveccol(1,rm1,r,d,a,-q);
			elmvecrow(1,rm1,r,bb,a,q);
			j=1;
			for (j1=2; j1<=r; j1++) {
				ajr=a[j][r];
				arj=a[r][j];
				dj=d[j];
				bbj=bb[j];
				elmrowvec(j,rm1,j,a,d,-ajr);
				elmrowvec(j,rm1,j,a,bb,arj);
				elmrowcol(j,rm1,j,r,a,a,-dj);
				elmrow(j,rm1,j,r,a,a,bbj);
				elmcolvec(j1,rm1,j,a,d,-arj);
				elmcolvec(j1,rm1,j,a,bb,-ajr);
				elmcol(j1,rm1,j,r,a,a,bbj);
				elmcolrow(j1,rm1,j,r,a,a,dj);
				j=j1;
			}
			bb[rm1]=x;
		}
		r=rm1;
	}
	d[1]=a[1][1];
}
 


void hshreabid(real_t **a, int m, int n, real_t d[], real_t b[],real_t em[])
{
	real_t tammat(int, int, int, int, real_t **, real_t **);
	real_t mattam(int, int, int, int, real_t **, real_t **);
	void elmcol(int, int, int, int, real_t **, real_t **, real_t);
	void elmrow(int, int, int, int, real_t **, real_t **, real_t);
	int i,j,i1;
	real_t norm,machtol,w,s,f,g,h;

	norm=0.0;
	for (i=1; i<=m; i++) {
		w=0.0;
		for (j=1; j<=n; j++) w += fabs(a[i][j]);
		if (w > norm) norm=w;
	}
	machtol=em[0]*norm;
	em[1]=norm;
	for (i=1; i<=n; i++) {
		i1=i+1;
		s=tammat(i1,m,i,i,a,a);
		if (s < machtol)
			d[i]=a[i][i];
		else {
			f=a[i][i];
			s += f*f;
			d[i] = g = (f < 0.0) ? sqrt(s) : -sqrt(s);
			h=f*g-s;
			a[i][i]=f-g;
			for (j=i1; j<=n; j++)
				elmcol(i,m,j,i,a,a,tammat(i,m,i,j,a,a)/h);
		}
		if (i < n) {
			s=mattam(i1+1,n,i,i,a,a);
			if (s < machtol)
				b[i]=a[i][i1];
			else {
				f=a[i][i1];
				s += f*f;
				b[i] = g = (f < 0.0) ? sqrt(s) : -sqrt(s);
				h=f*g-s;
				a[i][i1]=f-g;
				for (j=i1; j<=m; j++)
					elmrow(i1,n,j,i,a,a,mattam(i1,n,i,j,a,a)/h);
			}
		}
	}
}
 


real_t inv1(real_t **a, int n, int ri[], int ci[], int withnorm)
{
	void ichrow(int, int, int, int, real_t **);
	void inv(real_t **, int, int []);
	int l,k,k1;
	real_t aid,nrminv;

	inv(a,n,ri);
	nrminv=0.0;
	if (withnorm)
		for (l=1; l<=n; l++) nrminv += fabs(a[l][n]);
	for (k=n-1; k>=1; k--) {
		if (withnorm) {
			aid=0.0;
			for (l=1; l<=n; l++) aid += fabs(a[l][k]);
			if (nrminv < aid) nrminv=aid;
		}
		k1=ci[k];
		if (k1 != k) ichrow(1,n,k,k1,a);
	}
	return (nrminv);
}
 


void itisolerb(real_t **a, real_t **lu, int n, real_t aux[],int ri[], int ci[], real_t b[])
{
	void itisol(real_t **, real_t **, int, real_t [],
					int [], int [], real_t []);
	int i;
	real_t nrmsol,nrminv,nrmb,alfa,tola,eps;

	eps=aux[0];
	nrminv=aux[9];
	tola=aux[5]*aux[6];
	nrmb=nrmsol=0.0;
	for (i=1; i<=n; i++) nrmb += fabs(b[i]);
	itisol(a,lu,n,aux,ri,ci,b);
	for (i=1; i<=n; i++) nrmsol += fabs(b[i]);
	alfa=1.0-(1.06*eps*aux[7]*(0.75*n+4.5)*n*n+tola)*nrminv;
	if (alfa < eps)
		aux[11] = -1.0;
	else {
		alfa=((aux[13]+aux[8]*nrmb)/nrmsol+tola)*nrminv/alfa;
		aux[11]=(1.0-alfa < eps) ? -1.0 : alfa/(1.0-alfa);
	}
}
 
void lsqdglinv(real_t **a, int m, real_t aid[], int ci[], real_t diag[])
{
	real_t vecvec(int, int, int, real_t [], real_t []);
	real_t tamvec(int, int, int, real_t **, real_t []);
	int j,k,cik;
	real_t w;

	for (k=1; k<=m; k++) {
		diag[k]=1.0/aid[k];
		for (j=k+1; j<=m; j++) diag[j] = -tamvec(k,j-1,j,a,diag)/aid[j];
		diag[k]=vecvec(k,m,0,diag,diag);
	}
	for (k=m; k>=1; k--) {
		cik=ci[k];
		if (cik != k) {
			w=diag[k];
			diag[k]=diag[cik];
			diag[cik]=w;
		}
	}
}
 
void lsqsol(real_t **a, int n, int m, real_t aid[], int ci[], real_t b[])
{
	real_t matvec(int, int, int, real_t **, real_t []);
	real_t tamvec(int, int, int, real_t **, real_t []);
	void elmveccol(int, int, int, real_t [], real_t **, real_t);
	int k,cik;
	real_t w;

	for (k=1; k<=m; k++)
		elmveccol(k,n,k,b,a,tamvec(k,n,k,a,b)/(aid[k]*a[k][k]));
	for (k=m; k>=1; k--) b[k]=(b[k]-matvec(k+1,m,k,a,b))/aid[k];
	for (k=m; k>=1; k--) {
		cik=ci[k];
		if (cik != k) {
			w=b[k];
			b[k]=b[cik];
			b[cik]=w;
		}
	}
}
 


void lupzerortpol(int n, int m, real_t b[], real_t c[], real_t zer[],real_t em[])
{
	real_t infnrmvec(int, int, int *, real_t []);
	void dupvec(int, int, int, real_t [], real_t []);
	int i,posdef,j,k,t,converge;
	real_t nrm,dlam,eps,delta,e,ep,err,p,q,qp,r,s,tot;

	nrm=fabs(b[0]);
	for (i=1; i<=n-2; i++)
		if (c[i]+fabs(b[i]) > nrm) nrm=c[i]+fabs(b[i]);
	if (n > 1)
		nrm = (nrm+1 >= c[n-1]+fabs(b[n-1])) ? nrm+1.0 :
					(c[n-1]+fabs(b[n-1]));
	em[1]=nrm;
	for (i=n; i>=1; i--) b[i]=b[i-1];
	for (i=n; i>=2; i--) c[i]=c[i-1];
	posdef = (em[6] == 1.0);
	dlam=em[2];
	eps=em[0];
	c[1]=err=q=s=0.0;
	tot=b[1];
	for (i=n; i>=1; i--) {
		p=q;
		q=sqrt(c[i]);
		e=b[i]-p-q;
		if (e < tot) tot=e;
	}
	if (posdef && (tot < 0.0))
		tot=0.0;
	else
		for(i=1; i<=n; i++) b[i] -= tot;
	t=0;
	for (k=1; k<=m; k++) {
		converge=0;
		/* next qr transformation */
		do {
			t++;
			tot += s;
			delta=b[n]-s;
			i=n;
			e=fabs(eps*tot);
			if (dlam < e) dlam=e;
			if (delta <= dlam) {
				converge=1;
				break;
			}
			e=c[n]/delta;
			qp=delta+e;
			p=1.0;
			for (i=n-1; i>=k; i--) {
				q=b[i]-s-e;
				r=q/qp;
				p=p*r+1.0;
				ep=e*r;
				b[i+1]=qp+ep;
				delta=q-ep;
				if (delta <= dlam) {
					converge=1;
					break;
				}
				e=c[i]/q;
				qp=delta+e;
				c[i+1]=qp*ep;
			}
			if (converge) break;
			b[k]=qp;
			s=qp/p;
		} while (tot+s > tot);	/* end of qr transformation */
		if (!converge) {
			/* irregular end of iteration,
				deflate minimum diagonal element */
			s=0.0;
			i=k;
			delta=qp;
			for (j=k+1; j<=n; j++)
				if (b[j] < delta) {
					i=j;
					delta=b[j];
				}
		}
		/* convergence */
		if (i < n) c[i+1]=c[i]*e/qp;
		for (j=i-1; j>=k; j--) {
			b[j+1]=b[j]-s;
			c[j+1]=c[j];
		}
		b[k]=tot;
		c[k] = err += fabs(delta);
	}
	em[5]=t;
	em[3]=infnrmvec(1,m,&t,c);
	dupvec(1,m,0,zer,b);
}
 
void pretfmmat(real_t **a, int m, int n, real_t d[])
{
	real_t tammat(int, int, int, int, real_t **, real_t **);
	void elmcol(int, int, int, int, real_t **, real_t **, real_t);
	int i,i1,j;
	real_t g,h;

	for (i=n; i>=1; i--) {
		i1=i+1;
		g=d[i];
		h=g*a[i][i];
		for (j=i1; j<=n; j++) a[i][j]=0.0;
		if (h < 0.0) {
			for (j=i1; j<=n; j++)
				elmcol(i,m,j,i,a,a,tammat(i1,m,i,j,a,a)/h);
			for (j=i; j<=m; j++) a[j][i] /= g;
		} else
			for (j=i; j<=m; j++) a[j][i]=0.0;
		a[i][i] += 1.0;
	}
}
 
void psttfmmat(real_t **a, int n, real_t **v, real_t b[])
{
	real_t matmat(int, int, int, int, real_t **, real_t **);
	void elmcol(int, int, int, int, real_t **, real_t **, real_t);
	int i,i1,j;
	real_t h;

	i1=n;
	v[n][n]=1.0;
	for (i=n-1; i>=1; i--) {
		h=b[i]*a[i][i1];
		if (h < 0.0) {
			for (j=i1; j<=n; j++) v[j][i]=a[i][j]/h;
			for (j=i1; j<=n; j++)
				elmcol(i1,n,j,i,v,v,matmat(i1,n,i,j,a,v));
		}
		for (j=i1; j<=n; j++) v[i][j]=v[j][i]=0.0;
		v[i][i]=1.0;
		i1=i;
	}
}
 


int qrisngvalbid(real_t d[], real_t b[], int n, real_t em[])
{
	int n1,k,k1,i,i1,count,max,rnk;
	real_t tol,bmax,z,x,y,g,h,f,c,s,min;

	tol=em[2]*em[1];
	count=0;
	bmax=0.0;
	max=em[4];
	min=em[6];
	rnk=n;
	do {
		k=n;
		n1=n-1;
		while (1) {
			k--;
			if (k <= 0) break;
			if (fabs(b[k]) >= tol) {
				if (fabs(d[k]) < tol) {
					c=0.0;
					s=1.0;
					for (i=k; i<=n1; i++) {
						f=s*b[i];
						b[i] *= c;
						i1=i+1;
						if (fabs(f) < tol) break;
						g=d[i1];
						d[i1]=h=sqrt(f*f+g*g);
						c=g/h;
						s = -f/h;
					}
					break;
				}
			} else {
				if (fabs(b[k]) > bmax) bmax=fabs(b[k]);
				break;
			}
		}
		if (k == n1) {
			if (d[n] < 0.0) d[n] = -d[n];
			if (d[n] <= min) rnk--;
			n=n1;
		} else {
			count++;
			if (count > max) break;
			k1=k+1;
			z=d[n];
			x=d[k1];
			y=d[n1];
			g = (n1 == 1) ? 0.0 : b[n1-1];
			h=b[n1];
			f=((y-z)*(y+z)+(g-h)*(g+h))/(2.0*h*y);
			g=sqrt(f*f+1.0);
			f=((x-z)*(x+z)+h*(y/((f < 0.0) ? f-g : f+g)-h))/x;
			c=s=1.0;
			for (i=k1+1; i<=n; i++) {
				i1=i-1;
				g=b[i1];
				y=d[i];
				h=s*g;
				g *= c;
				z=sqrt(f*f+h*h);
				c=f/z;
				s=h/z;
				if (i1 != k1) b[i1-1]=z;
				f=x*c+g*s;
				g=g*c-x*s;
				h=y*s;
				y *= c;
				d[i1]=z=sqrt(f*f+h*h);
				c=f/z;
				s=h/z;
				f=c*g+s*y;
				x=c*y-s*g;
			}
			b[n1]=f;
			d[n]=x;
		}
	} while (n > 0);
	em[3]=bmax;
	em[5]=count;
	em[7]=rnk;
	return n;
}

 


int qrisngvaldecbid(real_t d[], real_t b[], int m, int n, real_t **u,real_t **v, real_t em[])
{
	void rotcol(int, int, int, int, real_t **, real_t, real_t);
	int n0,n1,k,k1,i,i1,count,max,rnk;
	real_t tol,bmax,z,x,y,g,h,f,c,s,min;

	tol=em[2]*em[1];
	count=0;
	bmax=0.0;
	max=em[4];
	min=em[6];
	rnk=n0=n;
	do {
		k=n;
		n1=n-1;
		while (1) {
			k--;
			if (k <= 0) break;
			if (fabs(b[k]) >= tol) {
				if (fabs(d[k]) < tol) {
					c=0.0;
					s=1.0;
					for (i=k; i<=n1; i++) {
						f=s*b[i];
						b[i] *= c;
						i1=i+1;
						if (fabs(f) < tol) break;
						g=d[i1];
						d[i1]=h=sqrt(f*f+g*g);
						c=g/h;
						s = -f/h;
						rotcol(1,m,k,i1,u,c,s);
					}
					break;
				}
			} else {
				if (fabs(b[k]) > bmax) bmax=fabs(b[k]);
				break;
			}
		}
		if (k == n1) {
			if (d[n] < 0.0) {
				d[n] = -d[n];
				for (i=1; i<=n0; i++) v[i][n] = -v[i][n];
			}
			if (d[n] <= min) rnk--;
			n=n1;
		} else {
			count++;
			if (count > max) break;
			k1=k+1;
			z=d[n];
			x=d[k1];
			y=d[n1];
			g = (n1 == 1) ? 0.0 : b[n1-1];
			h=b[n1];
			f=((y-z)*(y+z)+(g-h)*(g+h))/(2.0*h*y);
			g=sqrt(f*f+1.0);
			f=((x-z)*(x+z)+h*(y/((f < 0.0) ? f-g : f+g)-h))/x;
			c=s=1.0;
			for (i=k1+1; i<=n; i++) {
				i1=i-1;
				g=b[i1];
				y=d[i];
				h=s*g;
				g *= c;
				z=sqrt(f*f+h*h);
				c=f/z;
				s=h/z;
				if (i1 != k1) b[i1-1]=z;
				f=x*c+g*s;
				g=g*c-x*s;
				h=y*s;
				y *= c;
				rotcol(1,n0,i1,i,v,c,s);
				d[i1]=z=sqrt(f*f+h*h);
				c=f/z;
				s=h/z;
				f=c*g+s*y;
				x=c*y-s*g;
				rotcol(1,m,i1,i,u,c,s);
			}
			b[n1]=f;
			d[n]=x;
		}
	} while (n > 0);
	em[3]=bmax;
	em[5]=count;
	em[7]=rnk;
	return n;
}

 


int qrisymtri(real_t **a, int n, real_t d[], real_t b[], real_t bb[],real_t em[])
{
	void rotcol(int, int, int, int, real_t **, real_t, real_t);
	int j,j1,k,m,m1,count,max;
	real_t bbmax,r,s,sin,t,cos,oldcos,g,p,w,tol,tol2,lambda,dk1;

	tol=em[2]*em[1];
	tol2=tol*tol;
	count=0;
	bbmax=0.0;
	max=em[4];
	m=n;
	do {
		k=m;
		m1=m-1;
		while (1) {
			k--;
			if (k <= 0) break;
			if (bb[k] < tol2) {
				if (bb[k] > bbmax) bbmax=bb[k];
				break;
			}
		}
		if (k == m1)
			m=m1;
		else {
			t=d[m]-d[m1];
			r=bb[m1];
			if (fabs(t) < tol)
				s=sqrt(r);
			else {
				w=2.0/t;
				s=w*r/(sqrt(w*w*r+1.0)+1.0);
			}
			if (k == m-2) {
				d[m] += s;
				d[m1] -= s;
				t = -s/b[m1];
				r=sqrt(t*t+1.0);
				cos=1.0/r;
				sin=t/r;
				rotcol(1,n,m1,m,a,cos,sin);
				m -= 2;
			} else {
				count++;
				if (count > max) break;
				lambda=d[m]+s;
				if (fabs(t) < tol) {
					w=d[m1]-s;
					if (fabs(w) < fabs(lambda)) lambda=w;
				}
				k++;
				t=d[k]-lambda;
				cos=1.0;
				w=b[k];
				p=sqrt(t*t+w*w);
				j1=k;
				for (j=k+1; j<=m; j++) {
					oldcos=cos;
					cos=t/p;
					sin=w/p;
					dk1=d[j]-lambda;
					t *= oldcos;
					d[j1]=(t+dk1)*sin*sin+lambda+t;
					t=cos*dk1-sin*w*oldcos;
					w=b[j];
					p=sqrt(t*t+w*w);
					g=b[j1]=sin*p;
					bb[j1]=g*g;
					rotcol(1,n,j1,j,a,cos,sin);
					j1=j;
				}
				d[m]=cos*t+lambda;
				if (t < 0.0) b[m1] = -g;
			}
		}
	} while (m > 0);
	em[3]=sqrt(bbmax);
	em[5]=count;
	return m;
}

 


int qrivalsymtri(real_t d[], real_t bb[], int n, real_t em[])
{
	int i,i1,low,oldlow,n1,count,max;
	real_t bbtol,bbmax,bbi,bbn1,machtol,dn,delta,f,num,shift,g,h,
			t,p,r,s,c,oldg;

	t=em[2]*em[1];
	bbtol=t*t;
	machtol=em[0]*em[1];
	max=em[4];
	bbmax=0.0;
	count=0;
	oldlow=n;
	n1=n-1;
	while (n > 0) {
		i=n;
		do {
			low=i;
			i--;
		} while ((i >= 1) ? bb[i] > bbtol : 0);
		if (low > 1)
			if (bb[low-1] > bbmax) bbmax=bb[low-1];
		if (low == n)
			n=n1;
		else {
			dn=d[n];
			delta=d[n1]-dn;
			bbn1=bb[n1];
			if (fabs(delta) < machtol)
				r=sqrt(bbn1);
			else {
				f=2.0/delta;
				num=bbn1*f;
				r = -num/(sqrt(num*f+1.0)+1.0);
			}
			if (low == n1) {
				d[n]=dn+r;
				d[n1] -= r;
				n -= 2;
			} else {
				count++;
				if (count > max) break;
				if (low < oldlow) {
					shift=0.0;
					oldlow=low;
				} else
					shift=dn+r;
				h=d[low]-shift;
				if (fabs(h) < machtol)
					h = (h <= 0.0) ? -machtol : machtol;
				g=h;
				t=g*h;
				bbi=bb[low];
				p=t+bbi;
				i1=low;
				for (i=low+1; i<=n; i++) {
					s=bbi/p;
					c=t/p;
					h=d[i]-shift-bbi/h;
					if (fabs(h) < machtol)
						h = (h <= 0.0) ? -machtol : machtol;
					oldg=g;
					g=h*c;
					t=g*h;
					d[i1]=oldg-g+d[i];
					bbi = (i == n) ? 0.0 : bb[i];
					p=t+bbi;
					bb[i1]=s*p;
					i1=i;
				}
				d[n]=g+shift;
			}
		}
		n1=n-1;
	}
	em[3]=sqrt(bbmax);
	em[5]=count;
	return n;
}

 


void qzi(int n, real_t **a, real_t **b, real_t **x, real_t alfr[],real_t alfi[], real_t beta[], int iter[], real_t em[])
{
	real_t matmat(int, int, int, int, real_t **, real_t **);
	void hshdecmul(int, real_t **, real_t **, real_t);
	void hestgl3(int, real_t **, real_t **, real_t **);
	void hsh2row3(int, int, int, int, int, real_t, real_t,
						real_t **, real_t **, real_t **);
	void hsh3row3(int, int, int, int, real_t, real_t, real_t,
						real_t **, real_t **, real_t **);
	void hsh2col(int, int, int, int, real_t, real_t, real_t **, real_t **);
	void hsh3col(int, int, int, int, real_t, real_t, real_t,
					real_t **, real_t **);
	void chsh2(real_t, real_t, real_t, real_t, real_t *, real_t *, real_t *);
	void comdiv(real_t, real_t, real_t, real_t, real_t *, real_t *);
	int i,q,m,m1,q1,j,k,k1,k2,k3,km1,stationary,goon,l,mr,mi,l1,out;
	real_t dwarf,eps,epsa,epsb,
			anorm,bnorm,ani,bni,constt,a10,a20,a30,b11,b22,b33,b44,a11,
			a12,a21,a22,a33,a34,a43,a44,b12,b34,old1,old2,
			an,bn,e,c,d,er,ei,a11r,a11i,a12r,a12i,a21r,a21i,a22r,a22i,
			cz,szr,szi,cq,sqr,sqi,ssr,ssi,tr,ti,bdr,bdi,r,
			betm,alfm,sl,sk,tkk,tkl,tlk,tll,almi,almr,slr,sli,skr,ski,
			dr,di,tkkr,tkki,tklr,tkli,tlkr,tlki,tllr,tlli,s;

	dwarf=em[0];
	eps=em[1];
	hshdecmul(n,a,b,dwarf);
	hestgl3(n,a,b,x);
	anorm=bnorm=0.0;
	for (i=1; i<=n; i++) {
		bni=0.0;
		iter[i]=0;
		ani = (i > 1) ? fabs(a[i][i-1]) : 0.0;
		for (j=i; j<=n; j++) {
			ani += fabs(a[i][j]);
			bni += fabs(b[i][j]);
		}
		if (ani > anorm) anorm=ani;
		if (bni > bnorm) bnorm=bni;
	}
	if (anorm == 0.0) anorm=eps;
	if (bnorm == 0.0) bnorm=eps;
	epsa=eps*anorm;
	epsb=eps*bnorm;
	m=n;
	out=0;
	do {
		i=q=m;
		while ((i > 1) ? fabs(a[i][i-1]) > epsa : 0) {
			q=i-1;
			i--;
		}
		if (q > 1) a[q][q-1]=0.0;
		goon=1;
		while (goon) {
			if (q >= m-1) {
				m=q-1;
				goon=0;
			} else {
				if (fabs(b[q][q]) <= epsb) {
					b[q][q]=0.0;
					q1=q+1;
					hsh2col(q,q,n,q,a[q][q],a[q1][q],a,b);
					a[q1][q]=0.0;
					q=q1;
				} else {
					goon=0;
					m1=m-1;
					q1=q+1;
					constt=0.75;
					(iter[m])++;
					stationary = (iter[m] == 1) ? 1 :
						(fabs(a[m][m-1]) >= constt*old1 &&
						fabs(a[m-1][m-2]) >= constt*old2);
					if (iter[m] > 30 && stationary) {
						for (i=1; i<=m; i++) iter[i] = -1;
						out=1;
						break;
					}
					if (iter[m] == 10 && stationary) {
						a10=0.0;
						a20=1.0;
						a30=1.1605;
					} else {
						b11=b[q][q];
						b22 = (fabs(b[q1][q1]) < epsb) ? epsb : b[q1][q1];
						b33 = (fabs(b[m1][m1]) < epsb) ? epsb : b[m1][m1];
						b44 = (fabs(b[m][m]) < epsb) ? epsb : b[m][m];
						a11=a[q][q]/b11;
						a12=a[q][q1]/b22;
						a21=a[q1][q]/b11;
						a22=a[q1][q1]/b22;
						a33=a[m1][m1]/b33;
						a34=a[m1][m]/b44;
						a43=a[m][m1]/b33;
						a44=a[m][m]/b44;
						b12=b[q][q1]/b22;
						b34=b[m1][m]/b44;
						a10=((a33-a11)*(a44-a11)-a34*a43+a43*b34*a11)/a21+
								a12-a11*b12;
						a20=(a22-a11-a21*b12)-(a33-a11)-(a44-a11)+a43*b34;
						a30=a[q+2][q1]/b22;
					}
					old1=fabs(a[m][m-1]);
					old2=fabs(a[m-1][m-2]);
					for (k=q; k<=m1; k++) {
						k1=k+1;
						k2=k+2;
						k3 = (k+3 > m) ? m : k+3;
						km1 = (k-1 < q) ? q : k-1;
						if (k != m1) {
							if (k == q)
								hsh3col(km1,km1,n,k,a10,a20,a30,a,b);
							else {
								hsh3col(km1,km1,n,k,a[k][km1],
											a[k1][km1],a[k2][km1],a,b);
								a[k1][km1]=a[k2][km1]=0.0;
							}
							hsh3row3(1,k3,n,k,b[k2][k2],b[k2][k1],
										b[k2][k],a,b,x);
							b[k2][k]=b[k2][k1]=0.0;
						} else {
							hsh2col(km1,km1,n,k,a[k][km1],a[k1][km1],a,b);
							a[k1][km1]=0.0;
						}
						hsh2row3(1,k3,k3,n,k,b[k1][k1],b[k1][k],a,b,x);
						b[k1][k]=0.0;
					}
				}
			}
		}	/* goon loop */
		if (out) break;
	} while (m >= 3);

	m=n;
	do {
		if ((m > 1) ? (a[m][m-1] == 0) : 1) {
			alfr[m]=a[m][m];
			beta[m]=b[m][m];
			alfi[m]=0.0;
			m--;
		} else {
			l=m-1;
			if (fabs(b[l][l]) <= epsb) {
				b[l][l]=0.0;
				hsh2col(l,l,n,l,a[l][l],a[m][l],a,b);
				a[m][l]=b[m][l]=0.0;
				alfr[l]=a[l][l];
				alfr[m]=a[m][m];
				beta[l]=b[l][l];
				beta[m]=b[m][m];
				alfi[m]=alfi[l]=0.0;
			} else
				if (fabs(b[m][m]) <= epsb) {
					b[m][m]=0.0;
					hsh2row3(1,m,m,n,l,a[m][m],a[m][l],a,b,x);
					a[m][l]=b[m][l]=0.0;
					alfr[l]=a[l][l];
					alfr[m]=a[m][m];
					beta[l]=b[l][l];
					beta[m]=b[m][m];
					alfi[m]=alfi[l]=0.0;
				} else {
					an=fabs(a[l][l])+fabs(a[l][m])+fabs(a[m][l])+
						fabs(a[m][m]);
					bn=fabs(b[l][l])+fabs(b[l][m])+fabs(b[m][m]);
					a11=a[l][l]/an;
					a12=a[l][m]/an;
					a21=a[m][l]/an;
					a22=a[m][m]/an;
					b11=b[l][l]/bn;
					b12=b[l][m]/bn;
					b22=b[m][m]/bn;
					e=a11/b11;
					c=((a22-e*b22)/b22-(a21*b12)/(b11*b22))/2.0;
					d=c*c+(a21*(a12-e*b12))/(b11*b22);
					if (d >= 0.0) {
						e += ((c < 0.0) ? c-sqrt(d) : c+sqrt(d));
						a11 -= e*b11;
						a12 -= e*b12;
						a22 -= e*b22;
						if (fabs(a11)+fabs(a12) >= fabs(a21)+fabs(a22))
							hsh2row3(1,m,m,n,l,a12,a11,a,b,x);
						else
							hsh2row3(1,m,m,n,l,a22,a21,a,b,x);
						if (an >= fabs(e)*bn)
							hsh2col(l,l,n,l,b[l][l],b[m][l],a,b);
						else
							hsh2col(l,l,n,l,a[l][l],a[m][l],a,b);
						a[m][l]=b[m][l]=0.0;
						alfr[l]=a[l][l];
						alfr[m]=a[m][m];
						beta[l]=b[l][l];
						beta[m]=b[m][m];
						alfi[m]=alfi[l]=0.0;
					} else {
						er=e+c;
						ei=sqrt(-d);
						a11r=a11-er*b11;
						a11i=ei*b11;
						a12r=a12-er*b12;
						a12i=ei*b12;
						a21r=a21;
						a21i=0.0;
						a22r=a22-er*b22;
						a22i=ei*b22;
						if (fabs(a11r)+fabs(a11i)+fabs(a12r)+fabs(a12i) >=
								fabs(a21r)+fabs(a22r)+fabs(a22i))
							chsh2(a12r,a12i,-a11r,-a11i,&cz,&szr,&szi);
						else
							chsh2(a22r,a22i,-a21r,-a21i,&cz,&szr,&szi);
						if (an >= (fabs(er)+fabs(ei))*bn)
							chsh2(cz*b11+szr*b12,szi*b12,szr*b22,szi*b22,
									&cq,&sqr,&sqi);
						else
							chsh2(cz*a11+szr*a12,szi*a12,cz*a21+szr*a22,
									szi*a22,&cq,&sqr,&sqi);
						ssr=sqr*szr+sqi*szi;
						ssi=sqr*szi-sqi*szr;
						tr=cq*cz*a11+cq*szr*a12+sqr*cz*a21+ssr*a22;
						ti=cq*szi*a12-sqi*cz*a21+ssi*a22;
						bdr=cq*cz*b11+cq*szr*b12+ssr*b22;
						bdi=cq*szi*b12+ssi*b22;
						r=sqrt(bdr*bdr+bdi*bdi);
						beta[l]=bn*r;
						alfr[l]=an*(tr*bdr+ti*bdi)/r;
						alfi[l]=an*(tr*bdi-ti*bdr)/r;
						tr=ssr*a11-sqr*cz*a12-cq*szr*a21+cq*cz*a22;
						ti = -ssi*a11-sqi*cz*a12+cq*szi*a21;
						bdr=ssr*b11-sqr*cz*b12+cq*cz*b22;
						bdi = -ssi*b11-sqi*cz*b12;
						r=sqrt(bdr*bdr+bdi*bdi);
						beta[m]=bn*r;
						alfr[m]=an*(tr*bdr+ti*bdi)/r;
						alfi[m]=an*(tr*bdi-ti*bdr)/r;
					}
				}
			m -= 2;
		}
	} while (m > 0);

	for (m=n; m>=1; m--)
		if (alfi[m] == 0.0) {
			alfm=alfr[m];
			betm=beta[m];
			b[m][m]=1.0;
			l1=m;
			for (l=m-1; l>=1; l--) {
				sl=0.0;
				for (j=l1; j<=m; j++)
					sl += (betm*a[l][j]-alfm*b[l][j])*b[j][m];
				if ((l != 1) ? (betm*a[l][l-1] == 0.0) : 1) {
					d=betm*a[l][l]-alfm*b[l][l];
					if (d == 0.0) d=(epsa+epsb)/2.0;
					b[l][m] = -sl/d;
				} else {
					k=l-1;
					sk=0.0;
					for (j=l1; j<=m; j++)
						sk += (betm*a[k][j]-alfm*b[k][j])*b[j][m];
					tkk=betm*a[k][k]-alfm*b[k][k];
					tkl=betm*a[k][l]-alfm*b[k][l];
					tlk=betm*a[l][k];
					tll=betm*a[l][l]-alfm*b[l][l];
					d=tkk*tll-tkl*tlk;
					if (d == 0.0) d=(epsa+epsb)/2.0;
					b[l][m]=(tlk*sk-tkk*sl)/d;
					b[k][m] = (fabs(tkk) >= fabs(tlk)) ?
								-(sk+tkl*b[l][m])/tkk :
								-(sl+tll*b[l][m])/tlk;
					l--;
				}
				l1=l;
			}
		} else {
			almr=alfr[m-1];
			almi=alfi[m-1];
			betm=beta[m-1];
			mr=m-1;
			mi=m;
			b[m-1][mr]=almi*b[m][m]/(betm*a[m][m-1]);
			b[m-1][mi]=(betm*a[m][m]-almr*b[m][m])/(betm*a[m][m-1]);
			b[m][mr]=0.0;
			b[m][mi] = -1.0;
			l1=m-1;
			for (l=m-2; l>=1; l--) {
				slr=sli=0.0;
				for (j=l1; j<=m; j++) {
					tr=betm*a[l][j]-almr*b[l][j];
					ti = -almi*b[l][j];
					slr += tr*b[j][mr]-ti*b[j][mi];
					sli += tr*b[j][mi]+ti*b[j][mr];
				}
				if ((l != 1) ? (betm*a[l][l-1] == 0.0) : 1) {
					dr=betm*a[l][l]-almr*b[l][l];
					di = -almi*b[l][l];
					comdiv(-slr,-sli,dr,di,&b[l][mr],&b[l][mi]);
				} else {
					k=l-1;
					skr=ski=0.0;
					for (j=l1; j<=m; j++) {
						tr=betm*a[k][j]-almr*b[k][j];
						ti = -almi*b[k][j];
						skr += tr*b[j][mr]-ti*b[j][mi];
						ski += tr*b[j][mi]+ti*b[j][mr];
					}
					tkkr=betm*a[k][k]-almr*b[k][k];
					tkki = -almi*b[k][k];
					tklr=betm*a[k][l]-almr*b[k][l];
					tkli = -almi*b[k][l];
					tlkr=betm*a[l][k];
					tlki=0.0;
					tllr=betm*a[l][l]-almr*b[l][l];
					tlli = -almi*b[l][l];
					dr=tkkr*tllr-tkki*tlli-tklr*tlkr;
					di=tkkr*tlli+tkki*tllr-tkli*tlkr;
					if (dr == 0.0 && di == 0.0) dr=(epsa+epsb)/2.0;
					comdiv(tlkr*skr-tkkr*slr+tkki*sli,
							tlkr*ski-tkkr*sli-tkki*slr,
							dr,di,&b[l][mr],&b[l][mi]);
					if (fabs(tkkr)+fabs(tkki) >= fabs(tlkr))
						comdiv(-skr-tklr*b[l][mr]+tkli*b[l][mi],
								-ski-tklr*b[l][mi]-tkli*b[l][mr],
								tkkr,tkki,&b[k][mr],&b[k][mi]);
					else
						comdiv(-slr-tllr*b[l][mr]+tlli*b[l][mi],
								-sli-tllr*b[l][mi]-tlli*b[l][mr],
								tlkr,tlki,&b[k][mr],&b[k][mi]);
					l--;
				}
				l1=l;
			}
			m--;
		}
	for (m=n; m>=1; m--)
		for (k=1; k<=n; k++) x[k][m]=matmat(1,m,k,m,x,b);
	for (m=n; m>=1; m--) {
		s=0.0;
		if (alfi[m] == 0.0) {
			for (k=1; k<=n; k++) {
				r=fabs(x[k][m]);
				if (r >= s) {
					s=r;
					d=x[k][m];
				}
			}
			for (k=1; k<=n; k++) x[k][m] /= d;
		} else {
			for (k=1; k<=n; k++) {
				r=fabs(x[k][m-1])+fabs(x[k][m]);
				an=x[k][m-1]/r;
				bn=x[k][m]/r;
				r *= sqrt(an*an+bn*bn);
				if (r >= s) {
					s=r;
					dr=x[k][m-1];
					di=x[k][m];
				}
			}
			for (k=1; k<=n; k++)
				comdiv(x[k][m-1],x[k][m],dr,di,&x[k][m-1],&x[k][m]);
			m--;
		}
	}
}
 


void qzival(int n, real_t **a, real_t **b, real_t alfr[], real_t alfi[],real_t beta[], int iter[], real_t em[])
{
	void elmcol(int, int, int, int, real_t **, real_t **, real_t);
	void hshdecmul(int, real_t **, real_t **, real_t);
	void hestgl2(int, real_t **, real_t **);
	void hsh2row2(int, int, int, int, real_t, real_t,
						real_t **, real_t **);
	void hsh3row2(int, int, int, real_t, real_t, real_t,
						real_t **, real_t **);
	void hsh2col(int, int, int, int, real_t, real_t, real_t **, real_t **);
	void hsh3col(int, int, int, int, real_t, real_t, real_t,
					real_t **, real_t **);
	void chsh2(real_t, real_t, real_t, real_t, real_t *, real_t *, real_t *);
	void hshvecmat(int, int, int, int, real_t, real_t [], real_t **);
	void hshvectam(int, int, int, int, real_t, real_t [], real_t **);
	int i,q,m,m1,q1,j,k,k1,k2,k3,km1,stationary,goon,l,out;
	real_t dwarf,eps,epsa,epsb,
			anorm,bnorm,ani,bni,constt,a10,a20,a30,b11,b22,b33,b44,a11,
			a12,a21,a22,a33,a34,a43,a44,b12,b34,old1,old2,
			an,bn,e,c,d,er,ei,a11r,a11i,a12r,a12i,a21r,a21i,a22r,a22i,
			cz,szr,szi,cq,sqr,sqi,ssr,ssi,tr,ti,bdr,bdi,r;

	dwarf=em[0];
	eps=em[1];
	hshdecmul(n,a,b,dwarf);
	hestgl2(n,a,b);
	anorm=bnorm=0.0;
	for (i=1; i<=n; i++) {
		bni=0.0;
		iter[i]=0;
		ani = (i > 1) ? fabs(a[i][i-1]) : 0.0;
		for (j=i; j<=n; j++) {
			ani += fabs(a[i][j]);
			bni += fabs(b[i][j]);
		}
		if (ani > anorm) anorm=ani;
		if (bni > bnorm) bnorm=bni;
	}
	if (anorm == 0.0) anorm=eps;
	if (bnorm == 0.0) bnorm=eps;
	epsa=eps*anorm;
	epsb=eps*bnorm;
	m=n;
	out=0;
	do {
		i=q=m;
		while ((i > 1) ? fabs(a[i][i-1]) > epsa : 0) {
			q=i-1;
			i--;
		}
		if (q > 1) a[q][q-1]=0.0;
		goon=1;
		while (goon) {
			if (q >= m-1) {
				m=q-1;
				goon=0;
			} else {
				if (fabs(b[q][q]) <= epsb) {
					b[q][q]=0.0;
					q1=q+1;
					hsh2col(q,q,n,q,a[q][q],a[q1][q],a,b);
					a[q1][q]=0.0;
					q=q1;
				} else {
					goon=0;
					m1=m-1;
					q1=q+1;
					constt=0.75;
					(iter[m])++;
					stationary = (iter[m] == 1) ? 1 :
						(fabs(a[m][m-1]) >= constt*old1 &&
						fabs(a[m-1][m-2]) >= constt*old2);
					if (iter[m] > 30 && stationary) {
						for (i=1; i<=m; i++) iter[i] = -1;
						out=1;
						break;
					}
					if (iter[m] == 10 && stationary) {
						a10=0.0;
						a20=1.0;
						a30=1.1605;
					} else {
						b11=b[q][q];
						b22 = (fabs(b[q1][q1]) < epsb) ? epsb : b[q1][q1];
						b33 = (fabs(b[m1][m1]) < epsb) ? epsb : b[m1][m1];
						b44 = (fabs(b[m][m]) < epsb) ? epsb : b[m][m];
						a11=a[q][q]/b11;
						a12=a[q][q1]/b22;
						a21=a[q1][q]/b11;
						a22=a[q1][q1]/b22;
						a33=a[m1][m1]/b33;
						a34=a[m1][m]/b44;
						a43=a[m][m1]/b33;
						a44=a[m][m]/b44;
						b12=b[q][q1]/b22;
						b34=b[m1][m]/b44;
						a10=((a33-a11)*(a44-a11)-a34*a43+a43*b34*a11)/a21+
								a12-a11*b12;
						a20=(a22-a11-a21*b12)-(a33-a11)-(a44-a11)+a43*b34;
						a30=a[q+2][q1]/b22;
					}
					old1=fabs(a[m][m-1]);
					old2=fabs(a[m-1][m-2]);
					for (k=q; k<=m1; k++) {
						k1=k+1;
						k2=k+2;
						k3 = (k+3 > m) ? m : k+3;
						km1 = (k-1 < q) ? q : k-1;
						if (k != m1) {
							if (k == q)
								hsh3col(km1,km1,n,k,a10,a20,a30,a,b);
							else {
								hsh3col(km1,km1,n,k,a[k][km1],
											a[k1][km1],a[k2][km1],a,b);
								a[k1][km1]=a[k2][km1]=0.0;
							}
							hsh3row2(1,k3,k,b[k2][k2],b[k2][k1],
										b[k2][k],a,b);
							b[k2][k]=b[k2][k1]=0.0;
						} else {
							hsh2col(km1,km1,n,k,a[k][km1],a[k1][km1],a,b);
							a[k1][km1]=0.0;
						}
						hsh2row2(1,k3,k3,k,b[k1][k1],b[k1][k],a,b);
						b[k1][k]=0.0;
					}
				}
			}
		}	/* goon loop */
		if (out) break;
	} while (m >= 3);

	m=n;
	do {
		if ((m > 1) ? (a[m][m-1] == 0) : 1) {
			alfr[m]=a[m][m];
			beta[m]=b[m][m];
			alfi[m]=0.0;
			m--;
		} else {
			l=m-1;
			if (fabs(b[l][l]) <= epsb) {
				b[l][l]=0.0;
				hsh2col(l,l,n,l,a[l][l],a[m][l],a,b);
				a[m][l]=b[m][l]=0.0;
				alfr[l]=a[l][l];
				alfr[m]=a[m][m];
				beta[l]=b[l][l];
				beta[m]=b[m][m];
				alfi[m]=alfi[l]=0.0;
			} else
				if (fabs(b[m][m]) <= epsb) {
					b[m][m]=0.0;
					hsh2row2(1,m,m,l,a[m][m],a[m][l],a,b);
					a[m][l]=b[m][l]=0.0;
					alfr[l]=a[l][l];
					alfr[m]=a[m][m];
					beta[l]=b[l][l];
					beta[m]=b[m][m];
					alfi[m]=alfi[l]=0.0;
				} else {
					an=fabs(a[l][l])+fabs(a[l][m])+fabs(a[m][l])+
						fabs(a[m][m]);
					bn=fabs(b[l][l])+fabs(b[l][m])+fabs(b[m][m]);
					a11=a[l][l]/an;
					a12=a[l][m]/an;
					a21=a[m][l]/an;
					a22=a[m][m]/an;
					b11=b[l][l]/bn;
					b12=b[l][m]/bn;
					b22=b[m][m]/bn;
					e=a11/b11;
					c=((a22-e*b22)/b22-(a21*b12)/(b11*b22))/2.0;
					d=c*c+(a21*(a12-e*b12))/(b11*b22);
					if (d >= 0.0) {
						e += ((c < 0.0) ? c-sqrt(d) : c+sqrt(d));
						a11 -= e*b11;
						a12 -= e*b12;
						a22 -= e*b22;
						if (fabs(a11)+fabs(a12) >= fabs(a21)+fabs(a22))
							hsh2row2(1,m,m,l,a12,a11,a,b);
						else
							hsh2row2(1,m,m,l,a22,a21,a,b);
						if (an >= fabs(e)*bn)
							hsh2col(l,l,n,l,b[l][l],b[m][l],a,b);
						else
							hsh2col(l,l,n,l,a[l][l],a[m][l],a,b);
						a[m][l]=b[m][l]=0.0;
						alfr[l]=a[l][l];
						alfr[m]=a[m][m];
						beta[l]=b[l][l];
						beta[m]=b[m][m];
						alfi[m]=alfi[l]=0.0;
					} else {
						er=e+c;
						ei=sqrt(-d);
						a11r=a11-er*b11;
						a11i=ei*b11;
						a12r=a12-er*b12;
						a12i=ei*b12;
						a21r=a21;
						a21i=0.0;
						a22r=a22-er*b22;
						a22i=ei*b22;
						if (fabs(a11r)+fabs(a11i)+fabs(a12r)+fabs(a12i) >=
								fabs(a21r)+fabs(a22r)+fabs(a22i))
							chsh2(a12r,a12i,-a11r,-a11i,&cz,&szr,&szi);
						else
							chsh2(a22r,a22i,-a21r,-a21i,&cz,&szr,&szi);
						if (an >= (fabs(er)+fabs(ei))*bn)
							chsh2(cz*b11+szr*b12,szi*b12,szr*b22,szi*b22,
									&cq,&sqr,&sqi);
						else
							chsh2(cz*a11+szr*a12,szi*a12,cz*a21+szr*a22,
									szi*a22,&cq,&sqr,&sqi);
						ssr=sqr*szr+sqi*szi;
						ssi=sqr*szi-sqi*szr;
						tr=cq*cz*a11+cq*szr*a12+sqr*cz*a21+ssr*a22;
						ti=cq*szi*a12-sqi*cz*a21+ssi*a22;
						bdr=cq*cz*b11+cq*szr*b12+ssr*b22;
						bdi=cq*szi*b12+ssi*b22;
						r=sqrt(bdr*bdr+bdi*bdi);
						beta[l]=bn*r;
						alfr[l]=an*(tr*bdr+ti*bdi)/r;
						alfi[l]=an*(tr*bdi-ti*bdr)/r;
						tr=ssr*a11-sqr*cz*a12-cq*szr*a21+cq*cz*a22;
						ti = -ssi*a11-sqi*cz*a12+cq*szi*a21;
						bdr=ssr*b11-sqr*cz*b12+cq*cz*b22;
						bdi = -ssi*b11-sqi*cz*b12;
						r=sqrt(bdr*bdr+bdi*bdi);
						beta[m]=bn*r;
						alfr[m]=an*(tr*bdr+ti*bdi)/r;
						alfi[m]=an*(tr*bdi-ti*bdr)/r;
					}
				}
			m -= 2;
		}
	} while (m > 0);
}
 


int reavalqri(real_t **a, int n, real_t em[], real_t val[])
{
	void rotcol(int, int, int, int, real_t **, real_t, real_t);
	void rotrow(int, int, int, int, real_t **, real_t, real_t);
	int n1,i,i1,q,max,count;
	real_t det,w,shift,kappa,nu,mu,r,tol,delta,machtol,s;

	machtol=em[0]*em[1];
	tol=em[1]*em[2];
	max=em[4];
	count=0;
	r=0.0;
	do {
		n1=n-1;
		i=n;
		do{
			q=i;
			i--;
		} while ((i >= 1) ? (fabs(a[i+1][i]) > tol) : 0);
		if (q > 1)
			if (fabs(a[q][q-1]) > r) r=fabs(a[q][q-1]);
		if (q == n) {
			val[n]=a[n][n];
			n=n1;
		} else {
			delta=a[n][n]-a[n1][n1];
			det=a[n][n1]*a[n1][n];
			if (fabs(delta) < machtol)
				s=sqrt(det);
			else {
				w=2.0/delta;
				s=w*w*det+1.0;
				s = (s <= 0.0) ? -delta*0.5 : w*det/(sqrt(s)+1.0);
			}
			if (q == n1) {
				val[n]=a[n][n]+s;
				val[n1]=a[n1][n1]-s;
				n -= 2;
			} else {
				count++;
				if (count > max) break;
				shift=a[n][n]+s;
				if (fabs(delta) < tol) {
					w=a[n1][n1]-s;
					if (fabs(w) < fabs(shift)) shift=w;
				}
				a[q][q] -= shift;
				for (i=q; i<=n-1; i++) {
					i1=i+1;
					a[i1][i1] -= shift;
					kappa=sqrt(a[i][i]*a[i][i]+a[i1][i]*a[i1][i]);
					if (i > q) {
						a[i][i-1]=kappa*nu;
						w=kappa*mu;
					} else
						w=kappa;
					mu=a[i][i]/kappa;
					nu=a[i1][i]/kappa;
					a[i][i]=w;
					rotrow(i1,n,i,i1,a,mu,nu);
					rotcol(q,i,i,i1,a,mu,nu);
					a[i][i] += shift;
				}
				a[n][n-1]=a[n][n]*nu;
				a[n][n]=a[n][n]*mu+shift;
			}
		}
	} while (n > 0);
	em[3]=r;
	em[5]=count;
	return n;
}

 
void solbnd(real_t a[], int n, int lw, int rw, real_t m[],int p[], real_t b[])
{
	real_t vecvec(int, int, int, real_t [], real_t []);
	void elmvec(int, int, int, real_t [], real_t [], real_t);
	int f,i,k,kk,w,w1,w2,shift;
	real_t s;

	f=lw;
	shift = -lw;
	w1=lw-1;
	for (k=1; k<=n; k++) {
		if (f < n) f++;
		shift += w1;
		i=p[k];
		s=b[i];
		if (i != k) {
			b[i]=b[k];
			b[k]=s;
		}
		elmvec(k+1,f,shift,b,m,-s);
	}
	w1=lw+rw;
	w=w1+1;
	kk=(n+1)*w-w1;
	w2 = -1;
	shift=n*w1;
	for (k=n; k>=1; k--) {
		kk -= w;
		shift -= w1;
		if (w2 < w1) w2++;
		b[k]=(b[k]-vecvec(k+1,k+w2,shift,b,a))/a[kk];
	}
}
 
void sol(real_t **a, int n, int p[], real_t b[])
{
	real_t matvec(int, int, int, real_t **, real_t []);
	int k,pk;
	real_t r;

	for (k=1; k<=n; k++) {
		r=b[k];
		pk=p[k];
		b[k]=(b[pk]-matvec(1,k-1,k,a,b))/a[k][k];
		if (pk != k) b[pk]=r;
	}
	for (k=n; k>=1; k--) b[k] -= matvec(k+1,n,k,a,b);
}
 
void solelm(real_t **a, int n, int ri[], int ci[], real_t b[])
{
	void sol(real_t **, int, int [], real_t []);
	int r,cir;
	real_t w;

	sol(a,n,ri,b);
	for (r=n; r>=1; r--) {
		cir=ci[r];
		if (cir != r) {
			w=b[r];
			b[r]=b[cir];
			b[cir]=w;
		}
	}
}
 
void solsym2(real_t **a, int n, real_t b[], int p[], real_t detaux[])
{
	real_t matvec(int, int, int, real_t **, real_t []);
	void elmvecrow(int, int, int, real_t [], real_t **, real_t);
	int i,ii,k,ip1,pi,pii;
	real_t det,temp,save;

	i=1;
	while (i < n) {
		ip1=i+1;
		pi=p[i];
		save=b[pi];
		if (p[ip1] > 0) {
			b[pi]=b[i];
			b[i]=save/a[i][i];
			elmvecrow(ip1,n,i,b,a,save);
			i=ip1;
		} else {
			temp=b[i];
			b[pi]=b[ip1];
			det=detaux[ip1];
			b[i]=(temp*a[ip1][ip1]-save*a[i][ip1])/det;
			b[ip1]=(save*a[i][i]-temp*a[i][ip1])/det;
			elmvecrow(i+2,n,i,b,a,temp);
			elmvecrow(i+2,n,ip1,b,a,save);
			i += 2;
		}
	}
	if (i == n) {
		b[i] /= a[i][i];
		i=n-1;
	} else
		i=n-2;
	while (i > 0) {
		if (p[i] == 0)
			ii=i-1;
		else
			ii=i;
		for (k=ii; k<=i; k++) {
			save=b[k];
			save += matvec(i+1,n,k,a,b);
			b[k]=save;
		}
		pii=p[ii];
		b[i]=b[pii];
		b[pii]=save;
		i=ii-1;
	}
}
 
void solsymtri(real_t diag[], real_t co[], int n, real_t b[])
{
	int i;
	real_t r,s;

	r=b[1];
	b[1]=r/diag[1];
	for (i=2; i<=n; i++) {
		r=b[i]-co[i-1]*r;
		b[i]=r/diag[i];
	}
	s=b[n];
	for (i=n-1; i>=1; i--) s = b[i] -= co[i]*s;
}
 
void soltri(real_t sub[], real_t diag[], real_t super[], int n, real_t b[])
{
	int i;
	real_t r;

	r = b[1] /= diag[1];
	for (i=2; i<=n; i++) r=b[i]=(b[i]-sub[i-1]*r)/diag[i];
	for (i=n-1; i>=1; i--) r = b[i] -= super[i]*r;
}
 
void soltripiv(real_t sub[], real_t diag[], real_t super[], int n,real_t aid[], int piv[], real_t b[])
{
	int i,n1;
	real_t bi,bi1,r,s,t;

	n1=n-1;
	for (i=1; i<=n1; i++) {
		if (piv[i]) {
			bi=b[i+1];
			bi1=b[i];
		} else {
			bi=b[i];
			bi1=b[i+1];
		}
		r=b[i]=bi/diag[i];
		b[i+1]=bi1-sub[i]*r;
	}
	r = b[n] /= diag[n];
	t = b[n1] -= super[n1]*r;
	for (i=n-2; i>=1; i--) {
		s=r;
		r=t;
		t = b[i] -= super[i]*r + ((piv[i]) ? aid[i]*s : 0.0);
	}
}
 
void tfmprevec(real_t **a, int n)
{
	real_t tammat(int, int, int, int, real_t **, real_t **);
	void elmcol(int, int, int, int, real_t **, real_t **, real_t);
	int i,j,j1,k;
	real_t ab;

	j1=1;
	for (j=2; j<=n; j++) {
		for (i=1; i<=j1-1; i++) a[i][j1]=0.0;
		for (i=j; i<=n; i++) a[i][j1]=0.0;
		a[j1][j1]=1.0;
		ab=a[j][j];
		if (ab < 0)
			for (k=1; k<=j1; k++)
				elmcol(1,j1,k,j,a,a,tammat(1,j1,j,k,a,a)*ab);
		j1=j;
	}
	for (i=n-1; i>=1; i--) a[i][n]=0.0;
	a[n][n]=1.0;
}
 


void tfmsymtri1(real_t a[], int n, real_t d[], real_t b[], real_t bb[], real_t em[])
{
	real_t vecvec(int, int, int, real_t [], real_t []);
	real_t seqvec(int, int, int, int, real_t [], real_t []);
	void elmvec(int, int, int, real_t [], real_t [], real_t);
	int i,j,r,r1,p,q,ti,tj;
	real_t s,w,x,a1,b0,bb0,norm,machtol;

	norm=0.0;
	tj=0;
	for (j=1; j<=n; j++) {
		w=0.0;
		for (i=1; i<=j; i++) w += fabs(a[i+tj]);
		tj += j;
		ti=tj+j;
		for (i=j+1; i<=n; i++) {
			w += fabs(a[ti]);
			ti += i;
		}
		if (w > norm) norm=w;
	}
	machtol=em[0]*norm;
	em[1]=norm;
	q=((n+1)*n)/2;
	r=n;
	for (r1=n-1; r1>=1; r1--) {
		p=q-r;
		d[r]=a[q];
		x=vecvec(p+1,q-2,0,a,a);
		a1=a[q-1];
		if (sqrt(x) <= machtol) {
			b0=b[r1]=a1;
			bb[r1]=b0*b0;
			a[q]=1.0;
		} else {
			bb0=bb[r1]=a1*a1+x;
			b0 = (a1 > 0.0) ? -sqrt(bb0) : sqrt(bb0);
			a1=a[q-1]=a1-b0;
			w=a[q]=1.0/(a1*b0);
			tj=0;
			for (j=1; j<=r1; j++) {
				ti=tj+j;
				s=vecvec(tj+1,ti,p-tj,a,a);
				tj=ti+j;
				b[j]=(seqvec(j+1,r1,tj,p,a,a)+s)*w;
				tj=ti;
			}
			elmvec(1,r1,p,b,a,vecvec(1,r1,p,b,a)*w*0.5);
			tj=0;
			for (j=1; j<=r1; j++) {
				ti=tj+j;
				elmvec(tj+1,ti,p-tj,a,a,b[j]);
				elmvec(tj+1,ti,-tj,a,b,a[j+p]);
				tj=ti;
			}
			b[r1]=b0;
		}
		q=p;
		r=r1;
	}
	d[1]=a[1];
	a[1]=1.0;
	b[n]=bb[n]=0.0;
}
 


void tfmsymtri2(real_t **a, int n, real_t d[], real_t b[], real_t bb[],real_t em[])
{
	real_t tammat(int, int, int, int, real_t **, real_t **);
	real_t matmat(int, int, int, int, real_t **, real_t **);
	void elmveccol(int, int, int, real_t [], real_t **, real_t);
	real_t tamvec(int, int, int, real_t **, real_t []);
	void elmcol(int, int, int, int, real_t **, real_t **, real_t);
	void elmcolvec(int, int, int, real_t **, real_t [], real_t);
	int i,j,r,r1;
	real_t w,x,a1,b0,bb0,machtol,norm;

	norm=0.0;
	for (j=1; j<=n; j++) {
		w=0.0;
		for (i=1; i<=j; i++) w += fabs(a[i][j]);
		for (i=j+1; i<=n; i++) w += fabs(a[j][i]);
		if (w > norm) norm=w;
	}
	machtol=em[0]*norm;
	em[1]=norm;
	r=n;
	for (r1=n-1; r1>=1; r1--) {
		d[r]=a[r][r];
		x=tammat(1,r-2,r,r,a,a);
		a1=a[r1][r];
		if (sqrt(x) <= machtol) {
			b0=b[r1]=a1;
			bb[r1]=b0*b0;
			a[r][r]=1.0;
		} else {
			bb0=bb[r1]=a1*a1+x;
			b0 = (a1 > 0.0) ? -sqrt(bb0) : sqrt(bb0);
			a1=a[r1][r]=a1-b0;
			w=a[r][r]=1.0/(a1*b0);
			for (j=1; j<=r1; j++)
				b[j]=(tammat(1,j,j,r,a,a)+matmat(j+1,r1,j,r,a,a))*w;
			elmveccol(1,r1,r,b,a,tamvec(1,r1,r,a,b)*w*0.5);
			for (j=1; j<=r1; j++) {
				elmcol(1,j,j,r,a,a,b[j]);
				elmcolvec(1,j,j,a,b,a[j][r]);
			}
			b[r1]=b0;
		}
		r=r1;
	}
	d[1]=a[1][1];
	a[1][1]=1.0;
	b[n]=bb[n]=0.0;
}
 


int valqricom(real_t **a1, real_t **a2, real_t b[], int n, real_t em[],real_t val1[], real_t val2[])
{
	void comcolcst(int, int, int, real_t **, real_t **, real_t, real_t);
	void rotcomcol(int, int, int, int, real_t **, real_t **,
						real_t, real_t, real_t);
	void rotcomrow(int, int, int, int, real_t **, real_t **,
						real_t, real_t, real_t);
	void comkwd(real_t, real_t, real_t, real_t,
					real_t *, real_t *, real_t *, real_t *);
	int nm1,i,i1,q,q1,max,count;
	real_t r,z1,z2,dd1,dd2,cc,g1,g2,k1,k2,hc,a1nn,a2nn,aij1,aij2,
			ai1i,kappa,nui,mui1,mui2,muim11,muim12,nuim1,tol;

	tol=em[1]*em[2];
	max=em[4];
	count=0;
	r=0.0;
	if (n > 1) hc=b[n-1];
	do {
		nm1=n-1;
		i=n;
		do {
			q=i;
			i--;
		} while ((i >= 1) ? (fabs(b[i]) > tol) : 0);
		if (q > 1)
			if (fabs(b[q-1]) > r) r=fabs(b[q-1]);
		if (q == n) {
			val1[n]=a1[n][n];
			val2[n]=a2[n][n];
			n=nm1;
			if (n > 1) hc=b[n-1];
		} else {
			dd1=a1[n][n];
			dd2=a2[n][n];
			cc=b[nm1];
			comkwd((a1[nm1][nm1]-dd1)/2.0,(a2[nm1][nm1]-dd2)/2.0,
					cc*a1[nm1][n],cc*a2[nm1][n],&g1,&g2,&k1,&k2);
			if (q == nm1) {
				val1[nm1]=g1+dd1;
				val2[nm1]=g2+dd2;
				val1[n]=k1+dd1;
				val2[n]=k2+dd2;
				n -= 2;
				if (n > 1) hc=b[n-1];
			} else {
				count++;
				if (count > max) break;
				z1=k1+dd1;
				z2=k2+dd2;
				if (fabs(cc) > fabs(hc)) z1 += fabs(cc);
				hc=cc/2.0;
				i=q1=q+1;
				aij1=a1[q][q]-z1;
				aij2=a2[q][q]-z2;
				ai1i=b[q];
				kappa=sqrt(aij1*aij1+aij2*aij2+ai1i*ai1i);
				mui1=aij1/kappa;
				mui2=aij2/kappa;
				nui=ai1i/kappa;
				a1[q][q]=kappa;
				a2[q][q]=0.0;
				a1[q1][q1] -= z1;
				a2[q1][q1] -= z2;
				rotcomrow(q1,n,q,q1,a1,a2,mui1,mui2,nui);
				rotcomcol(q,q,q,q1,a1,a2,mui1,-mui2,-nui);
				a1[q][q] += z1;
				a2[q][q] += z2;
				for (i1=q1+1; i1<=n; i1++) {
					aij1=a1[i][i];
					aij2=a2[i][i];
					ai1i=b[i];
					kappa=sqrt(aij1*aij1+aij2*aij2+ai1i*ai1i);
					muim11=mui1;
					muim12=mui2;
					nuim1=nui;
					mui1=aij1/kappa;
					mui2=aij2/kappa;
					nui=ai1i/kappa;
					a1[i1][i1] -= z1;
					a2[i1][i1] -= z2;
					rotcomrow(i1,n,i,i1,a1,a2,mui1,mui2,nui);
					a1[i][i]=muim11*kappa;
					a2[i][i] = -muim12*kappa;
					b[i-1]=nuim1*kappa;
					rotcomcol(q,i,i,i1,a1,a2,mui1,-mui2,-nui);
					a1[i][i] += z1;
					a2[i][i] += z2;
					i=i1;
				}
				aij1=a1[n][n];
				aij2=a2[n][n];
				kappa=sqrt(aij1*aij1+aij2*aij2);
				if ((kappa < tol) ? 1 : (aij2*aij2 <= em[0]*aij1*aij1)) {
					b[nm1]=nui*aij1;
					a1[n][n]=aij1*mui1+z1;
					a2[n][n] = -aij1*mui2+z2;
				} else {
					b[nm1]=nui*kappa;
					a1nn=mui1*kappa;
					a2nn = -mui2*kappa;
					mui1=aij1/kappa;
					mui2=aij2/kappa;
					comcolcst(q,nm1,n,a1,a2,mui1,mui2);
					a1[n][n]=mui1*a1nn-mui2*a2nn+z1;
					a2[n][n]=mui1*a2nn+mui2*a1nn+z2;
				}
			}
		}
	} while (n > 0);
	em[3]=r;
	em[5]=count;
	return n;
}

 


void valsymtri(real_t d[], real_t bb[], int n, int n1, int n2,real_t val[], real_t em[])
{
	real_t sturm(real_t [], real_t [], int, real_t, int, real_t,
					real_t, int *, real_t *, real_t *);
	int k,count,ext,extrapolate;
	real_t max,x,y,macheps,norm,re,machtol,ub,lb,lambda,
			c,fc,b,fb,a,fa,dd,fd,fdb,fda,w,mb,tol,m,p,q;

	macheps=em[0];
	norm=em[1];
	re=em[2];
	machtol=norm*macheps;
	max=norm/macheps;
	count=0;
	ub=1.1*norm;
	lb = -ub;
	lambda=ub;
	for (k=n1; k<=n2; k++) {
		y=ub;
		lb = -1.1*norm;
		x=lb;

		/* look for the zero of the polynomial function */

		b=x;
		fb=sturm(d,bb,n,x,k,machtol,max,&count,&lb,&ub);
		a=x=y;
		fa=sturm(d,bb,n,x,k,machtol,max,&count,&lb,&ub);
		c=a;
		fc=fa;
		ext=0;
		extrapolate=1;
		while (extrapolate) {
			if (fabs(fc) < fabs(fb)) {
				if (c != a) {
					dd=a;
					fd=fa;
				}
				a=b;
				fa=fb;
				b=x=c;
				fb=fc;
				c=a;
				fc=fa;
			}
			tol=fabs(x)*re+machtol;
			m=(c+b)*0.5;
			mb=m-b;
			if (fabs(mb) > tol) {
				if (ext > 2)
					w=mb;
				else {
					if (mb == 0.0)
						tol=0.0;
					else
						if (mb < 0.0) tol = -tol;
					p=(b-a)*fb;
					if (ext <= 1)
						q=fa-fb;
					else {
						fdb=(fd-fb)/(dd-b);
						fda=(fd-fa)/(dd-a);
						p *= fda;
						q=fdb*fa-fda*fb;
					}
					if (p < 0.0) {
						p = -p;
						q = -q;
					}
					w=(p<FLT_MIN || p<=q*tol) ? tol : ((p<mb*q) ? p/q : mb);
				}
				dd=a;
				fd=fa;
				a=b;
				fa=fb;
				x = b += w;
				fb=sturm(d,bb,n,x,k,machtol,max,&count,&lb,&ub);
				if ((fc >= 0.0) ? (fb >= 0.0) : (fb <= 0.0)) {
					c=a;
					fc=fa;
					ext=0;
				} else
					ext = (w == mb) ? 0 : ext+1;
			} else
				break;
		}
		y=c;

		/* end of the zero finding procedure */

		val[k] = lambda = (x > lambda) ? lambda : x;
		if (ub > x)
			ub = (x > y) ? x : y;
	}
	em[3]=count;
}

real_t sturm(real_t d[], real_t bb[], int n, real_t x, int k, real_t machtol,
				real_t max, int *count, real_t *lb, real_t *ub)
{
	/* this sturm sequence procedure is used internally by VALSYMTRI */

	int p,i;
	real_t f;

	(*count)++;
	p=k;
	f=d[1]-x;
	for (i=2; i<=n; i++) {
		if (f <= 0.0) {
			p++;
			if (p > n) return ((p == n) ? f : (n-p)*max);
		} else
			if (p < i-1) {
				*lb = x;
				return ((p == n) ? f : (n-p)*max);
			}
		if (fabs(f) < machtol)
			f = (f <= 0.0) ? -machtol : machtol;
		f=d[i]-x-bb[i-1]/f;
	}
	if (p == n || f <= 0.0)
		if (x < *ub) *ub = x;
	else
		*lb = x;
	return ((p == n) ? f : (n-p)*max);
}
/* ARK.C */
void ark(real_t *t, real_t *te, int *m0, int *m, real_t u[], void (*derivative)(int *, int *, real_t *, real_t []), real_t data[], void (*out)(int *, int *, real_t *, real_t *, real_t [], real_t []));
real_t arkmui(int i, int n, int p, real_t lambda[]);
real_t arklabda(int i, int j, int n, int p, real_t lambda[]);
/* ARKMAT.C */
void arkmat(real_t *t, real_t te, int m, int n, real_t **u, void (*der)(int, int, real_t, real_t **, real_t **), int type, int *order, real_t *spr, void (*out)(real_t, real_t, int, int, real_t **, int, int, real_t *));
/* DAVUPD.C */
void davupd(real_t h[], int n, real_t v[], real_t w[], real_t c1, real_t c2);
/* DIFFSYS.C */
void diffsys(real_t *x, real_t xe, int n, real_t y[], void (*derivative)(int, real_t, real_t [], real_t []), real_t aeta, real_t reta, real_t s[], real_t h0, void (*output)(int, real_t, real_t, real_t [], real_t []));
/* EFERK.C */
void eferk(real_t *x, real_t xe, int m, real_t y[], real_t *sigma, real_t phi, void (*derivative)(int, real_t []), real_t **j, void (*jacobian)(int, real_t **, real_t [], real_t *), int *k, int l, int aut, real_t aeta, real_t reta, real_t hmin, real_t hmax, int linear, void (*output)(real_t, real_t, int, real_t [], real_t **, int));
/* EFRK.C */
void efrk(real_t *t, real_t te, int m0, int m, real_t u[], real_t *sigma, real_t *phi, real_t *diameter, void (*derivative)(int, int, real_t, real_t []), int *k, real_t *step, real_t r, real_t l, real_t beta[], int thirdorder, real_t tol, void (*output)(int, int, real_t, real_t, real_t [], real_t *, real_t *, real_t *, int, real_t *, int, int));
/* EFSIRK.C */
void efsirk(real_t *x, real_t xe, int m, real_t y[], real_t *delta, void (*derivative)(int, real_t [], real_t *), void (*jacobian)(int, real_t **, real_t [], real_t *), real_t **j, int *n, real_t aeta, real_t reta, real_t hmin, real_t hmax, int linear, void (*output)(real_t, real_t, int, real_t [], real_t, real_t **, int));
/* EFT.C */
void eft(real_t *t, real_t te, int m0, int m, real_t u[], real_t (*sigma)(real_t, int, int), real_t phi, real_t (*diameter)(real_t, int, int), void (*derivative)(real_t, int, int, int, real_t []), int *k, real_t alfa, int norm, real_t (*aeta)(real_t, int, int), real_t (*reta)(real_t, int, int), real_t *eta, real_t *rho, real_t hmin, real_t *hstart, void (*out)(real_t, real_t, int, int, real_t [], int, real_t, real_t));
/* ELIMINAT.C */
void elimination(real_t **u, int lj, int uj, int ll, int ul, void (*residual)(int, int, int, int, real_t **), real_t a, real_t b, int *n, real_t discr[], int *k, real_t *rateconv, real_t *domeigval, void (*out)(real_t **, int, int, int, int, int *, real_t [], int, real_t, real_t));
real_t optpol(real_t x, real_t a, real_t b, real_t domeigval);
/* FEMHERMS.C */
void femhermsym(real_t x[], real_t y[], int n, real_t (*p)(real_t), real_t (*q)(real_t), real_t (*r)(real_t), real_t (*f)(real_t), int order, real_t e[]);
void femhermsymeval(int order, int l, real_t (*p)(real_t), real_t (*q)(real_t), real_t (*r)(real_t), real_t (*f)(real_t), real_t *a11, real_t *a12, real_t *a13, real_t *a14, real_t *a22, real_t *a23, real_t *a24, real_t *a33, real_t *a34, real_t *a44, real_t *b1, real_t *b2, real_t *b3, real_t *b4, real_t *xl, real_t xl1);
/* FEMLAG.C */
void femlag(real_t x[], real_t y[], int n, real_t (*r)(real_t), real_t (*f)(real_t), int order, real_t e[]);
/* FEMLAGSK.C */
void femlagskew(real_t x[], real_t y[], int n, real_t (*q)(real_t), real_t (*r)(real_t), real_t (*f)(real_t), int order, real_t e[]);
/* FEMLAGSP.C */
void femlagspher(real_t x[], real_t y[], int n, int nc, real_t (*r)(real_t), real_t (*f)(real_t), int order, real_t e[]);
/* FEMLAGSY.C */
void femlagsym(real_t x[], real_t y[], int n, real_t (*p)(real_t), real_t (*r)(real_t), real_t (*f)(real_t), int order, real_t e[]);
/* FLEMIN.C */
real_t flemin(int n, real_t x[], real_t g[], real_t h[], real_t (*funct)(int, real_t [], real_t []), real_t in[], real_t out[]);
/* FLEUPD.C */
void fleupd(real_t h[], int n, real_t v[], real_t w[], real_t c1, real_t c2);
/* GMS.C */
void gms(real_t *x, real_t xe, int r, real_t y[], real_t h, real_t hmin, real_t hmax, real_t *delta, void (*derivative)(int, real_t [], real_t *), void (*jacobian)(int, real_t **, real_t [], real_t *), real_t aeta, real_t reta, int *n, int *jev, int *lu, int nsjev, int linear, void (*out)(real_t, real_t, int, real_t [], real_t, int, int, int));
void gmsopconstruct(int *reeval, int *update, int r, real_t **hjac, real_t **h2jac2, real_t **rqz, real_t y[], real_t aux[], int ri[], int ci[], int *lu, int *jev, int *nsjev1, real_t *delta, real_t *alfa, real_t h1, real_t h0, real_t *s1, real_t *s2, void (*jacobian)(int, real_t **, real_t [], real_t *));
void gmscoefficient(real_t *xl1, real_t *xl0, real_t x0, int change, int n, real_t *q1, real_t *q2, real_t h1, real_t alfa, real_t **bd1, real_t **bd2, int strategy);
void gmsdiffscheme(int k, int count, int r, real_t fl[], real_t yl[], int *n, int *nsjev1, real_t y0[], real_t alfa, real_t **bd1, real_t **bd2, real_t h1, real_t y[], real_t **hjac, real_t **h2jac2, real_t **rqz, int ri[], int ci[], real_t *delta, void (*derivative)(int, real_t [], real_t *));
/* GSSNEWTO.C */
void gssnewton(int m, int n, real_t par[], real_t rv[], real_t **jjinv, int (*funct)(int, int, real_t [], real_t []), void (*jacobian)(int, int, real_t [], real_t [], real_t **), real_t in[], real_t out[]);
/* IMPEX.C */
void impex(int n, real_t t0, real_t tend, real_t y0[], void (*deriv)(real_t, real_t [], real_t [], int), int (*available)(real_t, real_t [], real_t **, int), real_t h0, real_t hmax, int presch, real_t eps, real_t weights[], void (*update)(real_t [], real_t [], int), int *fail, void (*control)(real_t *, real_t, real_t, real_t, real_t **, real_t [], int, real_t));
int impexrecomp(real_t **a, real_t h, real_t t, real_t y[], int ps[], int n, int (*available)(real_t, real_t [], real_t **, int), void (*deriv)(real_t, real_t [], real_t [], int));
int impexlargestep(int n, real_t y[], real_t t, real_t *t1, real_t *t2, real_t *t3, real_t s1[], real_t s2[], real_t s3[], real_t h, real_t h2, real_t z[], real_t u1[], real_t u3[], real_t w1[], real_t w2[], real_t w3[], int ps1[], int ps2[], real_t weights[], real_t **a1, real_t **a2, real_t eps, void (*deriv)(real_t, real_t [], real_t [], int), int (*available)(real_t, real_t [], real_t **, int));
int impexiterate(real_t z[], real_t y[], real_t **a, real_t h, real_t t, real_t weights[], int ps[], int n, real_t eps, void (*deriv)(real_t, real_t [], real_t [], int), int (*available)(real_t, real_t [], real_t **, int));
void impexbackdiff(int n, real_t u1[], real_t u3[], real_t w1[], real_t w2[], real_t w3[], real_t s1[], real_t s2[], real_t s3[], real_t **r, real_t **rf);
/* LINEMIN.C */
void linemin(int n, real_t x[], real_t d[], real_t nd, real_t *alfa, real_t g[], real_t (*funct)(int, real_t [], real_t []), real_t f0, real_t *f1, real_t df0, real_t *df1, int *evlmax, int strongsearch, real_t in[]);
/* LINIGER1.C */
void liniger1vs(real_t *x, real_t xe, int m, real_t y[], real_t *sigma, void (*derivative)(int, real_t [], real_t *), real_t **j, void (*jacobian)(int, real_t **, real_t [], real_t *), int itmax, real_t hmin, real_t hmax, real_t aeta, real_t reta, real_t info[], void (*output)(real_t, real_t, int, real_t [], real_t, real_t **, real_t []));
void liniger1vscoef(int m, real_t **a, real_t **j, real_t aux[], int pi[], real_t h, real_t sigma, real_t *mu, real_t *mu1, real_t *beta, real_t *p);
/* LINIGER2.C */
void liniger2(real_t *x, real_t xe, int m, real_t y[], real_t *sigma1, real_t *sigma2, real_t (*f)(int, real_t [], int, real_t *, real_t *), int (*evaluate)(int), real_t **j, void (*jacobian)(int, real_t **, real_t [], real_t *, real_t *), int *k, int itmax, real_t step, real_t aeta, real_t reta, void (*output)(real_t, real_t, int, real_t [], real_t, real_t, real_t **, int));
void liniger2coef(int m, real_t **j, real_t **a, real_t aux[], int pi[], real_t h, real_t sigma1, real_t sigma2, real_t *c0, real_t *c1, real_t *c2, real_t *c3, real_t *c4);
/* MARQUARD.C */
void marquardt(int m, int n, real_t par[], real_t g[], real_t **v, int (*funct)(int, int, real_t [], real_t []), void (*jacobian)(int, int, real_t [], real_t [], real_t **), real_t in[], real_t out[]);
/* MININ.C */
real_t minin(real_t *x, real_t *a, real_t *b, real_t (*fx)(real_t), real_t (*tolx)(real_t));
/* MININDER.C */
real_t mininder(real_t *x, real_t *y, real_t (*fx)(real_t), real_t (*dfx)(real_t), real_t (*tolx)(real_t));
/* MTAYLOR.C */
void modifiedtaylor(real_t *t, real_t te, int m0, int m, real_t u[], real_t (*sigma)(real_t, int, int), real_t taumin, void (*derivative)(real_t, int, int, int, real_t []), int *k, real_t data[], real_t alfa, int norm, real_t (*aeta)(real_t, int, int), real_t (*reta)(real_t, int, int), real_t *eta, real_t *rho, void (*out)(real_t, real_t, int, int, real_t [], int, real_t, real_t));
/* MULTISTE.C */
int multistep(real_t *x, real_t xend, real_t y[], real_t hmin, real_t hmax, real_t ymax[], real_t eps, int *first, real_t save[], void (*deriv)(real_t [], int, real_t, real_t []), int (*available)(int, real_t, real_t [], real_t **), real_t **jacobian, int stiff, int n, void (*out)(real_t, int, int, real_t, real_t []));
void multistepreset(real_t y[], real_t save[], real_t *x, real_t *ch, real_t *c, real_t *h, int *decomposed, real_t hmin, real_t hmax, real_t hold, real_t xold, int m, int k, int n);
void multisteporder(real_t a[], real_t save[], real_t *tolup, real_t *tol, real_t *toldwn, real_t *tolconv, real_t *a0, int *decompose, real_t eps, int k, int n);
void multistepstep(int *knew, real_t *chnew, real_t tolup, real_t tol, real_t toldwn, real_t delta[], real_t error, real_t lastdelta[], real_t y[], real_t ymax[], int fails, int m, int k, int n);
void multistepjacobian(int n, real_t x, real_t y[], real_t eps, real_t fixy[], real_t fixdy[], real_t dy[], real_t **jacobian, void (*deriv)(real_t [], int, real_t, real_t []), int (*available)(int, real_t, real_t [], real_t **), int *evaluate, int *decompose, int *evaluated);
/* NONLINFE.C */
void nonlinfemlagskew(real_t x[], real_t y[], int n, real_t (*f)(real_t, real_t, real_t), real_t (*fy)(real_t, real_t, real_t), real_t (*fz)(real_t, real_t, real_t), int nc, real_t e[]);
/* PEIDE.C */
void peide(int n, int m, int nobs, int *nbp, real_t par[], real_t res[], int bp[], real_t **jtjinv, real_t in[], real_t out[], int (*deriv)(int, int, real_t [], real_t [], real_t, real_t []), int (*jacdfdy)(int, int, real_t [], real_t [], real_t, real_t **), int (*jacdfdp)(int, int, real_t [], real_t [], real_t, real_t **), void (*callystart)(int, int, real_t [], real_t [], real_t []), void (*data)(int, real_t [], real_t [], int []), void (*monitor)(int, int, int, real_t [], real_t [], int, int));
int peidefunct(int nrow, int ncol, real_t par[], real_t res[], int n, int m, int nobs, int *nbp, int first, int *sec, int *max, int *nis, real_t eps1, int weight, int bp[], real_t save[], real_t ymax[], real_t y[], real_t **yp, real_t **fy, real_t **fp, int cobs[], real_t tobs[], real_t obs[], real_t in[], real_t aux[], int clean, int (*deriv)(int, int, real_t [], real_t [], real_t, real_t []), int (*jacdfdy)(int, int, real_t [], real_t [], real_t, real_t **), int (*jacdfdp)(int, int, real_t [], real_t [], real_t, real_t **), void (*callystart)(int, int, real_t [], real_t [], real_t []), void (*monitor)(int, int, int, real_t [], real_t [], int, int));
void peidereset(int n, int k, real_t hmin, real_t hmax, real_t hold, real_t xold, real_t y[], real_t save[], real_t *ch, real_t *x, real_t *h, int *decompose);
void peideorder(int n, int k, real_t eps, real_t a[], real_t save[], real_t *tol, real_t *tolup, real_t *toldwn, real_t *tolconv, real_t *a0, int *decompose);
void peidestep(int n, int k, int fails, real_t tolup, real_t toldwn, real_t tol, real_t error, real_t delta[], real_t lastdelta[], real_t y[], real_t ymax[], int *knew, real_t *chnew);
real_t peideinterpol(int startindex, int jump, int k, real_t tobsdif, real_t y[]);
/* PRAXIS.C */
void praxis(int n, real_t x[], real_t (*funct)(int, real_t []), real_t in[], real_t out[]);
void praxismin(int j, int nits, real_t *d2, real_t *x1, real_t *f1, int fk, int n, real_t x[], real_t **v, real_t *qa, real_t *qb, real_t *qc, real_t qd0, real_t qd1, real_t q0[], real_t q1[], int *nf, int *nl, real_t *fx, real_t m2, real_t m4, real_t dmin, real_t ldt, real_t reltol, real_t abstol, real_t small, real_t h, real_t (*funct)(int, real_t []));
real_t praxisflin(real_t l, int j, int n, real_t x[], real_t **v, real_t *qa, real_t *qb, real_t *qc, real_t qd0, real_t qd1, real_t q0[], real_t q1[], int *nf, real_t (*funct)(int, real_t []));
/* QUANEWB1.C */
void quanewbnd1(int n, int lw, int rw, real_t x[], real_t f[], int (*funct)(int, int, int, real_t [], real_t []), real_t in[], real_t out[]);
real_t quanewbnd1s(int i);
real_t quanewbnd1t(real_t x, int i);
/* QUANEWBN.C */
void quanewbnd(int n, int lw, int rw, real_t x[], real_t f[], real_t jac[], int (*funct)(int, int, int, real_t [], real_t []), real_t in[], real_t out[]);
/* RICHARDS.C */
void richardson(real_t **u, int lj, int uj, int ll, int ul, int inap, void (*residual)(int, int, int, int, real_t **), real_t a, real_t b, int *n, real_t discr[], int *k, real_t *rateconv, real_t *domeigval, void (*out)(real_t **, int, int, int, int, int *, real_t [], int, real_t, real_t));
/* RK1.C */
void rk1(real_t *x, real_t a, real_t b, real_t *y, real_t ya, real_t (*fxy)(real_t, real_t), real_t e[], real_t d[], int fi);
/* RK2.C */
void rk2(real_t *x, real_t a, real_t b, real_t *y, real_t ya, real_t *z, real_t za, real_t (*fxyz)(real_t, real_t, real_t), real_t e[], real_t d[], int fi);
/* RK2N.C */
void rk2n(real_t *x, real_t a, real_t b, real_t y[], real_t ya[], real_t z[], real_t za[], real_t (*fxyzj)(int, int, real_t, real_t [], real_t []), real_t e[], real_t d[], int fi, int n);
/* RK3.C */
void rk3(real_t *x, real_t a, real_t b, real_t *y, real_t ya, real_t *z, real_t za, real_t (*fxy)(real_t, real_t), real_t e[], real_t d[], int fi);
/* RK3N.C */
void rk3n(real_t *x, real_t a, real_t b, real_t y[], real_t ya[], real_t z[], real_t za[], real_t (*fxyj)(int, int, real_t, real_t []), real_t e[], real_t d[], int fi, int n);
/* RK4A.C */
void rk4a(real_t *x, real_t xa, real_t (*b)(real_t, real_t), real_t *y, real_t ya, real_t (*fxy)(real_t, real_t), real_t e[], real_t d[], int fi, int xdir, int pos);
void rk4arkstep(real_t *x, real_t xl, real_t h, real_t *y, real_t yl, real_t zl, real_t (*fxy)(real_t, real_t), int d, int invf, real_t *k0, real_t *k1, real_t *k2, real_t *k3, real_t *k4, real_t *k5, real_t *discr, real_t mu);
/* RK4NA.C */
void rk4na(real_t x[], real_t xa[], real_t (*b)(int, real_t []), real_t (*fxj)(int, int, real_t []), real_t e[], real_t d[], int fi, int n, int l, int pos);
void rk4narkstep(real_t h, int d, int n, int iv, real_t mu, real_t (*fxj)(int, int, real_t []), real_t x[], real_t xl[], real_t y[], real_t discr[], real_t **k);
/* RK5NA.C */
void rk5na(real_t x[], real_t xa[], real_t (*b)(int, real_t []), real_t (*fxj)(int, int, real_t []), real_t e[], real_t d[], int fi, int n, int l, int pos);
void rk5narkstep(real_t h, int d, int n, real_t mu, real_t (*fxj)(int, int, real_t []), real_t x[], real_t xl[], real_t y[], real_t discr[], real_t **k);
/* RKE.C */
void rke(real_t *x, real_t *xe, int n, real_t y[], void (*der)(int, real_t, real_t []), real_t data[], int fi, void (*out)(int, real_t, real_t, real_t [], real_t []));
/* RNK1MIN.C */
real_t rnk1min(int n, real_t x[], real_t g[], real_t h[], real_t (*funct)(int, real_t [], real_t []), real_t in[], real_t out[]);
/* RNK1UPD.C */
void rnk1upd(real_t h[], int n, real_t v[], real_t c);
/* ZEROIN.C */
int zeroin(real_t *x, real_t *y, real_t (*fx)(real_t), real_t (*tolx)(real_t));
/* ZEROINDE.C */
int zeroinder(real_t *x, real_t *y, real_t (*fx)(real_t), real_t (*dfx)(real_t), real_t (*tolx)(real_t));
/* ZEROINRA.C */
int zeroinrat(real_t *x, real_t *y, real_t (*fx)(real_t), real_t (*tolx)(real_t));
void davupd(real_t h[], int n, real_t v[], real_t w[], real_t c1, real_t c2)
{
	int i,j,k;
	real_t vk,wk;

	k=0;
	j=1;
	do {
		k++;
		vk=v[k]*c1;
		wk=w[k]*c2;
		for (i=0; i<=k-1; i++) h[i+j] += v[i+1]*vk-w[i+1]*wk;
		j += k;
	} while (k < n);
}
 
void fleupd(real_t h[], int n, real_t v[], real_t w[], real_t c1, real_t c2)
{
	int i,j,k;
	real_t vk,wk;

	k=0;
	j=1;
	do {
		k++;
		vk = -w[k]*c1+v[k]*c2;
		wk=v[k]*c1;
		for (i=0; i<=k-1; i++) h[i+j] += v[i+1]*vk-w[i+1]*wk;
		j += k;
	} while (k < n);
}
 
void rnk1upd(real_t h[], int n, real_t v[], real_t c)
{
	void elmvec(int, int, int, real_t [], real_t [], real_t);
	int j,k;

	k=0;
	j=1;
	do {
		k++;
		elmvec(j,j+k-1,1-j,h,v,v[k]*c);
		j += k;
	} while (k < n);
}
 
/* AIRY.C */
void airy(real_t z, real_t *ai, real_t *aid, real_t *bi, real_t *bid, real_t *expon, int first);
/* AIRYZERO.C */
real_t airyzeros(int n, int d, real_t zai[], real_t vai[]);
/* ARCCOSH.C */
real_t arccosh(real_t x);
/* ARCSINH.C */
real_t arcsinh(real_t x);
/* ARCTANH.C */
real_t arctanh(real_t x);
/* BACKWARD.C */
void backward(real_t x, real_t p, real_t q, real_t i0, int nmax, real_t eps, real_t i[]);
/* BESPQA01.C */
void besspqa01(real_t a, real_t x, real_t *pa, real_t *qa, real_t *pa1, real_t *qa1);
/* BESSI0.C */
real_t bessi0(real_t x);
/* BESSI1.C */
real_t bessi1(real_t x);
/* BESSIAPL.C */
void bessiaplusn(real_t a, real_t x, int n, real_t ia[]);
/* BESSI.C */
void bessi(real_t x, int n, real_t i[]);
/* BESSJ0.C */
real_t bessj0(real_t x);
/* BESSJ1.C */
real_t bessj1(real_t x);
/* BESSJAPL.C */
void bessjaplusn(real_t a, real_t x, int n, real_t ja[]);
/* BESSJ.C */
void bessj(real_t x, int n, real_t j[]);
/* BESSK01.C */
void bessk01(real_t x, real_t *k0, real_t *k1);
/* BESSKA01.C */
void besska01(real_t a, real_t x, real_t *ka, real_t *ka1);
/* BESSKAPL.C */
void besskaplusn(real_t a, real_t x, int nmax, real_t kan[]);
/* BESSK.C */
void bessk(real_t x, int n, real_t k[]);
/* BESSPQ0.C */
void besspq0(real_t x, real_t *p0, real_t *q0);
/* BESSPQ1.C */
void besspq1(real_t x, real_t *p1, real_t *q1);
/* BESSY01.C */
void bessy01(real_t x, real_t *y0, real_t *y1);
/* BESSYA01.C */
void bessya01(real_t a, real_t x, real_t *ya, real_t *ya1);
/* BESSYAPL.C */
void bessyaplusn(real_t a, real_t x, int nmax, real_t yan[]);
/* BESSY.C */
void bessy(real_t x, int n, real_t y[]);
/* BESSZERO.C */
void besszeros(real_t a, int n, real_t z[], int d);
/* EIALPHA.C */
void eialpha(real_t x, int n, real_t alpha[]);
/* EI.C */
real_t ei(real_t x);
/* ENX.C */
void enx(real_t x, int n1, int n2, real_t a[]);
/* ERRORFUN.C */
void errorfunction(real_t x, real_t *erf, real_t *erfc);
/* FG.C */
void fg(real_t x, real_t *f, real_t *g);
/* FORWARD.C */
void forward(real_t x, real_t p, real_t q, real_t i0, real_t i1, int nmax, real_t i[]);
/* FRESNEL.C */
void fresnel(real_t x, real_t *c, real_t *s);
/* GAMMA.C */
real_t numal_gamma(real_t x);
/* IBPPLUSN.C */
void ibpplusn(real_t x, real_t p, real_t q, int nmax, real_t eps, real_t i[]);
/* IBQPLUSN.C */
void ibqplusn(real_t x, real_t p, real_t q, int nmax, real_t eps, real_t i[]);
/* INCBETA.C */
real_t incbeta(real_t x, real_t p, real_t q, real_t eps);
/* INCOMGAM.C */
void incomgam(real_t x, real_t a, real_t *klgam, real_t *grgam, real_t gam, real_t eps);
/* INVERRFN.C */
void inverseerrorfunction(real_t x, real_t oneminx, real_t *inverf);
/* IXPFIX.C */
void ixpfix(real_t x, real_t p, real_t q, int nmax, real_t eps, real_t i[]);
/* IXQFIX.C */
void ixqfix(real_t x, real_t p, real_t q, int nmax, real_t eps, real_t i[]);
/* LOGGAMMA.C */
real_t loggamma(real_t x);
/* LOGONEPL.C */
real_t logoneplusx(real_t x);
/* NEBESIAP.C */
void nonexpbessiaplusn(real_t a, real_t x, int n, real_t ia[]);
/* NEBESK01.C */
void nonexpbessk01(real_t x, real_t *k0, real_t *k1);
/* NEBESSI0.C */
real_t nonexpbessi0(real_t x);
/* NEBESSI1.C */
real_t nonexpbessi1(real_t x);
/* NEBESSI.C */
void nonexpbessi(real_t x, int n, real_t i[]);
/* NEBESSK.C */
void nonexpbessk(real_t x, int n, real_t k[]);
/* NEBSKA01.C */
void nonexpbesska01(real_t a, real_t x, real_t *ka, real_t *ka1);
/* NEBSKAPL.C */
void nonexpbesskaplusn(real_t a, real_t x, int nmax, real_t kan[]);
/* NESPBESI.C */
void nonexpspherbessi(real_t x, int n, real_t i[]);
/* NESPBESK.C */
void nonexpspherbessk(real_t x, int n, real_t k[]);
/* NONEXPEN.C */
void nonexpenx(real_t x, int n1, int n2, real_t a[]);
/* NONEXPER.C */
real_t nonexperfc(real_t x);
/* RECIPGAM.C */
real_t recipgamma(real_t x, real_t *odd, real_t *even);
/* SINCOSFG.C */
void sincosfg(real_t x, real_t *f, real_t *g);
/* SINCOSIN.C */
void sincosint(real_t x, real_t *si, real_t *ci);
/* SPBESSI.C */
void spherbessi(real_t x, int n, real_t i[]);
/* SPBESSJ.C */
void spherbessj(real_t x, int n, real_t j[]);
/* SPBESSK.C */
void spherbessk(real_t x, int n, real_t k[]);
/* SPBESSY.C */
void spherbessy(real_t x, int n, real_t y[]);
/* START.C */
int start(real_t x, int n, int t);

void airy(real_t z, real_t *ai, real_t *aid, real_t *bi, real_t *bid,real_t *expon, int first)
{
	int n,l;
	real_t s,t,u,v,sc,tc,uc,vc,x,k1,k2,k3,k4,c,zt,si,co,expzt,sqrtz,wwl,
			pl,pl1,pl2,pl3;
	static real_t c1,c2,sqrt3,sqrt1opi,pio4,xx[11],ww[11];

	if (first) {
		sqrt3=1.73205080756887729;
		sqrt1opi=0.56418958354775629;
		pio4=0.78539816339744831;
		c1=0.355028053887817;
		c2=0.258819403792807;
		xx[1] =1.4083081072180964e1;
		xx[2] =1.0214885479197331e1;
		xx[3] =7.4416018450450930;
		xx[4] =5.3070943061781927;
		xx[5] =3.6340135029132462;
		xx[6] =2.3310652303052450;
		xx[7] =1.3447970842609268;
		xx[8] =6.4188858369567296e-1;
		xx[9] =2.0100345998121046e-1;
		xx[10]=8.0594359172052833e-3;
		ww[1] =3.1542515762964787e-14;
		ww[2] =6.6394210819584921e-11;
		ww[3] =1.7583889061345669e-8;
		ww[4] =1.3712392370435815e-6;
		ww[5] =4.4350966639284350e-5;
		ww[6] =7.1555010917718255e-4;
		ww[7] =6.4889566103335381e-3;
		ww[8] =3.6440415875773282e-2;
		ww[9] =1.4399792418590999e-1;
		ww[10]=8.1231141336261486e-1;
	}
	*expon=0.0;
	if (z >= -5.0 && z <= 8.0) {
		u=v=t=uc=vc=tc=1.0;
		s=sc=0.5;
		n=3;
		x=z*z*z;
		while (fabs(u)+fabs(v)+fabs(s)+fabs(t) > 1.0e-18) {
			u=u*x/(n*(n-1));
			v=v*x/(n*(n+1));
			s=s*x/(n*(n+2));
			t=t*x/(n*(n-2));
			uc += u;
			vc += v;
			sc += s;
			tc += t;
			n += 3;
		}
		*bi=sqrt3*(c1*uc+c2*z*vc);
		*bid=sqrt3*(c1*z*z*sc+c2*tc);
		if (z < 2.5) {
			*ai=c1*uc-c2*z*vc;
			*aid=c1*sc*z*z-c2*tc;
			return;
		}
	}
	k1=k2=k3=k4=0.0;
	sqrtz=sqrt(fabs(z));
	zt=0.666666666666667*fabs(z)*sqrtz;
	c=sqrt1opi/sqrt(sqrtz);
	if (z < 0.0) {
		z = -z;
		co=cos(zt-pio4);
		si=sin(zt-pio4);
		for (l=1; l<=10; l++) {
			wwl=ww[l];
			pl=xx[l]/zt;
			pl2=pl*pl;
			pl1=1.0+pl2;
			pl3=pl1*pl1;
			k1 += wwl/pl1;
			k2 += wwl*pl/pl1;
			k3 += wwl*pl*(1.0+pl*(2.0/zt+pl))/pl3;
			k4 += wwl*(-1.0-pl*(1.0+pl*(zt-pl))/zt)/pl3;
		}
		*ai=c*(co*k1+si*k2);
		*aid=0.25*(*ai)/z-c*sqrtz*(co*k3+si*k4);
		*bi=c*(co*k2-si*k1);
		*bid=0.25*(*bi)/z-c*sqrtz*(co*k4-si*k3);
	} else {
		if (z < 9.0)
			expzt=exp(zt);
		else {
			expzt=1.0;
			*expon=zt;
		}
		for (l=1; l<=10; l++) {
			wwl=ww[l];
			pl=xx[l]/zt;
			pl1=1.0+pl;
			pl2=1.0-pl;
			k1 += wwl/pl1;
			k2 += wwl*pl/(zt*pl1*pl1);
			k3 += wwl/pl2;
			k4 += wwl*pl/(zt*pl2*pl2);
		}
		*ai=0.5*c*k1/expzt;
		*aid=(*ai)*(-0.25/z-sqrtz)+0.5*c*sqrtz*k2/expzt;
		if (z >= 8.0) {
			*bi=c*k3*expzt;
			*bid=(*bi)*(sqrtz-0.25/z)-c*k4*sqrtz*expzt;
		}
	}
}
 


real_t airyzeros(int n, int d, real_t zai[], real_t vai[])
{
	void airy(real_t,real_t *,real_t *,real_t *,real_t *,real_t *,int);
	int a,found,i;
	real_t c,e,r,zaj,zak,vaj,daj,kaj,zz;

	a=((d == 0) || (d == 2));
	r = (d == 0 || d == 3) ? -1.17809724509617 : -3.53429173528852;
	airy(0.0,&zaj,&vaj,&daj,&kaj,&zz,1);
	for (i=1; i<=n; i++) {
		r += 4.71238898038469;
		zz=r*r;
		zaj = (i == 1 && d == 1) ? -1.01879297 :
				((i == 1 && d == 2) ? -1.17371322 :
				pow(r,0.666666666666667)*
				(a ? -(1.0+(5.0/48.0-(5.0/36.0-(77125.0/82944.0-
				(108056875.0/6967296.0-(162375596875.0/334430208.0)/
				zz)/zz)/zz)/zz)/zz) : -(1.0-(7.0/48.0-(35.0/288.0-
				(181223.0/207360.0-(18683371.0/1244160.0-
				(91145884361.0/191102976.0)/zz)/zz)/zz)/zz)/zz)));
		if (d <= 1.0)
			airy(zaj,&vaj,&daj,&c,&e,&zz,0);
		else
			airy(zaj,&c,&e,&vaj,&daj,&zz,0);
		found=(fabs(a ? vaj : daj) < 1.0e-12);
		while (!found) {
			if (a) {
				kaj=vaj/daj;
				zak=zaj-kaj*(1.0+zaj*kaj*kaj);
			} else {
				kaj=daj/(zaj*vaj);
				zak=zaj-kaj*(1.0+kaj*(kaj*zaj+1.0/zaj));
			}
			if (d <= 1)
				airy(zak,&vaj,&daj,&c,&e,&zz,0);
			else
				airy(zak,&c,&e,&vaj,&daj,&zz,0);
			found=(fabs(zak-zaj) < 1.0e-14*fabs(zak) ||
					fabs(a ? vaj : daj) < 1.0e-12);
			zaj=zak;
		}
		vai[i]=(a ? daj : vaj);
		zai[i]=zaj;
	}
	return zai[n];
}
 


real_t arccosh(real_t x)
{
	return ((x <= 1.0) ? 0.0 : ((x > 1.0e10) ?
						0.69314718055995+log(x) :
						log(x+sqrt((x-1.0)*(x+1.0)))));
}
 


real_t arcsinh(real_t x)
{
	real_t logoneplusx(real_t);
	real_t y;

	if (fabs(x) > 1.0e10)
		return ((x > 0.0) ? 0.69314718055995+log(fabs(x)) :
									-0.69314718055995+log(fabs(x)));
	else {
		y=x*x;
		return ((x == 0.0) ? 0.0 :	((x > 0.0) ?
					logoneplusx(fabs(x)+y/(1.0+sqrt(1.0+y))) :
					-logoneplusx(fabs(x)+y/(1.0+sqrt(1.0+y)))));
	}
}
 


real_t arctanh(real_t x)
{
	real_t logoneplusx(real_t);
	real_t ax;

	if (fabs(x) >= 1.0)
		return ((x > 0.0) ? FLT_MAX : -FLT_MAX);
	else {
		ax=fabs(x);
		return ((x == 0.0) ? 0.0 :	((x > 0.0) ?
					0.5*logoneplusx(2.0*ax/(1.0-ax)) :
					-0.5*logoneplusx(2.0*ax/(1.0-ax))));
	}
}
 


void besspqa01(real_t a, real_t x, real_t *pa, real_t *qa, real_t *pa1,real_t *qa1)
{
	if (a == 0.0) {
		void besspq0(real_t, real_t *, real_t *);
		void besspq1(real_t, real_t *, real_t *);
		besspq0(x,pa,qa);
		besspq1(x,pa1,qa1);
	} else {
		int n,na,rec,rev;
		real_t b,pi,p0,q0;
		pi=4.0*atan(1.0);
		rev = (a < -0.5);
		if (rev) a = -a-1.0;
		rec = (a >= 0.5);
		if (rec) {
			na=floor(a+0.5);
			a -= na;
		}
		if (a == -0.5) {
			*pa = *pa1 = 1.0;
			*qa = *qa1 = 0.0;
		} else if (x >= 3.0) {
			real_t c,d,e,f,g,p,q,r,s,temp;
			c=0.25-a*a;
			b=x+x;
			f=r=1.0;
			g = -x;
			s=0.0;
			temp=x*cos(a*pi)/pi*1.0e15;
			e=temp*temp;
			n=2;
			do {
				d=(n-1+c/n);
				p=(2*n*f+b*g-d*r)/(n+1);
				q=(2*n*g-b*f-d*s)/(n+1);
				r=f;
				f=p;
				s=g;
				g=q;
				n++;
			} while ((p*p+q*q)*n*n < e);
			e=f*f+g*g;
			p=(r*f+s*g)/e;
			q=(s*f-r*g)/e;
			f=p;
			g=q;
			n--;
			while (n > 0) {
				r=(n+1)*(2.0-p)-2.0;
				s=b+(n+1)*q;
				d=(n-1+c/n)/(r*r+s*s);
				p=d*r;
				q=d*s;
				e=f;
				f=p*(e+1.0)-g*q;
				g=q*(e+1.0)+p*g;
				n--;
			}
			f += 1.0;
			d=f*f+g*g;
			*pa = f/d;
			*qa = -g/d;
			d=a+0.5-p;
			q += x;
			*pa1 = ((*pa)*q-(*qa)*d)/x;
			*qa1 = ((*qa)*q+(*pa)*d)/x;
		} else {
			void bessjaplusn(real_t, real_t, int, real_t []);
			void bessya01(real_t, real_t, real_t *, real_t *);
			real_t c,s,chi,ya,ya1,ja[2];
			b=sqrt(pi*x/2.0);
			chi=x-pi*(a/2.0+0.25);
			c=cos(chi);
			s=sin(chi);
			bessya01(a,x,&ya,&ya1);
			bessjaplusn(a,x,1,ja);
			*pa = b*(ya*s+c*ja[0]);
			*qa = b*(c*ya-s*ja[0]);
			*pa1 = b*(s*ja[1]-c*ya1);
			*qa1 = b*(c*ja[1]+s*ya1);
		}
		if (rec) {
			x=2.0/x;
			b=(a+1.0)*x;
			for (n=1; n<=na; n++) {
				p0=(*pa)-(*qa1)*b;
				q0=(*qa)+(*pa1)*b;
				*pa = *pa1;
				*pa1 = p0;
				*qa = *qa1;
				*qa1 = q0;
				b += x;
			}
		}
		if (rev) {
			p0 = *pa1;
			*pa1 = *pa;
			*pa = p0;
			q0 = *qa1;
			*qa1 = *qa;
			*qa = q0;
		}
	}
}
 


real_t bessi0(real_t x)
{
	if (x == 0.0) return 1.0;
	if (fabs(x) <= 15.0) {
		real_t z,denominator,numerator;
		z=x*x;
		numerator=(z*(z*(z*(z*(z*(z*(z*(z*(z*(z*(z*(z*(z*(z*
			0.210580722890567e-22+0.380715242345326e-19)+
			0.479440257548300e-16)+0.435125971262668e-13)+
			0.300931127112960e-10)+0.160224679395361e-7)+
			0.654858370096785e-5)+0.202591084143397e-2)+
			0.463076284721000e0)+0.754337328948189e2)+
			0.830792541809429e4)+0.571661130563785e6)+
			0.216415572361227e8)+0.356644482244025e9)+
			0.144048298227235e10);
		denominator=(z*(z*(z-0.307646912682801e4)+
			0.347626332405882e7)-0.144048298227235e10);
		return -numerator/denominator;
	} else {
		real_t nonexpbessi0(real_t);
		return exp(fabs(x))*nonexpbessi0(x);
	}
}
 


real_t bessi1(real_t x)
{
	if (x == 0.0) return 0.0;
	if (fabs(x) <= 15.0) {
		real_t z,denominator,numerator;
		z=x*x;
		denominator=z*(z-0.222583674000860e4)+0.136293593052499e7;
		numerator=(z*(z*(z*(z*(z*(z*(z*(z*(z*(z*(z*(z*(z*(z*
			0.207175767232792e-26+0.257091905584414e-23)+
			0.306279283656135e-20)+0.261372772158124e-17)+
			0.178469361410091e-14)+0.963628891518450e-12)+
			0.410068906847159e-9)+0.135455228841096e-6)+
			0.339472890308516e-4)+0.624726195127003e-2)+
			0.806144878821295e0)+0.682100567980207e2)+
			0.341069752284422e4)+0.840705772877836e5)+
			0.681467965262502e6);
		return x*(numerator/denominator);
	} else {
		real_t nonexpbessi1(real_t);
		return exp(fabs(x))*nonexpbessi1(x);
	}
}
 


void bessiaplusn(real_t a, real_t x, int n, real_t ia[])
{
	if (x == 0.0) {
		ia[0] = (a == 0.0) ? 1.0 : 0.0;
		for (; n>=1; n--) ia[n]=0.0;
	} else if (a == 0.0) {
		void bessi(real_t, int, real_t []);
		bessi(x,n,ia);
	} else if (a == 0.5) {
		void nonexpspherbessi(real_t, int, real_t []);
		real_t c;
		c=0.797884560802865*sqrt(fabs(x))*exp(fabs(x));
		nonexpspherbessi(x,n,ia);
		for (; n>=0; n--) ia[n] *= c;
	} else {
		void nonexpbessiaplusn(real_t, real_t, int, real_t[]);
		real_t expx;
		expx=exp(fabs(x));
		nonexpbessiaplusn(a,x,n,ia);
		for (; n>=0; n--) ia[n] *= expx;
	}
}
 


void bessi(real_t x, int n, real_t i[])
{
	if (x == 0.0) {
		i[0]=1.0;
		for (; n>=1; n--) i[n]=0.0;
	} else {
		void nonexpbessi(real_t, int, real_t []);
		real_t expx;
		expx=exp(fabs(x));
		nonexpbessi(x,n,i);
		for (; n>=0; n--) i[n] *= expx;
	}
}
 


real_t bessj0(real_t x)
{
	if (x == 0.0) return 1.0;
	if (fabs(x) < 8.0) {
		int i;
		real_t z,z2,b0,b1,b2;
		static real_t ar[15]={-0.75885e-15, 0.4125321e-13,
			-0.194383469e-11, 0.7848696314e-10, -0.267925353056e-8,
			0.7608163592419e-7, -0.176194690776215e-5,
			0.324603288210051e-4, -0.46062616620628e-3,
			0.48191800694676e-2, -0.34893769411409e-1,
			0.158067102332097, -0.37009499387265, 0.265178613203337,
			-0.872344235285222e-2};
		x /= 8.0;
		z=2.0*x*x-1.0;
		z2=z+z;
		b1=b2=0.0;
		for (i=0; i<=14; i++) {
			b0=z2*b1-b2+ar[i];
			b2=b1;
			b1=b0;
		}
		return z*b1-b2+0.15772797147489;
	} else {
		void besspq0(real_t, real_t *, real_t *);
		real_t c,cosx,sinx,p0,q0;
		x=fabs(x);
		c=0.797884560802865/sqrt(x);
		cosx=cos(x-0.706858347057703e1);
		sinx=sin(x-0.706858347057703e1);
		besspq0(x,&p0,&q0);
		return c*(p0*cosx-q0*sinx);
	}
}
 


real_t bessj1(real_t x)
{
	if (x == 0.0) return 1.0;
	if (fabs(x) < 8.0) {
		int i;
		real_t z,z2,b0,b1,b2;
		static real_t ar[15]={-0.19554e-15, 0.1138572e-13,
			-0.57774042e-12, 0.2528123664e-10, -0.94242129816e-9,
			0.2949707007278e-7, -0.76175878054003e-6,
			0.158870192399321e-4, -0.260444389348581e-3,
			0.324027018268386e-2, -0.291755248061542e-1,
			0.177709117239728e0, -0.661443934134543e0,
			0.128799409885768e1, -0.119180116054122e1};
		x /= 8.0;
		z=2.0*x*x-1.0;
		z2=z+z;
		b1=b2=0.0;
		for (i=0; i<=14; i++) {
			b0=z2*b1-b2+ar[i];
			b2=b1;
			b1=b0;
		}
		return x*(z*b1-b2+0.648358770605265);
	} else {
		void besspq1(real_t, real_t *, real_t *);
		int sgnx;
		real_t c,cosx,sinx,p1,q1;
		sgnx = (x > 0.0) ? 1 : -1;
		x=fabs(x);
		c=0.797884560802865/sqrt(x);
		cosx=cos(x-0.706858347057703e1);
		sinx=sin(x-0.706858347057703e1);
		besspq1(x,&p1,&q1);
		return sgnx*c*(p1*sinx+q1*cosx);
	}
}
 


void bessjaplusn(real_t a, real_t x, int n, real_t ja[])
{
	if (x == 0.0) {
		ja[0] = (a == 0.0) ? 1.0 : 0.0;
		for (; n>=1; n--) ja[n]=0.0;
	} else if (a == 0.0) {
		void bessj(real_t, int, real_t []);
		bessj(x,n,ja);
	} else if (a == 0.5) {
		void spherbessj(real_t, int, real_t []);
		real_t s;
		s=sqrt(x)*0.797884560802865;
		spherbessj(x,n,ja);
		for (; n>=0; n--) ja[n] *= s;
	} else {
		real_t numal_gamma(real_t);
		int start(real_t, int, int);
		int k,m,nu;
		real_t a2,x2,r,s,l,labda;
		l=1.0;
		nu=start(x,n,0);
		for (m=1; m<=nu; m++) l=l*(m+a)/(m+1);
		r=s=0.0;
		x2=2.0/x;
		k = -1;
		a2=a+a;
		for (m=nu+nu; m>=1; m--) {
			r=1.0/(x2*(a+m)-r);
			if (k == 1)
				labda=0.0;
			else {
				l=l*(m+2)/(m+a2);
				labda=l*(m+a);
			}
			s=r*(labda+s);
			k = -k;
			if (m <= n) ja[m]=r;
		}
		ja[0]=r=1.0/numal_gamma(1.0+a)/(1.0+s)/pow(x2,a);
		for (m=1; m<=n; m++) r = ja[m] *= r;
	}
}
 


void bessj(real_t x, int n, real_t j[])
{
	if (x == 0.0) {
		j[0]=1.0;
		for (; n>=1; n--) j[n]=0.0;
	} else {
		int start(real_t, int, int);
		int l,m,nu,signx;
		real_t x2,r,s;
		signx = (x > 0.0) ? 1 : -1;
		x=fabs(x);
		r=s=0.0;
		x2=2.0/x;
		l=0;
		nu=start(x,n,0);
		for (m=nu; m>=1; m--) {
			r=1.0/(x2*m-r);
			l=2-l;
			s=r*(l+s);
			if (m <= n) j[m]=r;
		}
		j[0]=r=1.0/(1.0+s);
		for (m=1; m<=n; m++) r = j[m] *= r;
		if (signx < 0.0)
			for (m=1; m<=n; m += 2) j[m] = -j[m];
	}
}
 


void bessk01(real_t x, real_t *k0, real_t *k1)
{
	if (x <= 1.5) {
		int k;
		real_t c,d,r,sum0,sum1,t,term,t0,t1;
		sum0=d=log(2.0/x)-0.5772156649015328606;
		sum1 = c = -1.0-2.0*d;
		r=term=1.0;
		t=x*x/4.0;
		k=1;
		do {
			term *= t*r*r;
			d += r;
			c -= r;
			r=1.0/(k+1);
			c -= r;
			t0=term*d;
			t1=term*c*r;
			sum0 += t0;
			sum1 += t1;
			k++;
		} while (fabs(t0/sum0)+fabs(t1/sum1) > 1.0e-15);
		*k0 = sum0;
		*k1 = (1.0+t*sum1)/x;
	} else {
		void nonexpbessk01(real_t, real_t *, real_t *);
		real_t expx;
		expx=exp(-x);
		nonexpbessk01(x,k0,k1);
		*k1 *= expx;
		*k0 *= expx;
	}
}
 


void besska01(real_t a, real_t x, real_t *ka, real_t *ka1)
{
	if (a == 0.0) {
		void bessk01(real_t, real_t *, real_t *);
		bessk01(x,ka,ka1);
	} else {
		int n,na,rec,rev;
		real_t f,g,h,pi;
		pi=4.0*atan(1.0);
		rev = (a < -0.5);
		if (rev) a = -a-1.0;
		rec = (a >= 0.5);
		if (rec) {
			na=floor(a+0.5);
			a -= na;
		}
		if (a == 0.5)
			f=g=sqrt(pi/x/2.0)*exp(-x);
		else if (x < 1.0) {
			real_t recipgamma(real_t, real_t *, real_t *);
			real_t a1,b,c,d,e,p,q,s;
			b=x/2.0;
			d = -log(b);
			e=a*d;
			c=a*pi;
			c = (fabs(c) < 1.0e-15) ? 1.0 : c/sin(c);
			s = (fabs(e) < 1.0e-15) ? 1.0 : sinh(e)/e;
			e=exp(e);
			a1=(e+1.0/e)/2.0;
			g=recipgamma(a,&p,&q)*e;
			*ka = f = c*(p*a1+q*s*d);
			e=a*a;
			p=0.5*g*c;
			q=0.5/g;
			c=1.0;
			d=b*b;
			*ka1 = p;
			n=1;
			do {
				f=(f*n+p+q)/(n*n-e);
				c=c*d/n;
				p /= (n-a);
				q /= (n+a);
				g=c*(p-n*f);
				h=c*f;
				*ka += h;
				*ka1 += g;
				n++;
			} while (h/(*ka)+fabs(g)/(*ka1) > 1.0e-15);
			f=(*ka);
			g=(*ka1)/b;
		} else {
			void nonexpbesska01(real_t, real_t, real_t *, real_t *);
			real_t expon;
			expon=exp(-x);
			nonexpbesska01(a,x,ka,ka1);
			f=expon*(*ka);
			g=expon*(*ka1);
		}
		if (rec) {
			x=2.0/x;
			for (n=1; n<=na; n++) {
				h=f+(a+n)*x*g;
				f=g;
				g=h;
			}
		}
		if (rev) {
			*ka1 = f;
			*ka = g;
		} else {
			*ka = f;
			*ka1 = g;
		}
	}
}
 


void besskaplusn(real_t a, real_t x, int nmax, real_t kan[])
{
	void besska01(real_t, real_t, real_t *, real_t *);
	int n;
	real_t k1;

	besska01(a,x,&kan[0],&k1);
	a -= 1.0;
	x=2.0/x;
	if (nmax > 0) kan[1]=k1;
	for (n=2; n<=nmax; n++) kan[n]=kan[n-2]+(a+n)*x*kan[n-1];
}
 


void bessk(real_t x, int n, real_t k[])
{
	void bessk01(real_t, real_t *, real_t *);
	int i;
	real_t k0,k1,k2;

	bessk01(x,&k0,&k1);
	k[0]=k0;
	if (n > 0) k[1]=k1;
	x=2.0/x;
	for (i=2; i<=n; i++) {
		k[i]=k2=k0+x*(i-1)*k1;
		k0=k1;
		k1=k2;
	}
}
 


void besspq0(real_t x, real_t *p0, real_t *q0)
{
	if (x < 8.0) {
		real_t bessj0(real_t);
		void bessy01(real_t, real_t *, real_t *);
		real_t b,cosx,sinx,j0x,y0;
		b=sqrt(x)*1.25331413731550;
		bessy01(x,&y0,&j0x);
		j0x=bessj0(x);
		x -= 0.785398163397448;
		cosx=cos(x);
		sinx=sin(x);
		*p0 = b*(y0*sinx+j0x*cosx);
		*q0 = b*(y0*cosx-j0x*sinx);
	} else {
		int i;
		real_t x2,b0,b1,b2,y;
		static real_t ar1[11]={-0.10012e-15, 0.67481e-15, -0.506903e-14,
			0.4326596e-13, -0.43045789e-12, 0.516826239e-11,
			-0.7864091377e-10, 0.163064646352e-8, -0.5170594537606e-7,
			0.30751847875195e-5, -0.536522046813212e-3};
		static real_t ar2[10]={-0.60999e-15, 0.425523e-14,
			-0.3336328e-13, 0.30061451e-12, -0.320674742e-11,
			0.4220121905e-10, -0.72719159369e-9, 0.1797245724797e-7,
			-0.74144984110606e-6, 0.683851994261165e-4};
		y=8.0/x;
		x=2.0*y*y-1.0;
		x2=x+x;
		b1=b2=0.0;
		for (i=0; i<=10; i++) {
			b0=x2*b1-b2+ar1[i];
			b2=b1;
			b1=b0;
		}
		*p0 = x*b1-b2+0.99946034934752;
		b1=b2=0.0;
		for (i=0; i<=9; i++) {
			b0=x2*b1-b2+ar2[i];
			b2=b1;
			b1=b0;
		}
		*q0 = (x*b1-b2-0.015555854605337)*y;
	}
}
 


void besspq1(real_t x, real_t *p1, real_t *q1)
{
	if (x < 8.0) {
		real_t bessj1(real_t);
		void bessy01(real_t, real_t *, real_t *);
		real_t b,cosx,sinx,j1x,y1;
		b=sqrt(x)*1.25331413731550;
		bessy01(x,&j1x,&y1);
		j1x=bessj1(x);
		x -= 0.785398163397448;
		cosx=cos(x);
		sinx=sin(x);
		*p1 = b*(j1x*sinx-y1*cosx);
		*q1 = b*(j1x*cosx+y1*sinx);
	} else {
		int i;
		real_t x2,b0,b1,b2,y;
		static real_t ar1[11]={0.10668e-15, -0.72212e-15, 0.545267e-14,
			-0.4684224e-13, 0.46991955e-12, -0.570486364e-11,
			0.881689866e-10, -0.187189074911e-8, 0.6177633960644e-7,
			-0.39872843004889e-5, 0.89898983308594e-3};
		static real_t ar2[11]={-0.10269e-15, 0.65083e-15, -0.456125e-14,
			0.3596777e-13, -0.32643157e-12, 0.351521879e-11,
			-0.4686363688e-10, 0.82291933277e-9, -0.2095978138408e-7,
			0.91386152579555e-6, -0.96277235491571e-4};
		y=8.0/x;
		x=2.0*y*y-1.0;
		x2=x+x;
		b1=b2=0.0;
		for (i=0; i<=10; i++) {
			b0=x2*b1-b2+ar1[i];
			b2=b1;
			b1=b0;
		}
		*p1 = x*b1-b2+1.0009030408600137;
		b1=b2=0.0;
		for (i=0; i<=10; i++) {
			b0=x2*b1-b2+ar2[i];
			b2=b1;
			b1=b0;
		}
		*q1 = (x*b1-b2+0.46777787069535e-1)*y;
	}
}
 


void bessy01(real_t x, real_t *y0, real_t *y1)
{
	if (x < 8.0) {
		int i;
		real_t bessj0(real_t);
		real_t bessj1(real_t);
		real_t z,z2,c,lnx,b0,b1,b2;
		static real_t ar1[15]={0.164349e-14, -0.8747341e-13,
			0.402633082e-11, -0.15837552542e-9, 0.524879478733e-8,
			-0.14407233274019e-6, 0.32065325376548e-5,
			-0.563207914105699e-4, 0.753113593257774e-3,
			-0.72879624795521e-2, 0.471966895957634e-1,
			-0.177302012781143, 0.261567346255047,
			0.179034314077182, -0.274474305529745};
		static real_t ar2[15]={0.42773e-15, -0.2440949e-13,
			0.121143321e-11, -0.5172121473e-10, 0.187547032473e-8,
			-0.5688440039919e-7, 0.141662436449235e-5,
			-0.283046401495148e-4, 0.440478629867099e-3,
			-0.51316411610611e-2, 0.423191803533369e-1,
			-0.226624991556755, 0.675615780772188,
			-0.767296362886646, -0.128697384381350};
		c=0.636619772367581;
		lnx=c*log(x);
		c /= x;
		x /= 8.0;
		z=2.0*x*x-1.0;
		z2=z+z;
		b1=b2=0.0;
		for (i=0; i<=14; i++) {
			b0=z2*b1-b2+ar1[i];
			b2=b1;
			b1=b0;
		}
		*y0 = lnx*bessj0(8.0*x)+z*b1-b2-0.33146113203285e-1;
		b1=b2=0.0;
		for (i=0; i<=14; i++) {
			b0=z2*b1-b2+ar2[i];
			b2=b1;
			b1=b0;
		}
		*y1 = lnx*bessj1(8.0*x)-c+x*(z*b1-b2+0.2030410588593425e-1);
	} else {
		void besspq0(real_t, real_t *, real_t *);
		void besspq1(real_t, real_t *, real_t *);
		real_t c,cosx,sinx,p0,q0,p1,q1;
		c=0.797884560802865/sqrt(x);
		besspq0(x,&p0,&q0);
		besspq1(x,&p1,&q1);
		x -= 0.706858347057703e1;
		cosx=cos(x);
		sinx=sin(x);
		*y0 = c*(p0*sinx+q0*cosx);
		*y1 = c*(q1*sinx-p1*cosx);
	}
}
 


void bessya01(real_t a, real_t x, real_t *ya, real_t *ya1)
{
	if (a == 0.0) {
		void bessy01(real_t, real_t *, real_t *);
		bessy01(x,ya,ya1);
	} else {
		int n,na,rec,rev;
		real_t b,c,d,e,f,g,h,p,pi,q,r,s;
		pi=4.0*atan(1.0);
		na=floor(a+0.5);
		rec = (a >= 0.5);
		rev = (a < -0.5);
		if (rev || rec) a -= na;
		if (a == -0.5) {
			p=sqrt(2.0/pi/x);
			f=p*sin(x);
			g = -p*cos(x);
		} else if (x < 3.0) {
			real_t recipgamma(real_t, real_t *, real_t *);
			b=x/2.0;
			d = -log(b);
			e=a*d;
			c = (fabs(a) < 1.0e-8) ? 1.0/pi : a/sin(a*pi);
			s = (fabs(e) < 1.0e-8) ? 1.0 : sinh(e)/e;
			e=exp(e);
			g=recipgamma(a,&p,&q)*e;
			e=(e+1.0/e)/2.0;
			f=2.0*c*(p*e+q*s*d);
			e=a*a;
			p=g*c;
			q=1.0/g/pi;
			c=a*pi/2.0;
			r = (fabs(c) < 1.0e-8) ? 1.0 : sin(c)/c;
			r *= pi*c*r;
			c=1.0;
			d = -b*b;
			*ya = f+r*q;
			*ya1 = p;
			n=1;
			do {
				f=(f*n+p+q)/(n*n-e);
				c=c*d/n;
				p /= (n-a);
				q /= (n+a);
				g=c*(f+r*q);
				h=c*p-n*g;
				*ya += g;
				*ya1 += h;
				n++;
			} while (fabs(g/(1.0+fabs(*ya)))+fabs(h/(1.0+fabs(*ya1))) >
							1.0e-15);
			f = -(*ya);
			g = -(*ya1)/b;
		} else {
			void besspqa01(real_t,real_t,real_t *,real_t *,real_t *,real_t *);
			b=x-pi*(a+0.5)/2.0;
			c=cos(b);
			s=sin(b);
			d=sqrt(2.0/x/pi);
			besspqa01(a,x,&p,&q,&b,&h);
			f=d*(p*s+q*c);
			g=d*(h*s-b*c);
		}
		if (rev) {
			x=2.0/x;
			na = -na-1;
			for (n=0; n<=na; n++) {
				h=x*(a-n)*f-g;
				g=f;
				f=h;
			}
		} else if (rec) {
			x=2.0/x;
			for (n=1; n<=na; n++) {
				h=x*(a+n)*g-f;
				f=g;
				g=h;
			}
		}
		*ya = f;
		*ya1 = g;
	}
}
 


void bessyaplusn(real_t a, real_t x, int nmax, real_t yan[])
{
	void bessya01(real_t, real_t, real_t *, real_t *);
	int n;
	real_t y1;

	bessya01(a,x,&yan[0],&y1);
	a -= 1.0;
	x=2.0/x;
	if (nmax > 0) yan[1]=y1;
	for (n=2; n<=nmax; n++) yan[n] = -yan[n-2]+(a+n)*x*yan[n-1];
}
 


void bessy(real_t x, int n, real_t y[])
{
	void bessy01(real_t, real_t *, real_t *);
	int i;
	real_t y0,y1,y2;

	bessy01(x,&y0,&y1);
	y[0]=y0;
	if (n > 0) y[1]=y1;
	x=2.0/x;
	for (i=2; i<=n; i++) {
		y[i]=y2=(i-1)*x*y1-y0;
		y0=y1;
		y1=y2;
	}
}
 


void besszeros(real_t a, int n, real_t z[], int d)
{
	void besspqa01(real_t, real_t, real_t *, real_t *, real_t *, real_t *);
	int j,s;
	real_t aa,a2,b,bb,c,chi,co,mu,mu2,mu3,mu4,p,pi,pa,pa1,p0,p1,pp1,
			q,qa,qa1,q1,qq1,ro,si,t,tt,u,v,w,x,xx,x4,y,yy,fi;

	pi=4.0*atan(1.0);
	aa=a*a;
	mu=4.0*aa;
	mu2=mu*mu;
	mu3=mu*mu2;
	mu4=mu2*mu2;
	if (d < 3) {
		p=7.0*mu-31.0;
		p0=mu-1.0;
		p1=4.0*(253.0*mu2-3722.0*mu+17869.0)/15.0/p*p0;
		q1=8.0*(83.0*mu2-982.0*mu+3779.0)/5.0/p;
	} else {
		p=7.0*mu2+82.0*mu-9.0;
		p0=mu+3.0;
		p1=(4048.0*mu4+131264.0*mu3-221984.0*mu2-
			417600.0*mu+1012176.0)/60.0/p;
		q1=1.6*(83.0*mu3+2075.0*mu2-3039.0*mu+3537.0)/p;
	}
	t = (d == 1 || d == 4) ? 0.25 : 0.75;
	tt=4.0*t;
	if (d < 3) {
		pp1=5.0/48.0;
		qq1 = -5.0/36.0;
	} else {
		pp1 = -7.0/48.0;
		qq1=35.0/288.0;
	}
	y=3.0*pi/8.0;
	bb = (a >= 3.0) ? pow(a,-2.0/3.0) : 0.0;
	for (s=1; s<=n; s++) {
		if (a == 0.0 && s == 1 && d == 3) {
			x=0.0;
			j=0;
		} else {
			if (s >= 3.0*a-8.0) {
				b=(s+a/2.0-t)*pi;
				c=1.0/b/b/64.0;
				x=b-1.0/b/8.0*(p0-p1*c)/(1.0-q1*c);
			} else {
				if (s == 1)
					x = ((d == 1) ? -2.33811 : ((d == 2) ? -1.17371 :
							((d == 3) ? -1.01879 : -2.29444)));
				else {
					x=y*(4.0*s-tt);
					v=1.0/x/x;
					x = -pow(x,2.0/3.0)*(1.0+v*(pp1+qq1*v));
				}
				u=x*bb;
				yy=2.0/3.0*pow(-u,1.5);
				if (yy == 0.0)
					fi=0.0;
				else if (yy > 1.0e5)
					fi=1.570796;
				else {
					real_t r,p,pp;
					if (yy <1.0) {
						p=pow(3.0*yy,1.0/3.0);
						pp=p*p;
						p *= (1.0+pp*(-210.0+pp*(27.0-2.0*pp))/1575.0);
					} else {
						p=1.0/(yy+1.570796);
						pp=p*p;
						p=1.570796-p*(1.0+pp*(2310.0+pp*(3003.0+pp*
							(4818.0+pp*(8591.0+pp*16328.0))))/3465.0);
					}
					pp=(yy+p)*(yy+p);
					r=(p-atan(p+yy))/pp;
					fi=p-(1.0+pp)*r*(1.0+r/(p+yy));
				}
				v=fi;
				w=1.0/cos(v);
				xx=1.0-w*w;
				c=sqrt(u/xx);
				x=w*(a+c/a/u*((d < 3) ?
					-5.0/48.0/u-c*(-5.0/24.0/xx+1.0/8.0) :
					7.0/48.0/u+c*(-7.0/24.0/xx+3.0/8.0)));
			}
			j=0;
			do {
				xx=x*x;
				x4=xx*xx;
				a2=aa-xx;
				besspqa01(a,x,&pa,&qa,&pa1,&qa1);
				chi=x-pi*(a/2.0+0.25);
				si=sin(chi);
				co=cos(chi);
				ro = ((d == 1) ? (pa*co-qa*si)/(pa1*si+qa1*co) :
						((d == 2) ? (pa*si+qa*co)/(qa1*si-pa1*co) :
						((d == 3) ? a/x-(pa1*si+qa1*co)/(pa*co-qa*si) :
										a/x-(qa1*si-pa1*co)/(pa*si+qa*co))));
				j++;
				if (d < 3) {
					u=ro;
					p=(1.0-4.0*a2)/6.0/x/(2.0*a+1.0);
					q=(2.0*(xx-mu)-1.0-6.0*a)/3.0/x/(2.0*a+1.0);
				} else {
					u = -xx*ro/a2;
					v=2.0*x*a2/(aa+xx)/3.0;
					w=a2*a2*a2;
					q=v*(1.0+(mu2+32.0*mu*xx+48.0*x4)/32.0/w);
					p=v*(1.0+(-mu2+40.0*mu*xx+48.0*x4)/64.0/w);
				}
				w=u*(1.0+p*ro)/(1.0+q*ro);
				x += w;
			} while (fabs(w/x) > 1.0e-13 && j < 5);
		}
		z[s]=x;
	}
}
 


void eialpha(real_t x, int n, real_t alpha[])
{
	int k;
	real_t a,b,c;

	c=1.0/x;
	a=exp(-x);
	b=alpha[0]=a*c;
	for (k=1; k<=n; k++) alpha[k]=b=(a+k*b)*c;
}
 


real_t ei(real_t x)
{
	real_t chepolsum(int, real_t, real_t []);
	real_t pol(int, real_t, real_t []);
	real_t jfrac(int, real_t [], real_t []);
	real_t p[8],q[8];

	if (x > 24.0) {
		p[0]=  1.00000000000058;     q[1] =  1.99999999924131;
		p[1]=x-3.00000016782085;     q[2] = -2.99996432944446;
		p[2]=x-5.00140345515924;     q[3] = -7.90404992298926;
		p[3]=x-7.49289167792884;     q[4] = -4.31325836146628;
		p[4]=x-3.08336269051763e1;   q[5] =  2.95999399486831e2;
		p[5]=x-1.39381360364405;     q[6] = -6.74704580465832;
		p[6]=x+8.91263822573708;     q[7] =  1.04745362652468e3;
		p[7]=x-5.31686623494482e1;
		return exp(x)*(1.0+jfrac(7,q,p)/x)/x;
	} else if (x > 12.0) {
		p[0]=  9.99994296074708e-1;  q[1] =  1.00083867402639;
		p[1]=x-1.95022321289660;     q[2] = -3.43942266899870;
		p[2]=x+1.75656315469614;     q[3] =  2.89516727925135e1;
		p[3]=x+1.79601688769252e1;   q[4] =  7.60761148007735e2;
		p[4]=x-3.23467330305403e1;   q[5] =  2.57776384238440e1;
		p[5]=x-8.28561994140641;     q[6] =  5.72837193837324e1;
		p[6]=x-1.86545454883399e1;   q[7] =  6.95000655887434e1;
		p[7]=x-3.48334653602853;
		return exp(x)*jfrac(7,q,p)/x;
	} else if (x > 6.0) {
		p[0]=  1.00443109228078;     q[1] =  5.27468851962908e-1;
		p[1]=x-4.32531132878135e1;   q[2] =  2.73624119889328e3;
		p[2]=x+6.01217990830080e1;   q[3] =  1.43256738121938e1;
		p[3]=x-3.31842531997221e1;   q[4] =  1.00367439516726e3;
		p[4]=x+2.50762811293561e1;   q[5] = -6.25041161671876;
		p[5]=x+9.30816385662165;     q[6] =  3.00892648372915e2;
		p[6]=x-2.19010233854880e1;   q[7] =  3.93707701852715;
		p[7]=x-2.18086381520724;
		return exp(x)*jfrac(7,q,p)/x;
	} else if (x > 0.0) {
		real_t t,r,x0,xmx0;
		p[0]= -1.95773036904548e8;   q[0] = -8.26271498626055e7;
		p[1]=  3.89280421311201e6;   q[1] =  8.91925767575612e7;
		p[2]= -2.21744627758845e7;   q[2] = -2.49033375740540e7;
		p[3]= -1.19623669349247e5;   q[3] =  4.28559624611749e6;
		p[4]= -2.49301393458648e5;   q[4] = -4.83547436162164e5;
		p[5]= -4.21001615357070e3;   q[5] =  3.57300298058508e4;
		p[6]= -5.49142265521085e2;   q[6] = -1.60708926587221e3;
		p[7]= -8.66937339951070;     q[7] =  3.41718750000000e1;
		x0=0.372507410781367;
		t=x/3.0-1.0;
		r=chepolsum(7,t,p)/chepolsum(7,t,q);
		xmx0=(x-409576229586.0/1099511627776.0)-
				0.767177250199394e-12;
		if (fabs(xmx0) > 0.037)
			t=log(x/x0);
		else {
			real_t z,z2;
			p[0] =  0.837207933976075e1;
			p[1] = -0.652268740837103e1;
			p[2] =  0.569955700306720;
			q[0] =  0.418603966988037e1;
			q[1] = -0.465669026080814e1;
			q[2] =  0.1e1;
			z=xmx0/(x+x0);
			z2=z*z;
			t=z*pol(2,z2,p)/pol(2,z2,q);
		}
		return t+xmx0*r;
	} else if (x > -1.0) {
		real_t y;
		p[0] = -4.41785471728217e4;  q[0]=7.65373323337614e4;
		p[1] =  5.77217247139444e4;  q[1]=3.25971881290275e4;
		p[2] =  9.93831388962037e3;  q[2]=6.10610794245759e3;
		p[3] =  1.84211088668000e3;  q[3]=6.35419418378382e2;
		p[4] =  1.01093806161906e2;  q[4]=3.72298352833327e1;
		p[5] =  5.03416184097568;    q[5]=1.0;
		y = -x;
		return log(y)-pol(5,y,p)/pol(5,y,q);
	} else if (x > -4.0) {
		real_t y;
		p[0]=8.67745954838444e-8;  q[0]=1.0;
		p[1]=9.99995519301390e-1;  q[1]=1.28481935379157e1;
		p[2]=1.18483105554946e1;   q[2]=5.64433569561803e1;
		p[3]=4.55930644253390e1;   q[3]=1.06645183769914e2;
		p[4]=6.99279451291003e1;   q[4]=8.97311097125290e1;
		p[5]=4.25202034768841e1;   q[5]=3.14971849170441e1;
		p[6]=8.83671808803844;     q[6]=3.79559003762122;
		p[7]=4.01377664940665e-1;  q[7]=9.08804569188869e-2;
		y = -1.0/x;
		return -exp(x)*pol(7,y,p)/pol(5,y,q);
	} else {
		real_t y;
		p[0] = -9.99999999998447e-1;  q[0]=1.0;
		p[1] = -2.66271060431811e1;   q[1]=2.86271060422192e1;
		p[2] = -2.41055827097015e2;   q[2]=2.92310039388533e2;
		p[3] = -8.95927957772937e2;   q[3]=1.33278537748257e3;
		p[4] = -1.29885688756484e3;   q[4]=2.77761949509163e3;
		p[5] = -5.45374158883133e2;   q[5]=2.40401713225909e3;
		p[6] = -5.66575206533869;     q[6]=6.31657483280800e2;
		y = -1.0/x;
		return -exp(x)*y*(1.0+y*pol(6,y,p)/pol(5,y,q));
	}
}
 


void errorfunction(real_t x, real_t *erf, real_t *erfc)
{
	if (x > 26.0) {
		*erf = 1.0;
		*erfc = 0.0;
		return;
	} else if (x < -5.5) {
		*erf = -1.0;
		*erfc = 2.0;
		return;
	} else {
		real_t nonexperfc(real_t);
		real_t absx,c,p,q;
		absx=fabs(x);
		if (absx <= 0.5) {
			c=x*x;
			p=((-0.356098437018154e-1*c+0.699638348861914e1)*c+
					0.219792616182942e2)*c+0.242667955230532e3;
			q=((c+0.150827976304078e2)*c+0.911649054045149e2)*c+
					0.215058875869861e3;
			*erf = x*p/q;
			*erfc = 1.0-(*erf);
		} else {
			*erfc = exp(-x*x)*nonexperfc(absx);
			*erf = 1.0-(*erfc);
			if (x < 0.0) {
				*erf = -(*erf);
				*erfc = 2.0-(*erfc);
			}
		}
	}
}
 


void fg(real_t x, real_t *f, real_t *g)
{
	void fresnel(real_t, real_t *, real_t *);
	real_t absx,c,s,c1,s1,a,xinv,x3inv,c4,p,q;

	absx=fabs(x);
	if (absx <= 1.6) {
		fresnel(x,&c,&s);
		a=x*x*1.57079632679490;
		c1=cos(a);
		s1=sin(a);
		a = (x < 0.0) ? -0.5 : 0.5;
		p=a-c;
		q=a-s;
		*f = q*c1-p*s1;
		*g = p*c1+q*s1;
	} else if (absx <= 1.9) {
		xinv=1.0/x;
		a=xinv*xinv;
		x3inv=a*xinv;
		c4=a*a;
		p=(((1.35304235540388e1*c4+6.98534261601021e1)*c4+
				4.80340655577925e1)*c4+8.03588122803942e0)*c4+
				3.18309268504906e-1;
		q=(((6.55630640083916e1*c4+2.49561993805172e2)*c4+
				1.57611005580123e2)*c4+2.55491618435795e1)*c4+1.0;
		*f = xinv*p/q;
		p=((((2.05421432498501e1*c4+1.96232037971663e2)*c4+
				1.99182818678903e2)*c4+5.31122813480989e1)*c4+
				4.44533827550512e0)*c4+1.01320618810275e-1;
		q=((((1.01379483396003e3*c4+3.48112147856545e3)*c4+
				2.54473133181822e3)*c4+5.83590575716429e2)*c4+
				4.53925019673689e1)*c4+1.0;
		*g = x3inv*p/q;
	} else if (absx <= 2.4) {
		xinv=1.0/x;
		a=xinv*xinv;
		x3inv=a*xinv;
		c4=a*a;
		p=((((7.17703249365140e2*c4+3.09145161574430e3)*c4+
				1.93007640786716e3)*c4+3.39837134926984e2)*c4+
				1.95883941021969e1)*c4+3.18309881822017e-1;
		q=((((3.36121699180551e3*c4+1.09334248988809e4)*c4+
				6.33747155851144e3)*c4+1.08535067500650e3)*c4+
				6.18427138172887e1)*c4+1.0;
		*f = xinv*p/q;
		p=((((3.13330163068756e2*c4+1.59268006085354e3)*c4+
				9.08311749529594e2)*c4+1.40959617911316e2)*c4+
				7.11205001789783e0)*c4+1.01321161761805e-1;
		q=((((1.15149832376261e4*c4+2.41315567213370e4)*c4+
				1.06729678030581e4)*c4+1.49051922797329e3)*c4+
				7.17128596939302e1)*c4+1.0;
		*g = x3inv*p/q;
	} else {
		xinv=1.0/x;
		a=xinv*xinv;
		x3inv=a*xinv;
		c4=a*a;
		p=((((2.61294753225142e4*c4+6.13547113614700e4)*c4+
				1.34922028171857e4)*c4+8.16343401784375e2)*c4+
				1.64797712841246e1)*c4+9.67546032967090e-2;
		q=((((1.37012364817226e6*c4+1.00105478900791e6)*c4+
				1.65946462621853e5)*c4+9.01827596231524e3)*c4+
				1.73871690673649e2)*c4+1.0;
		*f = (c4*(-p)/q+0.318309886183791)*xinv;
		p=(((((1.72590224654837e6*c4+6.66907061668636e6)*c4+
				1.77758950838030e6)*c4+1.35678867813756e5)*c4+
				3.87754141746378e3)*c4+4.31710157823358e1)*c4+
				1.53989733819769e-1;
		q=(((((1.40622441123580e8*c4+9.38695862531635e7)*c4+
				1.62095600500232e7)*c4+1.02878693056688e6)*c4+
				2.69183180396243e4)*c4+2.86733194975899e2)*c4+1.0;
		*g = (c4*(-p)/q+0.101321183642338)*x3inv;
	}
}
 
void forward(real_t x, real_t p, real_t q, real_t i0, real_t i1,int nmax, real_t i[])
{
	int m,n;
	real_t y,r,s;

	i[0]=i0;
	if (nmax > 0) i[1]=i1;
	m=nmax-1;
	r=p+q-1.0;
	y=1.0-x;
	for (n=1; n<=m; n++) {
		s=(n+r)*y;
		i[n+1]=((n+q+s)*i[n]-s*i[n-1])/(n+q);
	}
}
 


void fresnel(real_t x, real_t *c, real_t *s)
{
	void fg(real_t, real_t *, real_t *);
	real_t absx,x3,x4,a,p,q,f,g,c1,s1;

	absx=fabs(x);
	if (absx <= 1.2) {
		a=x*x;
		x3=a*x;
		x4=a*a;
		p=(((5.47711385682687e-6*x4-5.28079651372623e-4)*x4+
				1.76193952543491e-2)*x4-1.99460898826184e-1)*x4+1.0;
		q=(((1.18938901422876e-7*x4+1.55237885276994e-5)*x4+
				1.09957215025642e-3)*x4+4.72792112010453e-2)*x4+1.0;
		*c = x*p/q;
		p=(((6.71748466625141e-7*x4-8.45557284352777e-5)*x4+
				3.87782123463683e-3)*x4-7.07489915144523e-2)*x4+
				5.23598775598299e-1;
		q=(((5.95281227678410e-8*x4+9.62690875939034e-6)*x4+
				8.17091942152134e-4)*x4+4.11223151142384e-2)*x4+1.0;
		*s = x3*p/q;
	} else if (absx <= 1.6) {
		a=x*x;
		x3=a*x;
		x4=a*a;
		p=((((-5.68293310121871e-8*x4+1.02365435056106e-5)*x4-
				6.71376034694922e-4)*x4+1.91870279431747e-2)*x4-
				2.07073360335324e-1)*x4+1.00000000000111e0;
		q=((((4.41701374065010e-10*x4+8.77945377892369e-8)*x4+
				1.01344630866749e-5)*x4+7.88905245052360e-4)*x4+
				3.96667496952323e-2)*x4+1.0;
		*c = x*p/q;
		p=((((-5.76765815593089e-9*x4+1.28531043742725e-6)*x4-
				1.09540023911435e-4)*x4+4.30730526504367e-3)*x4-
				7.37766914010191e-2)*x4+5.23598775598344e-1;
		q=((((2.05539124458580e-10*x4+5.03090581246612e-8)*x4+
				6.87086265718620e-6)*x4+6.18224620195473e-4)*x4+
				3.53398342767472e-2)*x4+1.0;
		*s = x3*p/q;
	} else if (absx < 1.0e15) {
		fg(x,&f,&g);
		a=x*x;
		a=(a-floor(a/4.0)*4.0)*1.57079632679490;
		c1=cos(a);
		s1=sin(a);
		a = (x < 0.0) ? -0.5 : 0.5;
		*c = f*s1-g*c1+a;
		*s = -f*c1-g*s1+a;
	} else
		*c = *s = ((x > 0.0) ? 0.5 : -0.5);
}
 


real_t numal_gamma(real_t x)
{
	real_t recipgamma(real_t, real_t *, real_t *);
	real_t loggamma(real_t);
	int inv;
	real_t y,s,f,g,odd,even;

	if (x < 0.5) {
		y=x-floor(x/2.0)*2;
		s = 3.14159265358979;
		if (y >= 1.0) {
			s = -s;
			y=2.0-y;
		}
		if (y >= 0.5) y=1.0-y;
		inv=1;
		x=1.0-x;
		f=s/sin(3.14159265358979*y);
	} else
		inv=0;
	if (x > 22.0)
		g=exp(loggamma(x));
	else {
		s=1.0;
		while (x > 1.5) {
			x=x-1.0;
			s *= x;
		}
		g=s/recipgamma(1.0-x,&odd,&even);
	}
	return (inv ? f/g : g);
}
 


real_t incbeta(real_t x, real_t p, real_t q, real_t eps)
{
	real_t numal_gamma(real_t);
	int m,n,neven,recur;
	real_t g,f,fn,fn1,fn2,gn,gn1,gn2,dn,pq;

	if (x == 0.0 || x == 1.0)
		return x;
	else {
		if (x > 0.5) {
			f=p;
			p=q;
			q=f;
			x=1.0-x;
			recur=1;
		} else
			recur=0;
		g=fn2=0.0;
		m=0;
		pq=p+q;
		f=fn1=gn1=gn2=1.0;
		neven=0;
		n=1;
		do {
			if (neven) {
				m++;
				dn=m*x*(q-m)/(p+n-1.0)/(p+n);
			} else
				dn = -x*(p+m)*(pq+m)/(p+n-1.0)/(p+n);
			g=f;
			fn=fn1+dn*fn2;
			gn=gn1+dn*gn2;
			neven=(!neven);
			f=fn/gn;
			fn2=fn1;
			fn1=fn;
			gn2=gn1;
			gn1=gn;
			n++;
		} while (fabs((f-g)/f) > eps);
		f=f*pow(x,p)*pow(1.0-x,q)*numal_gamma(p+q)/numal_gamma(p+1.0)/numal_gamma(q);
		if (recur) f=1.0-f;
		return f;
	}
}
 


void incomgam(real_t x, real_t a, real_t *klgam, real_t *grgam,real_t gam, real_t eps)
{
	int n;
	real_t c0,c1,c2,d0,d1,d2,x2,ax,p,q,r,s,r1,r2,scf;

	s=exp(-x+a*log(x));
	scf=FLT_MAX;
	if (x <= ((a < 3.0) ? 1.0 : a)) {
		x2=x*x;
		ax=a*x;
		d0=1.0;
		p=a;
		c0=s;
		d1=(a+1.0)*(a+2.0-x);
		c1=((a+1.0)*(a+2.0)+x)*s;
		r2=c1/d1;
		n=1;
		do {
			p += 2.0;
			q=(p+1.0)*(p*(p+2.0)-ax);
			r=n*(n+a)*(p+2.0)*x2;
			c2=(q*c1+r*c0)/p;
			d2=(q*d1+r*d0)/p;
			r1=r2;
			r2=c2/d2;
			c0=c1;
			c1=c2;
			d0=d1;
			d1=d2;
			if (fabs(c1) > scf || fabs(d1) > scf) {
				c0 /= scf;
				c1 /= scf;
				d0 /= scf;
				d1 /= scf;
			}
			n++;
		} while (fabs((r2-r1)/r2) > eps);
		*klgam = r2/a;
		*grgam = gam-(*klgam);
	} else {
		c0=a*s;
		c1=(1.0+x)*c0;
		q=x+2.0-a;
		d0=x;
		d1=x*q;
		r2=c1/d1;
		n=1;
		do {
			q += 2.0;
			r=n*(n+1-a);
			c2=q*c1-r*c0;
			d2=q*d1-r*d0;
			r1=r2;
			r2=c2/d2;
			c0=c1;
			c1=c2;
			d0=d1;
			d1=d2;
			if (fabs(c1) > scf || fabs(d1) > scf) {
				c0 /= scf;
				c1 /= scf;
				d0 /= scf;
				d1 /= scf;
			}
			n++;
		} while (fabs((r2-r1)/r2) > eps);
		*grgam = r2/a;
		*klgam = gam-(*grgam);
	}
}
 


void inverseerrorfunction(real_t x, real_t oneminx, real_t *inverf)
{
	real_t chepolsum(int, real_t, real_t []);
	real_t absx,p,betax,a[24];

	absx=fabs(x);
	if (absx > 0.8 && oneminx > 0.2) oneminx=0.0;
	if (absx <= 0.8) {
		a[0]  = 0.992885376618941;  a[1]  = 0.120467516143104;
		a[2]  = 0.016078199342100;  a[3]  = 0.002686704437162;
		a[4]  = 0.000499634730236;  a[5]  = 0.000098898218599;
		a[6]  = 0.000020391812764;  a[7]  = 0.000004327271618;
		a[8]  = 0.000000938081413;  a[9]  = 0.000000206734720;
		a[10] = 0.000000046159699;  a[11] = 0.000000010416680;
		a[12] = 0.000000002371501;  a[13] = 0.000000000543928;
		a[14] = 0.000000000125549;  a[15] = 0.000000000029138;
		a[16] = 0.000000000006795;  a[17] = 0.000000000001591;
		a[18] = 0.000000000000374;  a[19] = 0.000000000000088;
		a[20] = 0.000000000000021;  a[21] = 0.000000000000005;
		*inverf = chepolsum(21,x*x/0.32-1.0,a)*x;
	} else if (oneminx >= 25.0e-4) {
		a[0]  =  0.912158803417554;  a[1]  = -0.016266281867664;
		a[2]  =  0.000433556472949;  a[3]  =  0.000214438570074;
		a[4]  =  0.000002625751076;  a[5]  = -0.000003021091050;
		a[6]  = -0.000000012406062;  a[7]  =  0.000000062406609;
		a[8]  = -0.000000000540125;  a[9]  = -0.000000001423208;
		a[10] =  0.000000000034384;  a[11] =  0.000000000033584;
		a[12] = -0.000000000001458;  a[13] = -0.000000000000810;
		a[14] =  0.000000000000053;  a[15] =  0.000000000000020;
		betax=sqrt(-log((1.0+absx)*oneminx));
		p = -1.54881304237326*betax+2.56549012314782;
		p=chepolsum(15,p,a);
		*inverf = (x < 0.0) ? -betax*p : betax*p;
	} else if (oneminx >= 5.0e-16) {
		a[0]  =  0.956679709020493;  a[1]  = -0.023107004309065;
		a[2]  = -0.004374236097508;  a[3]  = -0.000576503422651;
		a[4]  = -0.000010961022307;  a[5]  =  0.000025108547025;
		a[6]  =  0.000010562336068;  a[7]  =  0.000002754412330;
		a[8]  =  0.000000432484498;  a[9]  = -0.000000020530337;
		a[10] = -0.000000043891537;  a[11] = -0.000000017684010;
		a[12] = -0.000000003991289;  a[13] = -0.000000000186932;
		a[14] =  0.000000000272923;  a[15] =  0.000000000132817;
		a[16] =  0.000000000031834;  a[17] =  0.000000000001670;
		a[18] = -0.000000000002036;  a[19] = -0.000000000000965;
		a[20] = -0.000000000000220;  a[21] = -0.000000000000010;
		a[22] =  0.000000000000014;  a[23] =  0.000000000000006;
		betax=sqrt(-log((1.0+absx)*oneminx));
		p = -0.559457631329832*betax+2.28791571626336;
		p=chepolsum(23,p,a);
		*inverf = (x < 0.0) ? -betax*p : betax*p;
	} else if (oneminx >= FLT_MIN) {
		a[0]  =  0.988575064066189;  a[1]  =  0.010857705184599;
		a[2]  = -0.001751165102763;  a[3]  =  0.000021196993207;
		a[4]  =  0.000015664871404;  a[5]  = -0.000000519041687;
		a[6]  = -0.000000037135790;  a[7]  =  0.000000001217431;
		a[8]  = -0.000000000176812;  a[9]  = -0.000000000011937;
		a[10] =  0.000000000000380;  a[11] = -0.000000000000066;
		a[12] = -0.000000000000009;
		betax=sqrt(-log((1.0+absx)*oneminx));
		p = -9.19999235883015/sqrt(betax)+2.79499082012460;
		p=chepolsum(12,p,a);
		*inverf = (x < 0.0) ? -betax*p : betax*p;
	} else
		*inverf = (x > 0.0) ? 26.0 : -26.0;
}
 


real_t loggamma(real_t x)
{
	int i;
	real_t r,x2,y,f,u0,u1,u,z,b[19];

	if (x > 13.0) {
		r=1.0;
		while (x <= 22.0) {
			r /= x;
			x += 1.0;
		}
		x2 = -1.0/(x*x);
		r=log(r);
		return log(x)*(x-0.5)-x+r+0.918938533204672+
				(((0.595238095238095e-3*x2+0.793650793650794e-3)*x2+
				0.277777777777778e-2)*x2+0.833333333333333e-1)/x;
	} else {
		f=1.0;
		u0=u1=0.0;
		b[1]  = -0.0761141616704358;  b[2]  = 0.0084323249659328;
		b[3]  = -0.0010794937263286;  b[4]  = 0.0001490074800369;
		b[5]  = -0.0000215123998886;  b[6]  = 0.0000031979329861;
		b[7]  = -0.0000004851693012;  b[8]  = 0.0000000747148782;
		b[9]  = -0.0000000116382967;  b[10] = 0.0000000018294004;
		b[11] = -0.0000000002896918;  b[12] = 0.0000000000461570;
		b[13] = -0.0000000000073928;  b[14] = 0.0000000000011894;
		b[15] = -0.0000000000001921;  b[16] = 0.0000000000000311;
		b[17] = -0.0000000000000051;  b[18] = 0.0000000000000008;
		if (x < 1.0) {
			f=1.0/x;
			x += 1.0;
		} else
			while (x > 2.0) {
				x -= 1.0;
				f *= x;
			}
		f=log(f);
		y=x+x-3.0;
		z=y+y;
		for (i=18; i>=1; i--) {
			u=u0;
			u0=z*u0+b[i]-u1;
			u1=u;
		}
		return (u0*y+0.491415393029387-u1)*(x-1.0)*(x-2.0)+f;
	}
}
 


real_t logoneplusx(real_t x)
{
	real_t y,z;

	if (x == 0.0)
		return 0.0;
	else if (x < -0.2928 || x > 0.4142)
		return log(1.0+x);
	else {
		z=x/(x+2.0);
		y=z*z;
		return z*(2.0+y*(0.666666666663366+y*(0.400000001206045+y*
					(0.285714091590488+y*(0.22223823332791+y*
					(0.1811136267967+y*0.16948212488))))));
	}
}
 


void nonexpbessiaplusn(real_t a, real_t x, int n, real_t ia[])
{
	if (x == 0.0) {
		ia[0] = (a == 0.0) ? 1.0 : 0.0;
		for (; n>=1; n--) ia[n]=0.0;
	} else if (a == 0.0) {
		void nonexpbessi(real_t, int, real_t []);
		nonexpbessi(x,n,ia);
	} else if (a == 0.5) {
		void nonexpspherbessi(real_t, int, real_t []);
		real_t c;
		c=0.797884560802865*sqrt(x);
		nonexpspherbessi(x,n,ia);
		for (; n>=0; n--) ia[n] *= c;
	} else {
		real_t numal_gamma(real_t);
		int start(real_t, int, int);
		int m,nu;
		real_t r,s,labda,l,a2,x2;
		a2=a+a;
		x2=2.0/x;
		l=1.0;
		nu=start(x,n,1);
		r=s=0.0;
		for (m=1; m<=nu; m++) l=l*(m+a2)/(m+1);
		for (m=nu; m>=1; m--) {
			r=1.0/(x2*(a+m)+r);
			l=l*(m+1)/(m+a2);
			labda=l*(m+a)*2.0;
			s=r*(labda+s);
			if (m <= n) ia[m]=r;
		}
		ia[0]=r=1.0/(1.0+s)/numal_gamma(1.0+a)/pow(x2,a);
		for (m=1; m<=n; m++) r = ia[m] *= r;
	}
}
 


void nonexpbessk01(real_t x, real_t *k0, real_t *k1)
{
	if (x <= 1.5) {
		void bessk01(real_t, real_t *, real_t *);
		real_t expx;
		expx=exp(x);
		bessk01(x,k0,k1);
		*k0 *= expx;
		*k1 *= expx;
	} else if (x <= 5.0) {
		int i,r;
		real_t t2,s1,s2,term1,term2,sqrtexpr,exph2,x2;
		static real_t fac[20]={0.90483741803596, 0.67032004603564,
			0.40656965974060, 0.20189651799466, 0.82084998623899e-1,
			0.27323722447293e-1, 0.74465830709243e-2,
			0.16615572731739e-2, 0.30353913807887e-3,
			0.45399929762485e-4, 0.55595132416500e-5,
			0.55739036926944e-6, 0.45753387694459e-7,
			0.30748798795865e-8, 0.16918979226151e-9,
			0.76218651945127e-11, 0.28111852987891e-12,
			0.84890440338729e-14, 0.2098791048793e-15,
			0.42483542552916e-17};
		s1=0.5;
		s2=0.0;
		r=0.0;
		x2=x+x;
		exph2=1.0/sqrt(5.0*x);
		for (i=0; i<=19; i++) {
			r += 1.0;
			t2=r*r/10.0;
			sqrtexpr=sqrt(t2/x2+1.0);
			term1=fac[i]/sqrtexpr;
			term2=fac[i]*sqrtexpr*t2;
			s1 += term1;
			s2 += term2;
		}
		*k0 = exph2*s1;
		*k1 = exph2*s2*2.0;
	} else {
		int r,i;
		real_t br,br1,br2,cr,cr1,cr2,ermin1,erplus1,er,f0,f1,
				expx,y,y2;
		static real_t dr[14]={0.27545e-15, -0.172697e-14,
				0.1136042e-13, -0.7883236e-13, 0.58081063e-12,
				-0.457993633e-11, 0.3904375576e-10, -0.36454717921e-9,
				0.379299645568e-8, -0.450473376411e-7,
				0.63257510850049e-6, -0.11106685196665e-4,
				0.26953261276272e-3, -0.11310504646928e-1};
		y=10.0/x-1.0;
		y2=y+y;
		r=30;
		br1=br2=cr1=cr2=erplus1=er=0.0;
		for (i=0; i<=13; i++) {
			r -= 2;
			br=y2*br1-br2+dr[i];
			cr=cr1*y2-cr2+er;
			ermin1=r*dr[i]+erplus1;
			erplus1=er;
			er=ermin1;
			br2=br1;
			br1=br;
			cr2=cr1;
			cr1=cr;
		}
		f0=y*br1-br2+0.9884081742308258;
		f1=y*cr1-cr2+er/2.0;
		expx=sqrt(1.5707963267949/x);
		*k0 = f0 *=expx;
		*k1 = (1.0+0.5/x)*f0+(10.0/x/x)*expx*f1;
	}
}
 


real_t nonexpbessi0(real_t x)
{
	if (x == 0.0) return 1.0;
	if (fabs(x) <= 15.0) {
		real_t bessi0(real_t);
		return exp(-fabs(x))*bessi0(x);
	} else {
		int i;
		real_t sqrtx,br,br1,br2,z,z2,numerator,denominator;
		static real_t ar1[4]={0.2439260769778, -0.115591978104435e3,
			0.784034249005088e4, -0.143464631313583e6};
		static real_t ar2[4]={1.0, -0.325197333369824e3,
			0.203128436100794e5, -0.361847779219653e6};
		x=fabs(x);
		sqrtx=sqrt(x);
		br1=br2=0.0;
		z=30.0/x-1.0;
		z2=z+z;
		for (i=0; i<=3; i++) {
			br=z2*br1-br2+ar1[i];
			br2=br1;
			br1=br;
		}
		numerator=z*br1-br2+0.346519833357379e6;
		br1=br2=0.0;
		for (i=0; i<=3; i++) {
			br=z2*br1-br2+ar2[i];
			br2=br1;
			br1=br;
		}
		denominator=z*br1-br2+0.865665274832055e6;
		return (numerator/denominator)/sqrtx;
	}
}
 


real_t nonexpbessi1(real_t x)
{
	if (x == 0.0) return 0.0;
	if (fabs(x) > 15.0) {
		int i,signx;
		real_t br,br1,br2,z,z2,sqrtx,numerator,denominator;
		static real_t ar1[4]={0.1494052814740e1, -0.362026420242263e3,
			0.220549722260336e5, -0.408928084944275e6};
		static real_t ar2[4]={1.0, -0.631003200551590e3,
			0.496811949533398e5, -0.100425428133695e7};
		signx = (x > 0.0) ? 1 : -1;
		x=fabs(x);
		sqrtx=sqrt(x);
		z=30.0/x-1.0;
		z2=z+z;
		br1=br2=0.0;
		for (i=0; i<=3; i++) {
			br=z2*br1-br2+ar1[i];
			br2=br1;
			br1=br;
		}
		numerator=z*br1-br2+0.102776692371524e7;
		br1=br2=0.0;
		for (i=0; i<=3; i++) {
			br=z2*br1-br2+ar2[i];
			br2=br1;
			br1=br;
		}
		denominator=z*br1-br2+0.26028876789105e7;
		return ((numerator/denominator)/sqrtx)*signx;
	} else {
		real_t bessi1(real_t);
		return exp(-fabs(x))*bessi1(x);
	}
}
 


void nonexpbessi(real_t x, int n, real_t i[])
{
	if (x == 0.0) {
		i[0]=1.0;
		for (; n>=1; n--) i[n]=0.0;
	} else {
		int start(real_t, int, int);
		int k,negative;
		real_t x2,r,s;
		negative = (x < 0.0);
		x=fabs(x);
		r=s=0.0;
		x2=2.0/x;
		k=start(x,n,1);
		for (; k>=1; k--) {
			r=1.0/(r+x2*k);
			s=r*(2.0+s);
			if (k <= n) i[k]=r;
		}
		i[0]=r=1.0/(1.0+s);
		if (negative)
			for (k=1; k<=n; k++) r = i[k] *= (-r);
		else
			for (k=1; k<=n; k++) r = i[k] *= r;
	}
}
 


void nonexpbessk(real_t x, int n, real_t k[])
{
	void nonexpbessk01(real_t, real_t *, real_t *);
	int i;
	real_t k0,k1,k2;

	nonexpbessk01(x,&k0,&k1);
	k[0]=k0;
	if (n > 0) k[1]=k1;
	x=2.0/x;
	for (i=2; i<=n; i++) {
		k[i]=k2=k0+x*(i-1)*k1;
		k0=k1;
		k1=k2;
	}
}
 


void nonexpbesska01(real_t a, real_t x, real_t *ka, real_t *ka1)
{
	if (a == 0.0) {
		void nonexpbessk01(real_t, real_t *, real_t *);
		nonexpbessk01(x,ka,ka1);
	} else {
		int n,na,rec,rev;
		real_t f,g,h,pi;
		pi=4.0*atan(1.0);
		rev = (a < -0.5);
		if (rev) a = -a-1.0;
		rec = (a >= 0.5);
		if (rec) {
			na=floor(a+0.5);
			a -= na;
		}
		if (a == -0.5)
			f=g=sqrt(pi/x/2.0);
		else if (x < 1.0) {
			void besska01(real_t, real_t, real_t *, real_t *);
			real_t expon;
			expon=exp(x);
			besska01(a,x,ka,ka1);
			f=expon*(*ka);
			g=expon*(*ka1);
		} else {
			real_t b,c,e,p,q;
			c=0.25-a*a;
			b=x+x;
			g=1.0;
			f=0.0;
			e=cos(a*pi)/pi*x*1.0e15;
			n=1;
			do {
				h=(2.0*(n+x)*g-(n-1+c/n)*f)/(n+1);
				f=g;
				g=h;
				n++;
			} while (h*n < e);
			p=q=f/g;
			e=b-2.0;
			do {
				p=(n-1+c/n)/(e+(n+1)*(2.0-p));
				q=p*(1.0+q);
				n--;
			} while (n > 0);
			f=sqrt(pi/b)/(1.0+q);
			g=f*(a+x+0.5-p)/x;
		}
		if (rec) {
			x=2.0/x;
			for (n=1; n<=na; n++) {
				h=f+(a+n)*x*g;
				f=g;
				g=h;
			}
		}
		if (rev) {
			*ka1 = f;
			*ka = g;
		} else {
			*ka = f;
			*ka1 = g;
		}
	}
}
 


void nonexpbesskaplusn(real_t a, real_t x, int nmax, real_t kan[])
{
	void nonexpbesska01(real_t, real_t, real_t *, real_t *);
	int n;
	real_t k1;

	nonexpbesska01(a,x,&kan[0],&k1);
	a -= 1.0;
	x=2.0/x;
	if (nmax > 0) kan[1]=k1;
	for (n=2; n<=nmax; n++) kan[n]=kan[n-2]+(a+n)*x*kan[n-1];
}
 


void nonexpspherbessi(real_t x, int n, real_t i[])
{
	if (x == 0.0) {
		i[0]=1.0;
		for (; n>=1; n--) i[n]=0.0;
	} else {
		int start(real_t, int, int);
		int m;
		real_t x2,r;
		x2=x+x;
		i[0] = x2 = ((x == 0.0) ? 1.0 : ((x2 < 0.7) ?
						sinh(x)/(x*exp(x)) : (1.0-exp(-x2))/x2));
		if (n != 0) {
			r=0.0;
			m=start(x,n,1);
			for (; m>=1; m--) {
				r=1.0/((m+m+1)/x+r);
				if (m <= n) i[m]=r;
			}
			for (m=1; m<=n; m++) x2 = i[m] *= x2;
		}
	}
}
 
void nonexpspherbessk(real_t x, int n, real_t k[])
{
	int i;
	real_t ki,ki1,ki2;
	x=1.0/x;
	k[0]=ki2=x*1.5707963267949;
	if (n != 0) {
		k[1]=ki1=ki2*(1.0+x);
		for (i=2; i<=n; i++) {
			k[i]=ki=ki2+(i+i-1)*x*ki1;
			ki2=ki1;
			ki1=ki;
		}
	}
}
 


real_t nonexperfc(real_t x)
{
	void errorfunction(real_t, real_t *, real_t *);
	real_t absx,erf,erfc,c,p,q;

	absx=fabs(x);
	if (absx <= 0.5) {
		errorfunction(x,&erf,&erfc);
		return exp(x*x)*erfc;
	} else if (absx < 4.0) {
		c=absx;
		p=((((((-0.136864857382717e-6*c+0.564195517478974e0)*c+
				0.721175825088309e1)*c+0.431622272220567e2)*c+
				0.152989285046940e3)*c+0.339320816734344e3)*c+
				0.451918953711873e3)*c+0.300459261020162e3;
		q=((((((c+0.127827273196294e2)*c+0.770001529352295e2)*c+
				0.277585444743988e3)*c+0.638980264465631e3)*c+
				0.931354094850610e3)*c+0.790950925327898e3)*c+
				0.300459260956983e3;
		return ((x > 0.0) ? p/q : exp(x*x)*2.0-p/q);
	} else {
		c=1.0/x/x;
		p=(((0.223192459734185e-1*c+0.278661308609648e0)*c+
				0.226956593539687e0)*c+0.494730910623251e-1)*c+
				0.299610707703542e-2;
		q=(((c+0.198733201817135e1)*c+0.105167510706793e1)*c+
				0.191308926107830e0)*c+0.106209230528468e-1;
		c=(c*(-p)/q+0.564189583547756)/absx;
		return ((x > 0.0) ? c : exp(x*x)*2.0-c);
	}
}
 
real_t recipgamma(real_t x, real_t *odd, real_t *even)
{
	int i;
	real_t alfa,beta,x2,b[13];

	b[1] = -0.283876542276024;   b[2]  = -0.076852840844786;
	b[3] =  0.001706305071096;   b[4]  =  0.001271927136655;
	b[5] =  0.000076309597586;   b[6]  = -0.000004971736704;
	b[7] = -0.000000865920800;   b[8]  = -0.000000033126120;
	b[9] =  0.000000001745136;   b[10] =  0.000000000242310;
	b[11]=  0.000000000009161;   b[12] = -0.000000000000170;
	x2=x*x*8.0;
	alfa = -0.000000000000001;
	beta=0.0;
	for (i=12; i>=2; i -= 2) {
		beta = -(alfa*2.0+beta);
		alfa = -beta*x2-alfa+b[i];
	}
	*even=(beta/2.0+alfa)*x2-alfa+0.921870293650453;
	alfa = -0.000000000000034;
	beta=0.0;
	for (i=11; i>=1; i -= 2) {
		beta = -(alfa*2.0+beta);
		alfa = -beta*x2-alfa+b[i];
	}
	*odd=(alfa+beta)*2.0;
	return (*odd)*x+(*even);
}
 


void sincosfg(real_t x, real_t *f, real_t *g)
{
	void sincosint(real_t, real_t *, real_t *);
	real_t chepolsum(int, real_t, real_t []);
	real_t absx,si,ci;

	absx=fabs(x);
	if (absx <= 4.0) {
		real_t cx,sx;
		sincosint(x,&si,&ci);
		cx=cos(x);
		sx=sin(x);
		si -= 1.570796326794897;
		*f = ci*sx-si*cx;
		*g = -ci*cx-si*sx;
	} else {
		real_t a[24];
		a[0] =  9.6578828035185e-1;  a[1]  = -4.3060837778597e-2;
		a[2] = -7.3143711748104e-3;  a[3]  =  1.4705235789868e-3;
		a[4] = -9.8657685732702e-5;  a[5]  = -2.2743202204655e-5;
		a[6] =  9.8240257322526e-6;  a[7]  = -1.8973430148713e-6;
		a[8] =  1.0063435941558e-7;  a[9]  =  8.0819364822241e-8;
		a[10]= -3.8976282875288e-8;  a[11] =  1.0335650325497e-8;
		a[12]= -1.4104344875897e-9;  a[13] = -2.5232078399683e-10;
		a[14]=  2.5699831325961e-10; a[15] = -1.0597889253948e-10;
		a[16]=  2.8970031570214e-11; a[17] = -4.1023142563083e-12;
		a[18]= -1.0437693730018e-12; a[19] =  1.0994184520547e-12;
		a[20]= -5.2214239401679e-13; a[21] =  1.7469920787829e-13;
		a[22]= -3.8470012979279e-14;
		*f = chepolsum(22,8.0/absx-1.0,a)/x;
		a[0] =  2.2801220638241e-1;  a[1]  = -2.6869727411097e-2;
		a[2] = -3.5107157280958e-3;  a[3]  =  1.2398008635186e-3;
		a[4] = -1.5672945116862e-4;  a[5]  = -1.0664141798094e-5;
		a[6] =  1.1170629343574e-5;  a[7]  = -3.1754011655614e-6;
		a[8] =  4.4317473520398e-7;  a[9]  =  5.5108696874463e-8;
		a[10]= -5.9243078711743e-8;  a[11] =  2.2102573381555e-8;
		a[12]= -5.0256827540623e-9;  a[13] =  3.1519168259424e-10;
		a[14]=  3.6306990848979e-10; a[15] = -2.2974764234591e-10;
		a[16]=  8.5530309424048e-11; a[17] = -2.1183067724443e-11;
		a[18]=  1.7133662645092e-12; a[19] =  1.7238877517248e-12;
		a[20]= -1.2930281366811e-12; a[21] =  5.7472339223731e-13;
		a[22]= -1.8415468268314e-13; a[23] =  3.5937256571434e-14;
		*g = 4.0*chepolsum(23,8.0/absx-1.0,a)/absx/absx;
	}
}
 


void sincosint(real_t x, real_t *si, real_t *ci)
{
	void sincosfg(real_t, real_t *, real_t *);
	real_t chepolsum(int, real_t, real_t []);
	real_t absx,z,f,g;

	absx=fabs(x);
	if (absx <= 4.0) {
		real_t a[11],z2;
		a[0] =2.7368706803630e0;   a[1] = -1.1106314107894e0;
		a[2] =1.4176562194666e-1;  a[3] = -1.0252652579174e-2;
		a[4] =4.6494615619880e-4;  a[5] = -1.4361730896642e-5;
		a[6] =3.2093684948229e-7;  a[7] = -5.4251990770162e-9;
		a[8] =7.1776288639895e-11; a[9] = -7.6335493723482e-13;
		a[10]=6.6679958346983e-15;
		z=x/4.0;
		z2=z*z;
		g=z2+z2-1.0;
		*si = z*chepolsum(10,g,a);
		a[0] =2.9659610400727e0;   a[1] = -9.4297198341830e-1;
		a[2] =8.6110342738169e-2;  a[3] = -4.7776084547139e-3;
		a[4] =1.7529161205146e-4;  a[5] = -4.5448727803752e-6;
		a[6] =8.7515839180060e-8;  a[7] = -1.2998699938109e-9;
		a[8] =1.5338974898831e-11; a[9] = -1.4724256070277e-13;
		a[10]=1.1721420798429e-15;
		*ci = 0.577215664901533+log(absx)-z2*chepolsum(10,g,a);
	} else {
		real_t cx,sx;
		sincosfg(x,&f,&g);
		cx=cos(x);
		sx=sin(x);
		*si = 1.570796326794897;
		if (x < 0.0) *si = -(*si);
		*si -= f*cx+g*sx;
		*ci = f*sx-g*cx;
	}
}
 


void spherbessi(real_t x, int n, real_t i[])
{
	if (x == 0.0) {
		i[0]=1.0;
		for (; n>=1; n--) i[n]=0.0;
	} else {
		void nonexpspherbessi(real_t, int, real_t []);
		real_t expx;
		expx=exp(x);
		nonexpspherbessi(x,n,i);
		for (; n>=0; n--) i[n] *= expx;
	}
}
 


void spherbessj(real_t x, int n, real_t j[])
{
	if (x == 0.0) {
		j[0]=1.0;
		for (; n>=1; n--) j[n]=0.0;
	} else if (n == 0) {
		real_t x2;
		if (fabs(x) < 0.015) {
			x2=x*x/6.0;
			j[0]=1.0+x2*(x2*0.3-1.0);
		} else
			j[0]=sin(x)/x;
	} else {
		int start(real_t, int, int);
		int m;
		real_t r,s;
		r=0.0;
		m=start(x,n,0);
		for (; m>=1; m--) {
			r=1.0/((m+m+1)/x-r);
			if (m <= n) j[m]=r;
		}
		if (x < 0.015) {
			s=x*x/6.0;
			j[0]=r=s*(s*0.3-1.0)+1.0;
		} else
			j[0]=r=sin(x)/x;
		for (m=1; m<=n; m++) r = j[m] *= r;
	}
}
 


void spherbessk(real_t x, int n, real_t k[])
{
	void nonexpspherbessk(real_t, int, real_t []);
	real_t expx;
	expx=exp(-x);
	nonexpspherbessk(x,n,k);
	for (; n>=0; n--) k[n] *= expx;
}
 


void spherbessy(real_t x, int n, real_t y[])
{
	if (n == 0)
		y[0] = -cos(x)/x;
	else {
		int i;
		real_t yi,yi1,yi2;
		yi2 = y[0] = -cos(x)/x;
		yi1=y[1]=(yi2-sin(x))/x;
		for (i=2; i<=n; i++) {
			y[i] = yi = -yi2+(i+i-1)*yi1/x;
			yi2=yi1;
			yi1=yi;
		}
	}
}
 


int start(real_t x, int n, int t)
{
	int s;
	real_t p,q,r,y;

	s=2*t-1;
	p=36.0/x-t;
	r=n/x;
	if (r > 1.0 || t == 1) {
		q=sqrt(r*r+s);
		r=r*log(q+r)-q;
	} else
		r=0.0;
	q=18.0/x+r;
	r = (p > q) ? p : q;
	p=sqrt(2.0*(t+r));
	p=x*((1.0+r)+p)/(1.0+p);
	y=0.0;
	q=y;
	do {
		y=p;
		p /= x;
		q=sqrt(p*p+s);
		p=x*(r+q)/log(p+q);
		q=y;
	} while (p > q || p < q-1.0);
	return ((t == 1) ? floor(p+1.0) : -floor(-p/2.0)*2);
}
 
/* INI.C */
void ini(int n, int m, int s[]);
/* MINMAXPO.C */
void minmaxpol(int n, int m, real_t y[], real_t fy[], real_t co[], real_t em[]);
/* NEWTON.C */
void newton(int n, real_t x[], real_t f[]);
/* SNDREMEZ.C */
void sndremez(int n, int m, int s[], real_t g[], real_t em[]);

void ini(int n, int m, int s[])
{
	int i,j,k,l;
	real_t pin2,temp;

	pin2=atan(1.0)*2.0/n;
	k=1;
	l=n-1;
	j=s[0]=0;
	s[n]=m;
	while (k < l) {
		temp=sin(k*pin2);
		i=temp*temp*m;
		j = s[k] = ((i <= j) ? j+1 : i);
		s[l]=m-j;
		l--;
		k++;
	}
	if (l*2 == n) s[l]=m/2;
}
 
void newton(int n, real_t x[], real_t f[])
{
	int k,i,im1;
	real_t xim1,fim1;

	im1=0;
	for (i=1; i<=n; i++) {
		fim1=f[im1];
		xim1=x[im1];
		for (k=i; k<=n; k++) f[k]=(f[k]-fim1)/(x[k]-xim1);
		im1=i;
	}
}
 


void sndremez(int n, int m, int s[], real_t g[], real_t em[])
{
	real_t infnrmvec(int, int, int *, real_t []);
	int s0,sn,sjp1,i,j,k,up,low,nm1;
	real_t max,msjp1,hi,hj,he,abse,h,temp1,temp2;

	s0=sjp1=s[0];
	he=em[0];
	low=s0+1;
	max=msjp1=abse=fabs(he);
	nm1=n-1;
	for (j=0; j<=nm1; j++) {
		up=s[j+1]-1;
		h=infnrmvec(low,up,&i,g);
		if (h > max) max=h;
		if (h > abse)
			if (he*g[i] > 0.0) {
				s[j] = (msjp1 < h) ? i : sjp1;
				sjp1=s[j+1];
				msjp1=abse;
			} else {
				s[j]=sjp1;
				sjp1=i;
				msjp1=h;
			}
		else {
			s[j]=sjp1;
			sjp1=s[j+1];
			msjp1=abse;
		}
		he = -he;
		low=up+2;
	}
	sn=s[n];
	s[n]=sjp1;
	hi=infnrmvec(0,s0-1,&i,g);
	hj=infnrmvec(sn+1,m,&j,g);
	if (j > m) j=m;
	if (hi > hj) {
		if (hi > max) max=hi;
		temp1 = (g[i] == 0.0) ? 0.0 : ((g[i] > 0.0) ? 1.0 : -1.0);
		temp2 = (g[s[0]]==0.0) ? 0.0 : ((g[s[0]]>0.0) ? 1.0 : -1.0);
		if (temp1 == temp2) {
			if (hi > fabs(g[s[0]])) {
				s[0]=i;
				if (g[j]/g[s[n]] > 1.0) s[n]=j;
			}
		}
		else {
			if (hi > fabs(g[s[n]])) {
				s[n] = (g[j]/g[s[nm1]] > 1.0) ? j : s[nm1];
				for (k=nm1; k>=1; k--) s[k]=s[k-1];
				s[0]=i;
			}
		}
	} else {
		if (hj > max) max=hj;
		temp1 = (g[j] == 0.0) ? 0.0 : ((g[j] > 0.0) ? 1.0 : -1.0);
		temp2 = (g[s[n]]==0.0) ? 0.0 : ((g[s[n]]>0.0) ? 1.0 : -1.0);
		if (temp1 == temp2) {
			if (hj > fabs(g[s[n]])) {
				s[n]=j;
				if (g[i]/g[s[0]] > 1.0) s[0]=i;
			}
		} else
			if (hj > fabs(g[s[0]])) {
				s[0] = (g[i]/g[s[1]] > 1.0) ? i : s[1];
				for (k=1; k<=nm1; k++) s[k]=s[k+1];
				s[n]=j;
			}
	}
	em[1]=max;
}
void test()
{
int  l;
 int  u;
 int  shift;
 real_t  a[1];
ichvec( l, u, shift, a);
}
