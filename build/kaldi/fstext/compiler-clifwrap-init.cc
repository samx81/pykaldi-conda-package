//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/fstext/compiler.clif

#include <Python.h>

namespace __compiler_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __compiler_clifwrap

PyMODINIT_FUNC PyInit__compiler(void) {
  if (!__compiler_clifwrap::Ready()) return nullptr;
  return __compiler_clifwrap::Init();
}
