//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/decoder/decodable-mapped.clif

#include <Python.h>

namespace __decodable__mapped_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __decodable__mapped_clifwrap

PyMODINIT_FUNC PyInit__decodable_mapped(void) {
  if (!__decodable__mapped_clifwrap::Ready()) return nullptr;
  return __decodable__mapped_clifwrap::Init();
}
