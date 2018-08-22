//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/decoder/faster-decoder.clif

#include <memory>
#include "clif/python/optional.h"
#include "decoder/faster-decoder.h"
#include "clif/python/postconv.h"

namespace kaldi {
using namespace ::clif;

// CLIF use `::kaldi::FasterDecoder` as FasterDecoder
bool Clif_PyObjAs(PyObject* input, ::kaldi::FasterDecoder** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::FasterDecoder>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::FasterDecoder>* output);
PyObject* Clif_PyObjFrom(::kaldi::FasterDecoder*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::FasterDecoder>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::FasterDecoder>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::FasterDecoder*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::FasterDecoder&, py::PostConv) = delete;
// CLIF use `::kaldi::FasterDecoderOptions` as FasterDecoderOptions
bool Clif_PyObjAs(PyObject* input, ::kaldi::FasterDecoderOptions** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::FasterDecoderOptions>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::FasterDecoderOptions>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::FasterDecoderOptions* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::FasterDecoderOptions>* output);
PyObject* Clif_PyObjFrom(::kaldi::FasterDecoderOptions*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::FasterDecoderOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::FasterDecoderOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::FasterDecoderOptions&, py::PostConv);

}  // namespace kaldi

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_faster_decoder")) Py_DECREF(m);
// CLIF init_module else goto err;