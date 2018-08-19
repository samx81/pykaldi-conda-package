//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/tree/context-dep.clif

#include <memory>
#include "clif/python/optional.h"
#include "tree/context-dep.h"
#include "clif/python/postconv.h"

namespace kaldi {
using namespace ::clif;

// CLIF use `::kaldi::ContextDependency` as ContextDependency
bool Clif_PyObjAs(PyObject* input, ::kaldi::ContextDependency** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::ContextDependency>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::ContextDependency>* output);
PyObject* Clif_PyObjFrom(::kaldi::ContextDependency*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::ContextDependency>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::ContextDependency>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::ContextDependency*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::ContextDependency&, py::PostConv) = delete;

}  // namespace kaldi

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_context_dep")) Py_DECREF(m);
// CLIF init_module else goto err;