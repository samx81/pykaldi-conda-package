//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/nnet3/nnet-computation.clif

#include <memory>
#include "clif/python/optional.h"
#include "nnet3/nnet-computation.h"
#include "clif/python/postconv.h"

namespace kaldi { namespace nnet3 {
using namespace ::clif;

// CLIF use `::kaldi::nnet3::CommandType` as CommandType
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::CommandType* output);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::CommandType&, py::PostConv);
// CLIF use `::kaldi::nnet3::ComputationRequest` as ComputationRequest
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::ComputationRequest** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::ComputationRequest>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::ComputationRequest>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::ComputationRequest* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::nnet3::ComputationRequest>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::ComputationRequest*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::ComputationRequest>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::ComputationRequest>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::ComputationRequest&, py::PostConv);
// CLIF use `::kaldi::nnet3::IoSpecification` as IoSpecification
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::IoSpecification** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::IoSpecification>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::IoSpecification>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::IoSpecification* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::nnet3::IoSpecification>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::IoSpecification*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::IoSpecification>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::IoSpecification>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::IoSpecification&, py::PostConv);
// CLIF use `::kaldi::nnet3::NnetComputation` as NnetComputation
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::NnetComputation** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::NnetComputation>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::NnetComputation>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::NnetComputation* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::nnet3::NnetComputation>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::NnetComputation*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::NnetComputation>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::NnetComputation>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::NnetComputation&, py::PostConv);
// CLIF use `::kaldi::nnet3::NnetComputation::Command` as NnetComputation.Command
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::NnetComputation::Command** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::NnetComputation::Command>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::NnetComputation::Command>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::NnetComputation::Command* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::nnet3::NnetComputation::Command>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::NnetComputation::Command*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::NnetComputation::Command>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::NnetComputation::Command>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::NnetComputation::Command&, py::PostConv);
// CLIF use `::kaldi::nnet3::NnetComputation::MatrixDebugInfo` as NnetComputation.MatrixDebugInfo
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::NnetComputation::MatrixDebugInfo** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::NnetComputation::MatrixDebugInfo>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::NnetComputation::MatrixDebugInfo>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::NnetComputation::MatrixDebugInfo* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::nnet3::NnetComputation::MatrixDebugInfo>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::NnetComputation::MatrixDebugInfo*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::NnetComputation::MatrixDebugInfo>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::NnetComputation::MatrixDebugInfo>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::NnetComputation::MatrixDebugInfo&, py::PostConv);
// CLIF use `::kaldi::nnet3::NnetComputation::MatrixInfo` as NnetComputation.MatrixInfo
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::NnetComputation::MatrixInfo** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::NnetComputation::MatrixInfo>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::NnetComputation::MatrixInfo>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::NnetComputation::MatrixInfo* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::nnet3::NnetComputation::MatrixInfo>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::NnetComputation::MatrixInfo*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::NnetComputation::MatrixInfo>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::NnetComputation::MatrixInfo>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::NnetComputation::MatrixInfo&, py::PostConv);
// CLIF use `::kaldi::nnet3::NnetComputation::PrecomputedIndexesInfo` as NnetComputation.PrecomputedIndexesInfo
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::NnetComputation::PrecomputedIndexesInfo** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::NnetComputation::PrecomputedIndexesInfo>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::NnetComputation::PrecomputedIndexesInfo>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::NnetComputation::PrecomputedIndexesInfo* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::nnet3::NnetComputation::PrecomputedIndexesInfo>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::NnetComputation::PrecomputedIndexesInfo*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::NnetComputation::PrecomputedIndexesInfo>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::NnetComputation::PrecomputedIndexesInfo>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::NnetComputation::PrecomputedIndexesInfo&, py::PostConv);
// CLIF use `::kaldi::nnet3::NnetComputation::SubMatrixInfo` as NnetComputation.SubMatrixInfo
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::NnetComputation::SubMatrixInfo** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::NnetComputation::SubMatrixInfo>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::NnetComputation::SubMatrixInfo>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::NnetComputation::SubMatrixInfo* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::nnet3::NnetComputation::SubMatrixInfo>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::NnetComputation::SubMatrixInfo*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::NnetComputation::SubMatrixInfo>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::NnetComputation::SubMatrixInfo>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::NnetComputation::SubMatrixInfo&, py::PostConv);

} }  // namespace kaldi::nnet3

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_nnet_computation")) Py_DECREF(m);
// CLIF init_module else goto err;
