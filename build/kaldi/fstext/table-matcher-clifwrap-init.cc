//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/fstext/table-matcher.clif

#include <Python.h>

namespace __table__matcher_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __table__matcher_clifwrap

PyMODINIT_FUNC PyInit__table_matcher(void) {
  if (!__table__matcher_clifwrap::Ready()) return nullptr;
  return __table__matcher_clifwrap::Init();
}
