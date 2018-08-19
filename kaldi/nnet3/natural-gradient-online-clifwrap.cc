//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/nnet3/natural-gradient-online.clif

#include <Python.h>
#include "clif/python/ptr_util.h"
#include "clif/python/optional.h"
#include "clif/python/types.h"
#include "cudamatrix/cu-vector-clifwrap.h"
#include "cudamatrix/cu-matrix-clifwrap.h"
#include "natural-gradient-online-clifwrap.h"
#include "clif/python/stltypes.h"
#include "clif/python/slots.h"

namespace __natural__gradient__online_clifwrap {
using namespace clif;

#define _0 py::postconv::PASS
#define _1 UnicodeFromBytes
#define _2 UnicodeFromBytes


namespace pyOnlineNaturalGradient {

struct wrapper {
  PyObject_HEAD
  ::clif::Instance<::kaldi::nnet3::OnlineNaturalGradient> cpp;
};
static ::kaldi::nnet3::OnlineNaturalGradient* ThisPtr(PyObject*);

// set_rank(rank:int)
static PyObject* wrapSetRank_as_set_rank(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("rank"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:set_rank", names, &a[0])) return nullptr;
  int arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("set_rank", names[0], "int", a[0]);
  // Call actual C++ method.
  ::kaldi::nnet3::OnlineNaturalGradient* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->SetRank(std::move(arg1));
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

// set_update_period(update_period:int)
static PyObject* wrapSetUpdatePeriod_as_set_update_period(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("update_period"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:set_update_period", names, &a[0])) return nullptr;
  int arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("set_update_period", names[0], "int", a[0]);
  // Call actual C++ method.
  ::kaldi::nnet3::OnlineNaturalGradient* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->SetUpdatePeriod(std::move(arg1));
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

// set_num_samples_history(num_samples_history:float)
static PyObject* wrapSetNumSamplesHistory_as_set_num_samples_history(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("num_samples_history"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:set_num_samples_history", names, &a[0])) return nullptr;
  float arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("set_num_samples_history", names[0], "float", a[0]);
  // Call actual C++ method.
  ::kaldi::nnet3::OnlineNaturalGradient* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->SetNumSamplesHistory(std::move(arg1));
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

// set_num_minibatches_history(num_minibatches_history:float)
static PyObject* wrapSetNumMinibatchesHistory_as_set_num_minibatches_history(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("num_minibatches_history"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:set_num_minibatches_history", names, &a[0])) return nullptr;
  float arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("set_num_minibatches_history", names[0], "float", a[0]);
  // Call actual C++ method.
  ::kaldi::nnet3::OnlineNaturalGradient* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->SetNumMinibatchesHistory(std::move(arg1));
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

// set_alpha(alpha:float)
static PyObject* wrapSetAlpha_as_set_alpha(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("alpha"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:set_alpha", names, &a[0])) return nullptr;
  float arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("set_alpha", names[0], "float", a[0]);
  // Call actual C++ method.
  ::kaldi::nnet3::OnlineNaturalGradient* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->SetAlpha(std::move(arg1));
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

// turn_on_debug()
static PyObject* wrapTurnOnDebug_as_turn_on_debug(PyObject* self) {
  // Call actual C++ method.
  ::kaldi::nnet3::OnlineNaturalGradient* c = ThisPtr(self);
  if (!c) return nullptr;
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->TurnOnDebug();
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

// get_num_samples_history() -> float
static PyObject* wrapGetNumSamplesHistory_as_get_num_samples_history(PyObject* self) {
  // Call actual C++ method.
  ::kaldi::nnet3::OnlineNaturalGradient* c = ThisPtr(self);
  if (!c) return nullptr;
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  float ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = c->GetNumSamplesHistory();
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

// get_alpha() -> float
static PyObject* wrapGetAlpha_as_get_alpha(PyObject* self) {
  // Call actual C++ method.
  ::kaldi::nnet3::OnlineNaturalGradient* c = ThisPtr(self);
  if (!c) return nullptr;
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  float ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = c->GetAlpha();
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

// get_rank() -> int
static PyObject* wrapGetRank_as_get_rank(PyObject* self) {
  // Call actual C++ method.
  ::kaldi::nnet3::OnlineNaturalGradient* c = ThisPtr(self);
  if (!c) return nullptr;
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  int ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = c->GetRank();
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

// get_update_period() -> int
static PyObject* wrapGetUpdatePeriod_as_get_update_period(PyObject* self) {
  // Call actual C++ method.
  ::kaldi::nnet3::OnlineNaturalGradient* c = ThisPtr(self);
  if (!c) return nullptr;
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  int ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = c->GetUpdatePeriod();
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

// freeze(frozen:bool)
static PyObject* wrapFreeze_as_freeze(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("frozen"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:freeze", names, &a[0])) return nullptr;
  bool arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("freeze", names[0], "bool", a[0]);
  // Call actual C++ method.
  ::kaldi::nnet3::OnlineNaturalGradient* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->Freeze(std::move(arg1));
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

// precondition_directions(R:CuMatrixBase) -> float
static PyObject* wrapPreconditionDirections_as_precondition_directions(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("R"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:precondition_directions", names, &a[0])) return nullptr;
  ::kaldi::CuMatrixBase<float> * arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("precondition_directions", names[0], "::kaldi::CuMatrixBase<float> *", a[0]);
  float ret0{};
  // Call actual C++ method.
  ::kaldi::nnet3::OnlineNaturalGradient* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->PreconditionDirections(arg1, &ret0);
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

// @classmethod from_other(other:OnlineNaturalGradient) -> OnlineNaturalGradient
static PyObject* wrapOnlineNaturalGradient_as_from_other(PyObject* cls, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("other"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:from_other", names, &a[0])) return nullptr;
  ::kaldi::nnet3::OnlineNaturalGradient* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("from_other", names[0], "::kaldi::nnet3::OnlineNaturalGradient", a[0]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  std::unique_ptr<::kaldi::nnet3::OnlineNaturalGradient> ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::gtl::MakeUnique<::kaldi::nnet3::OnlineNaturalGradient>(*arg1);
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

static PyMethodDef Methods[] = {
  {C("set_rank"), (PyCFunction)wrapSetRank_as_set_rank, METH_VARARGS | METH_KEYWORDS, C("set_rank(rank:int)\n  Calls C++ function\n  void ::kaldi::nnet3::OnlineNaturalGradient::SetRank(int)")},
  {C("set_update_period"), (PyCFunction)wrapSetUpdatePeriod_as_set_update_period, METH_VARARGS | METH_KEYWORDS, C("set_update_period(update_period:int)\n  Calls C++ function\n  void ::kaldi::nnet3::OnlineNaturalGradient::SetUpdatePeriod(int)")},
  {C("set_num_samples_history"), (PyCFunction)wrapSetNumSamplesHistory_as_set_num_samples_history, METH_VARARGS | METH_KEYWORDS, C("set_num_samples_history(num_samples_history:float)\n  Calls C++ function\n  void ::kaldi::nnet3::OnlineNaturalGradient::SetNumSamplesHistory(float)")},
  {C("set_num_minibatches_history"), (PyCFunction)wrapSetNumMinibatchesHistory_as_set_num_minibatches_history, METH_VARARGS | METH_KEYWORDS, C("set_num_minibatches_history(num_minibatches_history:float)\n  Calls C++ function\n  void ::kaldi::nnet3::OnlineNaturalGradient::SetNumMinibatchesHistory(float)")},
  {C("set_alpha"), (PyCFunction)wrapSetAlpha_as_set_alpha, METH_VARARGS | METH_KEYWORDS, C("set_alpha(alpha:float)\n  Calls C++ function\n  void ::kaldi::nnet3::OnlineNaturalGradient::SetAlpha(float)")},
  {C("turn_on_debug"), (PyCFunction)wrapTurnOnDebug_as_turn_on_debug, METH_NOARGS, C("turn_on_debug()\n  Calls C++ function\n  void ::kaldi::nnet3::OnlineNaturalGradient::TurnOnDebug()")},
  {C("get_num_samples_history"), (PyCFunction)wrapGetNumSamplesHistory_as_get_num_samples_history, METH_NOARGS, C("get_num_samples_history() -> float\n  Calls C++ function\n  float ::kaldi::nnet3::OnlineNaturalGradient::GetNumSamplesHistory()")},
  {C("get_alpha"), (PyCFunction)wrapGetAlpha_as_get_alpha, METH_NOARGS, C("get_alpha() -> float\n  Calls C++ function\n  float ::kaldi::nnet3::OnlineNaturalGradient::GetAlpha()")},
  {C("get_rank"), (PyCFunction)wrapGetRank_as_get_rank, METH_NOARGS, C("get_rank() -> int\n  Calls C++ function\n  int ::kaldi::nnet3::OnlineNaturalGradient::GetRank()")},
  {C("get_update_period"), (PyCFunction)wrapGetUpdatePeriod_as_get_update_period, METH_NOARGS, C("get_update_period() -> int\n  Calls C++ function\n  int ::kaldi::nnet3::OnlineNaturalGradient::GetUpdatePeriod()")},
  {C("freeze"), (PyCFunction)wrapFreeze_as_freeze, METH_VARARGS | METH_KEYWORDS, C("freeze(frozen:bool)\n  Calls C++ function\n  void ::kaldi::nnet3::OnlineNaturalGradient::Freeze(bool)")},
  {C("precondition_directions"), (PyCFunction)wrapPreconditionDirections_as_precondition_directions, METH_VARARGS | METH_KEYWORDS, C("precondition_directions(R:CuMatrixBase) -> float\n  Calls C++ function\n  void ::kaldi::nnet3::OnlineNaturalGradient::PreconditionDirections(::kaldi::CuMatrixBase<float> *, float*)")},
  {C("from_other"), (PyCFunction)wrapOnlineNaturalGradient_as_from_other, METH_VARARGS | METH_KEYWORDS | METH_CLASS, C("from_other(other:OnlineNaturalGradient) -> OnlineNaturalGradient\n  Calls C++ function\n  std::unique_ptr<::kaldi::nnet3::OnlineNaturalGradient> ::kaldi::nnet3::OnlineNaturalGradient::OnlineNaturalGradient(::kaldi::nnet3::OnlineNaturalGradient)")},
  {}
};

// OnlineNaturalGradient __init__
static int _ctor(PyObject* self, PyObject* args, PyObject* kw);

// OnlineNaturalGradient __new__
static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems);

// OnlineNaturalGradient __del__
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
  "_natural_gradient_online.OnlineNaturalGradient", // tp_name
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
  "CLIF wrapper for ::kaldi::nnet3::OnlineNaturalGradient", // tp_doc
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
  if ((args && PyTuple_GET_SIZE(args) != 0) || (kw && PyDict_Size(kw) != 0)) {
    PyErr_SetString(PyExc_TypeError, "OnlineNaturalGradient takes no arguments");
    return -1;
  }
  reinterpret_cast<wrapper*>(self)->cpp = ::clif::MakeShared<::kaldi::nnet3::OnlineNaturalGradient>();
  return 0;
}

static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems) {
  assert(nitems == 0);
  PyObject* self = reinterpret_cast<PyObject*>(new wrapper);
  return PyObject_Init(self, &wrapper_Type);
}

static ::kaldi::nnet3::OnlineNaturalGradient* ThisPtr(PyObject* py) {
  if (Py_TYPE(py) == &wrapper_Type) {
    return ::clif::python::Get(reinterpret_cast<wrapper*>(py)->cpp);
  }
  PyObject* base = PyObject_CallMethod(py, C("as_kaldi_nnet3_OnlineNaturalGradient"), nullptr);
  if (base) {
    if (PyCapsule_CheckExact(base)) {
      void* p = PyCapsule_GetPointer(base, C("::kaldi::nnet3::OnlineNaturalGradient"));
      if (!PyErr_Occurred()) {
        ::kaldi::nnet3::OnlineNaturalGradient* c = static_cast<::kaldi::nnet3::OnlineNaturalGradient*>(p);
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
    PyErr_Format(PyExc_ValueError, "can't convert %s %s to ::kaldi::nnet3::OnlineNaturalGradient*", ClassName(py), ClassType(py));
  } else {
    PyErr_Format(PyExc_TypeError, "expecting %s instance, got %s %s", wrapper_Type.tp_name, ClassName(py), ClassType(py));
  }
  return nullptr;
}
}  // namespace pyOnlineNaturalGradient


// Initialize module

bool Ready() {
  if (PyType_Ready(&pyOnlineNaturalGradient::wrapper_Type) < 0) return false;
  Py_INCREF(&pyOnlineNaturalGradient::wrapper_Type);  // For PyModule_AddObject to steal.
  return true;
}

static struct PyModuleDef Module = {
  PyModuleDef_HEAD_INIT,
  "_natural_gradient_online",  // module name
  "CLIF-generated module for nnet3/natural-gradient-online.h", // module doc
  -1,  // module keeps state in global variables
  nullptr
};

PyObject* Init() {
  PyObject* module = PyModule_Create(&Module);
  if (!module) return nullptr;
  if (PyObject* m = PyImport_ImportModule("_cu_vector")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_cu_matrix")) Py_DECREF(m);
  else goto err;
  PyEval_InitThreads();
  if (PyModule_AddObject(module, "OnlineNaturalGradient", reinterpret_cast<PyObject*>(&pyOnlineNaturalGradient::wrapper_Type)) < 0) goto err;
  return module;
err:
  Py_DECREF(module);
  return nullptr;
}

}  // namespace __natural__gradient__online_clifwrap

namespace kaldi { namespace nnet3 {
using namespace ::clif;
using ::clif::Clif_PyObjAs;
using ::clif::Clif_PyObjFrom;

// OnlineNaturalGradient to/from ::kaldi::nnet3::OnlineNaturalGradient conversion

bool Clif_PyObjAs(PyObject* py, ::kaldi::nnet3::OnlineNaturalGradient** c) {
  assert(c != nullptr);
  if (Py_None == py) {
    *c = nullptr;
    return true;
  }
  ::kaldi::nnet3::OnlineNaturalGradient* cpp = __natural__gradient__online_clifwrap::pyOnlineNaturalGradient::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = cpp;
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::shared_ptr<::kaldi::nnet3::OnlineNaturalGradient>* c) {
  assert(c != nullptr);
  ::kaldi::nnet3::OnlineNaturalGradient* cpp = __natural__gradient__online_clifwrap::pyOnlineNaturalGradient::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = ::clif::MakeStdShared(reinterpret_cast<__natural__gradient__online_clifwrap::pyOnlineNaturalGradient::wrapper*>(py)->cpp, cpp);
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::unique_ptr<::kaldi::nnet3::OnlineNaturalGradient>* c) {
  assert(c != nullptr);
  ::kaldi::nnet3::OnlineNaturalGradient* cpp = __natural__gradient__online_clifwrap::pyOnlineNaturalGradient::ThisPtr(py);
  if (cpp == nullptr) return false;
  if (!reinterpret_cast<__natural__gradient__online_clifwrap::pyOnlineNaturalGradient::wrapper*>(py)->cpp.Detach()) {
    PyErr_SetString(PyExc_ValueError, "Cannot convert OnlineNaturalGradient instance to std::unique_ptr.");
    return false;
  }
  c->reset(cpp);
  return true;
}

bool Clif_PyObjAs(PyObject* py, ::kaldi::nnet3::OnlineNaturalGradient* c) {
  assert(c != nullptr);
  ::kaldi::nnet3::OnlineNaturalGradient* cpp = __natural__gradient__online_clifwrap::pyOnlineNaturalGradient::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = *cpp;
  return true;
}

bool Clif_PyObjAs(PyObject* py, ::gtl::optional<::kaldi::nnet3::OnlineNaturalGradient>* c) {
  assert(c != nullptr);
  ::kaldi::nnet3::OnlineNaturalGradient* cpp = __natural__gradient__online_clifwrap::pyOnlineNaturalGradient::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = *cpp;
  return true;
}

PyObject* Clif_PyObjFrom(::kaldi::nnet3::OnlineNaturalGradient* c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__natural__gradient__online_clifwrap::pyOnlineNaturalGradient::wrapper_Type, NULL, NULL);
  reinterpret_cast<__natural__gradient__online_clifwrap::pyOnlineNaturalGradient::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::nnet3::OnlineNaturalGradient>(c, ::clif::UnOwnedResource());
  return py;
}

PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::nnet3::OnlineNaturalGradient> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__natural__gradient__online_clifwrap::pyOnlineNaturalGradient::wrapper_Type, NULL, NULL);
  reinterpret_cast<__natural__gradient__online_clifwrap::pyOnlineNaturalGradient::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::nnet3::OnlineNaturalGradient>(c);
  return py;
}

PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::nnet3::OnlineNaturalGradient> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__natural__gradient__online_clifwrap::pyOnlineNaturalGradient::wrapper_Type, NULL, NULL);
  reinterpret_cast<__natural__gradient__online_clifwrap::pyOnlineNaturalGradient::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::nnet3::OnlineNaturalGradient>(std::move(c));
  return py;
}

PyObject* Clif_PyObjFrom(const ::kaldi::nnet3::OnlineNaturalGradient& c, py::PostConv unused) {
  PyObject* py = PyType_GenericNew(&__natural__gradient__online_clifwrap::pyOnlineNaturalGradient::wrapper_Type, NULL, NULL);
  reinterpret_cast<__natural__gradient__online_clifwrap::pyOnlineNaturalGradient::wrapper*>(py)->cpp = ::clif::MakeShared<::kaldi::nnet3::OnlineNaturalGradient>(c);
  return py;
}

} }  // namespace kaldi::nnet3