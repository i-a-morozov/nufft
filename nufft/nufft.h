#ifndef _nufft__h__
#define _nufft__h__

#include <complex.h> 

// subroutine c_nufft1d1(nj, xj, cj, iflag, eps, ms, fk, ier) bind(c)
//     integer(c_int), intent(in) :: nj
//     real(c_double), dimension(nj), intent(in) :: xj
//     complex(c_double_complex), dimension(nj), intent(in) :: cj
//     integer(c_int), intent(in) :: iflag
//     real(c_double), intent(in) :: eps
//     integer(c_int), intent(in) :: ms
//     complex(c_double_complex), dimension(ms), intent(out) :: fk
//     integer(c_int), intent(out) :: ier
//     call nufft1d1f90(nj, xj, cj, iflag, eps, ms, fk, ier)
// end subroutine c_nufft1d1

extern void c_nufft1d1(int *nj, double *xj, double complex *cj, int *iflag, double *eps, int *ms, double complex *fk, int *ier) ;

// subroutine c_nufft1d2(nj, xj, cj, iflag, eps, ms, fk, ier) bind(c)
//     integer(c_int), intent(in) :: nj
//     real(c_double), dimension(nj), intent(in) :: xj
//     complex(c_double_complex), dimension(nj), intent(in) :: cj
//     integer(c_int), intent(in) :: iflag
//     real(c_double), intent(in) :: eps
//     integer(c_int), intent(in) :: ms
//     complex(c_double_complex), dimension(ms), intent(out) :: fk
//     integer(c_int), intent(out) :: ier
//     call nufft1d2f90(nj, xj, cj, iflag, eps, ms, fk, ier)
// end subroutine c_nufft1d2

extern void c_nufft1d2(int *nj, double *xj, double complex *cj, int *iflag, double *eps, int *ms, double complex *fk, int *ier) ;

// subroutine c_nufft1d3(nj, xj, cj, iflag, eps, nk, sk, fk, ier) bind(c)
//     integer(c_int), intent(in) :: nj
//     real(c_double), dimension(nj), intent(in) :: xj
//     complex(c_double_complex), dimension(nj), intent(in) :: cj
//     integer(c_int), intent(in) :: iflag
//     real(c_double), intent(in) :: eps
//     integer(c_int), intent(in) :: nk
//     real(c_double), dimension(nk), intent(in) :: sk
//     complex(c_double_complex), dimension(nk), intent(out) :: fk
//     integer(c_int), intent(out) :: ier
//     call nufft1d3f90(nj, xj, cj, iflag, eps, nk, sk, fk, ier)
// end subroutine c_nufft1d3

extern void c_nufft1d3(int *nj, double *xj, double complex *cj, int *iflag, double *eps, int *nk, double *sk, double complex *fk, int *ier) ;

// module subroutine c_dirft1d1(nj, xj, cj, iflag, ms, fk) bind(c)
//     integer(c_int), intent(in) :: nj
//     real(c_double), dimension(nj), intent(in) :: xj
//     complex(c_double_complex), dimension(nj), intent(in) :: cj
//     integer(c_int), intent(in) :: iflag
//     integer(c_int), intent(in) :: ms
//     complex(c_double_complex), dimension(ms), intent(out) :: fk
//     call dirft1d1(nj, xj, cj, iflag, ms, fk)
// end subroutine c_dirft1d1

extern void c_dirft1d1(int *nj, double *xj, double complex *cj, int *iflag, int *ms, double complex *fk) ;

// module subroutine c_dirft1d2(nj, xj, cj, iflag, ms, fk) bind(c)
//     integer(c_int), intent(in) :: nj
//     real(c_double), dimension(nj), intent(in) :: xj
//     complex(c_double_complex), dimension(nj), intent(in) :: cj
//     integer(c_int), intent(in) :: iflag
//     integer(c_int), intent(in) :: ms
//     complex(c_double_complex), dimension(ms), intent(out) :: fk
//     call dirft1d2(nj, xj, cj, iflag, ms, fk)
// end subroutine c_dirft1d2

extern void c_dirft1d2(int *nj, double *xj, double complex *cj, int *iflag, int *ms, double complex *fk) ;

