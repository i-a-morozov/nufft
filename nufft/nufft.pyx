from numpy cimport ndarray
from numpy cimport float64_t, complex128_t

import numpy
from numpy import ndarray as Array

cdef extern from 'nufft.h':
    
    # NUFFT-1D
    void c_nufft1d1(int *nj, double *xj, double complex *cj, int *iflag, double *eps, int *ms, double complex *fk, int *ier)
    void c_nufft1d2(int *nj, double *xj, double complex *cj, int *iflag, double *eps, int *ms, double complex *fk, int *ier)
    void c_nufft1d3(int *nj, double *xj, double complex *cj, int *iflag, double *eps, int *nk, double *sk, double complex *fk, int *ier)
    void c_dirft1d1(int *nj, double *xj, double complex *cj, int *iflag, int *ms, double complex *fk)
    void c_dirft1d2(int *nj, double *xj, double complex *cj, int *iflag, int *ms, double complex *fk)
    void c_dirft1d3(int *nj, double *xj, double complex *cj, int *iflag, int *nk, double *sk, double complex *fk)
    
    # NUFFT-2D
    void c_nufft2d1(int *nj, double *xj, double *yj, double complex *cj, int *iflag, double *eps, int *ms, int *mt, double complex *fk, int *ier)
    void c_nufft2d2(int *nj, double *xj, double *yj, double complex *cj, int *iflag, double *eps, int *ms, int *mt, double complex *fk, int *ier)
    void c_nufft2d3(int *nj, double *xj, double *yj, double complex *cj, int *iflag, double *eps, int *nk, double *sk, double *tk, double complex *fk, int *ier)
    void c_dirft2d1(int *nj, double *xj, double *yj, double complex *cj, int *iflag, int *ms, int *mt, double complex *fk)
    void c_dirft2d2(int *nj, double *xj, double *yj, double complex *cj, int *iflag, int *ms, int *mt, double complex *fk)
    void c_dirft2d3(int *nj, double *xj, double *yj, double complex *cj, int *iflag, int *nk, double *sk, double *tk, double complex *fk)
    
    # NUFFT-3D
    void c_nufft3d1(int *nj, double *xj, double *yj, double *zj, double complex *cj, int *iflag, double *eps, int *ms, int *mt, int *mu, double complex *fk, int *ier)
    void c_nufft3d2(int *nj, double *xj, double *yj, double *zj, double complex *cj, int *iflag, double *eps, int *ms, int *mt, int *mu, double complex *fk, int *ier)
    void c_nufft3d3(int *nj, double *xj, double *yj, double *zj, double complex *cj, int *iflag, double *eps, int *nk, double *sk, double *tk, double *uk, double complex *fk, int *ier)
    void c_dirft3d1(int *nj, double *xj, double *yj, double *zj, double complex *cj, int *iflag, int *ms, int *mt, int *mu, double complex *fk)
    void c_dirft3d2(int *nj, double *xj, double *yj, double *zj, double complex *cj, int *iflag, int *ms, int *mt, int *mu, double complex *fk)
    void c_dirft3d3(int *nj, double *xj, double *yj, double *zj, double complex *cj, int *iflag, int *nk, double *sk, double *tk, double *uk, double complex *fk)

# NUFFT-1D

def py_nufft1d1(int nj, ndarray[float64_t] xj, ndarray[complex128_t] cj, int iflag, double eps, int ms, int ier):
    cdef:
        ndarray[complex128_t] fk = numpy.empty(ms, dtype=numpy.complex128, order='F')
    c_nufft1d1(&nj, <double*> xj.data, <complex128_t*> cj.data, &iflag, &eps, &ms, <complex128_t*> fk.data, &ier)
    return ier, fk


def py_nufft1d2(int nj, ndarray[float64_t] xj, ndarray[complex128_t] cj, int iflag, double eps, int ms, int ier):
    cdef:
        ndarray[complex128_t] fk = numpy.empty(ms, dtype=numpy.complex128, order='F')
    c_nufft1d2(&nj, <double*> xj.data, <complex128_t*> cj.data, &iflag, &eps, &ms, <complex128_t*> fk.data, &ier)
    return ier, fk


def py_nufft1d3(int nj, ndarray[float64_t] xj, ndarray[complex128_t] cj, int iflag, double eps, int nk, ndarray[float64_t] sk, int ier):
    cdef:
        ndarray[complex128_t] fk = numpy.empty(nk, dtype=numpy.complex128, order='F')
    c_nufft1d3(&nj, <double*> xj.data, <complex128_t*> cj.data, &iflag, &eps, &nk, <double*> sk.data, <complex128_t*> fk.data, &ier)
    return ier, fk


