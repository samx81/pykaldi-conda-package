//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/chain/chain-training.clif

#include <Python.h>

namespace __chain__training_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __chain__training_clifwrap

PyMODINIT_FUNC PyInit__chain_training(void) {
  if (!__chain__training_clifwrap::Ready()) return nullptr;
  return __chain__training_clifwrap::Init();
}