// module subroutine c_dirft1d3(nj, xj, cj, iflag, nk, sk, fk) bind(c)
//     integer(c_int), intent(in) :: nj
//     real(c_double), dimension(nj), intent(in) :: xj
//     complex(c_double_complex), dimension(nj), intent(in) :: cj
//     integer(c_int), intent(in) :: iflag
//     integer(c_int), intent(in) :: nk
//     real(c_double), dimension(nk), intent(in) :: sk
//     complex(c_double_complex), dimension(nk), intent(out) :: fk
//     call dirft1d3(nj, xj, cj, iflag, nk, sk, fk)
// end subroutine c_dirft1d3

extern void c_dirft1d3(int *nj, double *xj, double complex *cj, int *iflag, int *nk, double *sk, double complex *fk) ;

// module subroutine c_nufft2d1(nj, xj, yj, cj, iflag, eps, ms, mt, fk, ier) bind(c)
//     integer(c_int), intent(in) :: nj
//     real(c_double), dimension(nj), intent(in) :: xj
//     real(c_double), dimension(nj), intent(in) :: yj
//     complex(c_double_complex), dimension(nj), intent(in) :: cj
//     integer(c_int), intent(in) :: iflag
//     real(c_double), intent(in) :: eps
//     integer(c_int), intent(in) :: ms
//     integer(c_int), intent(in) :: mt
//     complex(c_double_complex), dimension(ms, mt), intent(out) :: fk
//     integer(c_int), intent(out) :: ier
//     call nufft2d1f90(nj, xj, yj, cj, iflag, eps, ms, mt, fk, ier)
// end subroutine c_nufft2d1

extern void c_nufft2d1(int *nj, double *xj, double *yj, double complex *cj, int *iflag, double *eps, int *ms, int *mt, double complex *fk, int *ier) ;

// module subroutine c_nufft2d2(nj, xj, yj, cj, iflag, eps, ms, mt, fk, ier) bind(c)
//     integer(c_int), intent(in) :: nj
//     real(c_double), dimension(nj), intent(in) :: xj
//     real(c_double), dimension(nj), intent(in) :: yj
//     complex(c_double_complex), dimension(nj), intent(in) :: cj
//     integer(c_int), intent(in) :: iflag
//     real(c_double), intent(in) :: eps
//     integer(c_int), intent(in) :: ms
//     integer(c_int), intent(in) :: mt
//     complex(c_double_complex), dimension(ms, mt), intent(out) :: fk
//     integer(c_int), intent(out) :: ier
//     call nufft2d2f90(nj, xj, yj, cj, iflag, eps, ms, mt, fk, ier)
// end subroutine c_nufft2d2

extern void c_nufft2d2(int *nj, double *xj, double *yj, double complex *cj, int *iflag, double *eps, int *ms, int *mt, double complex *fk, int *ier) ;

// module subroutine c_nufft2d3(nj, xj, yj, cj, iflag, eps, nk, sk, tk, fk, ier) bind(c)
//     integer(c_int), intent(in) :: nj
//     real(c_double), dimension(nj), intent(in) :: xj
//     real(c_double), dimension(nj), intent(in) :: yj
//     complex(c_double_complex), dimension(nj), intent(in) :: cj
//     integer(c_int), intent(in) :: iflag
//     real(c_double), intent(in) :: eps
//     integer(c_int), intent(in) :: nk
//     real(c_double), dimension(nk), intent(in) :: sk
//     real(c_double), dimension(nk), intent(in) :: tk
//     complex(c_double_complex), dimension(nk), intent(out) :: fk
//     integer(c_int), intent(out) :: ier
//     call nufft2d3f90(nj, xj, yj, cj, iflag, eps, nk, sk, tk, fk, ier)
// end subroutine c_nufft2d3

extern void c_nufft2d3(int *nj, double *xj, double *yj, double complex *cj, int *iflag, double *eps, int *nk, double *sk, double *tk, double complex *fk, int *ier) ;

// module subroutine c_dirft2d1(nj, xj, yj, cj, iflag, ms, mt, fk) bind(c)
//     integer(c_int), intent(in) :: nj
//     real(c_double), dimension(nj), intent(in) :: xj
//     real(c_double), dimension(nj), intent(in) :: yj
//     complex(c_double_complex), dimension(nj), intent(in) :: cj
//     integer(c_int), intent(in) :: iflag
//     integer(c_int), intent(in) :: ms
//     integer(c_int), intent(in) :: mt
//     complex(c_double_complex), dimension(ms, mt), intent(out) :: fk
//     call dirft2d1(nj, xj, yj, cj, iflag, ms, mt, fk)
// end subroutine c_dirft2d1

