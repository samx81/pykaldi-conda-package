//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/nnet3/natural-gradient-online.clif

#include <memory>
#include "clif/python/optional.h"
#include "nnet3/natural-gradient-online.h"
#include "clif/python/postconv.h"

namespace kaldi { namespace nnet3 {
using namespace ::clif;

// CLIF use `::kaldi::nnet3::OnlineNaturalGradient` as OnlineNaturalGradient
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::OnlineNaturalGradient** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::nnet3::OnlineNaturalGradient>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::nnet3::OnlineNaturalGradient>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::nnet3::OnlineNaturalGradient* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::nnet3::OnlineNaturalGradient>* output);
PyObject* Clif_PyObjFrom(::kaldi::nnet3::OnlineNaturalGradient*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::OnlineNaturalGradient>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::OnlineNaturalGradient>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::OnlineNaturalGradient&, py::PostConv);

} }  // namespace kaldi::nnet3

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_natural_gradient_online")) Py_DECREF(m);
// CLIF init_module else goto err;
