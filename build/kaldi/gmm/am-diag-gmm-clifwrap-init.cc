//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/gmm/am-diag-gmm.clif

#include <Python.h>

namespace __am__diag__gmm_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __am__diag__gmm_clifwrap

PyMODINIT_FUNC PyInit__am_diag_gmm(void) {
  if (!__am__diag__gmm_clifwrap::Ready()) return nullptr;
  return __am__diag__gmm_clifwrap::Init();
}