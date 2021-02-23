# SnowFlake: A Fast GUID Algorithm

Snowflake is a network service for generating unique ID numbers at high scale with some simple guarantees. The Algorithm is developed by Twitter. The original repo is on [https://github.com/twitter/snowflake](https://github.com/twitter/snowflake).

You can see some details of SnowFlake in this [Blog](https://blog.twitter.com/engineering/en_us/a/2010/announcing-snowflake.html).

### Get Started

This is a library work as a python module, which implemented twitter's SnowFlake algorithm.

Many thanks to [Shenggan](https://github.com/Shenggan) , who originnally implemented this algorithm in C++. 

To build this module, do make sure that you have a working compiler with C++11 support and setuptools. On Windows, both mingw and msvc works.
```
python setup.py build
python setup.py install
```

### Platforms
On Windows, MSVC is supported which is not implemented originnally by Shenggan.
