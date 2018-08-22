//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/transform/transform-common.clif

#include <Python.h>
#include "clif/python/ptr_util.h"
#include "clif/python/optional.h"
#include "clif/python/types.h"
#include "base/iostream-clifwrap.h"
#include "matrix/kaldi-matrix-clifwrap.h"
#include "matrix/kaldi-vector-clifwrap.h"
#include "matrix/sp-matrix-clifwrap.h"
#include "transform-common-clifwrap.h"
#include "clif/python/stltypes.h"
#include "clif/python/slots.h"

namespace __transform__common_clifwrap {
using namespace clif;

#define _0 py::postconv::PASS
#define _1 UnicodeFromBytes
#define _2 UnicodeFromBytes


namespace pyAffineXformStats {

struct wrapper {
  PyObject_HEAD
  ::clif::Instance<::kaldi::AffineXformStats> cpp;
};
static ::kaldi::AffineXformStats* ThisPtr(PyObject*);

static PyObject* get_beta_(PyObject* self, void* xdata) {
  auto cpp = ThisPtr(self); if (!cpp) return nullptr;
  return Clif_PyObjFrom(cpp->beta_, {});
}

static int set_beta_(PyObject* self, PyObject* value, void* xdata) {
  if (value == nullptr) {
    PyErr_SetString(PyExc_TypeError, "Cannot delete the beta_ attribute");
    return -1;
  }
  auto cpp = ThisPtr(self); if (!cpp) return -1;
  if (Clif_PyObjAs(value, &cpp->beta_)) return 0;
  PyObject* s = PyObject_Repr(value);
  PyErr_Format(PyExc_ValueError, "%s is not valid for beta_:float", s? PyUnicode_AsUTF8(s): "input");
  Py_XDECREF(s);
  return -1;
}

static PyObject* get_K_(PyObject* self, void* xdata) {
  auto cpp = ThisPtr(self); if (!cpp) return nullptr;
  return Clif_PyObjFrom(::clif::MakeStdShared(reinterpret_cast<wrapper*>(self)->cpp, &cpp->K_), {});
}

static int set_K_(PyObject* self, PyObject* value, void* xdata) {
  if (value == nullptr) {
    PyErr_SetString(PyExc_TypeError, "Cannot delete the K_ attribute");
    return -1;
  }
  auto cpp = ThisPtr(self); if (!cpp) return -1;
  if (Clif_PyObjAs(value, &cpp->K_)) return 0;
  PyObject* s = PyObject_Repr(value);
  PyErr_Format(PyExc_ValueError, "%s is not valid for K_:DoubleMatrix", s? PyUnicode_AsUTF8(s): "input");
  Py_XDECREF(s);
  return -1;
}

static PyObject* get_G_(PyObject* self, void* xdata) {
  auto cpp = ThisPtr(self); if (!cpp) return nullptr;
  return Clif_PyObjFrom(cpp->G_, {});
}

static int set_G_(PyObject* self, PyObject* value, void* xdata) {
  if (value == nullptr) {
    PyErr_SetString(PyExc_TypeError, "Cannot delete the G_ attribute");
    return -1;
  }
  auto cpp = ThisPtr(self); if (!cpp) return -1;
  if (Clif_PyObjAs(value, &cpp->G_)) return 0;
  PyObject* s = PyObject_Repr(value);
  PyErr_Format(PyExc_ValueError, "%s is not valid for G_:list<DoubleSpMatrix>", s? PyUnicode_AsUTF8(s): "input");
  Py_XDECREF(s);
  return -1;
}

static PyObject* get_dim_(PyObject* self, void* xdata) {
  auto cpp = ThisPtr(self); if (!cpp) return nullptr;
  return Clif_PyObjFrom(cpp->dim_, {});
}

static int set_dim_(PyObject* self, PyObject* value, void* xdata) {
  if (value == nullptr) {
    PyErr_SetString(PyExc_TypeError, "Cannot delete the dim_ attribute");
    return -1;
  }
  auto cpp = ThisPtr(self); if (!cpp) return -1;
  if (Clif_PyObjAs(value, &cpp->dim_)) return 0;
  PyObject* s = PyObject_Repr(value);
  PyErr_Format(PyExc_ValueError, "%s is not valid for dim_:int", s? PyUnicode_AsUTF8(s): "input");
  Py_XDECREF(s);
  return -1;
}

// init(dim:int, num_gs:int)
static PyObject* wrapInit_as_init(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2];
  char* names[] = {
      C("dim"),
      C("num_gs"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO:init", names, &a[0], &a[1])) return nullptr;
  int arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("init", names[0], "int", a[0]);
  int arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("init", names[1], "int", a[1]);
  // Call actual C++ method.
  ::kaldi::AffineXformStats* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->Init(std::move(arg1), std::move(arg2));
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

// dim() -> int
static PyObject* wrapDim_as_dim(PyObject* self) {
  // Call actual C++ method.
  ::kaldi::AffineXformStats* c = ThisPtr(self);
  if (!c) return nullptr;
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  int ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = c->Dim();
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
  return Clif_PyObjFrom(std::move(ret0), {});
}

// set_zero()
static PyObject* wrapSetZero_as_set_zero(PyObject* self) {
  // Call actual C++ method.
  ::kaldi::AffineXformStats* c = ThisPtr(self);
  if (!c) return nullptr;
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->SetZero();
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

// copy_stats(other:AffineXformStats)
static PyObject* wrapCopyStats_as_copy_stats(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("other"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:copy_stats", names, &a[0])) return nullptr;
  ::kaldi::AffineXformStats* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("copy_stats", names[0], "::kaldi::AffineXformStats", a[0]);
  // Call actual C++ method.
  ::kaldi::AffineXformStats* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->CopyStats(*arg1);
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

// add(other:AffineXformStats)
static PyObject* wrapAdd_as_add(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("other"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:add", names, &a[0])) return nullptr;
  ::kaldi::AffineXformStats* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("add", names[0], "::kaldi::AffineXformStats", a[0]);
  // Call actual C++ method.
  ::kaldi::AffineXformStats* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->Add(*arg1);
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

// write(os:ostream, binary:bool)
static PyObject* wrapWrite_as_write(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2];
  char* names[] = {
      C("os"),
      C("binary"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO:write", names, &a[0], &a[1])) return nullptr;
  ::std::basic_ostream<char, ::std::char_traits<char> >* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("write", names[0], "::std::basic_ostream<char, ::std::char_traits<char> >", a[0]);
  bool arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("write", names[1], "bool", a[1]);
  // Call actual C++ method.
  ::kaldi::AffineXformStats* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->Write(*arg1, std::move(arg2));
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

// read(is:istream, binary:bool, add:bool)
static PyObject* wrapRead_as_read(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[3];
  char* names[] = {
      C("is"),
      C("binary"),
      C("add"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOO:read", names, &a[0], &a[1], &a[2])) return nullptr;
  ::std::basic_istream<char, ::std::char_traits<char> >* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("read", names[0], "::std::basic_istream<char, ::std::char_traits<char> >", a[0]);
  bool arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("read", names[1], "bool", a[1]);
  bool arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("read", names[2], "bool", a[2]);
  // Call actual C++ method.
  ::kaldi::AffineXformStats* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->Read(*arg1, std::move(arg2), std::move(arg3));
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

// @classmethod new(other:AffineXformStats) -> AffineXformStats
static PyObject* wrapAffineXformStats_as_new(PyObject* cls, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("other"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:new", names, &a[0])) return nullptr;
  ::kaldi::AffineXformStats* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("new", names[0], "::kaldi::AffineXformStats", a[0]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  std::unique_ptr<::kaldi::AffineXformStats> ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::gtl::MakeUnique<::kaldi::AffineXformStats>(*arg1);
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

static PyGetSetDef Properties[] = {
  {C("beta_"), get_beta_, set_beta_, C("C++ double AffineXformStats.beta_")},
  {C("K_"), get_K_, set_K_, C("C++ ::kaldi::Matrix<double> AffineXformStats.K_")},
  {C("G_"), get_G_, set_G_, C("C++ ::std::vector< ::kaldi::SpMatrix<double> > AffineXformStats.G_")},
  {C("dim_"), get_dim_, set_dim_, C("C++ ::int32 AffineXformStats.dim_")},
  {}
};

static PyMethodDef Methods[] = {
  {C("init"), (PyCFunction)wrapInit_as_init, METH_VARARGS | METH_KEYWORDS, C("init(dim:int, num_gs:int)\n  Calls C++ function\n  void ::kaldi::AffineXformStats::Init(int, int)")},
  {C("dim"), (PyCFunction)wrapDim_as_dim, METH_NOARGS, C("dim() -> int\n  Calls C++ function\n  int ::kaldi::AffineXformStats::Dim()")},
  {C("set_zero"), (PyCFunction)wrapSetZero_as_set_zero, METH_NOARGS, C("set_zero()\n  Calls C++ function\n  void ::kaldi::AffineXformStats::SetZero()")},
  {C("copy_stats"), (PyCFunction)wrapCopyStats_as_copy_stats, METH_VARARGS | METH_KEYWORDS, C("copy_stats(other:AffineXformStats)\n  Calls C++ function\n  void ::kaldi::AffineXformStats::CopyStats(::kaldi::AffineXformStats)")},
  {C("add"), (PyCFunction)wrapAdd_as_add, METH_VARARGS | METH_KEYWORDS, C("add(other:AffineXformStats)\n  Calls C++ function\n  void ::kaldi::AffineXformStats::Add(::kaldi::AffineXformStats)")},
  {C("write"), (PyCFunction)wrapWrite_as_write, METH_VARARGS | METH_KEYWORDS, C("write(os:ostream, binary:bool)\n  Calls C++ function\n  void ::kaldi::AffineXformStats::Write(::std::basic_ostream<char, ::std::char_traits<char> >, bool)")},
  {C("read"), (PyCFunction)wrapRead_as_read, METH_VARARGS | METH_KEYWORDS, C("read(is:istream, binary:bool, add:bool)\n  Calls C++ function\n  void ::kaldi::AffineXformStats::Read(::std::basic_istream<char, ::std::char_traits<char> >, bool, bool)")},
  {C("new"), (PyCFunction)wrapAffineXformStats_as_new, METH_VARARGS | METH_KEYWORDS | METH_CLASS, C("new(other:AffineXformStats) -> AffineXformStats\n  Calls C++ function\n  std::unique_ptr<::kaldi::AffineXformStats> ::kaldi::AffineXformStats::AffineXformStats(::kaldi::AffineXformStats)")},
  {}
};

// AffineXformStats __init__
static int _ctor(PyObject* self, PyObject* args, PyObject* kw);

// AffineXformStats __new__
static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems);

// AffineXformStats __del__
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
  "_transform_common.AffineXformStats", // tp_name
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
  "CLIF wrapper for ::kaldi::AffineXformStats", // tp_doc
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
    PyErr_SetString(PyExc_TypeError, "AffineXformStats takes no arguments");
    return -1;
  }
  reinterpret_cast<wrapper*>(self)->cpp = ::clif::MakeShared<::kaldi::AffineXformStats>();
  return 0;
}

static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems) {
  assert(nitems == 0);
  PyObject* self = reinterpret_cast<PyObject*>(new wrapper);
  return PyObject_Init(self, &wrapper_Type);
}

static ::kaldi::AffineXformStats* ThisPtr(PyObject* py) {
  if (Py_TYPE(py) == &wrapper_Type) {
    return ::clif::python::Get(reinterpret_cast<wrapper*>(py)->cpp);
  }
  PyObject* base = PyObject_CallMethod(py, C("as_kaldi_AffineXformStats"), nullptr);
  if (base) {
    if (PyCapsule_CheckExact(base)) {
      void* p = PyCapsule_GetPointer(base, C("::kaldi::AffineXformStats"));
      if (!PyErr_Occurred()) {
        ::kaldi::AffineXformStats* c = static_cast<::kaldi::AffineXformStats*>(p);
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
    PyErr_Format(PyExc_ValueError, "can't convert %s %s to ::kaldi::AffineXformStats*", ClassName(py), ClassType(py));
  } else {
    PyErr_Format(PyExc_TypeError, "expecting %s instance, got %s %s", wrapper_Type.tp_name, ClassName(py), ClassType(py));
  }
  return nullptr;
}
}  // namespace pyAffineXformStats

// compose_transforms(a:Matrix, b:Matrix, b_is_affine:bool) -> (success:bool, c:Matrix)
static PyObject* wrapComposeTransforms_as_compose_transforms(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[3];
  char* names[] = {
      C("a"),
      C("b"),
      C("b_is_affine"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOO:compose_transforms", names, &a[0], &a[1], &a[2])) return nullptr;
  ::kaldi::Matrix<float>* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("compose_transforms", names[0], "::kaldi::Matrix<float>", a[0]);
  ::kaldi::Matrix<float>* arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("compose_transforms", names[1], "::kaldi::Matrix<float>", a[1]);
  bool arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("compose_transforms", names[2], "bool", a[2]);
  ::kaldi::Matrix<float> ret1{};
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  bool ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::ComposeTransforms(*arg1, *arg2, std::move(arg3), &ret1);
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
  // Convert return values to Python.
  PyObject* p, * result_tuple = PyTuple_New(2);
  if (result_tuple == nullptr) return nullptr;
  if ((p=Clif_PyObjFrom(std::move(ret0), {})) == nullptr) {
    Py_DECREF(result_tuple);
    return nullptr;
  }
  PyTuple_SET_ITEM(result_tuple, 0, p);
  if ((p=Clif_PyObjFrom(std::move(ret1), {})) == nullptr) {
    Py_DECREF(result_tuple);
    return nullptr;
  }
  PyTuple_SET_ITEM(result_tuple, 1, p);
  PyObject* pyproc = ImportFQName("kaldi.util._value_error_on_false");
  if (pyproc == nullptr) {
    Py_DECREF(result_tuple);
    return nullptr;
  }
  p = PyObject_CallObject(pyproc, result_tuple);
  Py_DECREF(pyproc);
  Py_CLEAR(result_tuple);
  result_tuple = p;
  return result_tuple;
}

// apply_affine_transform(xform:MatrixBase, vec:VectorBase)
static PyObject* wrapApplyAffineTransform_as_apply_affine_transform(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2];
  char* names[] = {
      C("xform"),
      C("vec"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO:apply_affine_transform", names, &a[0], &a[1])) return nullptr;
  ::kaldi::MatrixBase<float>* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("apply_affine_transform", names[0], "::kaldi::MatrixBase<float>", a[0]);
  ::kaldi::VectorBase<float> * arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("apply_affine_transform", names[1], "::kaldi::VectorBase<float> *", a[1]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::ApplyAffineTransform(*arg1, arg2);
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
  {C("compose_transforms"), (PyCFunction)wrapComposeTransforms_as_compose_transforms, METH_VARARGS | METH_KEYWORDS, C("compose_transforms(a:Matrix, b:Matrix, b_is_affine:bool) -> (success:bool, c:Matrix)\n  Calls C++ function\n  bool ::kaldi::ComposeTransforms(::kaldi::Matrix<float>, ::kaldi::Matrix<float>, bool, ::kaldi::Matrix<float>*)")},
  {C("apply_affine_transform"), (PyCFunction)wrapApplyAffineTransform_as_apply_affine_transform, METH_VARARGS | METH_KEYWORDS, C("apply_affine_transform(xform:MatrixBase, vec:VectorBase)\n  Calls C++ function\n  void ::kaldi::ApplyAffineTransform(::kaldi::MatrixBase<float>, ::kaldi::VectorBase<float> *)")},
  {}
};

bool Ready() {
  if (PyType_Ready(&pyAffineXformStats::wrapper_Type) < 0) return false;
  Py_INCREF(&pyAffineXformStats::wrapper_Type);  // For PyModule_AddObject to steal.
  return true;
}

static struct PyModuleDef Module = {
  PyModuleDef_HEAD_INIT,
  "_transform_common",  // module name
  "CLIF-generated module for transform/transform-common.h", // module doc
  -1,  // module keeps state in global variables
  Methods
};

PyObject* Init() {
  PyObject* module = PyModule_Create(&Module);
  if (!module) return nullptr;
  if (PyObject* m = PyImport_ImportModule("_iostream")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_kaldi_matrix")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_kaldi_vector")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_sp_matrix")) Py_DECREF(m);
  else goto err;
  PyEval_InitThreads();
  if (PyModule_AddObject(module, "AffineXformStats", reinterpret_cast<PyObject*>(&pyAffineXformStats::wrapper_Type)) < 0) goto err;
  return module;
err:
  Py_DECREF(module);
  return nullptr;
}

}  // namespace __transform__common_clifwrap

namespace kaldi {
using namespace ::clif;
using ::clif::Clif_PyObjAs;
using ::clif::Clif_PyObjFrom;

// AffineXformStats to/from ::kaldi::AffineXformStats conversion

bool Clif_PyObjAs(PyObject* py, ::kaldi::AffineXformStats** c) {
  assert(c != nullptr);
  if (Py_None == py) {
    *c = nullptr;
    return true;
  }
  ::kaldi::AffineXformStats* cpp = __transform__common_clifwrap::pyAffineXformStats::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = cpp;
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::shared_ptr<::kaldi::AffineXformStats>* c) {
  assert(c != nullptr);
  ::kaldi::AffineXformStats* cpp = __transform__common_clifwrap::pyAffineXformStats::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = ::clif::MakeStdShared(reinterpret_cast<__transform__common_clifwrap::pyAffineXformStats::wrapper*>(py)->cpp, cpp);
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::unique_ptr<::kaldi::AffineXformStats>* c) {
  assert(c != nullptr);
  ::kaldi::AffineXformStats* cpp = __transform__common_clifwrap::pyAffineXformStats::ThisPtr(py);
  if (cpp == nullptr) return false;
  if (!reinterpret_cast<__transform__common_clifwrap::pyAffineXformStats::wrapper*>(py)->cpp.Detach()) {
    PyErr_SetString(PyExc_ValueError, "Cannot convert AffineXformStats instance to std::unique_ptr.");
    return false;
  }
  c->reset(cpp);
  return true;
}

bool Clif_PyObjAs(PyObject* py, ::kaldi::AffineXformStats* c) {
  assert(c != nullptr);
  ::kaldi::AffineXformStats* cpp = __transform__common_clifwrap::pyAffineXformStats::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = *cpp;
  return true;
}

bool Clif_PyObjAs(PyObject* py, ::gtl::optional<::kaldi::AffineXformStats>* c) {
  assert(c != nullptr);
  ::kaldi::AffineXformStats* cpp = __transform__common_clifwrap::pyAffineXformStats::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = *cpp;
  return true;
}

PyObject* Clif_PyObjFrom(::kaldi::AffineXformStats* c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__transform__common_clifwrap::pyAffineXformStats::wrapper_Type, NULL, NULL);
  reinterpret_cast<__transform__common_clifwrap::pyAffineXformStats::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::AffineXformStats>(c, ::clif::UnOwnedResource());
  return py;
}

PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::AffineXformStats> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__transform__common_clifwrap::pyAffineXformStats::wrapper_Type, NULL, NULL);
  reinterpret_cast<__transform__common_clifwrap::pyAffineXformStats::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::AffineXformStats>(c);
  return py;
}

PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::AffineXformStats> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__transform__common_clifwrap::pyAffineXformStats::wrapper_Type, NULL, NULL);
  reinterpret_cast<__transform__common_clifwrap::pyAffineXformStats::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::AffineXformStats>(std::move(c));
  return py;
}

PyObject* Clif_PyObjFrom(const ::kaldi::AffineXformStats& c, py::PostConv unused) {
  PyObject* py = PyType_GenericNew(&__transform__common_clifwrap::pyAffineXformStats::wrapper_Type, NULL, NULL);
  reinterpret_cast<__transform__common_clifwrap::pyAffineXformStats::wrapper*>(py)->cpp = ::clif::MakeShared<::kaldi::AffineXformStats>(c);
  return py;
}

}  // namespace kaldi