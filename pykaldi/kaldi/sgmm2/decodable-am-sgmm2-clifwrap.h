//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/sgmm2/decodable-am-sgmm2.clif

#include <memory>
#include "clif/python/optional.h"
#include "sgmm2/decodable-am-sgmm2.h"
#include "clif/python/postconv.h"

namespace kaldi {
using namespace ::clif;

// CLIF use `::kaldi::DecodableAmSgmm2` as DecodableAmSgmm2
bool Clif_PyObjAs(PyObject* input, ::kaldi::DecodableAmSgmm2** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::DecodableAmSgmm2>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::DecodableAmSgmm2>* output);
PyObject* Clif_PyObjFrom(::kaldi::DecodableAmSgmm2*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::DecodableAmSgmm2>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::DecodableAmSgmm2>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::DecodableAmSgmm2*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::DecodableAmSgmm2&, py::PostConv) = delete;
// CLIF use `::kaldi::DecodableAmSgmm2Scaled` as DecodableAmSgmm2Scaled
bool Clif_PyObjAs(PyObject* input, ::kaldi::DecodableAmSgmm2Scaled** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::DecodableAmSgmm2Scaled>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::DecodableAmSgmm2Scaled>* output);
PyObject* Clif_PyObjFrom(::kaldi::DecodableAmSgmm2Scaled*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::DecodableAmSgmm2Scaled>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::DecodableAmSgmm2Scaled>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::DecodableAmSgmm2Scaled*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::DecodableAmSgmm2Scaled&, py::PostConv) = delete;

}  // namespace kaldi

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_decodable_am_sgmm2")) Py_DECREF(m);
// CLIF init_module else goto err;