//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/fstext/lexicographic-weight.clif

#include <Python.h>

namespace __lexicographic__weight_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __lexicographic__weight_clifwrap

PyMODINIT_FUNC PyInit__lexicographic_weight(void) {
  if (!__lexicographic__weight_clifwrap::Ready()) return nullptr;
  return __lexicographic__weight_clifwrap::Init();
}