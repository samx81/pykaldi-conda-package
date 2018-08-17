//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/nnet3/nnet-general-component.clif

#include <memory>
#include "clif/python/optional.h"
#include "nnet3/nnet-general-component.h"
#include "clif/python/postconv.h"

namespace kaldi { namespace nnet3 {
using namespace ::clif;

// CLIF use `::kaldi::nnet3::BackpropTruncationComponent` as BackpropTruncationComponent
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::BackpropTruncationComponent** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::BackpropTruncationComponent>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::BackpropTruncationComponent>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::BackpropTruncationComponent*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::BackpropTruncationComponent>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::BackpropTruncationComponent>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::BackpropTruncationComponent*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::BackpropTruncationComponent&, py::PostConv) = delete;
// CLIF use `::kaldi::nnet3::BackpropTruncationComponentPrecomputedIndexes` as BackpropTruncationComponentPrecomputedIndexes
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::BackpropTruncationComponentPrecomputedIndexes** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::BackpropTruncationComponentPrecomputedIndexes>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::BackpropTruncationComponentPrecomputedIndexes>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::BackpropTruncationComponentPrecomputedIndexes* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::nnet3::BackpropTruncationComponentPrecomputedIndexes>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::BackpropTruncationComponentPrecomputedIndexes*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::BackpropTruncationComponentPrecomputedIndexes>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::BackpropTruncationComponentPrecomputedIndexes>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::BackpropTruncationComponentPrecomputedIndexes&, py::PostConv);
// CLIF use `::kaldi::nnet3::ConstantComponent` as ConstantComponent
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::ConstantComponent** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::ConstantComponent>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::ConstantComponent>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::ConstantComponent*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::ConstantComponent>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::ConstantComponent>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::ConstantComponent*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::ConstantComponent&, py::PostConv) = delete;
// CLIF use `::kaldi::nnet3::DistributeComponent` as DistributeComponent
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::DistributeComponent** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::DistributeComponent>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::DistributeComponent>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::DistributeComponent*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::DistributeComponent>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::DistributeComponent>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::DistributeComponent*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::DistributeComponent&, py::PostConv) = delete;
// CLIF use `::kaldi::nnet3::DistributeComponentPrecomputedIndexes` as DistributeComponentPrecomputedIndexes
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::DistributeComponentPrecomputedIndexes** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::DistributeComponentPrecomputedIndexes>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::DistributeComponentPrecomputedIndexes>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::DistributeComponentPrecomputedIndexes* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::nnet3::DistributeComponentPrecomputedIndexes>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::DistributeComponentPrecomputedIndexes*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::DistributeComponentPrecomputedIndexes>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::DistributeComponentPrecomputedIndexes>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::DistributeComponentPrecomputedIndexes&, py::PostConv);
// CLIF use `::kaldi::nnet3::DropoutMaskComponent` as DropoutMaskComponent
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::DropoutMaskComponent** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::DropoutMaskComponent>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::DropoutMaskComponent>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::DropoutMaskComponent*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::DropoutMaskComponent>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::DropoutMaskComponent>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::DropoutMaskComponent*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::DropoutMaskComponent&, py::PostConv) = delete;
// CLIF use `::kaldi::nnet3::GeneralDropoutComponent` as GeneralDropoutComponent
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::GeneralDropoutComponent** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::GeneralDropoutComponent>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::GeneralDropoutComponent>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::GeneralDropoutComponent*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::GeneralDropoutComponent>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::GeneralDropoutComponent>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::GeneralDropoutComponent*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::GeneralDropoutComponent&, py::PostConv) = delete;
// CLIF use `::kaldi::nnet3::GeneralDropoutComponentPrecomputedIndexes` as GeneralDropoutComponentPrecomputedIndexes
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::GeneralDropoutComponentPrecomputedIndexes** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::GeneralDropoutComponentPrecomputedIndexes>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::GeneralDropoutComponentPrecomputedIndexes>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::GeneralDropoutComponentPrecomputedIndexes* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::nnet3::GeneralDropoutComponentPrecomputedIndexes>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::GeneralDropoutComponentPrecomputedIndexes*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::GeneralDropoutComponentPrecomputedIndexes>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::GeneralDropoutComponentPrecomputedIndexes>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::GeneralDropoutComponentPrecomputedIndexes&, py::PostConv);
// CLIF use `::kaldi::nnet3::StatisticsExtractionComponent` as StatisticsExtractionComponent
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::StatisticsExtractionComponent** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::StatisticsExtractionComponent>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::StatisticsExtractionComponent>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::StatisticsExtractionComponent*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::StatisticsExtractionComponent>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::StatisticsExtractionComponent>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::StatisticsExtractionComponent*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::StatisticsExtractionComponent&, py::PostConv) = delete;
// CLIF use `::kaldi::nnet3::StatisticsExtractionComponentPrecomputedIndexes` as StatisticsExtractionComponentPrecomputedIndexes
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::StatisticsExtractionComponentPrecomputedIndexes** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::StatisticsExtractionComponentPrecomputedIndexes>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::StatisticsExtractionComponentPrecomputedIndexes*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::StatisticsExtractionComponentPrecomputedIndexes>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::StatisticsExtractionComponentPrecomputedIndexes*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::StatisticsExtractionComponentPrecomputedIndexes&, py::PostConv) = delete;
// CLIF use `::kaldi::nnet3::StatisticsPoolingComponent` as StatisticsPoolingComponent
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::StatisticsPoolingComponent** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::StatisticsPoolingComponent>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::StatisticsPoolingComponent>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::StatisticsPoolingComponent*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::StatisticsPoolingComponent>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::StatisticsPoolingComponent>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::StatisticsPoolingComponent*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::StatisticsPoolingComponent&, py::PostConv) = delete;
// CLIF use `::kaldi::nnet3::StatisticsPoolingComponentPrecomputedIndexes` as StatisticsPoolingComponentPrecomputedIndexes
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::StatisticsPoolingComponentPrecomputedIndexes** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::StatisticsPoolingComponentPrecomputedIndexes>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::StatisticsPoolingComponentPrecomputedIndexes>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::StatisticsPoolingComponentPrecomputedIndexes* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::nnet3::StatisticsPoolingComponentPrecomputedIndexes>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::StatisticsPoolingComponentPrecomputedIndexes*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::StatisticsPoolingComponentPrecomputedIndexes>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::StatisticsPoolingComponentPrecomputedIndexes>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::StatisticsPoolingComponentPrecomputedIndexes&, py::PostConv);

} }  // namespace kaldi::nnet3

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_nnet_general_component")) Py_DECREF(m);
// CLIF init_module else goto err;