//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/matrix/compressed-matrix.clif

#include <Python.h>

namespace __compressed__matrix_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __compressed__matrix_clifwrap

PyMODINIT_FUNC PyInit__compressed_matrix(void) {
  if (!__compressed__matrix_clifwrap::Ready()) return nullptr;
  return __compressed__matrix_clifwrap::Init();
}
