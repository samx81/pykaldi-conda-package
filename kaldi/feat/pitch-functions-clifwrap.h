//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/feat/pitch-functions.clif

#include <memory>
#include "clif/python/optional.h"
#include "feat/pitch-functions.h"
#include "clif/python/postconv.h"

namespace kaldi {
using namespace ::clif;

// CLIF use `::kaldi::OnlinePitchFeature` as OnlinePitchFeature
bool Clif_PyObjAs(PyObject* input, ::kaldi::OnlinePitchFeature** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::OnlinePitchFeature>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::OnlinePitchFeature>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::OnlinePitchFeature* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::OnlinePitchFeature>* output);
PyObject* Clif_PyObjFrom(::kaldi::OnlinePitchFeature*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::OnlinePitchFeature>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::OnlinePitchFeature>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::OnlinePitchFeature&, py::PostConv);
// CLIF use `::kaldi::OnlineProcessPitch` as OnlineProcessPitch
bool Clif_PyObjAs(PyObject* input, ::kaldi::OnlineProcessPitch** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::OnlineProcessPitch>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::OnlineProcessPitch>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::OnlineProcessPitch* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::OnlineProcessPitch>* output);
PyObject* Clif_PyObjFrom(::kaldi::OnlineProcessPitch*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::OnlineProcessPitch>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::OnlineProcessPitch>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::OnlineProcessPitch&, py::PostConv);
// CLIF use `::kaldi::PitchExtractionOptions` as PitchExtractionOptions
bool Clif_PyObjAs(PyObject* input, ::kaldi::PitchExtractionOptions** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::PitchExtractionOptions>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::PitchExtractionOptions>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::PitchExtractionOptions* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::PitchExtractionOptions>* output);
PyObject* Clif_PyObjFrom(::kaldi::PitchExtractionOptions*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::PitchExtractionOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::PitchExtractionOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::PitchExtractionOptions&, py::PostConv);
// CLIF use `::kaldi::ProcessPitchOptions` as ProcessPitchOptions
bool Clif_PyObjAs(PyObject* input, ::kaldi::ProcessPitchOptions** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::ProcessPitchOptions>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::ProcessPitchOptions>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::ProcessPitchOptions* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::ProcessPitchOptions>* output);
PyObject* Clif_PyObjFrom(::kaldi::ProcessPitchOptions*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::ProcessPitchOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::ProcessPitchOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::ProcessPitchOptions&, py::PostConv);

}  // namespace kaldi

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_pitch_functions")) Py_DECREF(m);
// CLIF init_module else goto err;