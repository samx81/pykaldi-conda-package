//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/rnnlm/sampler.clif

#include <Python.h>

namespace __sampler_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __sampler_clifwrap

PyMODINIT_FUNC PyInit__sampler(void) {
  if (!__sampler_clifwrap::Ready()) return nullptr;
  return __sampler_clifwrap::Init();
}
