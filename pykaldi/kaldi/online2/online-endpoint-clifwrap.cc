//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/online2/online-endpoint.clif

#include <Python.h>
#include "clif/python/ptr_util.h"
#include "clif/python/optional.h"
#include "clif/python/types.h"
#include "itf/options-itf-clifwrap.h"
#include "hmm/transition-model-clifwrap.h"
#include "decoder/lattice-faster-online-decoder-clifwrap.h"
#include "online-endpoint-clifwrap.h"
#include "clif/python/stltypes.h"
#include "clif/python/slots.h"

namespace __online__endpoint_clifwrap {
using namespace clif;

#define _0 py::postconv::PASS
#define _1 UnicodeFromBytes
#define _2 UnicodeFromBytes


namespace pyOnlineEndpointRule {

struct wrapper {
  PyObject_HEAD
  ::clif::Instance<::kaldi::OnlineEndpointRule> cpp;
};
static ::kaldi::OnlineEndpointRule* ThisPtr(PyObject*);

static PyObject* get_must_contain_nonsilence(PyObject* self, void* xdata) {
  auto cpp = ThisPtr(self); if (!cpp) return nullptr;
  return Clif_PyObjFrom(cpp->must_contain_nonsilence, {});
}

static int set_must_contain_nonsilence(PyObject* self, PyObject* value, void* xdata) {
  if (value == nullptr) {
    PyErr_SetString(PyExc_TypeError, "Cannot delete the must_contain_nonsilence attribute");
    return -1;
  }
  auto cpp = ThisPtr(self); if (!cpp) return -1;
  if (Clif_PyObjAs(value, &cpp->must_contain_nonsilence)) return 0;
  PyObject* s = PyObject_Repr(value);
  PyErr_Format(PyExc_ValueError, "%s is not valid for must_contain_nonsilence:bool", s? PyUnicode_AsUTF8(s): "input");
  Py_XDECREF(s);
  return -1;
}

static PyObject* get_min_trailing_silence(PyObject* self, void* xdata) {
  auto cpp = ThisPtr(self); if (!cpp) return nullptr;
  return Clif_PyObjFrom(cpp->min_trailing_silence, {});
}

static int set_min_trailing_silence(PyObject* self, PyObject* value, void* xdata) {
  if (value == nullptr) {
    PyErr_SetString(PyExc_TypeError, "Cannot delete the min_trailing_silence attribute");
    return -1;
  }
  auto cpp = ThisPtr(self); if (!cpp) return -1;
  if (Clif_PyObjAs(value, &cpp->min_trailing_silence)) return 0;
  PyObject* s = PyObject_Repr(value);
  PyErr_Format(PyExc_ValueError, "%s is not valid for min_trailing_silence:float", s? PyUnicode_AsUTF8(s): "input");
  Py_XDECREF(s);
  return -1;
}

static PyObject* get_max_relative_cost(PyObject* self, void* xdata) {
  auto cpp = ThisPtr(self); if (!cpp) return nullptr;
  return Clif_PyObjFrom(cpp->max_relative_cost, {});
}

static int set_max_relative_cost(PyObject* self, PyObject* value, void* xdata) {
  if (value == nullptr) {
    PyErr_SetString(PyExc_TypeError, "Cannot delete the max_relative_cost attribute");
    return -1;
  }
  auto cpp = ThisPtr(self); if (!cpp) return -1;
  if (Clif_PyObjAs(value, &cpp->max_relative_cost)) return 0;
  PyObject* s = PyObject_Repr(value);
  PyErr_Format(PyExc_ValueError, "%s is not valid for max_relative_cost:float", s? PyUnicode_AsUTF8(s): "input");
  Py_XDECREF(s);
  return -1;
}

static PyObject* get_min_utterance_length(PyObject* self, void* xdata) {
  auto cpp = ThisPtr(self); if (!cpp) return nullptr;
  return Clif_PyObjFrom(cpp->min_utterance_length, {});
}

static int set_min_utterance_length(PyObject* self, PyObject* value, void* xdata) {
  if (value == nullptr) {
    PyErr_SetString(PyExc_TypeError, "Cannot delete the min_utterance_length attribute");
    return -1;
  }
  auto cpp = ThisPtr(self); if (!cpp) return -1;
  if (Clif_PyObjAs(value, &cpp->min_utterance_length)) return 0;
  PyObject* s = PyObject_Repr(value);
  PyErr_Format(PyExc_ValueError, "%s is not valid for min_utterance_length:float", s? PyUnicode_AsUTF8(s): "input");
  Py_XDECREF(s);
  return -1;
}

// __init__(must_contain_nonsilence:bool=default, min_trailing_silence:float=default)
static PyObject* wrapOnlineEndpointRule_as___init__(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2]{};
  char* names[] = {
      C("must_contain_nonsilence"),
      C("min_trailing_silence"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "|OO:__init__", names, &a[0], &a[1])) return nullptr;
  int nargs;  // Find how many args actually passed in.
  for (nargs = 2; nargs > 0; --nargs) {
    if (a[nargs-1] != nullptr) break;
  }
  bool arg1;
  if (nargs > 0) {
    if (!a[0]) arg1 = (bool)true;
    else if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("__init__", names[0], "bool", a[0]);
  }
  float arg2;
  if (nargs > 1) {
    if (!a[1]) arg2 = (float)1.000000e+00;
    else if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("__init__", names[1], "float", a[1]);
  }
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
  switch (nargs) {
  case 0:
    reinterpret_cast<wrapper*>(self)->cpp = ::clif::MakeShared<::kaldi::OnlineEndpointRule>(); break;
  case 1:
    reinterpret_cast<wrapper*>(self)->cpp = ::clif::MakeShared<::kaldi::OnlineEndpointRule>(std::move(arg1)); break;
  case 2:
    reinterpret_cast<wrapper*>(self)->cpp = ::clif::MakeShared<::kaldi::OnlineEndpointRule>(std::move(arg1), std::move(arg2)); break;
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

// register(opts:OptionsItf)
static PyObject* wrapRegister_as_register(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("opts"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:register", names, &a[0])) return nullptr;
  ::kaldi::OptionsItf * arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("register", names[0], "::kaldi::OptionsItf *", a[0]);
  // Call actual C++ method.
  ::kaldi::OnlineEndpointRule* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->Register(arg1);
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
  {C("must_contain_nonsilence"), get_must_contain_nonsilence, set_must_contain_nonsilence, C("C++ bool OnlineEndpointRule.must_contain_nonsilence")},
  {C("min_trailing_silence"), get_min_trailing_silence, set_min_trailing_silence, C("C++ ::kaldi::BaseFloat OnlineEndpointRule.min_trailing_silence")},
  {C("max_relative_cost"), get_max_relative_cost, set_max_relative_cost, C("C++ ::kaldi::BaseFloat OnlineEndpointRule.max_relative_cost")},
  {C("min_utterance_length"), get_min_utterance_length, set_min_utterance_length, C("C++ ::kaldi::BaseFloat OnlineEndpointRule.min_utterance_length")},
  {}
};

static PyMethodDef Methods[] = {
  {C("__init__"), (PyCFunction)wrapOnlineEndpointRule_as___init__, METH_VARARGS | METH_KEYWORDS, C("__init__(must_contain_nonsilence:bool=default, min_trailing_silence:float=default)\n  Calls C++ function\n  void ::kaldi::OnlineEndpointRule::OnlineEndpointRule(bool, float)")},
  {C("register"), (PyCFunction)wrapRegister_as_register, METH_VARARGS | METH_KEYWORDS, C("register(opts:OptionsItf)\n  Calls C++ function\n  void ::kaldi::OnlineEndpointRule::Register(::kaldi::OptionsItf *)")},
  {}
};

// OnlineEndpointRule __init__
static int _ctor(PyObject* self, PyObject* args, PyObject* kw);

// OnlineEndpointRule __new__
static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems);

// OnlineEndpointRule __del__
static void _del(void* self) {
  delete reinterpret_cast<wrapper*>(self);
}

PyTypeObject wrapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "_online_endpoint.OnlineEndpointRule", // tp_name
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
  "CLIF wrapper for ::kaldi::OnlineEndpointRule", // tp_doc
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
  PyObject* init = wrapOnlineEndpointRule_as___init__(self, args, kw);
  Py_XDECREF(init);
  return init? 0: -1;
}

static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems) {
  assert(nitems == 0);
  PyObject* self = reinterpret_cast<PyObject*>(new wrapper);
  return PyObject_Init(self, &wrapper_Type);
}

static ::kaldi::OnlineEndpointRule* ThisPtr(PyObject* py) {
  if (Py_TYPE(py) == &wrapper_Type) {
    return ::clif::python::Get(reinterpret_cast<wrapper*>(py)->cpp);
  }
  PyObject* base = PyObject_CallMethod(py, C("as_kaldi_OnlineEndpointRule"), nullptr);
  if (base) {
    if (PyCapsule_CheckExact(base)) {
      void* p = PyCapsule_GetPointer(base, C("::kaldi::OnlineEndpointRule"));
      if (!PyErr_Occurred()) {
        ::kaldi::OnlineEndpointRule* c = static_cast<::kaldi::OnlineEndpointRule*>(p);
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
    PyErr_Format(PyExc_ValueError, "can't convert %s %s to ::kaldi::OnlineEndpointRule*", ClassName(py), ClassType(py));
  } else {
    PyErr_Format(PyExc_TypeError, "expecting %s instance, got %s %s", wrapper_Type.tp_name, ClassName(py), ClassType(py));
  }
  return nullptr;
}
}  // namespace pyOnlineEndpointRule

namespace pyOnlineEndpointConfig {

struct wrapper {
  PyObject_HEAD
  ::clif::Instance<::kaldi::OnlineEndpointConfig> cpp;
};
static ::kaldi::OnlineEndpointConfig* ThisPtr(PyObject*);

static PyObject* get_silence_phones(PyObject* self, void* xdata) {
  auto cpp = ThisPtr(self); if (!cpp) return nullptr;
  return Clif_PyObjFrom(cpp->silence_phones, _1);
}

static int set_silence_phones(PyObject* self, PyObject* value, void* xdata) {
  if (value == nullptr) {
    PyErr_SetString(PyExc_TypeError, "Cannot delete the silence_phones attribute");
    return -1;
  }
  auto cpp = ThisPtr(self); if (!cpp) return -1;
  if (Clif_PyObjAs(value, &cpp->silence_phones)) return 0;
  PyObject* s = PyObject_Repr(value);
  PyErr_Format(PyExc_ValueError, "%s is not valid for silence_phones:str", s? PyUnicode_AsUTF8(s): "input");
  Py_XDECREF(s);
  return -1;
}

static PyObject* get_rule1(PyObject* self, void* xdata) {
  auto cpp = ThisPtr(self); if (!cpp) return nullptr;
  return Clif_PyObjFrom(::clif::MakeStdShared(reinterpret_cast<wrapper*>(self)->cpp, &cpp->rule1), {});
}

static int set_rule1(PyObject* self, PyObject* value, void* xdata) {
  if (value == nullptr) {
    PyErr_SetString(PyExc_TypeError, "Cannot delete the rule1 attribute");
    return -1;
  }
  auto cpp = ThisPtr(self); if (!cpp) return -1;
  if (Clif_PyObjAs(value, &cpp->rule1)) return 0;
  PyObject* s = PyObject_Repr(value);
  PyErr_Format(PyExc_ValueError, "%s is not valid for rule1:OnlineEndpointRule", s? PyUnicode_AsUTF8(s): "input");
  Py_XDECREF(s);
  return -1;
}

static PyObject* get_rule2(PyObject* self, void* xdata) {
  auto cpp = ThisPtr(self); if (!cpp) return nullptr;
  return Clif_PyObjFrom(::clif::MakeStdShared(reinterpret_cast<wrapper*>(self)->cpp, &cpp->rule2), {});
}

static int set_rule2(PyObject* self, PyObject* value, void* xdata) {
  if (value == nullptr) {
    PyErr_SetString(PyExc_TypeError, "Cannot delete the rule2 attribute");
    return -1;
  }
  auto cpp = ThisPtr(self); if (!cpp) return -1;
  if (Clif_PyObjAs(value, &cpp->rule2)) return 0;
  PyObject* s = PyObject_Repr(value);
  PyErr_Format(PyExc_ValueError, "%s is not valid for rule2:OnlineEndpointRule", s? PyUnicode_AsUTF8(s): "input");
  Py_XDECREF(s);
  return -1;
}

static PyObject* get_rule3(PyObject* self, void* xdata) {
  auto cpp = ThisPtr(self); if (!cpp) return nullptr;
  return Clif_PyObjFrom(::clif::MakeStdShared(reinterpret_cast<wrapper*>(self)->cpp, &cpp->rule3), {});
}

static int set_rule3(PyObject* self, PyObject* value, void* xdata) {
  if (value == nullptr) {
    PyErr_SetString(PyExc_TypeError, "Cannot delete the rule3 attribute");
    return -1;
  }
  auto cpp = ThisPtr(self); if (!cpp) return -1;
  if (Clif_PyObjAs(value, &cpp->rule3)) return 0;
  PyObject* s = PyObject_Repr(value);
  PyErr_Format(PyExc_ValueError, "%s is not valid for rule3:OnlineEndpointRule", s? PyUnicode_AsUTF8(s): "input");
  Py_XDECREF(s);
  return -1;
}

static PyObject* get_rule4(PyObject* self, void* xdata) {
  auto cpp = ThisPtr(self); if (!cpp) return nullptr;
  return Clif_PyObjFrom(::clif::MakeStdShared(reinterpret_cast<wrapper*>(self)->cpp, &cpp->rule4), {});
}

static int set_rule4(PyObject* self, PyObject* value, void* xdata) {
  if (value == nullptr) {
    PyErr_SetString(PyExc_TypeError, "Cannot delete the rule4 attribute");
    return -1;
  }
  auto cpp = ThisPtr(self); if (!cpp) return -1;
  if (Clif_PyObjAs(value, &cpp->rule4)) return 0;
  PyObject* s = PyObject_Repr(value);
  PyErr_Format(PyExc_ValueError, "%s is not valid for rule4:OnlineEndpointRule", s? PyUnicode_AsUTF8(s): "input");
  Py_XDECREF(s);
  return -1;
}

static PyObject* get_rule5(PyObject* self, void* xdata) {
  auto cpp = ThisPtr(self); if (!cpp) return nullptr;
  return Clif_PyObjFrom(::clif::MakeStdShared(reinterpret_cast<wrapper*>(self)->cpp, &cpp->rule5), {});
}

static int set_rule5(PyObject* self, PyObject* value, void* xdata) {
  if (value == nullptr) {
    PyErr_SetString(PyExc_TypeError, "Cannot delete the rule5 attribute");
    return -1;
  }
  auto cpp = ThisPtr(self); if (!cpp) return -1;
  if (Clif_PyObjAs(value, &cpp->rule5)) return 0;
  PyObject* s = PyObject_Repr(value);
  PyErr_Format(PyExc_ValueError, "%s is not valid for rule5:OnlineEndpointRule", s? PyUnicode_AsUTF8(s): "input");
  Py_XDECREF(s);
  return -1;
}

// register(opts:OptionsItf)
static PyObject* wrapRegister_as_register(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("opts"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:register", names, &a[0])) return nullptr;
  ::kaldi::OptionsItf * arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("register", names[0], "::kaldi::OptionsItf *", a[0]);
  // Call actual C++ method.
  ::kaldi::OnlineEndpointConfig* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->Register(arg1);
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
  {C("silence_phones"), get_silence_phones, set_silence_phones, C("colon separated list of phones to be considered as silence")},
  {C("rule1"), get_rule1, set_rule1, C("Rule1 times out after 5 seconds of silence if decoded nothing")},
  {C("rule2"), get_rule2, set_rule2, C("Rule2 times out after 0.5 seconds of silence if reached final-state")},
  {C("rule3"), get_rule3, set_rule3, C("Rule3 times out after 1.0 seconds of silence if reached final-state")},
  {C("rule4"), get_rule4, set_rule4, C("Rule4 times out after 2.0 seconds of silence after decoding something")},
  {C("rule5"), get_rule5, set_rule5, C("Rule5 times out after the utterance is 20.0 seconds")},
  {}
};

static PyMethodDef Methods[] = {
  {C("register"), (PyCFunction)wrapRegister_as_register, METH_VARARGS | METH_KEYWORDS, C("register(opts:OptionsItf)\n  Calls C++ function\n  void ::kaldi::OnlineEndpointConfig::Register(::kaldi::OptionsItf *)")},
  {}
};

// OnlineEndpointConfig __init__
static int _ctor(PyObject* self, PyObject* args, PyObject* kw);

// OnlineEndpointConfig __new__
static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems);

// OnlineEndpointConfig __del__
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
  "_online_endpoint.OnlineEndpointConfig", // tp_name
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
  "CLIF wrapper for ::kaldi::OnlineEndpointConfig", // tp_doc
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
    PyErr_SetString(PyExc_TypeError, "OnlineEndpointConfig takes no arguments");
    return -1;
  }
  reinterpret_cast<wrapper*>(self)->cpp = ::clif::MakeShared<::kaldi::OnlineEndpointConfig>();
  return 0;
}

static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems) {
  assert(nitems == 0);
  PyObject* self = reinterpret_cast<PyObject*>(new wrapper);
  return PyObject_Init(self, &wrapper_Type);
}

