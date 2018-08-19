//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/hmm/tree-accu.clif

#include <memory>
#include "clif/python/optional.h"
#include "hmm/tree-accu.h"
#include "clif/python/postconv.h"

namespace kaldi {
using namespace ::clif;

// CLIF use `::kaldi::AccumulateTreeStatsInfo` as AccumulateTreeStatsInfo
bool Clif_PyObjAs(PyObject* input, ::kaldi::AccumulateTreeStatsInfo** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::AccumulateTreeStatsInfo>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::AccumulateTreeStatsInfo>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::AccumulateTreeStatsInfo* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::AccumulateTreeStatsInfo>* output);
PyObject* Clif_PyObjFrom(::kaldi::AccumulateTreeStatsInfo*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::AccumulateTreeStatsInfo>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::AccumulateTreeStatsInfo>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::AccumulateTreeStatsInfo&, py::PostConv);
// CLIF use `::kaldi::AccumulateTreeStatsOptions` as AccumulateTreeStatsOptions
bool Clif_PyObjAs(PyObject* input, ::kaldi::AccumulateTreeStatsOptions** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::AccumulateTreeStatsOptions>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::AccumulateTreeStatsOptions>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::AccumulateTreeStatsOptions* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::AccumulateTreeStatsOptions>* output);
PyObject* Clif_PyObjFrom(::kaldi::AccumulateTreeStatsOptions*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::AccumulateTreeStatsOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::AccumulateTreeStatsOptions>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::AccumulateTreeStatsOptions&, py::PostConv);

}  // namespace kaldi

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_tree_accu")) Py_DECREF(m);
// CLIF init_module else goto err;