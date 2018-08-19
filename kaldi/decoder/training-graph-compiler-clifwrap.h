//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/decoder/training-graph-compiler.clif

#include <memory>
#include "clif/python/optional.h"
#include "decoder/training-graph-compiler.h"
#include "clif/python/postconv.h"

namespace kaldi {
using namespace ::clif;

// CLIF use `::kaldi::TrainingGraphCompilerOptions` as TrainingGraphCompilerOptions
bool Clif_PyObjAs(PyObject* input, ::kaldi::TrainingGraphCompilerOptions** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::TrainingGraphCompilerOptions>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::TrainingGraphCompilerOptions>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::TrainingGraphCompilerOptions* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::TrainingGraphCompilerOptions>* output);
PyObject* Clif_PyObjFrom(::kaldi::TrainingGraphCompilerOptions*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::TrainingGraphCompilerOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::TrainingGraphCompilerOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::TrainingGraphCompilerOptions&, py::PostConv);

}  // namespace kaldi

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_training_graph_compiler")) Py_DECREF(m);
// CLIF init_module else goto err;