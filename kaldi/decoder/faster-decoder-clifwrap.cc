//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/decoder/faster-decoder.clif

#include <Python.h>
#include "clif/python/ptr_util.h"
#include "clif/python/optional.h"
#include "clif/python/types.h"
#include "itf/decodable-itf-clifwrap.h"
#include "itf/options-itf-clifwrap.h"
#include "fstext/lattice-weight-clifwrap.h"
#include "fstext/fst-clifwrap.h"
#include "fstext/mutable-fst-clifwrap.h"
#include "faster-decoder-clifwrap.h"
#include "clif/python/stltypes.h"
#include "clif/python/slots.h"

namespace __faster__decoder_clifwrap {
using namespace clif;

#define _0 py::postconv::PASS
#define _1 UnicodeFromBytes
#define _2 UnicodeFromBytes


namespace pyFasterDecoderOptions {

struct wrapper {
  PyObject_HEAD
  ::clif::Instance<::kaldi::FasterDecoderOptions> cpp;
};
static ::kaldi::FasterDecoderOptions* ThisPtr(PyObject*);

static PyObject* get_beam(PyObject* self, void* xdata) {
  auto cpp = ThisPtr(self); if (!cpp) return nullptr;
  return Clif_PyObjFrom(cpp->beam, {});
}

static int set_beam(PyObject* self, PyObject* value, void* xdata) {
  if (value == nullptr) {
    PyErr_SetString(PyExc_TypeError, "Cannot delete the beam attribute");
    return -1;
  }
  auto cpp = ThisPtr(self); if (!cpp) return -1;
  if (Clif_PyObjAs(value, &cpp->beam)) return 0;
  PyObject* s = PyObject_Repr(value);
  PyErr_Format(PyExc_ValueError, "%s is not valid for beam:float", s? PyUnicode_AsUTF8(s): "input");
  Py_XDECREF(s);
  return -1;
}

static PyObject* get_max_active(PyObject* self, void* xdata) {
  auto cpp = ThisPtr(self); if (!cpp) return nullptr;
  return Clif_PyObjFrom(cpp->max_active, {});
}

static int set_max_active(PyObject* self, PyObject* value, void* xdata) {
  if (value == nullptr) {
    PyErr_SetString(PyExc_TypeError, "Cannot delete the max_active attribute");
    return -1;
  }
  auto cpp = ThisPtr(self); if (!cpp) return -1;
  if (Clif_PyObjAs(value, &cpp->max_active)) return 0;
  PyObject* s = PyObject_Repr(value);
  PyErr_Format(PyExc_ValueError, "%s is not valid for max_active:int", s? PyUnicode_AsUTF8(s): "input");
  Py_XDECREF(s);
  return -1;
}

static PyObject* get_min_active(PyObject* self, void* xdata) {
  auto cpp = ThisPtr(self); if (!cpp) return nullptr;
  return Clif_PyObjFrom(cpp->min_active, {});
}

static int set_min_active(PyObject* self, PyObject* value, void* xdata) {
  if (value == nullptr) {
    PyErr_SetString(PyExc_TypeError, "Cannot delete the min_active attribute");
    return -1;
  }
  auto cpp = ThisPtr(self); if (!cpp) return -1;
  if (Clif_PyObjAs(value, &cpp->min_active)) return 0;
  PyObject* s = PyObject_Repr(value);
  PyErr_Format(PyExc_ValueError, "%s is not valid for min_active:int", s? PyUnicode_AsUTF8(s): "input");
  Py_XDECREF(s);
  return -1;
}

static PyObject* get_beam_delta(PyObject* self, void* xdata) {
  auto cpp = ThisPtr(self); if (!cpp) return nullptr;
  return Clif_PyObjFrom(cpp->beam_delta, {});
}

static int set_beam_delta(PyObject* self, PyObject* value, void* xdata) {
  if (value == nullptr) {
    PyErr_SetString(PyExc_TypeError, "Cannot delete the beam_delta attribute");
    return -1;
  }
  auto cpp = ThisPtr(self); if (!cpp) return -1;
  if (Clif_PyObjAs(value, &cpp->beam_delta)) return 0;
  PyObject* s = PyObject_Repr(value);
  PyErr_Format(PyExc_ValueError, "%s is not valid for beam_delta:float", s? PyUnicode_AsUTF8(s): "input");
  Py_XDECREF(s);
  return -1;
}

static PyObject* get_hash_ratio(PyObject* self, void* xdata) {
  auto cpp = ThisPtr(self); if (!cpp) return nullptr;
  return Clif_PyObjFrom(cpp->hash_ratio, {});
}

static int set_hash_ratio(PyObject* self, PyObject* value, void* xdata) {
  if (value == nullptr) {
    PyErr_SetString(PyExc_TypeError, "Cannot delete the hash_ratio attribute");
    return -1;
  }
  auto cpp = ThisPtr(self); if (!cpp) return -1;
  if (Clif_PyObjAs(value, &cpp->hash_ratio)) return 0;
  PyObject* s = PyObject_Repr(value);
  PyErr_Format(PyExc_ValueError, "%s is not valid for hash_ratio:float", s? PyUnicode_AsUTF8(s): "input");
  Py_XDECREF(s);
  return -1;
}

// register(opts:OptionsItf, full:bool)
static PyObject* wrapRegister_as_register(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2];
  char* names[] = {
      C("opts"),
      C("full"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO:register", names, &a[0], &a[1])) return nullptr;
  ::kaldi::OptionsItf * arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("register", names[0], "::kaldi::OptionsItf *", a[0]);
  bool arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("register", names[1], "bool", a[1]);
  // Call actual C++ method.
  ::kaldi::FasterDecoderOptions* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->Register(arg1, std::move(arg2));
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
  {C("beam"), get_beam, set_beam, C("Decoding beam. Larger -> slower but more accurate.")},
  {C("max_active"), get_max_active, set_max_active, C("Max number of active states. Larger -> slower but more accurate.")},
  {C("min_active"), get_min_active, set_min_active, C("Min number of active states. No pruning if `active < min_active`.")},
  {C("beam_delta"), get_beam_delta, set_beam_delta, C("Increment used for increasing decoder beam. Obscure option.")},
  {C("hash_ratio"), get_hash_ratio, set_hash_ratio, C("Setting used in decoder to control hash behavior.")},
  {}
};

static PyMethodDef Methods[] = {
  {C("register"), (PyCFunction)wrapRegister_as_register, METH_VARARGS | METH_KEYWORDS, C("register(opts:OptionsItf, full:bool)\n\nRegisters options with an object implementing the options interface.\n\nArgs:\n  opts (OptionsItf): An object implementing the options interface.\n    Typically a command-line option parser.\n  full (bool): If ``True``, registers obscure options too.")},
  {}
};

// FasterDecoderOptions __init__
static int _ctor(PyObject* self, PyObject* args, PyObject* kw);

// FasterDecoderOptions __new__
static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems);

// FasterDecoderOptions __del__
static void _del(void* self) {
  delete reinterpret_cast<wrapper*>(self);
}

PyTypeObject wrapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "_faster_decoder.FasterDecoderOptions", // tp_name
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
  "Options for :class:`FasterDecoder`.", // tp_doc
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
    PyErr_SetString(PyExc_TypeError, "FasterDecoderOptions takes no arguments");
    return -1;
  }
  reinterpret_cast<wrapper*>(self)->cpp = ::clif::MakeShared<::kaldi::FasterDecoderOptions>();
  return 0;
}

