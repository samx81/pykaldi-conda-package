//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/rnnlm/rnnlm-example.clif

#include <Python.h>

namespace __rnnlm__example_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __rnnlm__example_clifwrap

PyMODINIT_FUNC PyInit__rnnlm_example(void) {
  if (!__rnnlm__example_clifwrap::Ready()) return nullptr;
  return __rnnlm__example_clifwrap::Init();
}