def py_dirft1d1(int nj, ndarray[float64_t] xj, ndarray[complex128_t] cj, int iflag, int ms):
    cdef:
        ndarray[complex128_t] fk = numpy.empty(ms, dtype=numpy.complex128, order='F')
    c_dirft1d1(&nj, <double*> xj.data, <complex128_t*> cj.data, &iflag, &ms, <complex128_t*> fk.data)
    return fk


def py_dirft1d2(int nj, ndarray[float64_t] xj, ndarray[complex128_t] cj, int iflag, int ms):
    cdef:
        ndarray[complex128_t] fk = numpy.empty(ms, dtype=numpy.complex128, order='F')
    c_dirft1d2(&nj, <double*> xj.data, <complex128_t*> cj.data, &iflag, &ms, <complex128_t*> fk.data)
    return fk


def py_dirft1d3(int nj, ndarray[float64_t] xj, ndarray[complex128_t] cj, int iflag, int nk, ndarray[float64_t] sk):
    cdef:
        ndarray[complex128_t] fk = numpy.empty(nk, dtype=numpy.complex128, order='F')
    c_dirft1d3(&nj, <double*> xj.data, <complex128_t*> cj.data, &iflag, &nk, <double*> sk.data, <complex128_t*> fk.data)
    return fk


def nufft1d1(x: Array, y: Array, ms:int, df:float=1.0, eps:float=1.0E-15, iflag:int=1, direct:bool=False) -> Array:
    """
    NUFFT type I in 1D

    Parameters
    ----------
    x: Array[float64]
        non-equispaced locations
    y: Array[float64]  | Array[complex128]
        non-equispaced function values
    ms: int
         number of frequencies
    df: float, default=1.0
        frequency spacing
    eps: float, default=1.0E-15
        tolerance for NUFFT
    iflag: int, default=1
        sign for the exponential
    direct: bool, default=False
        use direct NUFFT methods

    Returns
    -------
    Array[complex128]

    """
    x = numpy.ascontiguousarray(x, dtype=numpy.float64)
    y = numpy.ascontiguousarray(y, dtype=numpy.complex128)
    if len(x) != len(y):
        raise ValueError("Dimension mismatch")
    if direct:
        return py_dirft1d1(len(x), x * df, y, iflag, ms)
    flag, result = py_nufft1d1(len(x), x * df, y, iflag, eps, ms, 0)
    if flag:
        raise RuntimeError(f"nufft1d1 failed with code {flag}")
    return result


def nufft1d2(x: Array, p: Array, df:float=1.0, eps:float=1.0E-15, iflag:int=1, direct:bool=False) -> Array:
    """
    NUFFT type II in 1D

    Parameters
    ----------
    x: Array[float64]
        non-equispaced locations
    p: Array[float64]  | Array[complex128]
        function in integer frequency space
    df: float, default=1.0
        frequency spacing
    eps: float, default=1.0E-15
        tolerance for NUFFT
    iflag: int, default=1
        sign for the exponential
    direct: bool, default=False
        use direct NUFFT methods

    Returns
    -------
    Array[complex128]

    """
    x = numpy.ascontiguousarray(x, dtype=numpy.float64)
    p = numpy.ascontiguousarray(p, dtype=numpy.complex128)
    if direct:
        return py_dirft1d2(len(x), x * df, p, iflag, len(p))
    flag, result = py_nufft1d2(len(x), x * df, p, iflag, eps, len(p), 0)
    if flag:
        raise RuntimeError(f"nufft1d2 failed with code {flag}")
    return result


def nufft1d3(x: Array, y: Array, f: Array, eps:float=1.0E-15, iflag:int=1, direct:bool=False) -> Array:
    """
    NUFFT type III in 1D

    Parameters
    ----------
    x: Array[float64]
        non-equispaced locations
    y: Array[float64]  | Array[complex128]
        on-equispaced function values
    f: Array[float64]
        non-equispaced frequencies
    eps: float, default=1.0E-15
        tolerance for NUFFT
    iflag: int, default=1
        sign for the exponential
    direct: bool, default=False
        use direct NUFFT methods

    Returns
    -------
    Array[complex128]

    """
    x = numpy.ascontiguousarray(x, dtype=numpy.float64)
    y = numpy.ascontiguousarray(y, dtype=numpy.complex128)
    if len(x) != len(y):
        raise ValueError("Dimension mismatch")
    f = numpy.ascontiguousarray(f, dtype=numpy.float64)
    if direct:
        return py_dirft1d3(len(x), x, y, iflag, len(f), f)/len(x)
    flag, result = py_nufft1d3(len(x), x, y, iflag, eps, len(f), f, 0)
    if flag:
        raise RuntimeError(f"nufft1d3 failed with code {flag}")
    return result/len(x)

# NUFFT-2D

# NUFFT-3D