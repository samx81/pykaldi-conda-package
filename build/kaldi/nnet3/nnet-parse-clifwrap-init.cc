//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/nnet3/nnet-parse.clif

#include <Python.h>

namespace __nnet__parse_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __nnet__parse_clifwrap

PyMODINIT_FUNC PyInit__nnet_parse(void) {
  if (!__nnet__parse_clifwrap::Ready()) return nullptr;
  return __nnet__parse_clifwrap::Init();
}
