//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/chain/chain-den-graph.clif

#include <Python.h>

namespace __chain__den__graph_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __chain__den__graph_clifwrap

PyMODINIT_FUNC PyInit__chain_den_graph(void) {
  if (!__chain__den__graph_clifwrap::Ready()) return nullptr;
  return __chain__den__graph_clifwrap::Init();
}
