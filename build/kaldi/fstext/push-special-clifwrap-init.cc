//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/fstext/push-special.clif

#include <Python.h>

namespace __push__special_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __push__special_clifwrap

PyMODINIT_FUNC PyInit__push_special(void) {
  if (!__push__special_clifwrap::Ready()) return nullptr;
  return __push__special_clifwrap::Init();
}
