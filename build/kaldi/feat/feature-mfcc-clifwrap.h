//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/feat/feature-mfcc.clif

#include <memory>
#include "clif/python/optional.h"
#include "feat/feature-mfcc.h"
#include "clif/python/postconv.h"

namespace kaldi {
using namespace ::clif;

// CLIF use `::kaldi::OfflineFeatureTpl< ::kaldi::MfccComputer>` as Mfcc
bool Clif_PyObjAs(PyObject* input, ::kaldi::OfflineFeatureTpl< ::kaldi::MfccComputer>** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::OfflineFeatureTpl< ::kaldi::MfccComputer>>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::OfflineFeatureTpl< ::kaldi::MfccComputer>>* output);
PyObject* Clif_PyObjFrom(::kaldi::OfflineFeatureTpl< ::kaldi::MfccComputer>*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::OfflineFeatureTpl< ::kaldi::MfccComputer>>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::OfflineFeatureTpl< ::kaldi::MfccComputer>>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::OfflineFeatureTpl< ::kaldi::MfccComputer>*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::OfflineFeatureTpl< ::kaldi::MfccComputer>&, py::PostConv) = delete;
// CLIF use `::kaldi::MfccComputer` as MfccComputer
bool Clif_PyObjAs(PyObject* input, ::kaldi::MfccComputer** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::MfccComputer>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::MfccComputer>* output);
PyObject* Clif_PyObjFrom(::kaldi::MfccComputer*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::MfccComputer>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::MfccComputer>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::MfccComputer*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::MfccComputer&, py::PostConv) = delete;
// CLIF use `::kaldi::MfccOptions` as MfccOptions
bool Clif_PyObjAs(PyObject* input, ::kaldi::MfccOptions** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::MfccOptions>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::MfccOptions>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::MfccOptions* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::MfccOptions>* output);
PyObject* Clif_PyObjFrom(::kaldi::MfccOptions*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::MfccOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::MfccOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::MfccOptions&, py::PostConv);

}  // namespace kaldi

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_feature_mfcc")) Py_DECREF(m);
// CLIF init_module else goto err;
