//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/gmm/full-gmm-normal.clif

#include <Python.h>

namespace __full__gmm__normal_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __full__gmm__normal_clifwrap

PyMODINIT_FUNC PyInit__full_gmm_normal(void) {
  if (!__full__gmm__normal_clifwrap::Ready()) return nullptr;
  return __full__gmm__normal_clifwrap::Init();
}
