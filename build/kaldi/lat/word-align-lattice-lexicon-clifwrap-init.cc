//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/lat/word-align-lattice-lexicon.clif

#include <Python.h>

namespace __word__align__lattice__lexicon_clifwrap {

bool Ready();
PyObject* Init();

}  // namespace __word__align__lattice__lexicon_clifwrap

PyMODINIT_FUNC PyInit__word_align_lattice_lexicon(void) {
  if (!__word__align__lattice__lexicon_clifwrap::Ready()) return nullptr;
  return __word__align__lattice__lexicon_clifwrap::Init();
}