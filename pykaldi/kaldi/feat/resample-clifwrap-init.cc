//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/feat/resample.clif

#include <Python.h>

namespace __resample_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __resample_clifwrap

PyMODINIT_FUNC PyInit__resample(void) {
  if (!__resample_clifwrap::Ready()) return nullptr;
  return __resample_clifwrap::Init();
}