//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/nnet3/nnet-am-decodable-simple.clif

#include <Python.h>

namespace __nnet__am__decodable__simple_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __nnet__am__decodable__simple_clifwrap

PyMODINIT_FUNC PyInit__nnet_am_decodable_simple(void) {
  if (!__nnet__am__decodable__simple_clifwrap::Ready()) return nullptr;
  return __nnet__am__decodable__simple_clifwrap::Init();
}