static ::kaldi::OnlineEndpointConfig* ThisPtr(PyObject* py) {
  if (Py_TYPE(py) == &wrapper_Type) {
    return ::clif::python::Get(reinterpret_cast<wrapper*>(py)->cpp);
  }
  PyObject* base = PyObject_CallMethod(py, C("as_kaldi_OnlineEndpointConfig"), nullptr);
  if (base) {
    if (PyCapsule_CheckExact(base)) {
      void* p = PyCapsule_GetPointer(base, C("::kaldi::OnlineEndpointConfig"));
      if (!PyErr_Occurred()) {
        ::kaldi::OnlineEndpointConfig* c = static_cast<::kaldi::OnlineEndpointConfig*>(p);
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
    PyErr_Format(PyExc_ValueError, "can't convert %s %s to ::kaldi::OnlineEndpointConfig*", ClassName(py), ClassType(py));
  } else {
    PyErr_Format(PyExc_TypeError, "expecting %s instance, got %s %s", wrapper_Type.tp_name, ClassName(py), ClassType(py));
  }
  return nullptr;
}
}  // namespace pyOnlineEndpointConfig

// endpoint_detected(config:OnlineEndpointConfig, num_frames_decoded:int, trailing_silence_frames:int, frame_shift_in_seconds:float, final_relative_cost:float) -> bool
static PyObject* wrapEndpointDetected_as_endpoint_detected(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[5];
  char* names[] = {
      C("config"),
      C("num_frames_decoded"),
      C("trailing_silence_frames"),
      C("frame_shift_in_seconds"),
      C("final_relative_cost"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOOOO:endpoint_detected", names, &a[0], &a[1], &a[2], &a[3], &a[4])) return nullptr;
  ::kaldi::OnlineEndpointConfig* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("endpoint_detected", names[0], "::kaldi::OnlineEndpointConfig", a[0]);
  int arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("endpoint_detected", names[1], "int", a[1]);
  int arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("endpoint_detected", names[2], "int", a[2]);
  float arg4;
  if (!Clif_PyObjAs(a[3], &arg4)) return ArgError("endpoint_detected", names[3], "float", a[3]);
  float arg5;
  if (!Clif_PyObjAs(a[4], &arg5)) return ArgError("endpoint_detected", names[4], "float", a[4]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  bool ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::EndpointDetected(*arg1, std::move(arg2), std::move(arg3), std::move(arg4), std::move(arg5));
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

// trailing_silence_length(tmodel:TransitionModel, silence_phones:str, decoder:LatticeFasterOnlineDecoder) -> int
static PyObject* wrapTrailingSilenceLength_as_trailing_silence_length(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[3];
  char* names[] = {
      C("tmodel"),
      C("silence_phones"),
      C("decoder"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOO:trailing_silence_length", names, &a[0], &a[1], &a[2])) return nullptr;
  ::kaldi::TransitionModel* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("trailing_silence_length", names[0], "::kaldi::TransitionModel", a[0]);
  ::std::string arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("trailing_silence_length", names[1], "::std::string", a[1]);
  ::kaldi::LatticeFasterOnlineDecoder* arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("trailing_silence_length", names[2], "::kaldi::LatticeFasterOnlineDecoder", a[2]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  int ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::TrailingSilenceLength(*arg1, std::move(arg2), *arg3);
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

// endpoint_detected_with_transition_model(config:OnlineEndpointConfig, tmodel:TransitionModel, frame_shift_in_seconds:float, decoder:LatticeFasterOnlineDecoder) -> bool
static PyObject* wrapEndpointDetected_as_endpoint_detected_with_transition_model(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[4];
  char* names[] = {
      C("config"),
      C("tmodel"),
      C("frame_shift_in_seconds"),
      C("decoder"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOOO:endpoint_detected_with_transition_model", names, &a[0], &a[1], &a[2], &a[3])) return nullptr;
  ::kaldi::OnlineEndpointConfig* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("endpoint_detected_with_transition_model", names[0], "::kaldi::OnlineEndpointConfig", a[0]);
  ::kaldi::TransitionModel* arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("endpoint_detected_with_transition_model", names[1], "::kaldi::TransitionModel", a[1]);
  float arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("endpoint_detected_with_transition_model", names[2], "float", a[2]);
  ::kaldi::LatticeFasterOnlineDecoder* arg4;
  if (!Clif_PyObjAs(a[3], &arg4)) return ArgError("endpoint_detected_with_transition_model", names[3], "::kaldi::LatticeFasterOnlineDecoder", a[3]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  bool ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::EndpointDetected(*arg1, *arg2, std::move(arg3), *arg4);
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
  {C("endpoint_detected"), (PyCFunction)wrapEndpointDetected_as_endpoint_detected, METH_VARARGS | METH_KEYWORDS, C("endpoint_detected(config:OnlineEndpointConfig, num_frames_decoded:int, trailing_silence_frames:int, frame_shift_in_seconds:float, final_relative_cost:float) -> bool\n\nReturns true if this set of endpointing rules thinks we should terminate decoding")},
  {C("trailing_silence_length"), (PyCFunction)wrapTrailingSilenceLength_as_trailing_silence_length, METH_VARARGS | METH_KEYWORDS, C("trailing_silence_length(tmodel:TransitionModel, silence_phones:str, decoder:LatticeFasterOnlineDecoder) -> int\n\nReturns the number of frames of trailing silence in the best-path traceback\n\nArgs:\n  silence_phones (str): colon-separated list of integer ids of phones to be considered silence")},
  {C("endpoint_detected_with_transition_model"), (PyCFunction)wrapEndpointDetected_as_endpoint_detected_with_transition_model, METH_VARARGS | METH_KEYWORDS, C("endpoint_detected_with_transition_model(config:OnlineEndpointConfig, tmodel:TransitionModel, frame_shift_in_seconds:float, decoder:LatticeFasterOnlineDecoder) -> bool\n\nThis is a higher-level convenience function that works out the arguments to the :meth:`endpoint_detected` function")},
  {}
};

bool Ready() {
  if (PyType_Ready(&pyOnlineEndpointRule::wrapper_Type) < 0) return false;
  Py_INCREF(&pyOnlineEndpointRule::wrapper_Type);  // For PyModule_AddObject to steal.
  if (PyType_Ready(&pyOnlineEndpointConfig::wrapper_Type) < 0) return false;
  Py_INCREF(&pyOnlineEndpointConfig::wrapper_Type);  // For PyModule_AddObject to steal.
  return true;
}

static struct PyModuleDef Module = {
  PyModuleDef_HEAD_INIT,
  "_online_endpoint",  // module name
  "CLIF-generated module for online2/online-endpoint.h", // module doc
  -1,  // module keeps state in global variables
  Methods
};

PyObject* Init() {
  PyObject* module = PyModule_Create(&Module);
  if (!module) return nullptr;
  if (PyObject* m = PyImport_ImportModule("_options_itf")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_transition_model")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_lattice_faster_online_decoder")) Py_DECREF(m);
  else goto err;
  PyEval_InitThreads();
  if (PyModule_AddObject(module, "OnlineEndpointRule", reinterpret_cast<PyObject*>(&pyOnlineEndpointRule::wrapper_Type)) < 0) goto err;
  if (PyModule_AddObject(module, "OnlineEndpointConfig", reinterpret_cast<PyObject*>(&pyOnlineEndpointConfig::wrapper_Type)) < 0) goto err;
  return module;
err:
  Py_DECREF(module);
  return nullptr;
}

}  // namespace __online__endpoint_clifwrap

namespace kaldi {
using namespace ::clif;
using ::clif::Clif_PyObjAs;
using ::clif::Clif_PyObjFrom;

// OnlineEndpointConfig to/from ::kaldi::OnlineEndpointConfig conversion

bool Clif_PyObjAs(PyObject* py, ::kaldi::OnlineEndpointConfig** c) {
  assert(c != nullptr);
  if (Py_None == py) {
    *c = nullptr;
    return true;
  }
  ::kaldi::OnlineEndpointConfig* cpp = __online__endpoint_clifwrap::pyOnlineEndpointConfig::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = cpp;
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::shared_ptr<::kaldi::OnlineEndpointConfig>* c) {
  assert(c != nullptr);
  ::kaldi::OnlineEndpointConfig* cpp = __online__endpoint_clifwrap::pyOnlineEndpointConfig::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = ::clif::MakeStdShared(reinterpret_cast<__online__endpoint_clifwrap::pyOnlineEndpointConfig::wrapper*>(py)->cpp, cpp);
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::unique_ptr<::kaldi::OnlineEndpointConfig>* c) {
  assert(c != nullptr);
  ::kaldi::OnlineEndpointConfig* cpp = __online__endpoint_clifwrap::pyOnlineEndpointConfig::ThisPtr(py);
  if (cpp == nullptr) return false;
  if (!reinterpret_cast<__online__endpoint_clifwrap::pyOnlineEndpointConfig::wrapper*>(py)->cpp.Detach()) {
    PyErr_SetString(PyExc_ValueError, "Cannot convert OnlineEndpointConfig instance to std::unique_ptr.");
    return false;
  }
  c->reset(cpp);
  return true;
}

bool Clif_PyObjAs(PyObject* py, ::kaldi::OnlineEndpointConfig* c) {
  assert(c != nullptr);
  ::kaldi::OnlineEndpointConfig* cpp = __online__endpoint_clifwrap::pyOnlineEndpointConfig::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = *cpp;
  return true;
}

bool Clif_PyObjAs(PyObject* py, ::gtl::optional<::kaldi::OnlineEndpointConfig>* c) {
  assert(c != nullptr);
  ::kaldi::OnlineEndpointConfig* cpp = __online__endpoint_clifwrap::pyOnlineEndpointConfig::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = *cpp;
  return true;
}

PyObject* Clif_PyObjFrom(::kaldi::OnlineEndpointConfig* c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__online__endpoint_clifwrap::pyOnlineEndpointConfig::wrapper_Type, NULL, NULL);
  reinterpret_cast<__online__endpoint_clifwrap::pyOnlineEndpointConfig::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::OnlineEndpointConfig>(c, ::clif::UnOwnedResource());
  return py;
}

PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::OnlineEndpointConfig> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__online__endpoint_clifwrap::pyOnlineEndpointConfig::wrapper_Type, NULL, NULL);
  reinterpret_cast<__online__endpoint_clifwrap::pyOnlineEndpointConfig::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::OnlineEndpointConfig>(c);
  return py;
}

PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::OnlineEndpointConfig> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__online__endpoint_clifwrap::pyOnlineEndpointConfig::wrapper_Type, NULL, NULL);
  reinterpret_cast<__online__endpoint_clifwrap::pyOnlineEndpointConfig::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::OnlineEndpointConfig>(std::move(c));
  return py;
}

PyObject* Clif_PyObjFrom(const ::kaldi::OnlineEndpointConfig& c, py::PostConv unused) {
  PyObject* py = PyType_GenericNew(&__online__endpoint_clifwrap::pyOnlineEndpointConfig::wrapper_Type, NULL, NULL);
  reinterpret_cast<__online__endpoint_clifwrap::pyOnlineEndpointConfig::wrapper*>(py)->cpp = ::clif::MakeShared<::kaldi::OnlineEndpointConfig>(c);
  return py;
}

// OnlineEndpointRule to/from ::kaldi::OnlineEndpointRule conversion

bool Clif_PyObjAs(PyObject* py, ::kaldi::OnlineEndpointRule** c) {
  assert(c != nullptr);
  if (Py_None == py) {
    *c = nullptr;
    return true;
  }
  ::kaldi::OnlineEndpointRule* cpp = __online__endpoint_clifwrap::pyOnlineEndpointRule::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = cpp;
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::shared_ptr<::kaldi::OnlineEndpointRule>* c) {
  assert(c != nullptr);
  ::kaldi::OnlineEndpointRule* cpp = __online__endpoint_clifwrap::pyOnlineEndpointRule::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = ::clif::MakeStdShared(reinterpret_cast<__online__endpoint_clifwrap::pyOnlineEndpointRule::wrapper*>(py)->cpp, cpp);
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::unique_ptr<::kaldi::OnlineEndpointRule>* c) {
  assert(c != nullptr);
  ::kaldi::OnlineEndpointRule* cpp = __online__endpoint_clifwrap::pyOnlineEndpointRule::ThisPtr(py);
  if (cpp == nullptr) return false;
  if (!reinterpret_cast<__online__endpoint_clifwrap::pyOnlineEndpointRule::wrapper*>(py)->cpp.Detach()) {
    PyErr_SetString(PyExc_ValueError, "Cannot convert OnlineEndpointRule instance to std::unique_ptr.");
    return false;
  }
  c->reset(cpp);
  return true;
}

bool Clif_PyObjAs(PyObject* py, ::kaldi::OnlineEndpointRule* c) {
  assert(c != nullptr);
  ::kaldi::OnlineEndpointRule* cpp = __online__endpoint_clifwrap::pyOnlineEndpointRule::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = *cpp;
  return true;
}

bool Clif_PyObjAs(PyObject* py, ::gtl::optional<::kaldi::OnlineEndpointRule>* c) {
  assert(c != nullptr);
  ::kaldi::OnlineEndpointRule* cpp = __online__endpoint_clifwrap::pyOnlineEndpointRule::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = *cpp;
  return true;
}

PyObject* Clif_PyObjFrom(::kaldi::OnlineEndpointRule* c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__online__endpoint_clifwrap::pyOnlineEndpointRule::wrapper_Type, NULL, NULL);
  reinterpret_cast<__online__endpoint_clifwrap::pyOnlineEndpointRule::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::OnlineEndpointRule>(c, ::clif::UnOwnedResource());
  return py;
}

PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::OnlineEndpointRule> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__online__endpoint_clifwrap::pyOnlineEndpointRule::wrapper_Type, NULL, NULL);
  reinterpret_cast<__online__endpoint_clifwrap::pyOnlineEndpointRule::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::OnlineEndpointRule>(c);
  return py;
}

PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::OnlineEndpointRule> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__online__endpoint_clifwrap::pyOnlineEndpointRule::wrapper_Type, NULL, NULL);
  reinterpret_cast<__online__endpoint_clifwrap::pyOnlineEndpointRule::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::OnlineEndpointRule>(std::move(c));
  return py;
}

PyObject* Clif_PyObjFrom(const ::kaldi::OnlineEndpointRule& c, py::PostConv unused) {
  PyObject* py = PyType_GenericNew(&__online__endpoint_clifwrap::pyOnlineEndpointRule::wrapper_Type, NULL, NULL);
  reinterpret_cast<__online__endpoint_clifwrap::pyOnlineEndpointRule::wrapper*>(py)->cpp = ::clif::MakeShared<::kaldi::OnlineEndpointRule>(c);
  return py;
}

}  // namespace kaldi