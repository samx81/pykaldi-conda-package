//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/decoder/decodable-matrix.clif

#include <memory>
#include "clif/python/optional.h"
#include "decoder/decodable-matrix.h"
#include "clif/python/postconv.h"

namespace kaldi {
using namespace ::clif;

// CLIF use `::kaldi::DecodableMatrixMappedOffset` as DecodableMatrixMappedOffset
bool Clif_PyObjAs(PyObject* input, ::kaldi::DecodableMatrixMappedOffset** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::DecodableMatrixMappedOffset>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::DecodableMatrixMappedOffset>* output);
PyObject* Clif_PyObjFrom(::kaldi::DecodableMatrixMappedOffset*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::DecodableMatrixMappedOffset>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::DecodableMatrixMappedOffset>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::DecodableMatrixMappedOffset*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::DecodableMatrixMappedOffset&, py::PostConv) = delete;
// CLIF use `::kaldi::DecodableMatrixScaled` as DecodableMatrixScaled
bool Clif_PyObjAs(PyObject* input, ::kaldi::DecodableMatrixScaled** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::DecodableMatrixScaled>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::DecodableMatrixScaled>* output);
PyObject* Clif_PyObjFrom(::kaldi::DecodableMatrixScaled*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::DecodableMatrixScaled>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::DecodableMatrixScaled>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::DecodableMatrixScaled*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::DecodableMatrixScaled&, py::PostConv) = delete;
// CLIF use `::kaldi::DecodableMatrixScaledMapped` as DecodableMatrixScaledMapped
bool Clif_PyObjAs(PyObject* input, ::kaldi::DecodableMatrixScaledMapped** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::DecodableMatrixScaledMapped>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::DecodableMatrixScaledMapped>* output);
PyObject* Clif_PyObjFrom(::kaldi::DecodableMatrixScaledMapped*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::DecodableMatrixScaledMapped>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::DecodableMatrixScaledMapped>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::DecodableMatrixScaledMapped*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::DecodableMatrixScaledMapped&, py::PostConv) = delete;

}  // namespace kaldi

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_decodable_matrix")) Py_DECREF(m);
// CLIF init_module else goto err;
