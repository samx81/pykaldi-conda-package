//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/itf/context-dep-itf.clif

#include <Python.h>

namespace __context__dep__itf_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __context__dep__itf_clifwrap

PyMODINIT_FUNC PyInit__context_dep_itf(void) {
  if (!__context__dep__itf_clifwrap::Ready()) return nullptr;
  return __context__dep__itf_clifwrap::Init();
}
