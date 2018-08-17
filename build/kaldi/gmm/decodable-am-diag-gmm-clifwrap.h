//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/gmm/decodable-am-diag-gmm.clif

#include <memory>
#include "clif/python/optional.h"
#include "gmm/decodable-am-diag-gmm.h"
#include "clif/python/postconv.h"

namespace kaldi {
using namespace ::clif;

// CLIF use `::kaldi::DecodableAmDiagGmm` as DecodableAmDiagGmm
bool Clif_PyObjAs(PyObject* input, ::kaldi::DecodableAmDiagGmm** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::DecodableAmDiagGmm>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::DecodableAmDiagGmm>* output);
PyObject* Clif_PyObjFrom(::kaldi::DecodableAmDiagGmm*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::DecodableAmDiagGmm>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::DecodableAmDiagGmm>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::DecodableAmDiagGmm*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::DecodableAmDiagGmm&, py::PostConv) = delete;
// CLIF use `::kaldi::DecodableAmDiagGmmScaled` as DecodableAmDiagGmmScaled
bool Clif_PyObjAs(PyObject* input, ::kaldi::DecodableAmDiagGmmScaled** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::DecodableAmDiagGmmScaled>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::DecodableAmDiagGmmScaled>* output);
PyObject* Clif_PyObjFrom(::kaldi::DecodableAmDiagGmmScaled*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::DecodableAmDiagGmmScaled>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::DecodableAmDiagGmmScaled>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::DecodableAmDiagGmmScaled*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::DecodableAmDiagGmmScaled&, py::PostConv) = delete;
// CLIF use `::kaldi::DecodableAmDiagGmmUnmapped` as DecodableAmDiagGmmUnmapped
bool Clif_PyObjAs(PyObject* input, ::kaldi::DecodableAmDiagGmmUnmapped** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::DecodableAmDiagGmmUnmapped>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::DecodableAmDiagGmmUnmapped>* output);
PyObject* Clif_PyObjFrom(::kaldi::DecodableAmDiagGmmUnmapped*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::DecodableAmDiagGmmUnmapped>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::DecodableAmDiagGmmUnmapped>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::DecodableAmDiagGmmUnmapped*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::DecodableAmDiagGmmUnmapped&, py::PostConv) = delete;

}  // namespace kaldi

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_decodable_am_diag_gmm")) Py_DECREF(m);
// CLIF init_module else goto err;