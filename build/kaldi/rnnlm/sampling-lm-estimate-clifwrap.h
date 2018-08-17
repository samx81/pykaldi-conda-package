//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/rnnlm/sampling-lm-estimate.clif

#include <memory>
#include "clif/python/optional.h"
#include "rnnlm/sampling-lm-estimate.h"
#include "clif/python/postconv.h"

namespace kaldi { namespace rnnlm {
using namespace ::clif;

// CLIF use `::kaldi::rnnlm::SamplingLmEstimator` as SamplingLmEstimator
bool Clif_PyObjAs(PyObject* input, ::kaldi::rnnlm::SamplingLmEstimator** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::rnnlm::SamplingLmEstimator>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::rnnlm::SamplingLmEstimator>* output);
PyObject* Clif_PyObjFrom(::kaldi::rnnlm::SamplingLmEstimator*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::rnnlm::SamplingLmEstimator>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::rnnlm::SamplingLmEstimator>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::rnnlm::SamplingLmEstimator*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::rnnlm::SamplingLmEstimator&, py::PostConv) = delete;
// CLIF use `::kaldi::rnnlm::SamplingLmEstimatorOptions` as SamplingLmEstimatorOptions
bool Clif_PyObjAs(PyObject* input, ::kaldi::rnnlm::SamplingLmEstimatorOptions** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::rnnlm::SamplingLmEstimatorOptions>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::rnnlm::SamplingLmEstimatorOptions>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::rnnlm::SamplingLmEstimatorOptions* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::rnnlm::SamplingLmEstimatorOptions>* output);
PyObject* Clif_PyObjFrom(::kaldi::rnnlm::SamplingLmEstimatorOptions*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::rnnlm::SamplingLmEstimatorOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::rnnlm::SamplingLmEstimatorOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::rnnlm::SamplingLmEstimatorOptions&, py::PostConv);

} }  // namespace kaldi::rnnlm

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_sampling_lm_estimate")) Py_DECREF(m);
// CLIF init_module else goto err;
