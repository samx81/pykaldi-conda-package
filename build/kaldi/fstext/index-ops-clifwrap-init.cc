//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/fstext/index-ops.clif

#include <Python.h>

namespace __index__ops_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __index__ops_clifwrap

PyMODINIT_FUNC PyInit__index_ops(void) {
  if (!__index__ops_clifwrap::Ready()) return nullptr;
  return __index__ops_clifwrap::Init();
}
