//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/nnet3/nnet-component-itf.clif

#include <memory>
#include "clif/python/optional.h"
#include "nnet3/nnet-component-itf.h"
#include "clif/python/postconv.h"

namespace clif {

// CLIF use `void *` as Memo
bool Clif_PyObjAs(PyObject* input, void** output);
PyObject* Clif_PyObjFrom(const void*, py::PostConv);

}  // namespace clif

namespace kaldi { namespace nnet3 {
using namespace ::clif;

// CLIF use `::kaldi::nnet3::Component` as Component
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::Component** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::Component>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::Component>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::Component*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::Component>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::Component>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::Component*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::Component&, py::PostConv) = delete;
// CLIF use `::kaldi::nnet3::ComponentPrecomputedIndexes` as ComponentPrecomputedIndexes
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::ComponentPrecomputedIndexes** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::ComponentPrecomputedIndexes>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::ComponentPrecomputedIndexes>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::ComponentPrecomputedIndexes*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::ComponentPrecomputedIndexes>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::ComponentPrecomputedIndexes>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::ComponentPrecomputedIndexes*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::ComponentPrecomputedIndexes&, py::PostConv) = delete;
// CLIF use `::kaldi::nnet3::ComponentProperties` as ComponentProperties
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::ComponentProperties* output);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::ComponentProperties&, py::PostConv);
// CLIF use `::kaldi::nnet3::NonlinearComponent` as NonlinearComponent
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::NonlinearComponent** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::NonlinearComponent>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::NonlinearComponent>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::NonlinearComponent*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::NonlinearComponent>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::NonlinearComponent>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::NonlinearComponent*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::NonlinearComponent&, py::PostConv) = delete;
// CLIF use `::kaldi::nnet3::RandomComponent` as RandomComponent
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::RandomComponent** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::RandomComponent>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::RandomComponent>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::RandomComponent*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::RandomComponent>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::RandomComponent>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::RandomComponent*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::RandomComponent&, py::PostConv) = delete;
// CLIF use `::kaldi::nnet3::UpdatableComponent` as UpdatableComponent
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::UpdatableComponent** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::UpdatableComponent>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::UpdatableComponent>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::UpdatableComponent*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::UpdatableComponent>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::UpdatableComponent>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::UpdatableComponent*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::UpdatableComponent&, py::PostConv) = delete;

} }  // namespace kaldi::nnet3

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_nnet_component_itf")) Py_DECREF(m);
// CLIF init_module else goto err;
