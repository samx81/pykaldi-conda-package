//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/sgmm2/decodable-am-sgmm2.clif

#include <Python.h>
#include "clif/python/ptr_util.h"
#include "clif/python/optional.h"
#include "clif/python/types.h"
#include "hmm/transition-model-clifwrap.h"
#include "matrix/kaldi-matrix-clifwrap.h"
#include "sgmm2/am-sgmm2-clifwrap.h"
#include "decodable-am-sgmm2-clifwrap.h"
#include "clif/python/stltypes.h"
#include "clif/python/slots.h"

namespace __decodable__am__sgmm2_clifwrap {
using namespace clif;

#define _0 py::postconv::PASS
#define _1 UnicodeFromBytes
#define _2 UnicodeFromBytes


namespace pyDecodableAmSgmm2 {

struct wrapper {
  PyObject_HEAD
  ::clif::Instance<::kaldi::DecodableAmSgmm2> cpp;
};
static ::kaldi::DecodableAmSgmm2* ThisPtr(PyObject*);

// __init__(sgmm:AmSgmm2, tm:TransitionModel, feats:Matrix, gselect:list<list<int>>, log_prune:float, spk:Sgmm2PerSpkDerivedVars)
static PyObject* wrapDecodableAmSgmm2_as___init__(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[6];
  char* names[] = {
      C("sgmm"),
      C("tm"),
      C("feats"),
      C("gselect"),
      C("log_prune"),
      C("spk"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOOOOO:__init__", names, &a[0], &a[1], &a[2], &a[3], &a[4], &a[5])) return nullptr;
  ::kaldi::AmSgmm2* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("__init__", names[0], "::kaldi::AmSgmm2", a[0]);
  ::kaldi::TransitionModel* arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("__init__", names[1], "::kaldi::TransitionModel", a[1]);
  ::kaldi::Matrix<float>* arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("__init__", names[2], "::kaldi::Matrix<float>", a[2]);
  ::std::vector< ::std::vector< ::int32> > arg4;
  if (!Clif_PyObjAs(a[3], &arg4)) return ArgError("__init__", names[3], "::std::vector< ::std::vector< ::int32> >", a[3]);
  float arg5;
  if (!Clif_PyObjAs(a[4], &arg5)) return ArgError("__init__", names[4], "float", a[4]);
  ::kaldi::Sgmm2PerSpkDerivedVars * arg6;
  if (!Clif_PyObjAs(a[5], &arg6)) return ArgError("__init__", names[5], "::kaldi::Sgmm2PerSpkDerivedVars *", a[5]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    reinterpret_cast<wrapper*>(self)->cpp = ::clif::MakeShared<::kaldi::DecodableAmSgmm2>(*arg1, *arg2, *arg3, std::move(arg4), std::move(arg5), arg6);
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

// loglikelihood(frame:int, tid:int) -> float
static PyObject* wrapLogLikelihood_as_loglikelihood(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2];
  char* names[] = {
      C("frame"),
      C("tid"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO:loglikelihood", names, &a[0], &a[1])) return nullptr;
  int arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("loglikelihood", names[0], "int", a[0]);
  int arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("loglikelihood", names[1], "int", a[1]);
  // Call actual C++ method.
  ::kaldi::DecodableAmSgmm2* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  float ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = c->LogLikelihood(std::move(arg1), std::move(arg2));
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

// num_frames_ready() -> int
static PyObject* wrapNumFramesReady_as_num_frames_ready(PyObject* self) {
  // Call actual C++ method.
  ::kaldi::DecodableAmSgmm2* c = ThisPtr(self);
  if (!c) return nullptr;
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  int ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = c->NumFramesReady();
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

// num_indices() -> int
static PyObject* wrapNumIndices_as_num_indices(PyObject* self) {
  // Call actual C++ method.
  ::kaldi::DecodableAmSgmm2* c = ThisPtr(self);
  if (!c) return nullptr;
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  int ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = c->NumIndices();
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

// is_last_frame(frame:int) -> bool
static PyObject* wrapIsLastFrame_as_is_last_frame(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("frame"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:is_last_frame", names, &a[0])) return nullptr;
  int arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("is_last_frame", names[0], "int", a[0]);
  // Call actual C++ method.
  ::kaldi::DecodableAmSgmm2* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  bool ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = c->IsLastFrame(std::move(arg1));
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

// Implicit cast this as ::kaldi::DecodableInterface*
static PyObject* as_kaldi_DecodableInterface(PyObject* self) {
  ::kaldi::DecodableInterface* p = ::clif::python::Get(reinterpret_cast<wrapper*>(self)->cpp);
  if (p == nullptr) return nullptr;
  return PyCapsule_New(p, C("::kaldi::DecodableInterface"), nullptr);
}

static PyMethodDef Methods[] = {
  {C("__init__"), (PyCFunction)wrapDecodableAmSgmm2_as___init__, METH_VARARGS | METH_KEYWORDS, C("__init__(sgmm:AmSgmm2, tm:TransitionModel, feats:Matrix, gselect:list<list<int>>, log_prune:float, spk:Sgmm2PerSpkDerivedVars)\n  Calls C++ function\n  void ::kaldi::DecodableAmSgmm2::DecodableAmSgmm2(::kaldi::AmSgmm2, ::kaldi::TransitionModel, ::kaldi::Matrix<float>, ::std::vector< ::std::vector< ::int32> >, float, ::kaldi::Sgmm2PerSpkDerivedVars *)")},
  {C("loglikelihood"), (PyCFunction)wrapLogLikelihood_as_loglikelihood, METH_VARARGS | METH_KEYWORDS, C("loglikelihood(frame:int, tid:int) -> float\n  Calls C++ function\n  float ::kaldi::DecodableAmSgmm2::LogLikelihood(int, int)")},
  {C("num_frames_ready"), (PyCFunction)wrapNumFramesReady_as_num_frames_ready, METH_NOARGS, C("num_frames_ready() -> int\n  Calls C++ function\n  int ::kaldi::DecodableAmSgmm2::NumFramesReady()")},
  {C("num_indices"), (PyCFunction)wrapNumIndices_as_num_indices, METH_NOARGS, C("num_indices() -> int\n  Calls C++ function\n  int ::kaldi::DecodableAmSgmm2::NumIndices()")},
  {C("is_last_frame"), (PyCFunction)wrapIsLastFrame_as_is_last_frame, METH_VARARGS | METH_KEYWORDS, C("is_last_frame(frame:int) -> bool\n  Calls C++ function\n  bool ::kaldi::DecodableAmSgmm2::IsLastFrame(int)")},
  {C("as_kaldi_DecodableInterface"), (PyCFunction)as_kaldi_DecodableInterface, METH_NOARGS, C("Upcast to ::kaldi::DecodableInterface*")},
  {}
};

// DecodableAmSgmm2 __init__
static int _ctor(PyObject* self, PyObject* args, PyObject* kw);

// DecodableAmSgmm2 __new__
static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems);

// DecodableAmSgmm2 __del__
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
  "_decodable_am_sgmm2.DecodableAmSgmm2", // tp_name
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
  "CLIF wrapper for ::kaldi::DecodableAmSgmm2", // tp_doc
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
  PyObject* init = wrapDecodableAmSgmm2_as___init__(self, args, kw);
  Py_XDECREF(init);
  return init? 0: -1;
}

static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems) {
  assert(nitems == 0);
  PyObject* self = reinterpret_cast<PyObject*>(new wrapper);
  return PyObject_Init(self, &wrapper_Type);
}

static ::kaldi::DecodableAmSgmm2* ThisPtr(PyObject* py) {
  if (Py_TYPE(py) == &wrapper_Type) {
    return ::clif::python::Get(reinterpret_cast<wrapper*>(py)->cpp);
  }
  PyObject* base = PyObject_CallMethod(py, C("as_kaldi_DecodableAmSgmm2"), nullptr);
  if (base) {
    if (PyCapsule_CheckExact(base)) {
      void* p = PyCapsule_GetPointer(base, C("::kaldi::DecodableAmSgmm2"));
      if (!PyErr_Occurred()) {
        ::kaldi::DecodableAmSgmm2* c = static_cast<::kaldi::DecodableAmSgmm2*>(p);
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
    PyErr_Format(PyExc_ValueError, "can't convert %s %s to ::kaldi::DecodableAmSgmm2*", ClassName(py), ClassType(py));
  } else {
    PyErr_Format(PyExc_TypeError, "expecting %s instance, got %s %s", wrapper_Type.tp_name, ClassName(py), ClassType(py));
  }
  return nullptr;
}
}  // namespace pyDecodableAmSgmm2

namespace pyDecodableAmSgmm2Scaled {

struct wrapper {
  PyObject_HEAD
  ::clif::Instance<::kaldi::DecodableAmSgmm2Scaled> cpp;
};
static ::kaldi::DecodableAmSgmm2Scaled* ThisPtr(PyObject*);

// __init__(sgmm:AmSgmm2, tm:TransitionModel, feats:Matrix, gselect:list<list<int>>, log_prune:float, scale:float, spk:Sgmm2PerSpkDerivedVars)
static PyObject* wrapDecodableAmSgmm2Scaled_as___init__(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[7];
  char* names[] = {
      C("sgmm"),
      C("tm"),
      C("feats"),
      C("gselect"),
      C("log_prune"),
      C("scale"),
      C("spk"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOO:__init__", names, &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6])) return nullptr;
  ::kaldi::AmSgmm2* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("__init__", names[0], "::kaldi::AmSgmm2", a[0]);
  ::kaldi::TransitionModel* arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("__init__", names[1], "::kaldi::TransitionModel", a[1]);
  ::kaldi::Matrix<float>* arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("__init__", names[2], "::kaldi::Matrix<float>", a[2]);
  ::std::vector< ::std::vector< ::int32> > arg4;
  if (!Clif_PyObjAs(a[3], &arg4)) return ArgError("__init__", names[3], "::std::vector< ::std::vector< ::int32> >", a[3]);
  float arg5;
  if (!Clif_PyObjAs(a[4], &arg5)) return ArgError("__init__", names[4], "float", a[4]);
  float arg6;
  if (!Clif_PyObjAs(a[5], &arg6)) return ArgError("__init__", names[5], "float", a[5]);
  ::kaldi::Sgmm2PerSpkDerivedVars * arg7;
  if (!Clif_PyObjAs(a[6], &arg7)) return ArgError("__init__", names[6], "::kaldi::Sgmm2PerSpkDerivedVars *", a[6]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    reinterpret_cast<wrapper*>(self)->cpp = ::clif::MakeShared<::kaldi::DecodableAmSgmm2Scaled>(*arg1, *arg2, *arg3, std::move(arg4), std::move(arg5), std::move(arg6), arg7);
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

// loglikelihood(frame:int, tid:int) -> float
static PyObject* wrapLogLikelihood_as_loglikelihood(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2];
  char* names[] = {
      C("frame"),
      C("tid"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO:loglikelihood", names, &a[0], &a[1])) return nullptr;
  int arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("loglikelihood", names[0], "int", a[0]);
  int arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("loglikelihood", names[1], "int", a[1]);
  // Call actual C++ method.
  ::kaldi::DecodableAmSgmm2Scaled* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  float ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = c->LogLikelihood(std::move(arg1), std::move(arg2));
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

// Implicit cast this as ::kaldi::DecodableAmSgmm2*
static PyObject* as_kaldi_DecodableAmSgmm2(PyObject* self) {
  ::kaldi::DecodableAmSgmm2* p = ::clif::python::Get(reinterpret_cast<wrapper*>(self)->cpp);
  if (p == nullptr) return nullptr;
  return PyCapsule_New(p, C("::kaldi::DecodableAmSgmm2"), nullptr);
}

// Implicit cast this as ::kaldi::DecodableInterface*
static PyObject* as_kaldi_DecodableInterface(PyObject* self) {
  ::kaldi::DecodableInterface* p = ::clif::python::Get(reinterpret_cast<wrapper*>(self)->cpp);
  if (p == nullptr) return nullptr;
  return PyCapsule_New(p, C("::kaldi::DecodableInterface"), nullptr);
}

static PyMethodDef Methods[] = {
  {C("__init__"), (PyCFunction)wrapDecodableAmSgmm2Scaled_as___init__, METH_VARARGS | METH_KEYWORDS, C("__init__(sgmm:AmSgmm2, tm:TransitionModel, feats:Matrix, gselect:list<list<int>>, log_prune:float, scale:float, spk:Sgmm2PerSpkDerivedVars)\n  Calls C++ function\n  void ::kaldi::DecodableAmSgmm2Scaled::DecodableAmSgmm2Scaled(::kaldi::AmSgmm2, ::kaldi::TransitionModel, ::kaldi::Matrix<float>, ::std::vector< ::std::vector< ::int32> >, float, float, ::kaldi::Sgmm2PerSpkDerivedVars *)")},
  {C("loglikelihood"), (PyCFunction)wrapLogLikelihood_as_loglikelihood, METH_VARARGS | METH_KEYWORDS, C("loglikelihood(frame:int, tid:int) -> float\n  Calls C++ function\n  float ::kaldi::DecodableAmSgmm2Scaled::LogLikelihood(int, int)")},
  {C("as_kaldi_DecodableAmSgmm2"), (PyCFunction)as_kaldi_DecodableAmSgmm2, METH_NOARGS, C("Upcast to ::kaldi::DecodableAmSgmm2*")},
  {C("as_kaldi_DecodableInterface"), (PyCFunction)as_kaldi_DecodableInterface, METH_NOARGS, C("Upcast to ::kaldi::DecodableInterface*")},
  {}
};

// DecodableAmSgmm2Scaled __init__
static int _ctor(PyObject* self, PyObject* args, PyObject* kw);

// DecodableAmSgmm2Scaled __new__
static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems);

// DecodableAmSgmm2Scaled __del__
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
  "_decodable_am_sgmm2.DecodableAmSgmm2Scaled", // tp_name
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
  "CLIF wrapper for ::kaldi::DecodableAmSgmm2Scaled", // tp_doc
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
  PyObject* init = wrapDecodableAmSgmm2Scaled_as___init__(self, args, kw);
  Py_XDECREF(init);
  return init? 0: -1;
}

static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems) {
  assert(nitems == 0);
  PyObject* self = reinterpret_cast<PyObject*>(new wrapper);
  return PyObject_Init(self, &wrapper_Type);
}

static ::kaldi::DecodableAmSgmm2Scaled* ThisPtr(PyObject* py) {
  if (Py_TYPE(py) == &wrapper_Type) {
    return ::clif::python::Get(reinterpret_cast<wrapper*>(py)->cpp);
  }
  PyObject* base = PyObject_CallMethod(py, C("as_kaldi_DecodableAmSgmm2Scaled"), nullptr);
  if (base) {
    if (PyCapsule_CheckExact(base)) {
      void* p = PyCapsule_GetPointer(base, C("::kaldi::DecodableAmSgmm2Scaled"));
      if (!PyErr_Occurred()) {
        ::kaldi::DecodableAmSgmm2Scaled* c = static_cast<::kaldi::DecodableAmSgmm2Scaled*>(p);
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
    PyErr_Format(PyExc_ValueError, "can't convert %s %s to ::kaldi::DecodableAmSgmm2Scaled*", ClassName(py), ClassType(py));
  } else {
    PyErr_Format(PyExc_TypeError, "expecting %s instance, got %s %s", wrapper_Type.tp_name, ClassName(py), ClassType(py));
  }
  return nullptr;
}
}  // namespace pyDecodableAmSgmm2Scaled


// Initialize module

bool Ready() {
  PyObject* base_cls = ImportFQName("kaldi.itf._decodable_itf.DecodableInterface");
  if (base_cls == nullptr) return false;
  if (!PyObject_TypeCheck(base_cls, &PyType_Type)) {
    Py_DECREF(base_cls);
    PyErr_SetString(PyExc_TypeError, "Base class kaldi.itf._decodable_itf.DecodableInterface is not a new style class inheriting from object.");
    return false;
  }
  pyDecodableAmSgmm2::wrapper_Type.tp_base = reinterpret_cast<PyTypeObject*>(base_cls);
  // Check that base_cls is a *statically* allocated PyType.
  if (pyDecodableAmSgmm2::wrapper_Type.tp_base->tp_alloc == PyType_GenericAlloc) {
    Py_DECREF(base_cls);
    PyErr_SetString(PyExc_TypeError, "Base class kaldi.itf._decodable_itf.DecodableInterface is a dynamic (Python defined) class.");
    return false;
  }
  if (PyType_Ready(&pyDecodableAmSgmm2::wrapper_Type) < 0) return false;
  Py_INCREF(&pyDecodableAmSgmm2::wrapper_Type);  // For PyModule_AddObject to steal.
  pyDecodableAmSgmm2Scaled::wrapper_Type.tp_base = &pyDecodableAmSgmm2::wrapper_Type;
  if (PyType_Ready(&pyDecodableAmSgmm2Scaled::wrapper_Type) < 0) return false;
  Py_INCREF(&pyDecodableAmSgmm2Scaled::wrapper_Type);  // For PyModule_AddObject to steal.
  return true;
}

static struct PyModuleDef Module = {
  PyModuleDef_HEAD_INIT,
  "_decodable_am_sgmm2",  // module name
  "CLIF-generated module for sgmm2/decodable-am-sgmm2.h", // module doc
  -1,  // module keeps state in global variables
  nullptr
};

PyObject* Init() {
  PyObject* module = PyModule_Create(&Module);
  if (!module) return nullptr;
  if (PyObject* m = PyImport_ImportModule("_transition_model")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_kaldi_matrix")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_am_sgmm2")) Py_DECREF(m);
  else goto err;
  PyEval_InitThreads();
  if (PyModule_AddObject(module, "DecodableAmSgmm2", reinterpret_cast<PyObject*>(&pyDecodableAmSgmm2::wrapper_Type)) < 0) goto err;
  if (PyModule_AddObject(module, "DecodableAmSgmm2Scaled", reinterpret_cast<PyObject*>(&pyDecodableAmSgmm2Scaled::wrapper_Type)) < 0) goto err;
  return module;
err:
  Py_DECREF(module);
  return nullptr;
}

}  // namespace __decodable__am__sgmm2_clifwrap

namespace kaldi {
using namespace ::clif;
using ::clif::Clif_PyObjAs;
using ::clif::Clif_PyObjFrom;

// DecodableAmSgmm2 to/from ::kaldi::DecodableAmSgmm2 conversion

bool Clif_PyObjAs(PyObject* py, ::kaldi::DecodableAmSgmm2** c) {
  assert(c != nullptr);
  if (Py_None == py) {
    *c = nullptr;
    return true;
  }
  ::kaldi::DecodableAmSgmm2* cpp = __decodable__am__sgmm2_clifwrap::pyDecodableAmSgmm2::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = cpp;
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::shared_ptr<::kaldi::DecodableAmSgmm2>* c) {
  assert(c != nullptr);
  ::kaldi::DecodableAmSgmm2* cpp = __decodable__am__sgmm2_clifwrap::pyDecodableAmSgmm2::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = ::clif::MakeStdShared(reinterpret_cast<__decodable__am__sgmm2_clifwrap::pyDecodableAmSgmm2::wrapper*>(py)->cpp, cpp);
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::unique_ptr<::kaldi::DecodableAmSgmm2>* c) {
  assert(c != nullptr);
  ::kaldi::DecodableAmSgmm2* cpp = __decodable__am__sgmm2_clifwrap::pyDecodableAmSgmm2::ThisPtr(py);
  if (cpp == nullptr) return false;
  if (!reinterpret_cast<__decodable__am__sgmm2_clifwrap::pyDecodableAmSgmm2::wrapper*>(py)->cpp.Detach()) {
    PyErr_SetString(PyExc_ValueError, "Cannot convert DecodableAmSgmm2 instance to std::unique_ptr.");
    return false;
  }
  c->reset(cpp);
  return true;
}

PyObject* Clif_PyObjFrom(::kaldi::DecodableAmSgmm2* c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__decodable__am__sgmm2_clifwrap::pyDecodableAmSgmm2::wrapper_Type, NULL, NULL);
  reinterpret_cast<__decodable__am__sgmm2_clifwrap::pyDecodableAmSgmm2::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::DecodableAmSgmm2>(c, ::clif::UnOwnedResource());
  return py;
}

PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::DecodableAmSgmm2> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__decodable__am__sgmm2_clifwrap::pyDecodableAmSgmm2::wrapper_Type, NULL, NULL);
  reinterpret_cast<__decodable__am__sgmm2_clifwrap::pyDecodableAmSgmm2::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::DecodableAmSgmm2>(c);
  return py;
}

PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::DecodableAmSgmm2> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__decodable__am__sgmm2_clifwrap::pyDecodableAmSgmm2::wrapper_Type, NULL, NULL);
  reinterpret_cast<__decodable__am__sgmm2_clifwrap::pyDecodableAmSgmm2::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::DecodableAmSgmm2>(std::move(c));
  return py;
}

// DecodableAmSgmm2Scaled to/from ::kaldi::DecodableAmSgmm2Scaled conversion

bool Clif_PyObjAs(PyObject* py, ::kaldi::DecodableAmSgmm2Scaled** c) {
  assert(c != nullptr);
  if (Py_None == py) {
    *c = nullptr;
    return true;
  }
  ::kaldi::DecodableAmSgmm2Scaled* cpp = __decodable__am__sgmm2_clifwrap::pyDecodableAmSgmm2Scaled::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = cpp;
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::shared_ptr<::kaldi::DecodableAmSgmm2Scaled>* c) {
  assert(c != nullptr);
  ::kaldi::DecodableAmSgmm2Scaled* cpp = __decodable__am__sgmm2_clifwrap::pyDecodableAmSgmm2Scaled::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = ::clif::MakeStdShared(reinterpret_cast<__decodable__am__sgmm2_clifwrap::pyDecodableAmSgmm2Scaled::wrapper*>(py)->cpp, cpp);
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::unique_ptr<::kaldi::DecodableAmSgmm2Scaled>* c) {
  assert(c != nullptr);
  ::kaldi::DecodableAmSgmm2Scaled* cpp = __decodable__am__sgmm2_clifwrap::pyDecodableAmSgmm2Scaled::ThisPtr(py);
  if (cpp == nullptr) return false;
  if (!reinterpret_cast<__decodable__am__sgmm2_clifwrap::pyDecodableAmSgmm2Scaled::wrapper*>(py)->cpp.Detach()) {
    PyErr_SetString(PyExc_ValueError, "Cannot convert DecodableAmSgmm2Scaled instance to std::unique_ptr.");
    return false;
  }
  c->reset(cpp);
  return true;
}

PyObject* Clif_PyObjFrom(::kaldi::DecodableAmSgmm2Scaled* c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__decodable__am__sgmm2_clifwrap::pyDecodableAmSgmm2Scaled::wrapper_Type, NULL, NULL);
  reinterpret_cast<__decodable__am__sgmm2_clifwrap::pyDecodableAmSgmm2Scaled::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::DecodableAmSgmm2Scaled>(c, ::clif::UnOwnedResource());
  return py;
}

PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::DecodableAmSgmm2Scaled> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__decodable__am__sgmm2_clifwrap::pyDecodableAmSgmm2Scaled::wrapper_Type, NULL, NULL);
  reinterpret_cast<__decodable__am__sgmm2_clifwrap::pyDecodableAmSgmm2Scaled::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::DecodableAmSgmm2Scaled>(c);
  return py;
}

PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::DecodableAmSgmm2Scaled> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__decodable__am__sgmm2_clifwrap::pyDecodableAmSgmm2Scaled::wrapper_Type, NULL, NULL);
  reinterpret_cast<__decodable__am__sgmm2_clifwrap::pyDecodableAmSgmm2Scaled::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::DecodableAmSgmm2Scaled>(std::move(c));
  return py;
}

}  // namespace kaldi
