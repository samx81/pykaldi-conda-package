//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/base/kaldi-math-ext.clif

#include <Python.h>

namespace __kaldi__math__ext_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __kaldi__math__ext_clifwrap

PyMODINIT_FUNC PyInit__kaldi_math_ext(void) {
  if (!__kaldi__math__ext_clifwrap::Ready()) return nullptr;
  return __kaldi__math__ext_clifwrap::Init();
}
