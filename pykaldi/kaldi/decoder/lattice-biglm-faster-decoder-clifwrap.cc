//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/decoder/lattice-biglm-faster-decoder.clif

#include <Python.h>
#include "clif/python/ptr_util.h"
#include "clif/python/optional.h"
#include "clif/python/types.h"
#include "itf/decodable-itf-clifwrap.h"
#include "itf/options-itf-clifwrap.h"
#include "fstext/lattice-weight-clifwrap.h"
#include "fstext/fst-clifwrap.h"
#include "fstext/mutable-fst-clifwrap.h"
#include "fstext/deterministic-fst-clifwrap.h"
#include "lat/determinize-lattice-pruned-clifwrap.h"
#include "decoder/lattice-faster-decoder-clifwrap.h"
#include "lattice-biglm-faster-decoder-clifwrap.h"
#include "clif/python/stltypes.h"
#include "clif/python/slots.h"

namespace __lattice__biglm__faster__decoder_clifwrap {
using namespace clif;

#define _0 py::postconv::PASS
#define _1 UnicodeFromBytes
#define _2 UnicodeFromBytes


namespace pyLatticeBiglmFasterDecoder {

struct wrapper {
  PyObject_HEAD
  ::clif::Instance<::kaldi::LatticeBiglmFasterDecoder> cpp;
};
static ::kaldi::LatticeBiglmFasterDecoder* ThisPtr(PyObject*);

// __init__(fst:StdFst, opts:LatticeFasterDecoderOptions, lm_diff_fst:StdDeterministicOnDemandFst)
static PyObject* wrapLatticeBiglmFasterDecoder_as___init__(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[3];
  char* names[] = {
      C("fst"),
      C("opts"),
      C("lm_diff_fst"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOO:__init__", names, &a[0], &a[1], &a[2])) return nullptr;
  ::fst::Fst< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> > >* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("__init__", names[0], "::fst::Fst< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> > >", a[0]);
  ::kaldi::LatticeFasterDecoderConfig* arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("__init__", names[1], "::kaldi::LatticeFasterDecoderConfig", a[1]);
  ::fst::DeterministicOnDemandFst< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> > > * arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("__init__", names[2], "::fst::DeterministicOnDemandFst< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> > > *", a[2]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    reinterpret_cast<wrapper*>(self)->cpp = ::clif::MakeShared<::kaldi::LatticeBiglmFasterDecoder>(*arg1, *arg2, arg3);
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

// set_options(opts:LatticeFasterDecoderOptions)
static PyObject* wrapSetOptions_as_set_options(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("opts"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:set_options", names, &a[0])) return nullptr;
  ::kaldi::LatticeFasterDecoderConfig* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("set_options", names[0], "::kaldi::LatticeFasterDecoderConfig", a[0]);
  // Call actual C++ method.
  ::kaldi::LatticeBiglmFasterDecoder* c = ThisPtr(self);
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

// decode(decodable:DecodableInterface) -> bool
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
  ::kaldi::LatticeBiglmFasterDecoder* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  bool ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = c->Decode(arg1);
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

// reached_final() -> bool
static PyObject* wrapReachedFinal_as_reached_final(PyObject* self) {
  // Call actual C++ method.
  ::kaldi::LatticeBiglmFasterDecoder* c = ThisPtr(self);
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
  ::kaldi::LatticeBiglmFasterDecoder* c = ThisPtr(self);
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

// _get_raw_lattice(fst_out:LatticeMutableFst, use_final_probs:bool=default) -> bool
static PyObject* wrapGetRawLattice_as__get_raw_lattice(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2]{};
  char* names[] = {
      C("fst_out"),
      C("use_final_probs"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O|O:_get_raw_lattice", names, &a[0], &a[1])) return nullptr;
  int nargs;  // Find how many args actually passed in.
  for (nargs = 2; nargs > 1; --nargs) {
    if (a[nargs-1] != nullptr) break;
  }
  ::fst::MutableFst< ::fst::ArcTpl< ::fst::LatticeWeightTpl<float> > > * arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("_get_raw_lattice", names[0], "::fst::MutableFst< ::fst::ArcTpl< ::fst::LatticeWeightTpl<float> > > *", a[0]);
  bool arg2;
  if (nargs > 1) {
    if (!a[1]) arg2 = (bool)true;
    else if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("_get_raw_lattice", names[1], "bool", a[1]);
  }
  // Call actual C++ method.
  ::kaldi::LatticeBiglmFasterDecoder* c = ThisPtr(self);
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
    ret0 = c->GetRawLattice(arg1); break;
  case 2:
    ret0 = c->GetRawLattice(arg1, std::move(arg2)); break;
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

// _get_lattice(fst_out:CompactLatticeMutableFst, use_final_probs:bool=default) -> bool
static PyObject* wrapGetLattice_as__get_lattice(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2]{};
  char* names[] = {
      C("fst_out"),
      C("use_final_probs"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O|O:_get_lattice", names, &a[0], &a[1])) return nullptr;
  int nargs;  // Find how many args actually passed in.
  for (nargs = 2; nargs > 1; --nargs) {
    if (a[nargs-1] != nullptr) break;
  }
  ::fst::MutableFst< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> > > * arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("_get_lattice", names[0], "::fst::MutableFst< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> > > *", a[0]);
  bool arg2;
  if (nargs > 1) {
    if (!a[1]) arg2 = (bool)true;
    else if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("_get_lattice", names[1], "bool", a[1]);
  }
  // Call actual C++ method.
  ::kaldi::LatticeBiglmFasterDecoder* c = ThisPtr(self);
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
    ret0 = c->GetLattice(arg1); break;
  case 2:
    ret0 = c->GetLattice(arg1, std::move(arg2)); break;
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

static PyMethodDef Methods[] = {
  {C("__init__"), (PyCFunction)wrapLatticeBiglmFasterDecoder_as___init__, METH_VARARGS | METH_KEYWORDS, C("__init__(fst:StdFst, opts:LatticeFasterDecoderOptions, lm_diff_fst:StdDeterministicOnDemandFst)\n  Calls C++ function\n  void ::kaldi::LatticeBiglmFasterDecoder::LatticeBiglmFasterDecoder(::fst::Fst< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> > >, ::kaldi::LatticeFasterDecoderConfig, ::fst::DeterministicOnDemandFst< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> > > *)")},
  {C("set_options"), (PyCFunction)wrapSetOptions_as_set_options, METH_VARARGS | METH_KEYWORDS, C("set_options(opts:LatticeFasterDecoderOptions)\n\nSets decoder options.\n\nArgs:\n  opts (LatticeFasterDecoderOptions): Decoder options.")},
  {C("decode"), (PyCFunction)wrapDecode_as_decode, METH_VARARGS | METH_KEYWORDS, C("decode(decodable:DecodableInterface) -> bool\n\nDecodes all available frames in the decodable object.\n\nThis may block waiting for input if the `decodable` object blocks.\n\nArgs:\n  decodable (DecodableInterface): The decodable object.\n\nReturns:\n  True if any kind of traceback is available (not necessarily from a\n  final state).")},
  {C("reached_final"), (PyCFunction)wrapReachedFinal_as_reached_final, METH_NOARGS, C("reached_final() -> bool\n\nChecks if a final state was active on the last decoded frame.\n\nReturns:\n  True if a final state was active on the last decoded frame.")},
  {C("_get_best_path"), (PyCFunction)wrapGetBestPath_as__get_best_path, METH_VARARGS | METH_KEYWORDS, C("_get_best_path(fst_out:LatticeMutableFst, use_final_probs:bool=default) -> bool\n  Calls C++ function\n  bool ::kaldi::LatticeBiglmFasterDecoder::GetBestPath(::fst::MutableFst< ::fst::ArcTpl< ::fst::LatticeWeightTpl<float> > > *, bool)")},
  {C("_get_raw_lattice"), (PyCFunction)wrapGetRawLattice_as__get_raw_lattice, METH_VARARGS | METH_KEYWORDS, C("_get_raw_lattice(fst_out:LatticeMutableFst, use_final_probs:bool=default) -> bool\n  Calls C++ function\n  bool ::kaldi::LatticeBiglmFasterDecoder::GetRawLattice(::fst::MutableFst< ::fst::ArcTpl< ::fst::LatticeWeightTpl<float> > > *, bool)")},
  {C("_get_lattice"), (PyCFunction)wrapGetLattice_as__get_lattice, METH_VARARGS | METH_KEYWORDS, C("_get_lattice(fst_out:CompactLatticeMutableFst, use_final_probs:bool=default) -> bool\n  Calls C++ function\n  bool ::kaldi::LatticeBiglmFasterDecoder::GetLattice(::fst::MutableFst< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> > > *, bool)")},
  {}
};

// LatticeBiglmFasterDecoder __init__
static int _ctor(PyObject* self, PyObject* args, PyObject* kw);

// LatticeBiglmFasterDecoder __new__
static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems);

// LatticeBiglmFasterDecoder __del__
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
  "_lattice_biglm_faster_decoder.LatticeBiglmFasterDecoder", // tp_name
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
  "LatticeBiglmFasterDecoder(fst, opts, lm_diff_fst)\n\nLattice generating faster decoder for decoding with big language models.\n\nThis is as :class:`LatticeFasterDecoder`, but does online composition\nbetween decoding graph :attr:`fst` and the difference language model\n:attr:`lm_diff_fst`.\n\nArgs:\n  fst (StdFst): Decoding graph `HCLG`.\n  opts (LatticeFasterDecoderOptions): Decoder options.\n  lm_diff_fst (StdDeterministicOnDemandFst): The deterministic on-demand\n    FST representing the difference in scores between the LM to decode\n    with and the LM the decoding graph :attr:`fst` was compiled with.", // tp_doc
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
  PyObject* init = wrapLatticeBiglmFasterDecoder_as___init__(self, args, kw);
  Py_XDECREF(init);
  return init? 0: -1;
}

static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems) {
  assert(nitems == 0);
  PyObject* self = reinterpret_cast<PyObject*>(new wrapper);
  return PyObject_Init(self, &wrapper_Type);
}

static ::kaldi::LatticeBiglmFasterDecoder* ThisPtr(PyObject* py) {
  if (Py_TYPE(py) == &wrapper_Type) {
    return ::clif::python::Get(reinterpret_cast<wrapper*>(py)->cpp);
  }
  PyObject* base = PyObject_CallMethod(py, C("as_kaldi_LatticeBiglmFasterDecoder"), nullptr);
  if (base) {
    if (PyCapsule_CheckExact(base)) {
      void* p = PyCapsule_GetPointer(base, C("::kaldi::LatticeBiglmFasterDecoder"));
      if (!PyErr_Occurred()) {
        ::kaldi::LatticeBiglmFasterDecoder* c = static_cast<::kaldi::LatticeBiglmFasterDecoder*>(p);
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
    PyErr_Format(PyExc_ValueError, "can't convert %s %s to ::kaldi::LatticeBiglmFasterDecoder*", ClassName(py), ClassType(py));
  } else {
    PyErr_Format(PyExc_TypeError, "expecting %s instance, got %s %s", wrapper_Type.tp_name, ClassName(py), ClassType(py));
  }
  return nullptr;
}
}  // namespace pyLatticeBiglmFasterDecoder


// Initialize module

bool Ready() {
  if (PyType_Ready(&pyLatticeBiglmFasterDecoder::wrapper_Type) < 0) return false;
  Py_INCREF(&pyLatticeBiglmFasterDecoder::wrapper_Type);  // For PyModule_AddObject to steal.
  return true;
}

static struct PyModuleDef Module = {
  PyModuleDef_HEAD_INIT,
  "_lattice_biglm_faster_decoder",  // module name
  "CLIF-generated module for decoder/lattice-biglm-faster-decoder.h", // module doc
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
  if (PyObject* m = PyImport_ImportModule("_deterministic_fst")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_determinize_lattice_pruned")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_lattice_faster_decoder")) Py_DECREF(m);
  else goto err;
  PyEval_InitThreads();
  if (PyModule_AddObject(module, "LatticeBiglmFasterDecoder", reinterpret_cast<PyObject*>(&pyLatticeBiglmFasterDecoder::wrapper_Type)) < 0) goto err;
  return module;
err:
  Py_DECREF(module);
  return nullptr;
}

}  // namespace __lattice__biglm__faster__decoder_clifwrap

namespace kaldi {
using namespace ::clif;
using ::clif::Clif_PyObjAs;
using ::clif::Clif_PyObjFrom;

// LatticeBiglmFasterDecoder to/from ::kaldi::LatticeBiglmFasterDecoder conversion

bool Clif_PyObjAs(PyObject* py, ::kaldi::LatticeBiglmFasterDecoder** c) {
  assert(c != nullptr);
  if (Py_None == py) {
    *c = nullptr;
    return true;
  }
  ::kaldi::LatticeBiglmFasterDecoder* cpp = __lattice__biglm__faster__decoder_clifwrap::pyLatticeBiglmFasterDecoder::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = cpp;
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::shared_ptr<::kaldi::LatticeBiglmFasterDecoder>* c) {
  assert(c != nullptr);
  ::kaldi::LatticeBiglmFasterDecoder* cpp = __lattice__biglm__faster__decoder_clifwrap::pyLatticeBiglmFasterDecoder::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = ::clif::MakeStdShared(reinterpret_cast<__lattice__biglm__faster__decoder_clifwrap::pyLatticeBiglmFasterDecoder::wrapper*>(py)->cpp, cpp);
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::unique_ptr<::kaldi::LatticeBiglmFasterDecoder>* c) {
  assert(c != nullptr);
  ::kaldi::LatticeBiglmFasterDecoder* cpp = __lattice__biglm__faster__decoder_clifwrap::pyLatticeBiglmFasterDecoder::ThisPtr(py);
  if (cpp == nullptr) return false;
  if (!reinterpret_cast<__lattice__biglm__faster__decoder_clifwrap::pyLatticeBiglmFasterDecoder::wrapper*>(py)->cpp.Detach()) {
    PyErr_SetString(PyExc_ValueError, "Cannot convert LatticeBiglmFasterDecoder instance to std::unique_ptr.");
    return false;
  }
  c->reset(cpp);
  return true;
}

PyObject* Clif_PyObjFrom(::kaldi::LatticeBiglmFasterDecoder* c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__lattice__biglm__faster__decoder_clifwrap::pyLatticeBiglmFasterDecoder::wrapper_Type, NULL, NULL);
  reinterpret_cast<__lattice__biglm__faster__decoder_clifwrap::pyLatticeBiglmFasterDecoder::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::LatticeBiglmFasterDecoder>(c, ::clif::UnOwnedResource());
  return py;
}

PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::LatticeBiglmFasterDecoder> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__lattice__biglm__faster__decoder_clifwrap::pyLatticeBiglmFasterDecoder::wrapper_Type, NULL, NULL);
  reinterpret_cast<__lattice__biglm__faster__decoder_clifwrap::pyLatticeBiglmFasterDecoder::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::LatticeBiglmFasterDecoder>(c);
  return py;
}

PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::LatticeBiglmFasterDecoder> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__lattice__biglm__faster__decoder_clifwrap::pyLatticeBiglmFasterDecoder::wrapper_Type, NULL, NULL);
  reinterpret_cast<__lattice__biglm__faster__decoder_clifwrap::pyLatticeBiglmFasterDecoder::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::LatticeBiglmFasterDecoder>(std::move(c));
  return py;
}

}  // namespace kaldi