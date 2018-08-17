//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/tree/build-tree-questions.clif

#include <Python.h>
#include "clif/python/ptr_util.h"
#include "clif/python/optional.h"
#include "clif/python/types.h"
#include "base/iostream-clifwrap.h"
#include "tree/cluster-utils-clifwrap.h"
#include "build-tree-questions-clifwrap.h"
#include "clif/python/stltypes.h"
#include "clif/python/slots.h"

namespace __build__tree__questions_clifwrap {
using namespace clif;

#define _0 py::postconv::PASS
#define _1 UnicodeFromBytes
#define _2 UnicodeFromBytes

static PyObject *_Enum{}, *_IntEnum{};  // set below in Init()


// Create Python Enum object (cached in _AllKeysType) for ::kaldi::AllKeysType
static PyObject* wrapAllKeysType() {
  PyObject *py, *py_enum_class{}, *names = PyTuple_New(3);
  if (names == nullptr) return nullptr;
  if ((py = Py_BuildValue("(NN)", PyUnicode_FromString("ALL_KEYS_INSIST_IDENTICAL"), PyInt_FromLong(
        static_cast<typename std::underlying_type<::kaldi::AllKeysType>::type>(::kaldi::AllKeysType::kAllKeysInsistIdentical)))
      ) == nullptr) goto err;
  PyTuple_SET_ITEM(names, 0, py);
  if ((py = Py_BuildValue("(NN)", PyUnicode_FromString("ALL_KEYS_INTERSECTION"), PyInt_FromLong(
        static_cast<typename std::underlying_type<::kaldi::AllKeysType>::type>(::kaldi::AllKeysType::kAllKeysIntersection)))
      ) == nullptr) goto err;
  PyTuple_SET_ITEM(names, 1, py);
  if ((py = Py_BuildValue("(NN)", PyUnicode_FromString("ALL_KEYS_UNION"), PyInt_FromLong(
        static_cast<typename std::underlying_type<::kaldi::AllKeysType>::type>(::kaldi::AllKeysType::kAllKeysUnion)))
      ) == nullptr) goto err;
  PyTuple_SET_ITEM(names, 2, py);
  py = PyUnicode_FromString("AllKeysType");
  py_enum_class = PyObject_CallFunctionObjArgs(_IntEnum, py, names, nullptr);
  Py_DECREF(py);
err:
  Py_DECREF(names);
  return py_enum_class;
}
static PyObject* _AllKeysType{};  // set by above func in Init()

namespace pyQuestionsForKey {

struct wrapper {
  PyObject_HEAD
  ::clif::Instance<::kaldi::QuestionsForKey> cpp;
};
static ::kaldi::QuestionsForKey* ThisPtr(PyObject*);

static PyObject* get_initial_questions(PyObject* self, void* xdata) {
  auto cpp = ThisPtr(self); if (!cpp) return nullptr;
  return Clif_PyObjFrom(cpp->initial_questions, {});
}

static int set_initial_questions(PyObject* self, PyObject* value, void* xdata) {
  if (value == nullptr) {
    PyErr_SetString(PyExc_TypeError, "Cannot delete the initial_questions attribute");
    return -1;
  }
  auto cpp = ThisPtr(self); if (!cpp) return -1;
  if (Clif_PyObjAs(value, &cpp->initial_questions)) return 0;
  PyObject* s = PyObject_Repr(value);
  PyErr_Format(PyExc_ValueError, "%s is not valid for initial_questions:list<list<int>>", s? PyUnicode_AsUTF8(s): "input");
  Py_XDECREF(s);
  return -1;
}

static PyObject* get_refine_opts(PyObject* self, void* xdata) {
  auto cpp = ThisPtr(self); if (!cpp) return nullptr;
  return Clif_PyObjFrom(::clif::MakeStdShared(reinterpret_cast<wrapper*>(self)->cpp, &cpp->refine_opts), {});
}

static int set_refine_opts(PyObject* self, PyObject* value, void* xdata) {
  if (value == nullptr) {
    PyErr_SetString(PyExc_TypeError, "Cannot delete the refine_opts attribute");
    return -1;
  }
  auto cpp = ThisPtr(self); if (!cpp) return -1;
  if (Clif_PyObjAs(value, &cpp->refine_opts)) return 0;
  PyObject* s = PyObject_Repr(value);
  PyErr_Format(PyExc_ValueError, "%s is not valid for refine_opts:RefineClustersOptions", s? PyUnicode_AsUTF8(s): "input");
  Py_XDECREF(s);
  return -1;
}

// __init__(num_iters:int=default)
static PyObject* wrapQuestionsForKey_as___init__(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1]{};
  char* names[] = {
      C("num_iters"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "|O:__init__", names, &a[0])) return nullptr;
  int nargs;  // Find how many args actually passed in.
  for (nargs = 1; nargs > 0; --nargs) {
    if (a[nargs-1] != nullptr) break;
  }
  int arg1;
  if (nargs > 0) {
    if (!a[0]) arg1 = (int)5;
    else if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("__init__", names[0], "int", a[0]);
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
    reinterpret_cast<wrapper*>(self)->cpp = ::clif::MakeShared<::kaldi::QuestionsForKey>(); break;
  case 1:
    reinterpret_cast<wrapper*>(self)->cpp = ::clif::MakeShared<::kaldi::QuestionsForKey>(std::move(arg1)); break;
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
  ::kaldi::QuestionsForKey* c = ThisPtr(self);
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

// read(is:istream, binary:bool)
static PyObject* wrapRead_as_read(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2];
  char* names[] = {
      C("is"),
      C("binary"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO:read", names, &a[0], &a[1])) return nullptr;
  ::std::basic_istream<char, ::std::char_traits<char> >* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("read", names[0], "::std::basic_istream<char, ::std::char_traits<char> >", a[0]);
  bool arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("read", names[1], "bool", a[1]);
  // Call actual C++ method.
  ::kaldi::QuestionsForKey* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->Read(*arg1, std::move(arg2));
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
  {C("initial_questions"), get_initial_questions, set_initial_questions, C("C++ ::std::vector< ::std::vector< ::kaldi::EventValueType> > QuestionsForKey.initial_questions")},
  {C("refine_opts"), get_refine_opts, set_refine_opts, C("C++ ::kaldi::RefineClustersOptions QuestionsForKey.refine_opts")},
  {}
};

static PyMethodDef Methods[] = {
  {C("__init__"), (PyCFunction)wrapQuestionsForKey_as___init__, METH_VARARGS | METH_KEYWORDS, C("__init__(num_iters:int=default)\n  Calls C++ function\n  void ::kaldi::QuestionsForKey::QuestionsForKey(int)")},
  {C("write"), (PyCFunction)wrapWrite_as_write, METH_VARARGS | METH_KEYWORDS, C("write(os:ostream, binary:bool)\n  Calls C++ function\n  void ::kaldi::QuestionsForKey::Write(::std::basic_ostream<char, ::std::char_traits<char> >, bool)")},
  {C("read"), (PyCFunction)wrapRead_as_read, METH_VARARGS | METH_KEYWORDS, C("read(is:istream, binary:bool)\n  Calls C++ function\n  void ::kaldi::QuestionsForKey::Read(::std::basic_istream<char, ::std::char_traits<char> >, bool)")},
  {}
};

// QuestionsForKey __init__
static int _ctor(PyObject* self, PyObject* args, PyObject* kw);

// QuestionsForKey __new__
static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems);

// QuestionsForKey __del__
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
  "_build_tree_questions.QuestionsForKey", // tp_name
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
  "CLIF wrapper for ::kaldi::QuestionsForKey", // tp_doc
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
  PyObject* init = wrapQuestionsForKey_as___init__(self, args, kw);
  Py_XDECREF(init);
  return init? 0: -1;
}

static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems) {
  assert(nitems == 0);
  PyObject* self = reinterpret_cast<PyObject*>(new wrapper);
  return PyObject_Init(self, &wrapper_Type);
}

static ::kaldi::QuestionsForKey* ThisPtr(PyObject* py) {
  if (Py_TYPE(py) == &wrapper_Type) {
    return ::clif::python::Get(reinterpret_cast<wrapper*>(py)->cpp);
  }
  PyObject* base = PyObject_CallMethod(py, C("as_kaldi_QuestionsForKey"), nullptr);
  if (base) {
    if (PyCapsule_CheckExact(base)) {
      void* p = PyCapsule_GetPointer(base, C("::kaldi::QuestionsForKey"));
      if (!PyErr_Occurred()) {
        ::kaldi::QuestionsForKey* c = static_cast<::kaldi::QuestionsForKey*>(p);
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
    PyErr_Format(PyExc_ValueError, "can't convert %s %s to ::kaldi::QuestionsForKey*", ClassName(py), ClassType(py));
  } else {
    PyErr_Format(PyExc_TypeError, "expecting %s instance, got %s %s", wrapper_Type.tp_name, ClassName(py), ClassType(py));
  }
  return nullptr;
}
}  // namespace pyQuestionsForKey

namespace pyQuestions {

struct wrapper {
  PyObject_HEAD
  ::clif::Instance<::kaldi::Questions> cpp;
};
static ::kaldi::Questions* ThisPtr(PyObject*);

// get_questions_of(key:int) -> QuestionsForKey
static PyObject* wrapGetQuestionsOf_as_get_questions_of(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("key"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:get_questions_of", names, &a[0])) return nullptr;
  int arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("get_questions_of", names[0], "int", a[0]);
  // Call actual C++ method.
  ::kaldi::Questions* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  ::kaldi::QuestionsForKey ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = c->GetQuestionsOf(std::move(arg1));
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

// set_questions_of(key:int, options_of_key:QuestionsForKey)
static PyObject* wrapSetQuestionsOf_as_set_questions_of(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2];
  char* names[] = {
      C("key"),
      C("options_of_key"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO:set_questions_of", names, &a[0], &a[1])) return nullptr;
  int arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("set_questions_of", names[0], "int", a[0]);
  ::kaldi::QuestionsForKey* arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("set_questions_of", names[1], "::kaldi::QuestionsForKey", a[1]);
  // Call actual C++ method.
  ::kaldi::Questions* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->SetQuestionsOf(std::move(arg1), *arg2);
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

// get_keys_with_questions() -> list<int>
static PyObject* wrapGetKeysWithQuestions_as_get_keys_with_questions(PyObject* self) {
  ::std::vector< ::kaldi::EventKeyType> ret0{};
  // Call actual C++ method.
  ::kaldi::Questions* c = ThisPtr(self);
  if (!c) return nullptr;
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->GetKeysWithQuestions(&ret0);
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

// has_questions_for_key(key:int) -> bool
static PyObject* wrapHasQuestionsForKey_as_has_questions_for_key(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("key"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:has_questions_for_key", names, &a[0])) return nullptr;
  int arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("has_questions_for_key", names[0], "int", a[0]);
  // Call actual C++ method.
  ::kaldi::Questions* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  bool ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = c->HasQuestionsForKey(std::move(arg1));
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
  ::kaldi::Questions* c = ThisPtr(self);
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

// read(is:istream, binary:bool)
static PyObject* wrapRead_as_read(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2];
  char* names[] = {
      C("is"),
      C("binary"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO:read", names, &a[0], &a[1])) return nullptr;
  ::std::basic_istream<char, ::std::char_traits<char> >* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("read", names[0], "::std::basic_istream<char, ::std::char_traits<char> >", a[0]);
  bool arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("read", names[1], "bool", a[1]);
  // Call actual C++ method.
  ::kaldi::Questions* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->Read(*arg1, std::move(arg2));
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
  {C("get_questions_of"), (PyCFunction)wrapGetQuestionsOf_as_get_questions_of, METH_VARARGS | METH_KEYWORDS, C("get_questions_of(key:int) -> QuestionsForKey\n  Calls C++ function\n  ::kaldi::QuestionsForKey ::kaldi::Questions::GetQuestionsOf(int)")},
  {C("set_questions_of"), (PyCFunction)wrapSetQuestionsOf_as_set_questions_of, METH_VARARGS | METH_KEYWORDS, C("set_questions_of(key:int, options_of_key:QuestionsForKey)\n  Calls C++ function\n  void ::kaldi::Questions::SetQuestionsOf(int, ::kaldi::QuestionsForKey)")},
  {C("get_keys_with_questions"), (PyCFunction)wrapGetKeysWithQuestions_as_get_keys_with_questions, METH_NOARGS, C("get_keys_with_questions() -> list<int>\n  Calls C++ function\n  void ::kaldi::Questions::GetKeysWithQuestions(::std::vector< ::kaldi::EventKeyType>*)")},
  {C("has_questions_for_key"), (PyCFunction)wrapHasQuestionsForKey_as_has_questions_for_key, METH_VARARGS | METH_KEYWORDS, C("has_questions_for_key(key:int) -> bool\n  Calls C++ function\n  bool ::kaldi::Questions::HasQuestionsForKey(int)")},
  {C("write"), (PyCFunction)wrapWrite_as_write, METH_VARARGS | METH_KEYWORDS, C("write(os:ostream, binary:bool)\n  Calls C++ function\n  void ::kaldi::Questions::Write(::std::basic_ostream<char, ::std::char_traits<char> >, bool)")},
  {C("read"), (PyCFunction)wrapRead_as_read, METH_VARARGS | METH_KEYWORDS, C("read(is:istream, binary:bool)\n  Calls C++ function\n  void ::kaldi::Questions::Read(::std::basic_istream<char, ::std::char_traits<char> >, bool)")},
  {}
};

// Questions __init__
static int _ctor(PyObject* self, PyObject* args, PyObject* kw);

// Questions __new__
static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems);

// Questions __del__
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
  "_build_tree_questions.Questions",   // tp_name
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
  "CLIF wrapper for ::kaldi::Questions", // tp_doc
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
    PyErr_SetString(PyExc_TypeError, "Questions takes no arguments");
    return -1;
  }
  reinterpret_cast<wrapper*>(self)->cpp = ::clif::MakeShared<::kaldi::Questions>();
  return 0;
}

static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems) {
  assert(nitems == 0);
  PyObject* self = reinterpret_cast<PyObject*>(new wrapper);
  return PyObject_Init(self, &wrapper_Type);
}

static ::kaldi::Questions* ThisPtr(PyObject* py) {
  if (Py_TYPE(py) == &wrapper_Type) {
    return ::clif::python::Get(reinterpret_cast<wrapper*>(py)->cpp);
  }
  PyObject* base = PyObject_CallMethod(py, C("as_kaldi_Questions"), nullptr);
  if (base) {
    if (PyCapsule_CheckExact(base)) {
      void* p = PyCapsule_GetPointer(base, C("::kaldi::Questions"));
      if (!PyErr_Occurred()) {
        ::kaldi::Questions* c = static_cast<::kaldi::Questions*>(p);
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
    PyErr_Format(PyExc_ValueError, "can't convert %s %s to ::kaldi::Questions*", ClassName(py), ClassType(py));
  } else {
    PyErr_Format(PyExc_TypeError, "expecting %s instance, got %s %s", wrapper_Type.tp_name, ClassName(py), ClassType(py));
  }
  return nullptr;
}
}  // namespace pyQuestions


// Initialize module

bool Ready() {
  if (PyType_Ready(&pyQuestionsForKey::wrapper_Type) < 0) return false;
  Py_INCREF(&pyQuestionsForKey::wrapper_Type);  // For PyModule_AddObject to steal.
  if (PyType_Ready(&pyQuestions::wrapper_Type) < 0) return false;
  Py_INCREF(&pyQuestions::wrapper_Type);  // For PyModule_AddObject to steal.
  return true;
}

static struct PyModuleDef Module = {
  PyModuleDef_HEAD_INIT,
  "_build_tree_questions",  // module name
  "CLIF-generated module for tree/build-tree-questions.h", // module doc
  -1,  // module keeps state in global variables
  nullptr
};

PyObject* Init() {
  PyObject* module = PyModule_Create(&Module);
  if (!module) return nullptr;
  if (PyObject* m = PyImport_ImportModule("_iostream")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_cluster_utils")) Py_DECREF(m);
  else goto err;
  PyEval_InitThreads();
  {PyObject* em = PyImport_ImportModule("enum");
   if (em == nullptr) goto err;
   _Enum = PyObject_GetAttrString(em, "Enum");
   _IntEnum = PyObject_GetAttrString(em, "IntEnum");
   Py_DECREF(em);}
  if (!_Enum || !_IntEnum) {
    Py_XDECREF(_Enum);
    Py_XDECREF(_IntEnum);
    goto err;
  }
  if (PyModule_AddObject(module, "AllKeysType", (_AllKeysType=wrapAllKeysType())) < 0) goto err;
  if (PyModule_AddObject(module, "QuestionsForKey", reinterpret_cast<PyObject*>(&pyQuestionsForKey::wrapper_Type)) < 0) goto err;
  if (PyModule_AddObject(module, "Questions", reinterpret_cast<PyObject*>(&pyQuestions::wrapper_Type)) < 0) goto err;
  return module;
err:
  Py_DECREF(module);
  return nullptr;
}

}  // namespace __build__tree__questions_clifwrap

namespace kaldi {
using namespace ::clif;
using ::clif::Clif_PyObjAs;
using ::clif::Clif_PyObjFrom;

// AllKeysType:IntEnum to/from enum ::kaldi::AllKeysType conversion

bool Clif_PyObjAs(PyObject* py, ::kaldi::AllKeysType* c) {
  assert(c != nullptr);
  if (!PyObject_IsInstance(py, __build__tree__questions_clifwrap::_AllKeysType)) {
    PyErr_Format(PyExc_TypeError, "expecting enum AllKeysType, got %s %s", ClassName(py), ClassType(py));
    return false;
  }
  typename std::underlying_type<::kaldi::AllKeysType>::type v;
  PyObject* value = PyObject_GetAttrString(py, "value");
  if (value == nullptr || !Clif_PyObjAs(value, &v)) return false;
  Py_DECREF(value);
  *c = static_cast<::kaldi::AllKeysType>(v);
  return true;
}

PyObject* Clif_PyObjFrom(const ::kaldi::AllKeysType& c, py::PostConv) {
  return PyObject_CallFunctionObjArgs(__build__tree__questions_clifwrap::_AllKeysType, PyInt_FromLong(
      static_cast<typename std::underlying_type<::kaldi::AllKeysType>::type>(c)), nullptr);
}

// Questions to/from ::kaldi::Questions conversion

bool Clif_PyObjAs(PyObject* py, ::kaldi::Questions** c) {
  assert(c != nullptr);
  if (Py_None == py) {
    *c = nullptr;
    return true;
  }
  ::kaldi::Questions* cpp = __build__tree__questions_clifwrap::pyQuestions::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = cpp;
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::shared_ptr<::kaldi::Questions>* c) {
  assert(c != nullptr);
  ::kaldi::Questions* cpp = __build__tree__questions_clifwrap::pyQuestions::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = ::clif::MakeStdShared(reinterpret_cast<__build__tree__questions_clifwrap::pyQuestions::wrapper*>(py)->cpp, cpp);
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::unique_ptr<::kaldi::Questions>* c) {
  assert(c != nullptr);
  ::kaldi::Questions* cpp = __build__tree__questions_clifwrap::pyQuestions::ThisPtr(py);
  if (cpp == nullptr) return false;
  if (!reinterpret_cast<__build__tree__questions_clifwrap::pyQuestions::wrapper*>(py)->cpp.Detach()) {
    PyErr_SetString(PyExc_ValueError, "Cannot convert Questions instance to std::unique_ptr.");
    return false;
  }
  c->reset(cpp);
  return true;
}

PyObject* Clif_PyObjFrom(::kaldi::Questions* c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__build__tree__questions_clifwrap::pyQuestions::wrapper_Type, NULL, NULL);
  reinterpret_cast<__build__tree__questions_clifwrap::pyQuestions::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::Questions>(c, ::clif::UnOwnedResource());
  return py;
}

PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::Questions> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__build__tree__questions_clifwrap::pyQuestions::wrapper_Type, NULL, NULL);
  reinterpret_cast<__build__tree__questions_clifwrap::pyQuestions::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::Questions>(c);
  return py;
}

PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::Questions> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__build__tree__questions_clifwrap::pyQuestions::wrapper_Type, NULL, NULL);
  reinterpret_cast<__build__tree__questions_clifwrap::pyQuestions::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::Questions>(std::move(c));
  return py;
}

// QuestionsForKey to/from ::kaldi::QuestionsForKey conversion

bool Clif_PyObjAs(PyObject* py, ::kaldi::QuestionsForKey** c) {
  assert(c != nullptr);
  if (Py_None == py) {
    *c = nullptr;
    return true;
  }
  ::kaldi::QuestionsForKey* cpp = __build__tree__questions_clifwrap::pyQuestionsForKey::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = cpp;
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::shared_ptr<::kaldi::QuestionsForKey>* c) {
  assert(c != nullptr);
  ::kaldi::QuestionsForKey* cpp = __build__tree__questions_clifwrap::pyQuestionsForKey::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = ::clif::MakeStdShared(reinterpret_cast<__build__tree__questions_clifwrap::pyQuestionsForKey::wrapper*>(py)->cpp, cpp);
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::unique_ptr<::kaldi::QuestionsForKey>* c) {
  assert(c != nullptr);
  ::kaldi::QuestionsForKey* cpp = __build__tree__questions_clifwrap::pyQuestionsForKey::ThisPtr(py);
  if (cpp == nullptr) return false;
  if (!reinterpret_cast<__build__tree__questions_clifwrap::pyQuestionsForKey::wrapper*>(py)->cpp.Detach()) {
    PyErr_SetString(PyExc_ValueError, "Cannot convert QuestionsForKey instance to std::unique_ptr.");
    return false;
  }
  c->reset(cpp);
  return true;
}

bool Clif_PyObjAs(PyObject* py, ::kaldi::QuestionsForKey* c) {
  assert(c != nullptr);
  ::kaldi::QuestionsForKey* cpp = __build__tree__questions_clifwrap::pyQuestionsForKey::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = *cpp;
  return true;
}

bool Clif_PyObjAs(PyObject* py, ::gtl::optional<::kaldi::QuestionsForKey>* c) {
  assert(c != nullptr);
  ::kaldi::QuestionsForKey* cpp = __build__tree__questions_clifwrap::pyQuestionsForKey::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = *cpp;
  return true;
}

PyObject* Clif_PyObjFrom(::kaldi::QuestionsForKey* c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__build__tree__questions_clifwrap::pyQuestionsForKey::wrapper_Type, NULL, NULL);
  reinterpret_cast<__build__tree__questions_clifwrap::pyQuestionsForKey::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::QuestionsForKey>(c, ::clif::UnOwnedResource());
  return py;
}

PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::QuestionsForKey> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__build__tree__questions_clifwrap::pyQuestionsForKey::wrapper_Type, NULL, NULL);
  reinterpret_cast<__build__tree__questions_clifwrap::pyQuestionsForKey::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::QuestionsForKey>(c);
  return py;
}

PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::QuestionsForKey> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__build__tree__questions_clifwrap::pyQuestionsForKey::wrapper_Type, NULL, NULL);
  reinterpret_cast<__build__tree__questions_clifwrap::pyQuestionsForKey::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::QuestionsForKey>(std::move(c));
  return py;
}

PyObject* Clif_PyObjFrom(const ::kaldi::QuestionsForKey& c, py::PostConv unused) {
  PyObject* py = PyType_GenericNew(&__build__tree__questions_clifwrap::pyQuestionsForKey::wrapper_Type, NULL, NULL);
  reinterpret_cast<__build__tree__questions_clifwrap::pyQuestionsForKey::wrapper*>(py)->cpp = ::clif::MakeShared<::kaldi::QuestionsForKey>(c);
  return py;
}

}  // namespace kaldi