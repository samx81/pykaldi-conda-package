//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/fstext/const-fst.clif

#include <Python.h>

namespace __const__fst_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __const__fst_clifwrap

PyMODINIT_FUNC PyInit__const_fst(void) {
  if (!__const__fst_clifwrap::Ready()) return nullptr;
  return __const__fst_clifwrap::Init();
}