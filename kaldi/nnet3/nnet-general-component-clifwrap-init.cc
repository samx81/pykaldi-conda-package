//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/nnet3/nnet-general-component.clif

#include <Python.h>

namespace __nnet__general__component_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __nnet__general__component_clifwrap

PyMODINIT_FUNC PyInit__nnet_general_component(void) {
  if (!__nnet__general__component_clifwrap::Ready()) return nullptr;
  return __nnet__general__component_clifwrap::Init();
}