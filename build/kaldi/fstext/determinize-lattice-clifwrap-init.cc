//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/fstext/determinize-lattice.clif

#include <Python.h>

namespace __determinize__lattice_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __determinize__lattice_clifwrap

PyMODINIT_FUNC PyInit__determinize_lattice(void) {
  if (!__determinize__lattice_clifwrap::Ready()) return nullptr;
  return __determinize__lattice_clifwrap::Init();
}
