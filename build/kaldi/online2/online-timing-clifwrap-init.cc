//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/online2/online-timing.clif

#include <Python.h>

namespace __online__timing_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __online__timing_clifwrap

PyMODINIT_FUNC PyInit__online_timing(void) {
  if (!__online__timing_clifwrap::Ready()) return nullptr;
  return __online__timing_clifwrap::Init();
}
