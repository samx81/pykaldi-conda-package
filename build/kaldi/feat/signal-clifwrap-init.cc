//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/feat/signal.clif

#include <Python.h>

namespace __signal_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __signal_clifwrap

PyMODINIT_FUNC PyInit__signal(void) {
  if (!__signal_clifwrap::Ready()) return nullptr;
  return __signal_clifwrap::Init();
}