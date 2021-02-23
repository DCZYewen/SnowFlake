#include "Python.h"
#include "utils/SnowFlake.h"

static PyObject *generateID(PyObject *self,PyObject *args) {
    SnowFlake sf(1,1);
    unsigned long long t = sf.nextId();
    return (PyObject*)Py_BuildValue("K", t);
}

static PyMethodDef SFMethods[] = {
    {"generateID",generateID,METH_VARARGS}, 
    {NULL,NULL},
};


static struct PyModuleDef SnowFlake = {
    PyModuleDef_HEAD_INIT,
    "SnowFlake",
    NULL,
    -1,
    SFMethods
};

void PyInit_SnowFlake() {
    PyModule_Create(&SnowFlake);
}