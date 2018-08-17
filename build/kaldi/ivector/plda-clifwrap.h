//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/ivector/plda.clif

#include <memory>
#include "clif/python/optional.h"
#include "ivector/plda.h"
#include "clif/python/postconv.h"

namespace kaldi {
using namespace ::clif;

// CLIF use `::kaldi::Plda` as Plda
bool Clif_PyObjAs(PyObject* input, ::kaldi::Plda** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::Plda>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::Plda>* output);
PyObject* Clif_PyObjFrom(::kaldi::Plda*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::Plda>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::Plda>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::Plda*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::Plda&, py::PostConv) = delete;
// CLIF use `::kaldi::PldaConfig` as PldaConfig
bool Clif_PyObjAs(PyObject* input, ::kaldi::PldaConfig** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::PldaConfig>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::PldaConfig>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::PldaConfig* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::PldaConfig>* output);
PyObject* Clif_PyObjFrom(::kaldi::PldaConfig*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::PldaConfig>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::PldaConfig>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::PldaConfig&, py::PostConv);
// CLIF use `::kaldi::PldaEstimationConfig` as PldaEstimationConfig
bool Clif_PyObjAs(PyObject* input, ::kaldi::PldaEstimationConfig** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::PldaEstimationConfig>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::PldaEstimationConfig>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::PldaEstimationConfig* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::PldaEstimationConfig>* output);
PyObject* Clif_PyObjFrom(::kaldi::PldaEstimationConfig*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::PldaEstimationConfig>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::PldaEstimationConfig>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::PldaEstimationConfig&, py::PostConv);
// CLIF use `::kaldi::PldaStats` as PldaStats
bool Clif_PyObjAs(PyObject* input, ::kaldi::PldaStats** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::PldaStats>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::PldaStats>* output);
PyObject* Clif_PyObjFrom(::kaldi::PldaStats*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::PldaStats>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::PldaStats>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::PldaStats*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::PldaStats&, py::PostConv) = delete;
// CLIF use `::kaldi::PldaUnsupervisedAdaptor` as PldaUnsupervisedAdaptor
bool Clif_PyObjAs(PyObject* input, ::kaldi::PldaUnsupervisedAdaptor** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::PldaUnsupervisedAdaptor>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::PldaUnsupervisedAdaptor>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::PldaUnsupervisedAdaptor* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::PldaUnsupervisedAdaptor>* output);
PyObject* Clif_PyObjFrom(::kaldi::PldaUnsupervisedAdaptor*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::PldaUnsupervisedAdaptor>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::PldaUnsupervisedAdaptor>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::PldaUnsupervisedAdaptor&, py::PostConv);
// CLIF use `::kaldi::PldaUnsupervisedAdaptorConfig` as PldaUnsupervisedAdaptorConfig
bool Clif_PyObjAs(PyObject* input, ::kaldi::PldaUnsupervisedAdaptorConfig** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::PldaUnsupervisedAdaptorConfig>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::PldaUnsupervisedAdaptorConfig>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::PldaUnsupervisedAdaptorConfig* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::PldaUnsupervisedAdaptorConfig>* output);
PyObject* Clif_PyObjFrom(::kaldi::PldaUnsupervisedAdaptorConfig*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::PldaUnsupervisedAdaptorConfig>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::PldaUnsupervisedAdaptorConfig>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::PldaUnsupervisedAdaptorConfig&, py::PostConv);

}  // namespace kaldi

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_plda")) Py_DECREF(m);
// CLIF init_module else goto err;
