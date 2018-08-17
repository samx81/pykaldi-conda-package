//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/decoder/biglm-faster-decoder.clif

#include <memory>
#include "clif/python/optional.h"
#include "decoder/biglm-faster-decoder.h"
#include "clif/python/postconv.h"

namespace kaldi {
using namespace ::clif;

// CLIF use `::kaldi::BiglmFasterDecoder` as BiglmFasterDecoder
bool Clif_PyObjAs(PyObject* input, ::kaldi::BiglmFasterDecoder** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::BiglmFasterDecoder>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::BiglmFasterDecoder>* output);
PyObject* Clif_PyObjFrom(::kaldi::BiglmFasterDecoder*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::BiglmFasterDecoder>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::BiglmFasterDecoder>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::BiglmFasterDecoder*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::BiglmFasterDecoder&, py::PostConv) = delete;
// CLIF use `::kaldi::BiglmFasterDecoderOptions` as BiglmFasterDecoderOptions
bool Clif_PyObjAs(PyObject* input, ::kaldi::BiglmFasterDecoderOptions** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::BiglmFasterDecoderOptions>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::BiglmFasterDecoderOptions>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::BiglmFasterDecoderOptions* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::BiglmFasterDecoderOptions>* output);
PyObject* Clif_PyObjFrom(::kaldi::BiglmFasterDecoderOptions*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::BiglmFasterDecoderOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::BiglmFasterDecoderOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::BiglmFasterDecoderOptions&, py::PostConv);

}  // namespace kaldi

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_biglm_faster_decoder")) Py_DECREF(m);
// CLIF init_module else goto err;
