//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/lm/const-arpa-lm.clif

#include <memory>
#include "clif/python/optional.h"
#include "lm/const-arpa-lm.h"
#include "clif/python/postconv.h"

namespace kaldi {
using namespace ::clif;

// CLIF use `::kaldi::ConstArpaLm` as ConstArpaLm
bool Clif_PyObjAs(PyObject* input, ::kaldi::ConstArpaLm** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::ConstArpaLm>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::ConstArpaLm>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::ConstArpaLm* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::ConstArpaLm>* output);
PyObject* Clif_PyObjFrom(::kaldi::ConstArpaLm*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::ConstArpaLm>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::ConstArpaLm>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::ConstArpaLm&, py::PostConv);
// CLIF use `::kaldi::ConstArpaLmDeterministicFst` as ConstArpaLmDeterministicFst
bool Clif_PyObjAs(PyObject* input, ::kaldi::ConstArpaLmDeterministicFst** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::ConstArpaLmDeterministicFst>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::ConstArpaLmDeterministicFst>* output);
PyObject* Clif_PyObjFrom(::kaldi::ConstArpaLmDeterministicFst*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::ConstArpaLmDeterministicFst>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::ConstArpaLmDeterministicFst>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::ConstArpaLmDeterministicFst*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::ConstArpaLmDeterministicFst&, py::PostConv) = delete;

}  // namespace kaldi

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_const_arpa_lm")) Py_DECREF(m);
// CLIF init_module else goto err;