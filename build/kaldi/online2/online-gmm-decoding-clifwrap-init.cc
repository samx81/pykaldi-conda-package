//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/online2/online-gmm-decoding.clif

#include <Python.h>

namespace __online__gmm__decoding_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __online__gmm__decoding_clifwrap

PyMODINIT_FUNC PyInit__online_gmm_decoding(void) {
  if (!__online__gmm__decoding_clifwrap::Ready()) return nullptr;
  return __online__gmm__decoding_clifwrap::Init();
}
