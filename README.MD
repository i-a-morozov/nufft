# nufft (1D), 2024

Cython based repackage of [python-nufft](https://github.com/dfm/python-nufft).
Works with `python=3.12` where `numpy.distutils` is deprecated.

Note, only 1D wrapper is available at the moment.

# Install (requires gfortran compiler, tested on Ubuntu 22.04.4)

```
$ pip install git+https://github.com/i-a-morozov/nufft.git@main
```

# License

Original Fortran code by Leslie Greengard, June-Yub Lee and Zydrunas Gimbutas (see `nufft/src/license.txt`).

Original Python bindings by Dan Foreman-Mackey, Thomas Arildsen, and Marc T. Henry de Frahan (see [python-nufft](https://github.com/dfm/python-nufft)).
