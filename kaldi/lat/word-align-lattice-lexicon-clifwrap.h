//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/lat/word-align-lattice-lexicon.clif

#include <memory>
#include "clif/python/optional.h"
#include "lat/word-align-lattice-lexicon.h"
#include "clif/python/postconv.h"

namespace kaldi {
using namespace ::clif;

// CLIF use `::kaldi::WordAlignLatticeLexiconInfo` as WordAlignLatticeLexiconInfo
bool Clif_PyObjAs(PyObject* input, ::kaldi::WordAlignLatticeLexiconInfo** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::WordAlignLatticeLexiconInfo>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::WordAlignLatticeLexiconInfo>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::WordAlignLatticeLexiconInfo* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::WordAlignLatticeLexiconInfo>* output);
PyObject* Clif_PyObjFrom(::kaldi::WordAlignLatticeLexiconInfo*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::WordAlignLatticeLexiconInfo>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::WordAlignLatticeLexiconInfo>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::WordAlignLatticeLexiconInfo&, py::PostConv);
// CLIF use `::kaldi::WordAlignLatticeLexiconOpts` as WordAlignLatticeLexiconOpts
bool Clif_PyObjAs(PyObject* input, ::kaldi::WordAlignLatticeLexiconOpts** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::WordAlignLatticeLexiconOpts>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::WordAlignLatticeLexiconOpts>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::WordAlignLatticeLexiconOpts* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::WordAlignLatticeLexiconOpts>* output);
PyObject* Clif_PyObjFrom(::kaldi::WordAlignLatticeLexiconOpts*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::WordAlignLatticeLexiconOpts>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::WordAlignLatticeLexiconOpts>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::WordAlignLatticeLexiconOpts&, py::PostConv);

}  // namespace kaldi

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_word_align_lattice_lexicon")) Py_DECREF(m);
// CLIF init_module else goto err;