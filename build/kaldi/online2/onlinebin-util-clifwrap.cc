//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/online2/onlinebin-util.clif

#include <Python.h>
#include "clif/python/ptr_util.h"
#include "clif/python/optional.h"
#include "clif/python/types.h"
#include "fstext/lattice-weight-clifwrap.h"
#include "fstext/fst-clifwrap.h"
#include "fstext/symbol-table-clifwrap.h"
#include "onlinebin-util-clifwrap.h"
#include "clif/python/stltypes.h"
#include "clif/python/slots.h"

namespace __onlinebin__util_clifwrap {
using namespace clif;

#define _0 py::postconv::PASS
#define _1 UnicodeFromBytes
#define _2 UnicodeFromBytes


// read_decode_graph(filename:str) -> StdFst
static PyObject* wrapReadDecodeGraph_as_read_decode_graph(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("filename"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:read_decode_graph", names, &a[0])) return nullptr;
  ::std::string arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("read_decode_graph", names[0], "::std::string", a[0]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  ::fst::Fst< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> > > * ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::ReadDecodeGraph(std::move(arg1));
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

// print_partial_result(words:list<int>, word_syms:SymbolTable, line_break:bool)
static PyObject* wrapPrintPartialResult_as_print_partial_result(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[3];
  char* names[] = {
      C("words"),
      C("word_syms"),
      C("line_break"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOO:print_partial_result", names, &a[0], &a[1], &a[2])) return nullptr;
  ::std::vector< ::int32> arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("print_partial_result", names[0], "::std::vector< ::int32>", a[0]);
  ::fst::SymbolTable * arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("print_partial_result", names[1], "::fst::SymbolTable *", a[1]);
  bool arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("print_partial_result", names[2], "bool", a[2]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::PrintPartialResult(std::move(arg1), arg2, std::move(arg3));
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
  Py_RETURN_NONE;
}


// Initialize module

static PyMethodDef Methods[] = {
  {C("read_decode_graph"), (PyCFunction)wrapReadDecodeGraph_as_read_decode_graph, METH_VARARGS | METH_KEYWORDS, C("read_decode_graph(filename:str) -> StdFst\n\nReads a decoding graph from a file")},
  {C("print_partial_result"), (PyCFunction)wrapPrintPartialResult_as_print_partial_result, METH_VARARGS | METH_KEYWORDS, C("print_partial_result(words:list<int>, word_syms:SymbolTable, line_break:bool)\n\nPrints a string corresponding to (a possibly partial) decode result\n\nArgs:\n  line_break: if True adds a \"new line\" character")},
  {}
};

bool Ready() {
  return true;
}

static struct PyModuleDef Module = {
  PyModuleDef_HEAD_INIT,
  "_onlinebin_util",  // module name
  "CLIF-generated module for online2/onlinebin-util.h", // module doc
  -1,  // module keeps state in global variables
  Methods
};

PyObject* Init() {
  PyObject* module = PyModule_Create(&Module);
  if (!module) return nullptr;
  if (PyObject* m = PyImport_ImportModule("_lattice_weight")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_fst")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_symbol_table")) Py_DECREF(m);
  else goto err;
  PyEval_InitThreads();
  return module;
err:
  Py_DECREF(module);
  return nullptr;
}

}  // namespace __onlinebin__util_clifwrap
