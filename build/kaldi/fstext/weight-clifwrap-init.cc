//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/fstext/weight.clif

#include <Python.h>

namespace __weight_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __weight_clifwrap

PyMODINIT_FUNC PyInit__weight(void) {
  if (!__weight_clifwrap::Ready()) return nullptr;
  return __weight_clifwrap::Init();
}
