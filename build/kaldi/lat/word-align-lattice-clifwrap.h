//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/lat/word-align-lattice.clif

#include <memory>
#include "clif/python/optional.h"
#include "lat/word-align-lattice.h"
#include "clif/python/postconv.h"

namespace kaldi {
using namespace ::clif;

// CLIF use `::kaldi::WordBoundaryInfo` as WordBoundaryInfo
bool Clif_PyObjAs(PyObject* input, ::kaldi::WordBoundaryInfo** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::WordBoundaryInfo>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::WordBoundaryInfo>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::WordBoundaryInfo* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::WordBoundaryInfo>* output);
PyObject* Clif_PyObjFrom(::kaldi::WordBoundaryInfo*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::WordBoundaryInfo>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::WordBoundaryInfo>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::WordBoundaryInfo&, py::PostConv);
// CLIF use `::kaldi::WordBoundaryInfo::PhoneType` as WordBoundaryInfo.PhoneType
bool Clif_PyObjAs(PyObject* input, ::kaldi::WordBoundaryInfo::PhoneType* output);
PyObject* Clif_PyObjFrom(const ::kaldi::WordBoundaryInfo::PhoneType&, py::PostConv);
// CLIF use `::kaldi::WordBoundaryInfoNewOpts` as WordBoundaryInfoNewOpts
bool Clif_PyObjAs(PyObject* input, ::kaldi::WordBoundaryInfoNewOpts** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::WordBoundaryInfoNewOpts>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::WordBoundaryInfoNewOpts>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::WordBoundaryInfoNewOpts* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::WordBoundaryInfoNewOpts>* output);
PyObject* Clif_PyObjFrom(::kaldi::WordBoundaryInfoNewOpts*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::WordBoundaryInfoNewOpts>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::WordBoundaryInfoNewOpts>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::WordBoundaryInfoNewOpts&, py::PostConv);

}  // namespace kaldi

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_word_align_lattice")) Py_DECREF(m);
// CLIF init_module else goto err;