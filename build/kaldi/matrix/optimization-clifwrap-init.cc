//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/matrix/optimization.clif

#include <Python.h>

namespace __optimization_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __optimization_clifwrap

PyMODINIT_FUNC PyInit__optimization(void) {
  if (!__optimization_clifwrap::Ready()) return nullptr;
  return __optimization_clifwrap::Init();
}
