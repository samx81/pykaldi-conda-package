//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/nnet3/nnet-graph.clif

#include <Python.h>
#include "clif/python/ptr_util.h"
#include "clif/python/optional.h"
#include "clif/python/types.h"
#include "nnet3/nnet-nnet-clifwrap.h"
#include "nnet-graph-clifwrap.h"
#include "clif/python/stltypes.h"
#include "clif/python/slots.h"

namespace __nnet__graph_clifwrap {
using namespace clif;

#define _0 py::postconv::PASS
#define _1 UnicodeFromBytes
#define _2 UnicodeFromBytes


// print_graph_to_string(graph:list<list<int>>) -> str
static PyObject* wrapPrintGraphToString_as_print_graph_to_string(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("graph"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:print_graph_to_string", names, &a[0])) return nullptr;
  ::std::vector< ::std::vector< ::int32> > arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("print_graph_to_string", names[0], "::std::vector< ::std::vector< ::int32> >", a[0]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  ::std::string ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::nnet3::PrintGraphToString(std::move(arg1));
  } catch(const std::exception& e) {
    err_type = PyExc_RuntimeError;
    err_msg += string(": ") + e.what();
  } catch (...) {
    err_type = PyExc_RuntimeError;
  }
  Py_BLOCK_THREADS
  Py_DECREF(args);
  Py_XDECREF(kw);
  if (err_type) {
    PyErr_SetString(err_type, err_msg.c_str());
    return nullptr;
  }
  return Clif_PyObjFrom(std::move(ret0), _1);
}

// nnet_to_directed_graph(nnet:Nnet) -> list<list<int>>
static PyObject* wrapNnetToDirectedGraph_as_nnet_to_directed_graph(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("nnet"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:nnet_to_directed_graph", names, &a[0])) return nullptr;
  ::kaldi::nnet3::Nnet* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("nnet_to_directed_graph", names[0], "::kaldi::nnet3::Nnet", a[0]);
  ::std::vector< ::std::vector< ::int32> > ret0{};
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::nnet3::NnetToDirectedGraph(*arg1, &ret0);
  } catch(const std::exception& e) {
    err_type = PyExc_RuntimeError;
    err_msg += string(": ") + e.what();
  } catch (...) {
    err_type = PyExc_RuntimeError;
  }
  Py_BLOCK_THREADS
  Py_DECREF(args);
  Py_XDECREF(kw);
  if (err_type) {
    PyErr_SetString(err_type, err_msg.c_str());
    return nullptr;
  }
  return Clif_PyObjFrom(std::move(ret0), {});
}

// find_sccs(graph:list<list<int>>) -> list<list<int>>
static PyObject* wrapFindSccs_as_find_sccs(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("graph"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:find_sccs", names, &a[0])) return nullptr;
  ::std::vector< ::std::vector< ::int32> > arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("find_sccs", names[0], "::std::vector< ::std::vector< ::int32> >", a[0]);
  ::std::vector< ::std::vector< ::int32> > ret0{};
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::nnet3::FindSccs(std::move(arg1), &ret0);
  } catch(const std::exception& e) {
    err_type = PyExc_RuntimeError;
    err_msg += string(": ") + e.what();
  } catch (...) {
    err_type = PyExc_RuntimeError;
  }
  Py_BLOCK_THREADS
  Py_DECREF(args);
  Py_XDECREF(kw);
  if (err_type) {
    PyErr_SetString(err_type, err_msg.c_str());
    return nullptr;
  }
  return Clif_PyObjFrom(std::move(ret0), {});
}

// graph_has_cycles(graph:list<list<int>>) -> bool
static PyObject* wrapGraphHasCycles_as_graph_has_cycles(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("graph"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:graph_has_cycles", names, &a[0])) return nullptr;
  ::std::vector< ::std::vector< ::int32> > arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("graph_has_cycles", names[0], "::std::vector< ::std::vector< ::int32> >", a[0]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  bool ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::nnet3::GraphHasCycles(std::move(arg1));
  } catch(const std::exception& e) {
    err_type = PyExc_RuntimeError;
    err_msg += string(": ") + e.what();
  } catch (...) {
    err_type = PyExc_RuntimeError;
  }
  Py_BLOCK_THREADS
  Py_DECREF(args);
  Py_XDECREF(kw);
  if (err_type) {
    PyErr_SetString(err_type, err_msg.c_str());
    return nullptr;
  }
  return Clif_PyObjFrom(std::move(ret0), {});
}

// make_scc_graph(graph:list<list<int>>, sccs:list<list<int>>) -> list<list<int>>
static PyObject* wrapMakeSccGraph_as_make_scc_graph(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2];
  char* names[] = {
      C("graph"),
      C("sccs"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO:make_scc_graph", names, &a[0], &a[1])) return nullptr;
  ::std::vector< ::std::vector< ::int32> > arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("make_scc_graph", names[0], "::std::vector< ::std::vector< ::int32> >", a[0]);
  ::std::vector< ::std::vector< ::int32> > arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("make_scc_graph", names[1], "::std::vector< ::std::vector< ::int32> >", a[1]);
  ::std::vector< ::std::vector< ::int32> > ret0{};
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::nnet3::MakeSccGraph(std::move(arg1), std::move(arg2), &ret0);
  } catch(const std::exception& e) {
    err_type = PyExc_RuntimeError;
    err_msg += string(": ") + e.what();
  } catch (...) {
    err_type = PyExc_RuntimeError;
  }
  Py_BLOCK_THREADS
  Py_DECREF(args);
  Py_XDECREF(kw);
  if (err_type) {
    PyErr_SetString(err_type, err_msg.c_str());
    return nullptr;
  }
  return Clif_PyObjFrom(std::move(ret0), {});
}

// compute_top_sort_order(graph:list<list<int>>) -> list<int>
static PyObject* wrapComputeTopSortOrder_as_compute_top_sort_order(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("graph"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:compute_top_sort_order", names, &a[0])) return nullptr;
  ::std::vector< ::std::vector< ::int32> > arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("compute_top_sort_order", names[0], "::std::vector< ::std::vector< ::int32> >", a[0]);
  ::std::vector< ::int32> ret0{};
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::nnet3::ComputeTopSortOrder(std::move(arg1), &ret0);
  } catch(const std::exception& e) {
    err_type = PyExc_RuntimeError;
    err_msg += string(": ") + e.what();
  } catch (...) {
    err_type = PyExc_RuntimeError;
  }
  Py_BLOCK_THREADS
  Py_DECREF(args);
  Py_XDECREF(kw);
  if (err_type) {
    PyErr_SetString(err_type, err_msg.c_str());
    return nullptr;
  }
  return Clif_PyObjFrom(std::move(ret0), {});
}

// compute_graph_transpose(graph:list<list<int>>) -> list<list<int>>
static PyObject* wrapComputeGraphTranspose_as_compute_graph_transpose(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("graph"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:compute_graph_transpose", names, &a[0])) return nullptr;
  ::std::vector< ::std::vector< ::int32> > arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("compute_graph_transpose", names[0], "::std::vector< ::std::vector< ::int32> >", a[0]);
  ::std::vector< ::std::vector< ::int32> > ret0{};
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::nnet3::ComputeGraphTranspose(std::move(arg1), &ret0);
  } catch(const std::exception& e) {
    err_type = PyExc_RuntimeError;
    err_msg += string(": ") + e.what();
  } catch (...) {
    err_type = PyExc_RuntimeError;
  }
  Py_BLOCK_THREADS
  Py_DECREF(args);
  Py_XDECREF(kw);
  if (err_type) {
    PyErr_SetString(err_type, err_msg.c_str());
    return nullptr;
  }
  return Clif_PyObjFrom(std::move(ret0), {});
}

// compute_nnet_computation_epochs(nnet:Nnet) -> list<int>
static PyObject* wrapComputeNnetComputationEpochs_as_compute_nnet_computation_epochs(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("nnet"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:compute_nnet_computation_epochs", names, &a[0])) return nullptr;
  ::kaldi::nnet3::Nnet* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("compute_nnet_computation_epochs", names[0], "::kaldi::nnet3::Nnet", a[0]);
  ::std::vector< ::int32> ret0{};
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::nnet3::ComputeNnetComputationEpochs(*arg1, &ret0);
  } catch(const std::exception& e) {
    err_type = PyExc_RuntimeError;
    err_msg += string(": ") + e.what();
  } catch (...) {
    err_type = PyExc_RuntimeError;
  }
  Py_BLOCK_THREADS
  Py_DECREF(args);
  Py_XDECREF(kw);
  if (err_type) {
    PyErr_SetString(err_type, err_msg.c_str());
    return nullptr;
  }
  return Clif_PyObjFrom(std::move(ret0), {});
}


// Initialize module

static PyMethodDef Methods[] = {
  {C("print_graph_to_string"), (PyCFunction)wrapPrintGraphToString_as_print_graph_to_string, METH_VARARGS | METH_KEYWORDS, C("print_graph_to_string(graph:list<list<int>>) -> str\n  Calls C++ function\n  ::std::string ::kaldi::nnet3::PrintGraphToString(::std::vector< ::std::vector< ::int32> >)")},
  {C("nnet_to_directed_graph"), (PyCFunction)wrapNnetToDirectedGraph_as_nnet_to_directed_graph, METH_VARARGS | METH_KEYWORDS, C("nnet_to_directed_graph(nnet:Nnet) -> list<list<int>>\n  Calls C++ function\n  void ::kaldi::nnet3::NnetToDirectedGraph(::kaldi::nnet3::Nnet, ::std::vector< ::std::vector< ::int32> >*)")},
  {C("find_sccs"), (PyCFunction)wrapFindSccs_as_find_sccs, METH_VARARGS | METH_KEYWORDS, C("find_sccs(graph:list<list<int>>) -> list<list<int>>\n  Calls C++ function\n  void ::kaldi::nnet3::FindSccs(::std::vector< ::std::vector< ::int32> >, ::std::vector< ::std::vector< ::int32> >*)")},
  {C("graph_has_cycles"), (PyCFunction)wrapGraphHasCycles_as_graph_has_cycles, METH_VARARGS | METH_KEYWORDS, C("graph_has_cycles(graph:list<list<int>>) -> bool\n  Calls C++ function\n  bool ::kaldi::nnet3::GraphHasCycles(::std::vector< ::std::vector< ::int32> >)")},
  {C("make_scc_graph"), (PyCFunction)wrapMakeSccGraph_as_make_scc_graph, METH_VARARGS | METH_KEYWORDS, C("make_scc_graph(graph:list<list<int>>, sccs:list<list<int>>) -> list<list<int>>\n  Calls C++ function\n  void ::kaldi::nnet3::MakeSccGraph(::std::vector< ::std::vector< ::int32> >, ::std::vector< ::std::vector< ::int32> >, ::std::vector< ::std::vector< ::int32> >*)")},
  {C("compute_top_sort_order"), (PyCFunction)wrapComputeTopSortOrder_as_compute_top_sort_order, METH_VARARGS | METH_KEYWORDS, C("compute_top_sort_order(graph:list<list<int>>) -> list<int>\n  Calls C++ function\n  void ::kaldi::nnet3::ComputeTopSortOrder(::std::vector< ::std::vector< ::int32> >, ::std::vector< ::int32>*)")},
  {C("compute_graph_transpose"), (PyCFunction)wrapComputeGraphTranspose_as_compute_graph_transpose, METH_VARARGS | METH_KEYWORDS, C("compute_graph_transpose(graph:list<list<int>>) -> list<list<int>>\n  Calls C++ function\n  void ::kaldi::nnet3::ComputeGraphTranspose(::std::vector< ::std::vector< ::int32> >, ::std::vector< ::std::vector< ::int32> >*)")},
  {C("compute_nnet_computation_epochs"), (PyCFunction)wrapComputeNnetComputationEpochs_as_compute_nnet_computation_epochs, METH_VARARGS | METH_KEYWORDS, C("compute_nnet_computation_epochs(nnet:Nnet) -> list<int>\n  Calls C++ function\n  void ::kaldi::nnet3::ComputeNnetComputationEpochs(::kaldi::nnet3::Nnet, ::std::vector< ::int32>*)")},
  {}
};

bool Ready() {
  return true;
}

static struct PyModuleDef Module = {
  PyModuleDef_HEAD_INIT,
  "_nnet_graph",  // module name
  "CLIF-generated module for nnet3/nnet-graph.h", // module doc
  -1,  // module keeps state in global variables
  Methods
};

PyObject* Init() {
  PyObject* module = PyModule_Create(&Module);
  if (!module) return nullptr;
  if (PyObject* m = PyImport_ImportModule("_nnet_nnet")) Py_DECREF(m);
  else goto err;
  PyEval_InitThreads();
  return module;
err:
  Py_DECREF(module);
  return nullptr;
}

}  // namespace __nnet__graph_clifwrap