extern void c_dirft2d1(int *nj, double *xj, double *yj, double complex *cj, int *iflag, int *ms, int *mt, double complex *fk) ;

// module subroutine c_dirft2d2(nj, xj, yj, cj, iflag, ms, mt, fk) bind(c)
//     integer(c_int), intent(in) :: nj
//     real(c_double), dimension(nj), intent(in) :: xj
//     real(c_double), dimension(nj), intent(in) :: yj
//     complex(c_double_complex), dimension(nj), intent(in) :: cj
//     integer(c_int), intent(in) :: iflag
//     integer(c_int), intent(in) :: ms
//     integer(c_int), intent(in) :: mt
//     complex(c_double_complex), dimension(ms, mt), intent(out) :: fk
//     call dirft2d2(nj, xj, yj, cj, iflag, ms, mt, fk)
// end subroutine c_dirft2d2

extern void c_dirft2d2(int *nj, double *xj, double *yj, double complex *cj, int *iflag, int *ms, int *mt, double complex *fk) ;

// module subroutine c_dirft2d3(nj, xj, yj, cj, iflag, nk, sk, tk, fk) bind(c)
//     integer(c_int), intent(in) :: nj
//     real(c_double), dimension(nj), intent(in) :: xj
//     real(c_double), dimension(nj), intent(in) :: yj
//     complex(c_double_complex), dimension(nj), intent(in) :: cj
//     integer(c_int), intent(in) :: iflag
//     integer(c_int), intent(in) :: nk
//     real(c_double), dimension(nk), intent(in) :: sk
//     real(c_double), dimension(nk), intent(in) :: tk
//     complex(c_double_complex), dimension(nk), intent(out) :: fk
//     call dirft2d3(nj, xj, yj, cj, iflag, nk, sk, tk, fk)
// end subroutine c_dirft2d3

extern void c_dirft2d3(int *nj, double *xj, double *yj, double complex *cj, int *iflag, int *nk, double *sk, double *tk, double complex *fk) ;

// module subroutine c_nufft3d1(nj, xj, yj, zj, cj, iflag, eps, ms, mt, mu, fk, ier) bind(c)
//     integer(c_int), intent(in) :: nj
//     real(c_double), dimension(nj), intent(in) :: xj
//     real(c_double), dimension(nj), intent(in) :: yj
//     real(c_double), dimension(nj), intent(in) :: zj
//     complex(c_double_complex), dimension(nj), intent(in) :: cj
//     integer(c_int), intent(in) :: iflag
//     real(c_double), intent(in) :: eps
//     integer(c_int), intent(in) :: ms
//     integer(c_int), intent(in) :: mt
//     integer(c_int), intent(in) :: mu
//     complex(c_double_complex), dimension(ms, mt, mu), intent(out) :: fk
//     integer(c_int), intent(out) :: ier
//     call nufft3d1f90(nj, xj, yj, zj, cj, iflag, eps, ms, mt, mu, fk, ier)
// end subroutine c_nufft3d1

extern void c_nufft3d1(int *nj, double *xj, double *yj, double *zj, double complex *cj, int *iflag, double *eps, int *ms, int *mt, int *mu, double complex *fk, int *ier) ;

// module subroutine c_nufft3d2(nj, xj, yj, zj, cj, iflag, eps, ms, mt, mu, fk, ier) bind(c)
//     integer(c_int), intent(in) :: nj
//     real(c_double), dimension(nj), intent(in) :: xj
//     real(c_double), dimension(nj), intent(in) :: yj
//     real(c_double), dimension(nj), intent(in) :: zj
//     complex(c_double_complex), dimension(nj), intent(in) :: cj
//     integer(c_int), intent(in) :: iflag
//     real(c_double), intent(in) :: eps
//     integer(c_int), intent(in) :: ms
//     integer(c_int), intent(in) :: mt
//     integer(c_int), intent(in) :: mu
//     complex(c_double_complex), dimension(ms, mt, mu), intent(out) :: fk
//     integer(c_int), intent(out) :: ier
//     call nufft3d2f90(nj, xj, yj, zj, cj, iflag, eps, ms, mt, mu, fk, ier)
// end subroutine c_nufft3d2

extern void c_nufft3d2(int *nj, double *xj, double *yj, double *zj, double complex *cj, int *iflag, double *eps, int *ms, int *mt, int *mu, double complex *fk, int *ier) ;

