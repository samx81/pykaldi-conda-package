//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/nnet3/nnet-misc-computation-info.clif

#include <Python.h>

namespace __nnet__misc__computation__info_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __nnet__misc__computation__info_clifwrap

PyMODINIT_FUNC PyInit__nnet_misc_computation_info(void) {
  if (!__nnet__misc__computation__info_clifwrap::Ready()) return nullptr;
  return __nnet__misc__computation__info_clifwrap::Init();
}
