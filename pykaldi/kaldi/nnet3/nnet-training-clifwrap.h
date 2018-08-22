//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/nnet3/nnet-training.clif

#include <memory>
#include "clif/python/optional.h"
#include "nnet3/nnet-training.h"
#include "clif/python/postconv.h"

namespace kaldi { namespace nnet3 {
using namespace ::clif;

// CLIF use `::kaldi::nnet3::NnetTrainer` as NnetTrainer
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::NnetTrainer** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::NnetTrainer>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::NnetTrainer>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::NnetTrainer*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::NnetTrainer>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::NnetTrainer>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::NnetTrainer*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::NnetTrainer&, py::PostConv) = delete;
// CLIF use `::kaldi::nnet3::NnetTrainerOptions` as NnetTrainerOptions
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::NnetTrainerOptions** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::NnetTrainerOptions>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::NnetTrainerOptions>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::NnetTrainerOptions* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::nnet3::NnetTrainerOptions>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::NnetTrainerOptions*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::NnetTrainerOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::NnetTrainerOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::NnetTrainerOptions&, py::PostConv);
// CLIF use `::kaldi::nnet3::ObjectiveFunctionInfo` as ObjectiveFunctionInfo
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::ObjectiveFunctionInfo** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::ObjectiveFunctionInfo>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::ObjectiveFunctionInfo>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::ObjectiveFunctionInfo* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::nnet3::ObjectiveFunctionInfo>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::ObjectiveFunctionInfo*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::ObjectiveFunctionInfo>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::ObjectiveFunctionInfo>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::ObjectiveFunctionInfo&, py::PostConv);

} }  // namespace kaldi::nnet3

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_nnet_training")) Py_DECREF(m);
// CLIF init_module else goto err;