//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/chain/language-model.clif

#include <memory>
#include "clif/python/optional.h"
#include "chain/language-model.h"
#include "clif/python/postconv.h"

namespace kaldi { namespace chain {
using namespace ::clif;

// CLIF use `::kaldi::chain::LanguageModelEstimator` as LanguageModelEstimator
bool Clif_PyObjAs(PyObject* input, ::kaldi::chain::LanguageModelEstimator** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::chain::LanguageModelEstimator>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::chain::LanguageModelEstimator>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::chain::LanguageModelEstimator* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::chain::LanguageModelEstimator>* output);
PyObject* Clif_PyObjFrom(::kaldi::chain::LanguageModelEstimator*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::chain::LanguageModelEstimator>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::chain::LanguageModelEstimator>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::chain::LanguageModelEstimator&, py::PostConv);
// CLIF use `::kaldi::chain::LanguageModelOptions` as LanguageModelOptions
bool Clif_PyObjAs(PyObject* input, ::kaldi::chain::LanguageModelOptions** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::chain::LanguageModelOptions>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::chain::LanguageModelOptions>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::chain::LanguageModelOptions* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::chain::LanguageModelOptions>* output);
PyObject* Clif_PyObjFrom(::kaldi::chain::LanguageModelOptions*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::chain::LanguageModelOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::chain::LanguageModelOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::chain::LanguageModelOptions&, py::PostConv);

} }  // namespace kaldi::chain

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_language_model")) Py_DECREF(m);
// CLIF init_module else goto err;
