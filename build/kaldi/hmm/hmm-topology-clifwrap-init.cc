//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/hmm/hmm-topology.clif

#include <Python.h>

namespace __hmm__topology_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __hmm__topology_clifwrap

PyMODINIT_FUNC PyInit__hmm_topology(void) {
  if (!__hmm__topology_clifwrap::Ready()) return nullptr;
  return __hmm__topology_clifwrap::Init();
}
