//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/transform/fmpe.clif

#include <Python.h>

namespace __fmpe_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __fmpe_clifwrap

PyMODINIT_FUNC PyInit__fmpe(void) {
  if (!__fmpe_clifwrap::Ready()) return nullptr;
  return __fmpe_clifwrap::Init();
}
