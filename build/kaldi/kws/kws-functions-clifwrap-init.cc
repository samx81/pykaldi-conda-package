//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/kws/kws-functions.clif

#include <Python.h>

namespace __kws__functions_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __kws__functions_clifwrap

PyMODINIT_FUNC PyInit__kws_functions(void) {
  if (!__kws__functions_clifwrap::Ready()) return nullptr;
  return __kws__functions_clifwrap::Init();
}
