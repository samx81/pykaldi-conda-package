//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/decoder/biglm-faster-decoder.clif

#include <Python.h>

namespace __biglm__faster__decoder_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __biglm__faster__decoder_clifwrap

PyMODINIT_FUNC PyInit__biglm_faster_decoder(void) {
  if (!__biglm__faster__decoder_clifwrap::Ready()) return nullptr;
  return __biglm__faster__decoder_clifwrap::Init();
}