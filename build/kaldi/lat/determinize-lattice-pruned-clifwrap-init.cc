//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/lat/determinize-lattice-pruned.clif

#include <Python.h>

namespace __determinize__lattice__pruned_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __determinize__lattice__pruned_clifwrap

PyMODINIT_FUNC PyInit__determinize_lattice_pruned(void) {
  if (!__determinize__lattice__pruned_clifwrap::Ready()) return nullptr;
  return __determinize__lattice__pruned_clifwrap::Init();
}