// module subroutine c_nufft3d3(nj, xj, yj, zj, cj, iflag, eps, nk, sk, tk, uk, fk, ier) bind(c)
//     integer(c_int), intent(in) :: nj
//     real(c_double), dimension(nj), intent(in) :: xj
//     real(c_double), dimension(nj), intent(in) :: yj
//     real(c_double), dimension(nj), intent(in) :: zj
//     complex(c_double_complex), dimension(nj), intent(in) :: cj
//     integer(c_int), intent(in) :: iflag
//     real(c_double), intent(in) :: eps
//     integer(c_int), intent(in) :: nk
//     real(c_double), dimension(nk), intent(in) :: sk
//     real(c_double), dimension(nk), intent(in) :: tk
//     real(c_double), dimension(nk), intent(in) :: uk
//     complex(c_double_complex), dimension(nk), intent(out) :: fk
//     integer(c_int), intent(out) :: ier
//     call nufft3d3f90(nj, xj, yj, zj, cj, iflag, eps, nk, sk, tk, uk, fk, ier)
// end subroutine c_nufft3d3

extern void c_nufft3d3(int *nj, double *xj, double *yj, double *zj, double complex *cj, int *iflag, double *eps, int *nk, double *sk, double *tk, double *uk, double complex *fk, int *ier) ;

// module subroutine c_dirft3d1(nj, xj, yj, zj, cj, iflag, ms, mt, mu, fk) bind(c)
//     integer(c_int), intent(in) :: nj
//     real(c_double), dimension(nj), intent(in) :: xj
//     real(c_double), dimension(nj), intent(in) :: yj
//     real(c_double), dimension(nj), intent(in) :: zj
//     complex(c_double_complex), dimension(nj), intent(in) :: cj
//     integer(c_int), intent(in) :: iflag
//     integer(c_int), intent(in) :: ms
//     integer(c_int), intent(in) :: mt
//     integer(c_int), intent(in) :: mu
//     complex(c_double_complex), dimension(ms, mt, mu), intent(out) :: fk
//     call dirft3d1(nj, xj, yj, zj, cj, iflag, ms, mt, mu, fk)
// end subroutine c_dirft3d1

extern void c_dirft3d1(int *nj, double *xj, double *yj, double *zj, double complex *cj, int *iflag, int *ms, int *mt, int *mu, double complex *fk) ;

// module subroutine c_dirft3d2(nj, xj, yj, zj, cj, iflag, ms, mt, mu, fk) bind(c)
//     integer(c_int), intent(in) :: nj
//     real(c_double), dimension(nj), intent(in) :: xj
//     real(c_double), dimension(nj), intent(in) :: yj
//     real(c_double), dimension(nj), intent(in) :: zj
//     complex(c_double_complex), dimension(nj), intent(in) :: cj
//     integer(c_int), intent(in) :: iflag
//     integer(c_int), intent(in) :: ms
//     integer(c_int), intent(in) :: mt
//     integer(c_int), intent(in) :: mu
//     complex(c_double_complex), dimension(ms, mt, mu), intent(out) :: fk
//     call dirft3d2(nj, xj, yj, zj, cj, iflag, ms, mt, mu, fk)
// end subroutine c_dirft3d2

extern void c_dirft3d2(int *nj, double *xj, double *yj, double *zj, double complex *cj, int *iflag, int *ms, int *mt, int *mu, double complex *fk) ;

// module subroutine c_dirft3d3(nj, xj, yj, zj, cj, iflag, nk, sk, tk, uk, fk) bind(c)
//     integer(c_int), intent(in) :: nj
//     real(c_double), dimension(nj), intent(in) :: xj
//     real(c_double), dimension(nj), intent(in) :: yj
//     real(c_double), dimension(nj), intent(in) :: zj
//     complex(c_double_complex), dimension(nj), intent(in) :: cj
//     integer(c_int), intent(in) :: iflag
//     integer(c_int), intent(in) :: nk
//     real(c_double), dimension(nk), intent(in) :: sk
//     real(c_double), dimension(nk), intent(in) :: tk
//     real(c_double), dimension(nk), intent(in) :: uk
//     complex(c_double_complex), dimension(nk), intent(out) :: fk
//     call dirft3d3(nj, xj, yj, zj, cj, iflag, nk, sk, tk, uk, fk)
// end subroutine c_dirft3d3

extern void c_dirft3d3(int *nj, double *xj, double *yj, double *zj, double complex *cj, int *iflag, int *nk, double *sk, double *tk, double *uk, double complex *fk) ;

#endif