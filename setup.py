from distutils.core import setup,Extension
MOD = 'SnowFlake' #模块名
setup(name=MOD,ext_modules=[Extension(MOD,sources=['.\\flakemodule.cpp'])])