static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems) {
  assert(nitems == 0);
  PyObject* self = reinterpret_cast<PyObject*>(new wrapper);
  return PyObject_Init(self, &wrapper_Type);
}

static ::kaldi::FasterDecoderOptions* ThisPtr(PyObject* py) {
  if (Py_TYPE(py) == &wrapper_Type) {
    return ::clif::python::Get(reinterpret_cast<wrapper*>(py)->cpp);
  }
  PyObject* base = PyObject_CallMethod(py, C("as_kaldi_FasterDecoderOptions"), nullptr);
  if (base) {
    if (PyCapsule_CheckExact(base)) {
      void* p = PyCapsule_GetPointer(base, C("::kaldi::FasterDecoderOptions"));
      if (!PyErr_Occurred()) {
        ::kaldi::FasterDecoderOptions* c = static_cast<::kaldi::FasterDecoderOptions*>(p);
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
    PyErr_Format(PyExc_ValueError, "can't convert %s %s to ::kaldi::FasterDecoderOptions*", ClassName(py), ClassType(py));
  } else {
    PyErr_Format(PyExc_TypeError, "expecting %s instance, got %s %s", wrapper_Type.tp_name, ClassName(py), ClassType(py));
  }
  return nullptr;
}
}  // namespace pyFasterDecoderOptions

namespace pyFasterDecoder {

struct wrapper {
  PyObject_HEAD
  ::clif::Instance<::kaldi::FasterDecoder> cpp;
};
static ::kaldi::FasterDecoder* ThisPtr(PyObject*);

// __init__(fst:StdFst, opts:FasterDecoderOptions)
static PyObject* wrapFasterDecoder_as___init__(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2];
  char* names[] = {
      C("fst"),
      C("opts"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO:__init__", names, &a[0], &a[1])) return nullptr;
  ::fst::Fst< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> > >* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("__init__", names[0], "::fst::Fst< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> > >", a[0]);
  ::kaldi::FasterDecoderOptions* arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("__init__", names[1], "::kaldi::FasterDecoderOptions", a[1]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    reinterpret_cast<wrapper*>(self)->cpp = ::clif::MakeShared<::kaldi::FasterDecoder>(*arg1, *arg2);
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

// set_options(opts:FasterDecoderOptions)
static PyObject* wrapSetOptions_as_set_options(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("opts"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:set_options", names, &a[0])) return nullptr;
  ::kaldi::FasterDecoderOptions* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("set_options", names[0], "::kaldi::FasterDecoderOptions", a[0]);
  // Call actual C++ method.
  ::kaldi::FasterDecoder* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->SetOptions(*arg1);
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

// decode(decodable:DecodableInterface)
static PyObject* wrapDecode_as_decode(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("decodable"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:decode", names, &a[0])) return nullptr;
  ::kaldi::DecodableInterface * arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("decode", names[0], "::kaldi::DecodableInterface *", a[0]);
  // Call actual C++ method.
  ::kaldi::FasterDecoder* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->Decode(arg1);
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

// reached_final() -> bool
static PyObject* wrapReachedFinal_as_reached_final(PyObject* self) {
  // Call actual C++ method.
  ::kaldi::FasterDecoder* c = ThisPtr(self);
  if (!c) return nullptr;
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  bool ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = c->ReachedFinal();
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

// _get_best_path(fst_out:LatticeMutableFst, use_final_probs:bool=default) -> bool
static PyObject* wrapGetBestPath_as__get_best_path(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2]{};
  char* names[] = {
      C("fst_out"),
      C("use_final_probs"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O|O:_get_best_path", names, &a[0], &a[1])) return nullptr;
  int nargs;  // Find how many args actually passed in.
  for (nargs = 2; nargs > 1; --nargs) {
    if (a[nargs-1] != nullptr) break;
  }
  ::fst::MutableFst< ::fst::ArcTpl< ::fst::LatticeWeightTpl<float> > > * arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("_get_best_path", names[0], "::fst::MutableFst< ::fst::ArcTpl< ::fst::LatticeWeightTpl<float> > > *", a[0]);
  bool arg2;
  if (nargs > 1) {
    if (!a[1]) arg2 = (bool)true;
    else if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("_get_best_path", names[1], "bool", a[1]);
  }
  // Call actual C++ method.
  ::kaldi::FasterDecoder* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  bool ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
  switch (nargs) {
  case 1:
    ret0 = c->GetBestPath(arg1); break;
  case 2:
    ret0 = c->GetBestPath(arg1, std::move(arg2)); break;
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
  return Clif_PyObjFrom(std::move(ret0), {});
}

// init_decoding()
static PyObject* wrapInitDecoding_as_init_decoding(PyObject* self) {
  // Call actual C++ method.
  ::kaldi::FasterDecoder* c = ThisPtr(self);
  if (!c) return nullptr;
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->InitDecoding();
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

// advance_decoding(decodable:DecodableInterface, max_num_frames:int=default)
static PyObject* wrapAdvanceDecoding_as_advance_decoding(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2]{};
  char* names[] = {
      C("decodable"),
      C("max_num_frames"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O|O:advance_decoding", names, &a[0], &a[1])) return nullptr;
  int nargs;  // Find how many args actually passed in.
  for (nargs = 2; nargs > 1; --nargs) {
    if (a[nargs-1] != nullptr) break;
  }
  ::kaldi::DecodableInterface * arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("advance_decoding", names[0], "::kaldi::DecodableInterface *", a[0]);
  int arg2;
  if (nargs > 1) {
    if (!a[1]) arg2 = (int)-1;
    else if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("advance_decoding", names[1], "int", a[1]);
  }
  // Call actual C++ method.
  ::kaldi::FasterDecoder* c = ThisPtr(self);
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
    c->AdvanceDecoding(arg1); break;
  case 2:
    c->AdvanceDecoding(arg1, std::move(arg2)); break;
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

// num_frames_decoded() -> int
static PyObject* wrapNumFramesDecoded_as_num_frames_decoded(PyObject* self) {
  // Call actual C++ method.
  ::kaldi::FasterDecoder* c = ThisPtr(self);
  if (!c) return nullptr;
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  int ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = c->NumFramesDecoded();
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

static PyMethodDef Methods[] = {
  {C("__init__"), (PyCFunction)wrapFasterDecoder_as___init__, METH_VARARGS | METH_KEYWORDS, C("__init__(fst:StdFst, opts:FasterDecoderOptions)\n  Calls C++ function\n  void ::kaldi::FasterDecoder::FasterDecoder(::fst::Fst< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> > >, ::kaldi::FasterDecoderOptions)")},
  {C("set_options"), (PyCFunction)wrapSetOptions_as_set_options, METH_VARARGS | METH_KEYWORDS, C("set_options(opts:FasterDecoderOptions)\n\nSets decoder options.\n\nArgs:\n  opts (FasterDecoderOptions): Decoder options.")},
  {C("decode"), (PyCFunction)wrapDecode_as_decode, METH_VARARGS | METH_KEYWORDS, C("decode(decodable:DecodableInterface)\n\nDecodes all available frames in the decodable object.\n\nArgs:\n  decodable (DecodableInterface): The decodable object.")},
  {C("reached_final"), (PyCFunction)wrapReachedFinal_as_reached_final, METH_NOARGS, C("reached_final() -> bool\n\nChecks if a final state was active on the last decoded frame.\n\nReturns:\n  True if a final state was active on the last decoded frame.")},
  {C("_get_best_path"), (PyCFunction)wrapGetBestPath_as__get_best_path, METH_VARARGS | METH_KEYWORDS, C("_get_best_path(fst_out:LatticeMutableFst, use_final_probs:bool=default) -> bool\n  Calls C++ function\n  bool ::kaldi::FasterDecoder::GetBestPath(::fst::MutableFst< ::fst::ArcTpl< ::fst::LatticeWeightTpl<float> > > *, bool)")},
  {C("init_decoding"), (PyCFunction)wrapInitDecoding_as_init_decoding, METH_NOARGS, C("init_decoding()\n\nInitializes decoding.\n\nAs an alternative to :meth:`decode`, you can call :meth:`init_decoding`\nand then call :meth:`advance_decoding` (possibly multiple times).")},
  {C("advance_decoding"), (PyCFunction)wrapAdvanceDecoding_as_advance_decoding, METH_VARARGS | METH_KEYWORDS, C("advance_decoding(decodable:DecodableInterface, max_num_frames:int=default)\n\nAdvances decoding.\n\nThis will decode until there are no more frames ready in the decodable\nobject, but if `max_num_frames >= 0` it will decode no more than that\nmany frames.\n\nArgs:\n  decodable (DecodableInterface): The decodable object.\n  max_num_frames (int): Max number of frames to decode. Defaults to\n    ``-1`` which means decode all available frames.")},
  {C("num_frames_decoded"), (PyCFunction)wrapNumFramesDecoded_as_num_frames_decoded, METH_NOARGS, C("num_frames_decoded() -> int\n\nQueries the number of frames already decoded.\n\nReturns:\n  The number of frames already decoded.")},
  {}
};

// FasterDecoder __init__
static int _ctor(PyObject* self, PyObject* args, PyObject* kw);

// FasterDecoder __new__
static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems);

// FasterDecoder __del__
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
  "_faster_decoder.FasterDecoder",     // tp_name
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
  "FasterDecoder(fst, opts)\n\nFaster decoder.\n\nArgs:\n  fst (StdFst): Decoding graph `HCLG`.\n  opts (FasterDecoderOptions): Decoder options.", // tp_doc
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
  PyObject* init = wrapFasterDecoder_as___init__(self, args, kw);
  Py_XDECREF(init);
  return init? 0: -1;
}

static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems) {
  assert(nitems == 0);
  PyObject* self = reinterpret_cast<PyObject*>(new wrapper);
  return PyObject_Init(self, &wrapper_Type);
}

static ::kaldi::FasterDecoder* ThisPtr(PyObject* py) {
  if (Py_TYPE(py) == &wrapper_Type) {
    return ::clif::python::Get(reinterpret_cast<wrapper*>(py)->cpp);
  }
  PyObject* base = PyObject_CallMethod(py, C("as_kaldi_FasterDecoder"), nullptr);
  if (base) {
    if (PyCapsule_CheckExact(base)) {
      void* p = PyCapsule_GetPointer(base, C("::kaldi::FasterDecoder"));
      if (!PyErr_Occurred()) {
        ::kaldi::FasterDecoder* c = static_cast<::kaldi::FasterDecoder*>(p);
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
    PyErr_Format(PyExc_ValueError, "can't convert %s %s to ::kaldi::FasterDecoder*", ClassName(py), ClassType(py));
  } else {
    PyErr_Format(PyExc_TypeError, "expecting %s instance, got %s %s", wrapper_Type.tp_name, ClassName(py), ClassType(py));
  }
  return nullptr;
}
}  // namespace pyFasterDecoder


// Initialize module

bool Ready() {
  if (PyType_Ready(&pyFasterDecoderOptions::wrapper_Type) < 0) return false;
  Py_INCREF(&pyFasterDecoderOptions::wrapper_Type);  // For PyModule_AddObject to steal.
  if (PyType_Ready(&pyFasterDecoder::wrapper_Type) < 0) return false;
  Py_INCREF(&pyFasterDecoder::wrapper_Type);  // For PyModule_AddObject to steal.
  return true;
}

static struct PyModuleDef Module = {
  PyModuleDef_HEAD_INIT,
  "_faster_decoder",  // module name
  "CLIF-generated module for decoder/faster-decoder.h", // module doc
  -1,  // module keeps state in global variables
  nullptr
};

PyObject* Init() {
  PyObject* module = PyModule_Create(&Module);
  if (!module) return nullptr;
  if (PyObject* m = PyImport_ImportModule("_decodable_itf")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_options_itf")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_lattice_weight")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_fst")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_mutable_fst")) Py_DECREF(m);
  else goto err;
  PyEval_InitThreads();
  if (PyModule_AddObject(module, "FasterDecoderOptions", reinterpret_cast<PyObject*>(&pyFasterDecoderOptions::wrapper_Type)) < 0) goto err;
  if (PyModule_AddObject(module, "FasterDecoder", reinterpret_cast<PyObject*>(&pyFasterDecoder::wrapper_Type)) < 0) goto err;
  return module;
err:
  Py_DECREF(module);
  return nullptr;
}

}  // namespace __faster__decoder_clifwrap

namespace kaldi {
using namespace ::clif;
using ::clif::Clif_PyObjAs;
using ::clif::Clif_PyObjFrom;

// FasterDecoder to/from ::kaldi::FasterDecoder conversion

bool Clif_PyObjAs(PyObject* py, ::kaldi::FasterDecoder** c) {
  assert(c != nullptr);
  if (Py_None == py) {
    *c = nullptr;
    return true;
  }
  ::kaldi::FasterDecoder* cpp = __faster__decoder_clifwrap::pyFasterDecoder::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = cpp;
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::shared_ptr<::kaldi::FasterDecoder>* c) {
  assert(c != nullptr);
  ::kaldi::FasterDecoder* cpp = __faster__decoder_clifwrap::pyFasterDecoder::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = ::clif::MakeStdShared(reinterpret_cast<__faster__decoder_clifwrap::pyFasterDecoder::wrapper*>(py)->cpp, cpp);
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::unique_ptr<::kaldi::FasterDecoder>* c) {
  assert(c != nullptr);
  ::kaldi::FasterDecoder* cpp = __faster__decoder_clifwrap::pyFasterDecoder::ThisPtr(py);
  if (cpp == nullptr) return false;
  if (!reinterpret_cast<__faster__decoder_clifwrap::pyFasterDecoder::wrapper*>(py)->cpp.Detach()) {
    PyErr_SetString(PyExc_ValueError, "Cannot convert FasterDecoder instance to std::unique_ptr.");
    return false;
  }
  c->reset(cpp);
  return true;
}

PyObject* Clif_PyObjFrom(::kaldi::FasterDecoder* c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__faster__decoder_clifwrap::pyFasterDecoder::wrapper_Type, NULL, NULL);
  reinterpret_cast<__faster__decoder_clifwrap::pyFasterDecoder::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::FasterDecoder>(c, ::clif::UnOwnedResource());
  return py;
}

PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::FasterDecoder> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__faster__decoder_clifwrap::pyFasterDecoder::wrapper_Type, NULL, NULL);
  reinterpret_cast<__faster__decoder_clifwrap::pyFasterDecoder::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::FasterDecoder>(c);
  return py;
}

PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::FasterDecoder> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__faster__decoder_clifwrap::pyFasterDecoder::wrapper_Type, NULL, NULL);
  reinterpret_cast<__faster__decoder_clifwrap::pyFasterDecoder::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::FasterDecoder>(std::move(c));
  return py;
}

// FasterDecoderOptions to/from ::kaldi::FasterDecoderOptions conversion

bool Clif_PyObjAs(PyObject* py, ::kaldi::FasterDecoderOptions** c) {
  assert(c != nullptr);
  if (Py_None == py) {
    *c = nullptr;
    return true;
  }
  ::kaldi::FasterDecoderOptions* cpp = __faster__decoder_clifwrap::pyFasterDecoderOptions::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = cpp;
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::shared_ptr<::kaldi::FasterDecoderOptions>* c) {
  assert(c != nullptr);
  ::kaldi::FasterDecoderOptions* cpp = __faster__decoder_clifwrap::pyFasterDecoderOptions::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = ::clif::MakeStdShared(reinterpret_cast<__faster__decoder_clifwrap::pyFasterDecoderOptions::wrapper*>(py)->cpp, cpp);
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::unique_ptr<::kaldi::FasterDecoderOptions>* c) {
  assert(c != nullptr);
  ::kaldi::FasterDecoderOptions* cpp = __faster__decoder_clifwrap::pyFasterDecoderOptions::ThisPtr(py);
  if (cpp == nullptr) return false;
  if (!reinterpret_cast<__faster__decoder_clifwrap::pyFasterDecoderOptions::wrapper*>(py)->cpp.Detach()) {
    PyErr_SetString(PyExc_ValueError, "Cannot convert FasterDecoderOptions instance to std::unique_ptr.");
    return false;
  }
  c->reset(cpp);
  return true;
}

bool Clif_PyObjAs(PyObject* py, ::kaldi::FasterDecoderOptions* c) {
  assert(c != nullptr);
  ::kaldi::FasterDecoderOptions* cpp = __faster__decoder_clifwrap::pyFasterDecoderOptions::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = *cpp;
  return true;
}

bool Clif_PyObjAs(PyObject* py, ::gtl::optional<::kaldi::FasterDecoderOptions>* c) {
  assert(c != nullptr);
  ::kaldi::FasterDecoderOptions* cpp = __faster__decoder_clifwrap::pyFasterDecoderOptions::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = *cpp;
  return true;
}

PyObject* Clif_PyObjFrom(::kaldi::FasterDecoderOptions* c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__faster__decoder_clifwrap::pyFasterDecoderOptions::wrapper_Type, NULL, NULL);
  reinterpret_cast<__faster__decoder_clifwrap::pyFasterDecoderOptions::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::FasterDecoderOptions>(c, ::clif::UnOwnedResource());
  return py;
}

PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::FasterDecoderOptions> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__faster__decoder_clifwrap::pyFasterDecoderOptions::wrapper_Type, NULL, NULL);
  reinterpret_cast<__faster__decoder_clifwrap::pyFasterDecoderOptions::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::FasterDecoderOptions>(c);
  return py;
}

PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::FasterDecoderOptions> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__faster__decoder_clifwrap::pyFasterDecoderOptions::wrapper_Type, NULL, NULL);
  reinterpret_cast<__faster__decoder_clifwrap::pyFasterDecoderOptions::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::FasterDecoderOptions>(std::move(c));
  return py;
}

PyObject* Clif_PyObjFrom(const ::kaldi::FasterDecoderOptions& c, py::PostConv unused) {
  PyObject* py = PyType_GenericNew(&__faster__decoder_clifwrap::pyFasterDecoderOptions::wrapper_Type, NULL, NULL);
  reinterpret_cast<__faster__decoder_clifwrap::pyFasterDecoderOptions::wrapper*>(py)->cpp = ::clif::MakeShared<::kaldi::FasterDecoderOptions>(c);
  return py;
}

}  // namespace kaldi