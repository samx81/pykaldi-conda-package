//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/online2/online-endpoint.clif

#include <memory>
#include "clif/python/optional.h"
#include "online2/online-endpoint.h"
#include "clif/python/postconv.h"

namespace kaldi {
using namespace ::clif;

// CLIF use `::kaldi::OnlineEndpointConfig` as OnlineEndpointConfig
bool Clif_PyObjAs(PyObject* input, ::kaldi::OnlineEndpointConfig** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::OnlineEndpointConfig>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::OnlineEndpointConfig>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::OnlineEndpointConfig* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::OnlineEndpointConfig>* output);
PyObject* Clif_PyObjFrom(::kaldi::OnlineEndpointConfig*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::OnlineEndpointConfig>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::OnlineEndpointConfig>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::OnlineEndpointConfig&, py::PostConv);
// CLIF use `::kaldi::OnlineEndpointRule` as OnlineEndpointRule
bool Clif_PyObjAs(PyObject* input, ::kaldi::OnlineEndpointRule** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::OnlineEndpointRule>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::OnlineEndpointRule>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::OnlineEndpointRule* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::OnlineEndpointRule>* output);
PyObject* Clif_PyObjFrom(::kaldi::OnlineEndpointRule*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::OnlineEndpointRule>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::OnlineEndpointRule>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::OnlineEndpointRule&, py::PostConv);

}  // namespace kaldi

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_online_endpoint")) Py_DECREF(m);
// CLIF init_module else goto err;
