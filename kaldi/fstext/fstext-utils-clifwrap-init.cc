//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/fstext/fstext-utils.clif

#include <Python.h>

namespace __fstext__utils_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __fstext__utils_clifwrap

PyMODINIT_FUNC PyInit__fstext_utils(void) {
  if (!__fstext__utils_clifwrap::Ready()) return nullptr;
  return __fstext__utils_clifwrap::Init();
}