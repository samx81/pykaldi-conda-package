//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/feat/feature-spectrogram.clif

#include <memory>
#include "clif/python/optional.h"
#include "feat/feature-spectrogram.h"
#include "clif/python/postconv.h"

namespace kaldi {
using namespace ::clif;

// CLIF use `::kaldi::OfflineFeatureTpl< ::kaldi::SpectrogramComputer>` as Spectrogram
bool Clif_PyObjAs(PyObject* input, ::kaldi::OfflineFeatureTpl< ::kaldi::SpectrogramComputer>** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::OfflineFeatureTpl< ::kaldi::SpectrogramComputer>>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::OfflineFeatureTpl< ::kaldi::SpectrogramComputer>>* output);
PyObject* Clif_PyObjFrom(::kaldi::OfflineFeatureTpl< ::kaldi::SpectrogramComputer>*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::OfflineFeatureTpl< ::kaldi::SpectrogramComputer>>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::OfflineFeatureTpl< ::kaldi::SpectrogramComputer>>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::OfflineFeatureTpl< ::kaldi::SpectrogramComputer>*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::OfflineFeatureTpl< ::kaldi::SpectrogramComputer>&, py::PostConv) = delete;
// CLIF use `::kaldi::SpectrogramComputer` as SpectrogramComputer
bool Clif_PyObjAs(PyObject* input, ::kaldi::SpectrogramComputer** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::SpectrogramComputer>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::SpectrogramComputer>* output);
PyObject* Clif_PyObjFrom(::kaldi::SpectrogramComputer*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::SpectrogramComputer>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::SpectrogramComputer>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::SpectrogramComputer*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::SpectrogramComputer&, py::PostConv) = delete;
// CLIF use `::kaldi::SpectrogramOptions` as SpectrogramOptions
bool Clif_PyObjAs(PyObject* input, ::kaldi::SpectrogramOptions** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::SpectrogramOptions>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::SpectrogramOptions>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::SpectrogramOptions* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::SpectrogramOptions>* output);
PyObject* Clif_PyObjFrom(::kaldi::SpectrogramOptions*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::SpectrogramOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::SpectrogramOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::SpectrogramOptions&, py::PostConv);

}  // namespace kaldi

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_feature_spectrogram")) Py_DECREF(m);
// CLIF init_module else goto err;