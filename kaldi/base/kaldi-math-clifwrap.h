//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/base/kaldi-math.clif

#include <memory>
#include "clif/python/optional.h"
#include "base/kaldi-math.h"
#include "clif/python/postconv.h"

namespace kaldi {
using namespace ::clif;

// CLIF use `::kaldi::RandomState` as RandomState
bool Clif_PyObjAs(PyObject* input, ::kaldi::RandomState** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::RandomState>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::RandomState>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::RandomState* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::RandomState>* output);
PyObject* Clif_PyObjFrom(::kaldi::RandomState*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::RandomState>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::RandomState>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::RandomState&, py::PostConv);

}  // namespace kaldi

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_kaldi_math")) Py_DECREF(m);
// CLIF init_module else goto err;