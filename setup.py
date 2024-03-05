import os

from setuptools import setup, Extension, find_packages
from setuptools.command.build_ext import build_ext

from Cython.Build import cythonize
from numpy import get_include

fortran_compiler = 'gfortran'

fortran_flags = '-fPIC -O3 -ffast-math -march=native'

fortran_sources = [
    './nufft/src/next235.f',
    './nufft/src/dfftpack.f',
    './nufft/src/nufft1df90.f',
    './nufft/src/nufft2df90.f',
    './nufft/src/nufft3df90.f',
    './nufft/src/dirft1d.f',
    './nufft/src/dirft2d.f',
    './nufft/src/dirft3d.f',
    './nufft/nufft.f90'
]

fortran_objects = [
    './nufft/src/next235.o',
    './nufft/src/dfftpack.o',
    './nufft/src/nufft1df90.o',
    './nufft/src/nufft2df90.o',
    './nufft/src/nufft3df90.o',
    './nufft/src/dirft1d.o',
    './nufft/src/dirft2d.o',
    './nufft/src/dirft3d.o',
    './nufft/nufft.f90.o'
]

class build_custom(build_ext):
    def run(self):
        for source, object in zip(fortran_sources, fortran_objects):
            os.system(f'{fortran_compiler} -c {source} -o {object} {fortran_flags}')
        build_ext.run(self)
        for object in fortran_objects:
            os.remove(object)
        os.remove('nufft.mod')
        os.remove('./nufft/nufft.c')

ext_modules = [
    Extension('nufft.nufft',
              sources=['nufft/nufft.pyx'],
              include_dirs=[get_include(), "nufft"],
              extra_compile_args= ['-fPIC', '-O3', '-Wno-cpp'],
              extra_link_args=['-lm', '-lgfortran'],
              library_dirs=[],
              extra_objects=fortran_objects)
    ]

setup(
    name='nufft',
    version='0.1.0',
    packages=find_packages(),
    cmdclass={'build_ext': build_custom},
    ext_modules=cythonize(ext_modules),
    include_dirs=[get_include(), "nufft"]
)
