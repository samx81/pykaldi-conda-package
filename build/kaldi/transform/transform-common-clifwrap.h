//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/transform/transform-common.clif

#include <memory>
#include "clif/python/optional.h"
#include "transform/transform-common.h"
#include "clif/python/postconv.h"

namespace kaldi {
using namespace ::clif;

// CLIF use `::kaldi::AffineXformStats` as AffineXformStats
bool Clif_PyObjAs(PyObject* input, ::kaldi::AffineXformStats** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::AffineXformStats>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::AffineXformStats>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::AffineXformStats* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::AffineXformStats>* output);
PyObject* Clif_PyObjFrom(::kaldi::AffineXformStats*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::AffineXformStats>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::AffineXformStats>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::AffineXformStats&, py::PostConv);

}  // namespace kaldi

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_transform_common")) Py_DECREF(m);
// CLIF init_module else goto err;