//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/tree/tree-renderer.clif

#include <Python.h>
#include "clif/python/ptr_util.h"
#include "clif/python/optional.h"
#include "clif/python/types.h"
#include "base/iostream-clifwrap.h"
#include "fstext/symbol-table-clifwrap.h"
#include "tree-renderer-clifwrap.h"
#include "clif/python/stltypes.h"
#include "clif/python/slots.h"

namespace __tree__renderer_clifwrap {
using namespace clif;

#define _0 py::postconv::PASS
#define _1 UnicodeFromBytes
#define _2 UnicodeFromBytes


namespace pyTreeRenderer {

struct wrapper {
  PyObject_HEAD
  ::clif::Instance<::kaldi::TreeRenderer> cpp;
};
static ::kaldi::TreeRenderer* ThisPtr(PyObject*);

// __init__(is:istream, binary:bool, os:ostream, phone_syms:SymbolTable, use_tooltips:bool)
static PyObject* wrapTreeRenderer_as___init__(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[5];
  char* names[] = {
      C("is"),
      C("binary"),
      C("os"),
      C("phone_syms"),
      C("use_tooltips"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOOOO:__init__", names, &a[0], &a[1], &a[2], &a[3], &a[4])) return nullptr;
  ::std::basic_istream<char, ::std::char_traits<char> >* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("__init__", names[0], "::std::basic_istream<char, ::std::char_traits<char> >", a[0]);
  bool arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("__init__", names[1], "bool", a[1]);
  ::std::basic_ostream<char, ::std::char_traits<char> >* arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("__init__", names[2], "::std::basic_ostream<char, ::std::char_traits<char> >", a[2]);
  ::fst::SymbolTable* arg4;
  if (!Clif_PyObjAs(a[3], &arg4)) return ArgError("__init__", names[3], "::fst::SymbolTable", a[3]);
  bool arg5;
  if (!Clif_PyObjAs(a[4], &arg5)) return ArgError("__init__", names[4], "bool", a[4]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    reinterpret_cast<wrapper*>(self)->cpp = ::clif::MakeShared<::kaldi::TreeRenderer>(*arg1, std::move(arg2), *arg3, *arg4, std::move(arg5));
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

// render()
static PyObject* wrapRender_as_render(PyObject* self) {
  // Call actual C++ method.
  ::kaldi::TreeRenderer* c = ThisPtr(self);
  if (!c) return nullptr;
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->Render();
  } catch(const std::exception& e) {
    err_type = PyExc_RuntimeError;
    err_msg += string(": ") + e.what();
  } catch (...) {
    err_type = PyExc_RuntimeError;
  }
  Py_BLOCK_THREADS
  if (err_type) {
    PyErr_SetString(err_type, err_msg.c_str());
    return nullptr;
  }
  Py_RETURN_NONE;
}

// render_query(query:list<tuple<int, int>>)
static PyObject* wrapRenderQuery_as_render_query(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("query"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:render_query", names, &a[0])) return nullptr;
  ::kaldi::EventType arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("render_query", names[0], "::kaldi::EventType", a[0]);
  // Call actual C++ method.
  ::kaldi::TreeRenderer* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->RenderQuery(std::move(arg1));
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

static PyMethodDef Methods[] = {
  {C("__init__"), (PyCFunction)wrapTreeRenderer_as___init__, METH_VARARGS | METH_KEYWORDS, C("__init__(is:istream, binary:bool, os:ostream, phone_syms:SymbolTable, use_tooltips:bool)\n  Calls C++ function\n  void ::kaldi::TreeRenderer::TreeRenderer(::std::basic_istream<char, ::std::char_traits<char> >, bool, ::std::basic_ostream<char, ::std::char_traits<char> >, ::fst::SymbolTable, bool)")},
  {C("render"), (PyCFunction)wrapRender_as_render, METH_NOARGS, C("render()\n  Calls C++ function\n  void ::kaldi::TreeRenderer::Render()")},
  {C("render_query"), (PyCFunction)wrapRenderQuery_as_render_query, METH_VARARGS | METH_KEYWORDS, C("render_query(query:list<tuple<int, int>>)\n  Calls C++ function\n  void ::kaldi::TreeRenderer::RenderQuery(::kaldi::EventType)")},
  {}
};

// TreeRenderer __init__
static int _ctor(PyObject* self, PyObject* args, PyObject* kw);

// TreeRenderer __new__
static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems);

// TreeRenderer __del__
static void _del(void* self) {
  delete reinterpret_cast<wrapper*>(self);
}

PyTypeObject wrapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "_tree_renderer.TreeRenderer",       // tp_name
  sizeof(wrapper),                     // tp_basicsize
  0,                                   // tp_itemsize
  nullptr,                             // tp_dealloc
  nullptr,                             // tp_print
  nullptr,                             // tp_getattr
  nullptr,                             // tp_setattr
  nullptr,                             // tp_compare
  nullptr,                             // tp_repr
  nullptr,                             // tp_as_number
  nullptr,                             // tp_as_sequence
  nullptr,                             // tp_as_mapping
  nullptr,                             // tp_hash
  nullptr,                             // tp_call
  nullptr,                             // tp_str
  nullptr,                             // tp_getattro
  nullptr,                             // tp_setattro
  nullptr,                             // tp_as_buffer
  Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE, // tp_flags
  "CLIF wrapper for ::kaldi::TreeRenderer", // tp_doc
  nullptr,                             // tp_traverse
  nullptr,                             // tp_clear
  nullptr,                             // tp_richcompare
  0,                                   // tp_weaklistoffset
  nullptr,                             // tp_iter
  nullptr,                             // tp_iternext
  Methods,                             // tp_methods
  nullptr,                             // tp_members
  nullptr,                             // tp_getset
  nullptr,                             // tp_base
  nullptr,                             // tp_dict
  nullptr,                             // tp_descr_get
  nullptr,                             // tp_descr_set
  0,                                   // tp_dictoffset
  _ctor,                               // tp_init
  _new,                                // tp_alloc
  PyType_GenericNew,                   // tp_new
  _del,                                // tp_free
  nullptr,                             // tp_is_gc
  nullptr,                             // tp_bases
  nullptr,                             // tp_mro
  nullptr,                             // tp_cache
  nullptr,                             // tp_subclasses
  nullptr,                             // tp_weaklist
  nullptr,                             // tp_del
  0,                                   // tp_version_tag
};

static int _ctor(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* init = wrapTreeRenderer_as___init__(self, args, kw);
  Py_XDECREF(init);
  return init? 0: -1;
}

static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems) {
  assert(nitems == 0);
  PyObject* self = reinterpret_cast<PyObject*>(new wrapper);
  return PyObject_Init(self, &wrapper_Type);
}

static ::kaldi::TreeRenderer* ThisPtr(PyObject* py) {
  if (Py_TYPE(py) == &wrapper_Type) {
    return ::clif::python::Get(reinterpret_cast<wrapper*>(py)->cpp);
  }
  PyObject* base = PyObject_CallMethod(py, C("as_kaldi_TreeRenderer"), nullptr);
  if (base) {
    if (PyCapsule_CheckExact(base)) {
      void* p = PyCapsule_GetPointer(base, C("::kaldi::TreeRenderer"));
      if (!PyErr_Occurred()) {
        ::kaldi::TreeRenderer* c = static_cast<::kaldi::TreeRenderer*>(p);
        Py_DECREF(base);
        return c;
      }
    }
    Py_DECREF(base);
  }
  if (PyObject_IsInstance(py, reinterpret_cast<PyObject*>(&wrapper_Type))) {
    if (!base) {
      PyErr_Clear();
      return ::clif::python::Get(reinterpret_cast<wrapper*>(py)->cpp);
    }
    PyErr_Format(PyExc_ValueError, "can't convert %s %s to ::kaldi::TreeRenderer*", ClassName(py), ClassType(py));
  } else {
    PyErr_Format(PyExc_TypeError, "expecting %s instance, got %s %s", wrapper_Type.tp_name, ClassName(py), ClassType(py));
  }
  return nullptr;
}
}  // namespace pyTreeRenderer


// Initialize module

bool Ready() {
  if (PyType_Ready(&pyTreeRenderer::wrapper_Type) < 0) return false;
  Py_INCREF(&pyTreeRenderer::wrapper_Type);  // For PyModule_AddObject to steal.
  return true;
}

static struct PyModuleDef Module = {
  PyModuleDef_HEAD_INIT,
  "_tree_renderer",  // module name
  "CLIF-generated module for tree/tree-renderer.h", // module doc
  -1,  // module keeps state in global variables
  nullptr
};

PyObject* Init() {
  PyObject* module = PyModule_Create(&Module);
  if (!module) return nullptr;
  if (PyObject* m = PyImport_ImportModule("_iostream")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_symbol_table")) Py_DECREF(m);
  else goto err;
  PyEval_InitThreads();
  if (PyModule_AddObject(module, "TreeRenderer", reinterpret_cast<PyObject*>(&pyTreeRenderer::wrapper_Type)) < 0) goto err;
  return module;
err:
  Py_DECREF(module);
  return nullptr;
}

}  // namespace __tree__renderer_clifwrap

namespace kaldi {
using namespace ::clif;
using ::clif::Clif_PyObjAs;
using ::clif::Clif_PyObjFrom;

// TreeRenderer to/from ::kaldi::TreeRenderer conversion

bool Clif_PyObjAs(PyObject* py, ::kaldi::TreeRenderer** c) {
  assert(c != nullptr);
  if (Py_None == py) {
    *c = nullptr;
    return true;
  }
  ::kaldi::TreeRenderer* cpp = __tree__renderer_clifwrap::pyTreeRenderer::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = cpp;
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::shared_ptr<::kaldi::TreeRenderer>* c) {
  assert(c != nullptr);
  ::kaldi::TreeRenderer* cpp = __tree__renderer_clifwrap::pyTreeRenderer::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = ::clif::MakeStdShared(reinterpret_cast<__tree__renderer_clifwrap::pyTreeRenderer::wrapper*>(py)->cpp, cpp);
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::unique_ptr<::kaldi::TreeRenderer>* c) {
  assert(c != nullptr);
  ::kaldi::TreeRenderer* cpp = __tree__renderer_clifwrap::pyTreeRenderer::ThisPtr(py);
  if (cpp == nullptr) return false;
  if (!reinterpret_cast<__tree__renderer_clifwrap::pyTreeRenderer::wrapper*>(py)->cpp.Detach()) {
    PyErr_SetString(PyExc_ValueError, "Cannot convert TreeRenderer instance to std::unique_ptr.");
    return false;
  }
  c->reset(cpp);
  return true;
}

PyObject* Clif_PyObjFrom(::kaldi::TreeRenderer* c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__tree__renderer_clifwrap::pyTreeRenderer::wrapper_Type, NULL, NULL);
  reinterpret_cast<__tree__renderer_clifwrap::pyTreeRenderer::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::TreeRenderer>(c, ::clif::UnOwnedResource());
  return py;
}

PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::TreeRenderer> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__tree__renderer_clifwrap::pyTreeRenderer::wrapper_Type, NULL, NULL);
  reinterpret_cast<__tree__renderer_clifwrap::pyTreeRenderer::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::TreeRenderer>(c);
  return py;
}

PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::TreeRenderer> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__tree__renderer_clifwrap::pyTreeRenderer::wrapper_Type, NULL, NULL);
  reinterpret_cast<__tree__renderer_clifwrap::pyTreeRenderer::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::TreeRenderer>(std::move(c));
  return py;
}

}  // namespace kaldi