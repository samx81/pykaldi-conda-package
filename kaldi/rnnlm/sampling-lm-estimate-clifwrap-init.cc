//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/rnnlm/sampling-lm-estimate.clif

#include <Python.h>

namespace __sampling__lm__estimate_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __sampling__lm__estimate_clifwrap

PyMODINIT_FUNC PyInit__sampling_lm_estimate(void) {
  if (!__sampling__lm__estimate_clifwrap::Ready()) return nullptr;
  return __sampling__lm__estimate_clifwrap::Init();
}