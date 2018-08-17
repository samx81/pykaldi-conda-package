//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/gmm/full-gmm-normal.clif

#include <Python.h>
#include "clif/python/ptr_util.h"
#include "clif/python/optional.h"
#include "clif/python/types.h"
#include "matrix/kaldi-vector-clifwrap.h"
#include "matrix/kaldi-matrix-clifwrap.h"
#include "matrix/sp-matrix-clifwrap.h"
#include "gmm/model-common-clifwrap.h"
#include "gmm/full-gmm-clifwrap.h"
#include "full-gmm-normal-clifwrap.h"
#include "clif/python/stltypes.h"
#include "clif/python/slots.h"

namespace __full__gmm__normal_clifwrap {
using namespace clif;

#define _0 py::postconv::PASS
#define _1 UnicodeFromBytes
#define _2 UnicodeFromBytes


namespace pyFullGmmNormal {

struct wrapper {
  PyObject_HEAD
  ::clif::Instance<::kaldi::FullGmmNormal> cpp;
};
static ::kaldi::FullGmmNormal* ThisPtr(PyObject*);

static PyObject* get_weights_(PyObject* self, void* xdata) {
  auto cpp = ThisPtr(self); if (!cpp) return nullptr;
  return Clif_PyObjFrom(::clif::MakeStdShared(reinterpret_cast<wrapper*>(self)->cpp, &cpp->weights_), {});
}

static int set_weights_(PyObject* self, PyObject* value, void* xdata) {
  if (value == nullptr) {
    PyErr_SetString(PyExc_TypeError, "Cannot delete the weights_ attribute");
    return -1;
  }
  auto cpp = ThisPtr(self); if (!cpp) return -1;
  if (Clif_PyObjAs(value, &cpp->weights_)) return 0;
  PyObject* s = PyObject_Repr(value);
  PyErr_Format(PyExc_ValueError, "%s is not valid for weights_:DoubleVector", s? PyUnicode_AsUTF8(s): "input");
  Py_XDECREF(s);
  return -1;
}

static PyObject* get_means_(PyObject* self, void* xdata) {
  auto cpp = ThisPtr(self); if (!cpp) return nullptr;
  return Clif_PyObjFrom(::clif::MakeStdShared(reinterpret_cast<wrapper*>(self)->cpp, &cpp->means_), {});
}

static int set_means_(PyObject* self, PyObject* value, void* xdata) {
  if (value == nullptr) {
    PyErr_SetString(PyExc_TypeError, "Cannot delete the means_ attribute");
    return -1;
  }
  auto cpp = ThisPtr(self); if (!cpp) return -1;
  if (Clif_PyObjAs(value, &cpp->means_)) return 0;
  PyObject* s = PyObject_Repr(value);
  PyErr_Format(PyExc_ValueError, "%s is not valid for means_:DoubleMatrix", s? PyUnicode_AsUTF8(s): "input");
  Py_XDECREF(s);
  return -1;
}

static PyObject* get_vars_(PyObject* self, void* xdata) {
  auto cpp = ThisPtr(self); if (!cpp) return nullptr;
  return Clif_PyObjFrom(cpp->vars_, {});
}

static int set_vars_(PyObject* self, PyObject* value, void* xdata) {
  if (value == nullptr) {
    PyErr_SetString(PyExc_TypeError, "Cannot delete the vars_ attribute");
    return -1;
  }
  auto cpp = ThisPtr(self); if (!cpp) return -1;
  if (Clif_PyObjAs(value, &cpp->vars_)) return 0;
  PyObject* s = PyObject_Repr(value);
  PyErr_Format(PyExc_ValueError, "%s is not valid for vars_:list<DoubleSpMatrix>", s? PyUnicode_AsUTF8(s): "input");
  Py_XDECREF(s);
  return -1;
}

// @classmethod new_with_other(gmm:FullGmm) -> FullGmmNormal
static PyObject* wrapFullGmmNormal_as_new_with_other(PyObject* cls, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("gmm"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:new_with_other", names, &a[0])) return nullptr;
  ::kaldi::FullGmm* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("new_with_other", names[0], "::kaldi::FullGmm", a[0]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  std::unique_ptr<::kaldi::FullGmmNormal> ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::gtl::MakeUnique<::kaldi::FullGmmNormal>(*arg1);
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

// resize(nMix:int, dim:int)
static PyObject* wrapResize_as_resize(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2];
  char* names[] = {
      C("nMix"),
      C("dim"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO:resize", names, &a[0], &a[1])) return nullptr;
  int arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("resize", names[0], "int", a[0]);
  int arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("resize", names[1], "int", a[1]);
  // Call actual C++ method.
  ::kaldi::FullGmmNormal* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->Resize(std::move(arg1), std::move(arg2));
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

// copy_from_full(fullgmm:FullGmm)
static PyObject* wrapCopyFromFullGmm_as_copy_from_full(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("fullgmm"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:copy_from_full", names, &a[0])) return nullptr;
  ::kaldi::FullGmm* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("copy_from_full", names[0], "::kaldi::FullGmm", a[0]);
  // Call actual C++ method.
  ::kaldi::FullGmmNormal* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->CopyFromFullGmm(*arg1);
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

// copy_to_full(fullgmm:FullGmm, flags:int=default)
static PyObject* wrapCopyToFullGmm_as_copy_to_full(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2]{};
  char* names[] = {
      C("fullgmm"),
      C("flags"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O|O:copy_to_full", names, &a[0], &a[1])) return nullptr;
  int nargs;  // Find how many args actually passed in.
  for (nargs = 2; nargs > 1; --nargs) {
    if (a[nargs-1] != nullptr) break;
  }
  ::kaldi::FullGmm * arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("copy_to_full", names[0], "::kaldi::FullGmm *", a[0]);
  unsigned short arg2;
  if (nargs > 1) {
    if (!a[1]) arg2 = (unsigned short)15;
    else if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("copy_to_full", names[1], "unsigned short", a[1]);
  }
  // Call actual C++ method.
  ::kaldi::FullGmmNormal* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
  switch (nargs) {
  case 1:
    c->CopyToFullGmm(arg1); break;
  case 2:
    c->CopyToFullGmm(arg1, std::move(arg2)); break;
  }
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

// rand(feats:MatrixBase)
static PyObject* wrapRand_as_rand(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("feats"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:rand", names, &a[0])) return nullptr;
  ::kaldi::MatrixBase<float> * arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("rand", names[0], "::kaldi::MatrixBase<float> *", a[0]);
  // Call actual C++ method.
  ::kaldi::FullGmmNormal* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->Rand(arg1);
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

static PyGetSetDef Properties[] = {
  {C("weights_"), get_weights_, set_weights_, C("C++ ::kaldi::Vector<double> FullGmmNormal.weights_")},
  {C("means_"), get_means_, set_means_, C("C++ ::kaldi::Matrix<double> FullGmmNormal.means_")},
  {C("vars_"), get_vars_, set_vars_, C("C++ ::std::vector< ::kaldi::SpMatrix<double> > FullGmmNormal.vars_")},
  {}
};

static PyMethodDef Methods[] = {
  {C("new_with_other"), (PyCFunction)wrapFullGmmNormal_as_new_with_other, METH_VARARGS | METH_KEYWORDS | METH_CLASS, C("new_with_other(gmm:FullGmm) -> FullGmmNormal\n  Calls C++ function\n  std::unique_ptr<::kaldi::FullGmmNormal> ::kaldi::FullGmmNormal::FullGmmNormal(::kaldi::FullGmm)")},
  {C("resize"), (PyCFunction)wrapResize_as_resize, METH_VARARGS | METH_KEYWORDS, C("resize(nMix:int, dim:int)\n  Calls C++ function\n  void ::kaldi::FullGmmNormal::Resize(int, int)")},
  {C("copy_from_full"), (PyCFunction)wrapCopyFromFullGmm_as_copy_from_full, METH_VARARGS | METH_KEYWORDS, C("copy_from_full(fullgmm:FullGmm)\n  Calls C++ function\n  void ::kaldi::FullGmmNormal::CopyFromFullGmm(::kaldi::FullGmm)")},
  {C("copy_to_full"), (PyCFunction)wrapCopyToFullGmm_as_copy_to_full, METH_VARARGS | METH_KEYWORDS, C("copy_to_full(fullgmm:FullGmm, flags:int=default)\n  Calls C++ function\n  void ::kaldi::FullGmmNormal::CopyToFullGmm(::kaldi::FullGmm *, unsigned short)")},
  {C("rand"), (PyCFunction)wrapRand_as_rand, METH_VARARGS | METH_KEYWORDS, C("rand(feats:MatrixBase)\n  Calls C++ function\n  void ::kaldi::FullGmmNormal::Rand(::kaldi::MatrixBase<float> *)")},
  {}
};

// FullGmmNormal __init__
static int _ctor(PyObject* self, PyObject* args, PyObject* kw);

// FullGmmNormal __new__
static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems);

// FullGmmNormal __del__
static void _dtor(PyObject* self) {
  Py_BEGIN_ALLOW_THREADS
  reinterpret_cast<wrapper*>(self)->cpp.Destruct();
  Py_END_ALLOW_THREADS
  Py_TYPE(self)->tp_free(self);
}
static void _del(void* self) {
  delete reinterpret_cast<wrapper*>(self);
}

PyTypeObject wrapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "_full_gmm_normal.FullGmmNormal",    // tp_name
  sizeof(wrapper),                     // tp_basicsize
  0,                                   // tp_itemsize
  _dtor,                               // tp_dealloc
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
  "CLIF wrapper for ::kaldi::FullGmmNormal", // tp_doc
  nullptr,                             // tp_traverse
  nullptr,                             // tp_clear
  nullptr,                             // tp_richcompare
  0,                                   // tp_weaklistoffset
  nullptr,                             // tp_iter
  nullptr,                             // tp_iternext
  Methods,                             // tp_methods
  nullptr,                             // tp_members
  Properties,                          // tp_getset
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
  if ((args && PyTuple_GET_SIZE(args) != 0) || (kw && PyDict_Size(kw) != 0)) {
    PyErr_SetString(PyExc_TypeError, "FullGmmNormal takes no arguments");
    return -1;
  }
  reinterpret_cast<wrapper*>(self)->cpp = ::clif::MakeShared<::kaldi::FullGmmNormal>();
  return 0;
}

static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems) {
  assert(nitems == 0);
  PyObject* self = reinterpret_cast<PyObject*>(new wrapper);
  return PyObject_Init(self, &wrapper_Type);
}

static ::kaldi::FullGmmNormal* ThisPtr(PyObject* py) {
  if (Py_TYPE(py) == &wrapper_Type) {
    return ::clif::python::Get(reinterpret_cast<wrapper*>(py)->cpp);
  }
  PyObject* base = PyObject_CallMethod(py, C("as_kaldi_FullGmmNormal"), nullptr);
  if (base) {
    if (PyCapsule_CheckExact(base)) {
      void* p = PyCapsule_GetPointer(base, C("::kaldi::FullGmmNormal"));
      if (!PyErr_Occurred()) {
        ::kaldi::FullGmmNormal* c = static_cast<::kaldi::FullGmmNormal*>(p);
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
    PyErr_Format(PyExc_ValueError, "can't convert %s %s to ::kaldi::FullGmmNormal*", ClassName(py), ClassType(py));
  } else {
    PyErr_Format(PyExc_TypeError, "expecting %s instance, got %s %s", wrapper_Type.tp_name, ClassName(py), ClassType(py));
  }
  return nullptr;
}
}  // namespace pyFullGmmNormal


// Initialize module

bool Ready() {
  if (PyType_Ready(&pyFullGmmNormal::wrapper_Type) < 0) return false;
  Py_INCREF(&pyFullGmmNormal::wrapper_Type);  // For PyModule_AddObject to steal.
  return true;
}

static struct PyModuleDef Module = {
  PyModuleDef_HEAD_INIT,
  "_full_gmm_normal",  // module name
  "CLIF-generated module for gmm/full-gmm-normal.h", // module doc
  -1,  // module keeps state in global variables
  nullptr
};

PyObject* Init() {
  PyObject* module = PyModule_Create(&Module);
  if (!module) return nullptr;
  if (PyObject* m = PyImport_ImportModule("_kaldi_vector")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_kaldi_matrix")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_sp_matrix")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_model_common")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_full_gmm")) Py_DECREF(m);
  else goto err;
  PyEval_InitThreads();
  if (PyModule_AddObject(module, "FullGmmNormal", reinterpret_cast<PyObject*>(&pyFullGmmNormal::wrapper_Type)) < 0) goto err;
  return module;
err:
  Py_DECREF(module);
  return nullptr;
}

}  // namespace __full__gmm__normal_clifwrap

namespace kaldi {
using namespace ::clif;
using ::clif::Clif_PyObjAs;
using ::clif::Clif_PyObjFrom;

// FullGmmNormal to/from ::kaldi::FullGmmNormal conversion

bool Clif_PyObjAs(PyObject* py, ::kaldi::FullGmmNormal** c) {
  assert(c != nullptr);
  if (Py_None == py) {
    *c = nullptr;
    return true;
  }
  ::kaldi::FullGmmNormal* cpp = __full__gmm__normal_clifwrap::pyFullGmmNormal::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = cpp;
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::shared_ptr<::kaldi::FullGmmNormal>* c) {
  assert(c != nullptr);
  ::kaldi::FullGmmNormal* cpp = __full__gmm__normal_clifwrap::pyFullGmmNormal::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = ::clif::MakeStdShared(reinterpret_cast<__full__gmm__normal_clifwrap::pyFullGmmNormal::wrapper*>(py)->cpp, cpp);
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::unique_ptr<::kaldi::FullGmmNormal>* c) {
  assert(c != nullptr);
  ::kaldi::FullGmmNormal* cpp = __full__gmm__normal_clifwrap::pyFullGmmNormal::ThisPtr(py);
  if (cpp == nullptr) return false;
  if (!reinterpret_cast<__full__gmm__normal_clifwrap::pyFullGmmNormal::wrapper*>(py)->cpp.Detach()) {
    PyErr_SetString(PyExc_ValueError, "Cannot convert FullGmmNormal instance to std::unique_ptr.");
    return false;
  }
  c->reset(cpp);
  return true;
}

PyObject* Clif_PyObjFrom(::kaldi::FullGmmNormal* c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__full__gmm__normal_clifwrap::pyFullGmmNormal::wrapper_Type, NULL, NULL);
  reinterpret_cast<__full__gmm__normal_clifwrap::pyFullGmmNormal::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::FullGmmNormal>(c, ::clif::UnOwnedResource());
  return py;
}

PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::FullGmmNormal> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__full__gmm__normal_clifwrap::pyFullGmmNormal::wrapper_Type, NULL, NULL);
  reinterpret_cast<__full__gmm__normal_clifwrap::pyFullGmmNormal::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::FullGmmNormal>(c);
  return py;
}

PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::FullGmmNormal> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__full__gmm__normal_clifwrap::pyFullGmmNormal::wrapper_Type, NULL, NULL);
  reinterpret_cast<__full__gmm__normal_clifwrap::pyFullGmmNormal::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::FullGmmNormal>(std::move(c));
  return py;
}

}  // namespace kaldi