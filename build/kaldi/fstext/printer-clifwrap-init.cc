//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/fstext/printer.clif

#include <Python.h>

namespace __printer_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __printer_clifwrap

PyMODINIT_FUNC PyInit__printer(void) {
  if (!__printer_clifwrap::Ready()) return nullptr;
  return __printer_clifwrap::Init();
}
