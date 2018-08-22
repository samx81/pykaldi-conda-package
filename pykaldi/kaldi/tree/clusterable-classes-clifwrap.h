//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/tree/clusterable-classes.clif

#include <memory>
#include "clif/python/optional.h"
#include "tree/clusterable-classes.h"
#include "clif/python/postconv.h"

namespace kaldi {
using namespace ::clif;

// CLIF use `::kaldi::GaussClusterable` as GaussClusterable
bool Clif_PyObjAs(PyObject* input, ::kaldi::GaussClusterable** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::GaussClusterable>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::GaussClusterable>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::GaussClusterable* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::GaussClusterable>* output);
PyObject* Clif_PyObjFrom(::kaldi::GaussClusterable*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::GaussClusterable>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::GaussClusterable>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::GaussClusterable&, py::PostConv);
// CLIF use `::kaldi::ScalarClusterable` as ScalarClusterable
bool Clif_PyObjAs(PyObject* input, ::kaldi::ScalarClusterable** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::ScalarClusterable>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::ScalarClusterable>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::ScalarClusterable* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::ScalarClusterable>* output);
PyObject* Clif_PyObjFrom(::kaldi::ScalarClusterable*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::ScalarClusterable>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::ScalarClusterable>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::ScalarClusterable&, py::PostConv);
// CLIF use `::kaldi::VectorClusterable` as VectorClusterable
bool Clif_PyObjAs(PyObject* input, ::kaldi::VectorClusterable** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::VectorClusterable>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::VectorClusterable>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::VectorClusterable* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::VectorClusterable>* output);
PyObject* Clif_PyObjFrom(::kaldi::VectorClusterable*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::VectorClusterable>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::VectorClusterable>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::VectorClusterable&, py::PostConv);

}  // namespace kaldi

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_clusterable_classes")) Py_DECREF(m);
// CLIF init_module else goto err;