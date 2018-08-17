//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/ivector/voice-activity-detection.clif

#include <memory>
#include "clif/python/optional.h"
#include "ivector/voice-activity-detection.h"
#include "clif/python/postconv.h"

namespace kaldi {
using namespace ::clif;

// CLIF use `::kaldi::VadEnergyOptions` as VadEnergyOptions
bool Clif_PyObjAs(PyObject* input, ::kaldi::VadEnergyOptions** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::VadEnergyOptions>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::VadEnergyOptions>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::VadEnergyOptions* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::VadEnergyOptions>* output);
PyObject* Clif_PyObjFrom(::kaldi::VadEnergyOptions*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::VadEnergyOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::VadEnergyOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::VadEnergyOptions&, py::PostConv);

}  // namespace kaldi

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_voice_activity_detection")) Py_DECREF(m);
// CLIF init_module else goto err;
