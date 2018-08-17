//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/feat/feature-functions.clif

#include <memory>
#include "clif/python/optional.h"
#include "feat/feature-functions.h"
#include "clif/python/postconv.h"

namespace kaldi {
using namespace ::clif;

// CLIF use `::kaldi::DeltaFeatures` as DeltaFeatures
bool Clif_PyObjAs(PyObject* input, ::kaldi::DeltaFeatures** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::DeltaFeatures>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::DeltaFeatures>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::DeltaFeatures* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::DeltaFeatures>* output);
PyObject* Clif_PyObjFrom(::kaldi::DeltaFeatures*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::DeltaFeatures>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::DeltaFeatures>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::DeltaFeatures&, py::PostConv);
// CLIF use `::kaldi::DeltaFeaturesOptions` as DeltaFeaturesOptions
bool Clif_PyObjAs(PyObject* input, ::kaldi::DeltaFeaturesOptions** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::DeltaFeaturesOptions>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::DeltaFeaturesOptions>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::DeltaFeaturesOptions* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::DeltaFeaturesOptions>* output);
PyObject* Clif_PyObjFrom(::kaldi::DeltaFeaturesOptions*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::DeltaFeaturesOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::DeltaFeaturesOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::DeltaFeaturesOptions&, py::PostConv);
// CLIF use `::kaldi::ShiftedDeltaFeatures` as ShiftedDeltaFeatures
bool Clif_PyObjAs(PyObject* input, ::kaldi::ShiftedDeltaFeatures** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::ShiftedDeltaFeatures>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::ShiftedDeltaFeatures>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::ShiftedDeltaFeatures* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::ShiftedDeltaFeatures>* output);
PyObject* Clif_PyObjFrom(::kaldi::ShiftedDeltaFeatures*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::ShiftedDeltaFeatures>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::ShiftedDeltaFeatures>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::ShiftedDeltaFeatures&, py::PostConv);
// CLIF use `::kaldi::ShiftedDeltaFeaturesOptions` as ShiftedDeltaFeaturesOptions
bool Clif_PyObjAs(PyObject* input, ::kaldi::ShiftedDeltaFeaturesOptions** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::ShiftedDeltaFeaturesOptions>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::ShiftedDeltaFeaturesOptions>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::ShiftedDeltaFeaturesOptions* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::ShiftedDeltaFeaturesOptions>* output);
PyObject* Clif_PyObjFrom(::kaldi::ShiftedDeltaFeaturesOptions*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::ShiftedDeltaFeaturesOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::ShiftedDeltaFeaturesOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::ShiftedDeltaFeaturesOptions&, py::PostConv);
// CLIF use `::kaldi::SlidingWindowCmnOptions` as SlidingWindowCmnOptions
bool Clif_PyObjAs(PyObject* input, ::kaldi::SlidingWindowCmnOptions** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::SlidingWindowCmnOptions>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::SlidingWindowCmnOptions>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::SlidingWindowCmnOptions* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::SlidingWindowCmnOptions>* output);
PyObject* Clif_PyObjFrom(::kaldi::SlidingWindowCmnOptions*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::SlidingWindowCmnOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::SlidingWindowCmnOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::SlidingWindowCmnOptions&, py::PostConv);

}  // namespace kaldi

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_feature_functions")) Py_DECREF(m);
// CLIF init_module else goto err;
