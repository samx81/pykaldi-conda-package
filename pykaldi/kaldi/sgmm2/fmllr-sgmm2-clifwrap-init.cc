//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/sgmm2/fmllr-sgmm2.clif

#include <Python.h>

namespace __fmllr__sgmm2_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __fmllr__sgmm2_clifwrap

PyMODINIT_FUNC PyInit__fmllr_sgmm2(void) {
  if (!__fmllr__sgmm2_clifwrap::Ready()) return nullptr;
  return __fmllr__sgmm2_clifwrap::Init();
}