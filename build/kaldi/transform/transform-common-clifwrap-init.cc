//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/transform/transform-common.clif

#include <Python.h>

namespace __transform__common_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __transform__common_clifwrap

PyMODINIT_FUNC PyInit__transform_common(void) {
  if (!__transform__common_clifwrap::Ready()) return nullptr;
  return __transform__common_clifwrap::Init();
}
