//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/matrix/matrix-functions.clif

#include <Python.h>

namespace __matrix__functions_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __matrix__functions_clifwrap

PyMODINIT_FUNC PyInit__matrix_functions(void) {
  if (!__matrix__functions_clifwrap::Ready()) return nullptr;
  return __matrix__functions_clifwrap::Init();
}