//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/transform/mllt.clif

#include <memory>
#include "clif/python/optional.h"
#include "transform/mllt.h"
#include "clif/python/postconv.h"

namespace kaldi {
using namespace ::clif;

// CLIF use `::kaldi::MlltAccs` as MlltAccs
bool Clif_PyObjAs(PyObject* input, ::kaldi::MlltAccs** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::MlltAccs>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::MlltAccs>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::MlltAccs* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::MlltAccs>* output);
PyObject* Clif_PyObjFrom(::kaldi::MlltAccs*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::MlltAccs>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::MlltAccs>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::MlltAccs&, py::PostConv);

}  // namespace kaldi

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_mllt")) Py_DECREF(m);
// CLIF init_module else goto err;
