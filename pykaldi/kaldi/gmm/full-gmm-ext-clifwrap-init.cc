//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/gmm/full-gmm-ext.clif

#include <Python.h>

namespace __full__gmm__ext_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __full__gmm__ext_clifwrap

PyMODINIT_FUNC PyInit__full_gmm_ext(void) {
  if (!__full__gmm__ext_clifwrap::Ready()) return nullptr;
  return __full__gmm__ext_clifwrap::Init();
}