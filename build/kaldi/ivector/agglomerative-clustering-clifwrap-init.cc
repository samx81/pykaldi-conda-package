//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/ivector/agglomerative-clustering.clif

#include <Python.h>

namespace __agglomerative__clustering_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __agglomerative__clustering_clifwrap

PyMODINIT_FUNC PyInit__agglomerative_clustering(void) {
  if (!__agglomerative__clustering_clifwrap::Ready()) return nullptr;
  return __agglomerative__clustering_clifwrap::Init();
}
