//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/transform/lda-estimate.clif

#include <Python.h>

namespace __lda__estimate_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __lda__estimate_clifwrap

PyMODINIT_FUNC PyInit__lda_estimate(void) {
  if (!__lda__estimate_clifwrap::Ready()) return nullptr;
  return __lda__estimate_clifwrap::Init();
}