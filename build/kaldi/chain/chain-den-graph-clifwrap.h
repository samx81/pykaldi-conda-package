//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/chain/chain-den-graph.clif

#include <memory>
#include "clif/python/optional.h"
#include "chain/chain-den-graph.h"
#include "clif/python/postconv.h"

namespace kaldi { namespace chain {
using namespace ::clif;

// CLIF use `::kaldi::chain::DenominatorGraph` as DenominatorGraph
bool Clif_PyObjAs(PyObject* input, ::kaldi::chain::DenominatorGraph** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::chain::DenominatorGraph>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::chain::DenominatorGraph>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::chain::DenominatorGraph* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::chain::DenominatorGraph>* output);
PyObject* Clif_PyObjFrom(::kaldi::chain::DenominatorGraph*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::chain::DenominatorGraph>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::chain::DenominatorGraph>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::chain::DenominatorGraph&, py::PostConv);

} }  // namespace kaldi::chain

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_chain_den_graph")) Py_DECREF(m);
// CLIF init_module else goto err;