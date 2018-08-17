//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/itf/options-itf.clif

#include <memory>
#include "clif/python/optional.h"
#include "itf/options-itf.h"
#include "clif/python/postconv.h"

namespace kaldi {
using namespace ::clif;

// CLIF use `::kaldi::OptionsItf` as OptionsItf
bool Clif_PyObjAs(PyObject* input, ::kaldi::OptionsItf** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::OptionsItf>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::OptionsItf>* output);
PyObject* Clif_PyObjFrom(::kaldi::OptionsItf*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::OptionsItf>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::OptionsItf>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::OptionsItf*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::OptionsItf&, py::PostConv) = delete;

}  // namespace kaldi

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_options_itf")) Py_DECREF(m);
// CLIF init_module else goto err;
