//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/gmm/model-common.clif

#include <Python.h>
#include "clif/python/ptr_util.h"
#include "clif/python/optional.h"
#include "clif/python/types.h"
#include "matrix/kaldi-vector-clifwrap.h"
#include "model-common-clifwrap.h"
#include "clif/python/stltypes.h"
#include "clif/python/slots.h"

namespace __model__common_clifwrap {
using namespace clif;

#define _0 py::postconv::PASS
#define _1 UnicodeFromBytes
#define _2 UnicodeFromBytes

static PyObject *_Enum{}, *_IntEnum{};  // set below in Init()


// Create Python Enum object (cached in _GmmUpdateFlags) for ::kaldi::GmmUpdateFlags
static PyObject* wrapGmmUpdateFlags() {
  PyObject *py, *py_enum_class{}, *names = PyTuple_New(5);
  if (names == nullptr) return nullptr;
  if ((py = Py_BuildValue("(NN)", PyUnicode_FromString("MEANS"), PyInt_FromLong(
        static_cast<typename std::underlying_type<::kaldi::GmmUpdateFlags>::type>(::kaldi::GmmUpdateFlags::kGmmMeans)))
      ) == nullptr) goto err;
  PyTuple_SET_ITEM(names, 0, py);
  if ((py = Py_BuildValue("(NN)", PyUnicode_FromString("VARIANCES"), PyInt_FromLong(
        static_cast<typename std::underlying_type<::kaldi::GmmUpdateFlags>::type>(::kaldi::GmmUpdateFlags::kGmmVariances)))
      ) == nullptr) goto err;
  PyTuple_SET_ITEM(names, 1, py);
  if ((py = Py_BuildValue("(NN)", PyUnicode_FromString("WEIGHTS"), PyInt_FromLong(
        static_cast<typename std::underlying_type<::kaldi::GmmUpdateFlags>::type>(::kaldi::GmmUpdateFlags::kGmmWeights)))
      ) == nullptr) goto err;
  PyTuple_SET_ITEM(names, 2, py);
  if ((py = Py_BuildValue("(NN)", PyUnicode_FromString("TRANSITIONS"), PyInt_FromLong(
        static_cast<typename std::underlying_type<::kaldi::GmmUpdateFlags>::type>(::kaldi::GmmUpdateFlags::kGmmTransitions)))
      ) == nullptr) goto err;
  PyTuple_SET_ITEM(names, 3, py);
  if ((py = Py_BuildValue("(NN)", PyUnicode_FromString("ALL"), PyInt_FromLong(
        static_cast<typename std::underlying_type<::kaldi::GmmUpdateFlags>::type>(::kaldi::GmmUpdateFlags::kGmmAll)))
      ) == nullptr) goto err;
  PyTuple_SET_ITEM(names, 4, py);
  py = PyUnicode_FromString("GmmUpdateFlags");
  py_enum_class = PyObject_CallFunctionObjArgs(_IntEnum, py, names, nullptr);
  Py_DECREF(py);
err:
  Py_DECREF(names);
  return py_enum_class;
}
static PyObject* _GmmUpdateFlags{};  // set by above func in Init()

// string_to_gmm_flags(s:str) -> GmmUpdateFlags
static PyObject* wrapStringToGmmFlags_as_string_to_gmm_flags(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("s"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:string_to_gmm_flags", names, &a[0])) return nullptr;
  ::std::string arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("string_to_gmm_flags", names[0], "::std::string", a[0]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  unsigned short ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::StringToGmmFlags(std::move(arg1));
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

// gmm_flags_to_string(gmm_flags:GmmUpdateFlags) -> str
static PyObject* wrapGmmFlagsToString_as_gmm_flags_to_string(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("gmm_flags"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:gmm_flags_to_string", names, &a[0])) return nullptr;
  unsigned short arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("gmm_flags_to_string", names[0], "unsigned short", a[0]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  ::std::string ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::GmmFlagsToString(std::move(arg1));
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
  return Clif_PyObjFrom(std::move(ret0), _1);
}

// augment_gmm_flags(gmm_flags:GmmUpdateFlags) -> GmmUpdateFlags
static PyObject* wrapAugmentGmmFlags_as_augment_gmm_flags(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("gmm_flags"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:augment_gmm_flags", names, &a[0])) return nullptr;
  unsigned short arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("augment_gmm_flags", names[0], "unsigned short", a[0]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  unsigned short ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::AugmentGmmFlags(std::move(arg1));
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

// Create Python Enum object (cached in _SgmmUpdateFlags) for ::kaldi::SgmmUpdateFlags
static PyObject* wrapSgmmUpdateFlags() {
  PyObject *py, *py_enum_class{}, *names = PyTuple_New(9);
  if (names == nullptr) return nullptr;
  if ((py = Py_BuildValue("(NN)", PyUnicode_FromString("PHONE_VECTORS"), PyInt_FromLong(
        static_cast<typename std::underlying_type<::kaldi::SgmmUpdateFlags>::type>(::kaldi::SgmmUpdateFlags::kSgmmPhoneVectors)))
      ) == nullptr) goto err;
  PyTuple_SET_ITEM(names, 0, py);
  if ((py = Py_BuildValue("(NN)", PyUnicode_FromString("PHONE_PROJECTIONS"), PyInt_FromLong(
        static_cast<typename std::underlying_type<::kaldi::SgmmUpdateFlags>::type>(::kaldi::SgmmUpdateFlags::kSgmmPhoneProjections)))
      ) == nullptr) goto err;
  PyTuple_SET_ITEM(names, 1, py);
  if ((py = Py_BuildValue("(NN)", PyUnicode_FromString("PHONE_WEIGHT_PROJECTIONS"), PyInt_FromLong(
        static_cast<typename std::underlying_type<::kaldi::SgmmUpdateFlags>::type>(::kaldi::SgmmUpdateFlags::kSgmmPhoneWeightProjections)))
      ) == nullptr) goto err;
  PyTuple_SET_ITEM(names, 2, py);
  if ((py = Py_BuildValue("(NN)", PyUnicode_FromString("COVARIANCE_MATRIX"), PyInt_FromLong(
        static_cast<typename std::underlying_type<::kaldi::SgmmUpdateFlags>::type>(::kaldi::SgmmUpdateFlags::kSgmmCovarianceMatrix)))
      ) == nullptr) goto err;
  PyTuple_SET_ITEM(names, 3, py);
  if ((py = Py_BuildValue("(NN)", PyUnicode_FromString("SUBSTATE_WEIGHTS"), PyInt_FromLong(
        static_cast<typename std::underlying_type<::kaldi::SgmmUpdateFlags>::type>(::kaldi::SgmmUpdateFlags::kSgmmSubstateWeights)))
      ) == nullptr) goto err;
  PyTuple_SET_ITEM(names, 4, py);
  if ((py = Py_BuildValue("(NN)", PyUnicode_FromString("SPEAKER_PROJECTIONS"), PyInt_FromLong(
        static_cast<typename std::underlying_type<::kaldi::SgmmUpdateFlags>::type>(::kaldi::SgmmUpdateFlags::kSgmmSpeakerProjections)))
      ) == nullptr) goto err;
  PyTuple_SET_ITEM(names, 5, py);
  if ((py = Py_BuildValue("(NN)", PyUnicode_FromString("TRANSITIONS"), PyInt_FromLong(
        static_cast<typename std::underlying_type<::kaldi::SgmmUpdateFlags>::type>(::kaldi::SgmmUpdateFlags::kSgmmTransitions)))
      ) == nullptr) goto err;
  PyTuple_SET_ITEM(names, 6, py);
  if ((py = Py_BuildValue("(NN)", PyUnicode_FromString("SPEAKER_WEIGHT_PROJECTIONS"), PyInt_FromLong(
        static_cast<typename std::underlying_type<::kaldi::SgmmUpdateFlags>::type>(::kaldi::SgmmUpdateFlags::kSgmmSpeakerWeightProjections)))
      ) == nullptr) goto err;
  PyTuple_SET_ITEM(names, 7, py);
  if ((py = Py_BuildValue("(NN)", PyUnicode_FromString("ALL"), PyInt_FromLong(
        static_cast<typename std::underlying_type<::kaldi::SgmmUpdateFlags>::type>(::kaldi::SgmmUpdateFlags::kSgmmAll)))
      ) == nullptr) goto err;
  PyTuple_SET_ITEM(names, 8, py);
  py = PyUnicode_FromString("SgmmUpdateFlags");
  py_enum_class = PyObject_CallFunctionObjArgs(_IntEnum, py, names, nullptr);
  Py_DECREF(py);
err:
  Py_DECREF(names);
  return py_enum_class;
}
static PyObject* _SgmmUpdateFlags{};  // set by above func in Init()

// string_to_sgmm_update_flags(s:str) -> SgmmUpdateFlags
static PyObject* wrapStringToSgmmUpdateFlags_as_string_to_sgmm_update_flags(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("s"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:string_to_sgmm_update_flags", names, &a[0])) return nullptr;
  ::std::string arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("string_to_sgmm_update_flags", names[0], "::std::string", a[0]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  unsigned short ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::StringToSgmmUpdateFlags(std::move(arg1));
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

// Create Python Enum object (cached in _SgmmWriteFlags) for ::kaldi::SgmmWriteFlags
static PyObject* wrapSgmmWriteFlags() {
  PyObject *py, *py_enum_class{}, *names = PyTuple_New(5);
  if (names == nullptr) return nullptr;
  if ((py = Py_BuildValue("(NN)", PyUnicode_FromString("GLOBAL_PARAMS"), PyInt_FromLong(
        static_cast<typename std::underlying_type<::kaldi::SgmmWriteFlags>::type>(::kaldi::SgmmWriteFlags::kSgmmGlobalParams)))
      ) == nullptr) goto err;
  PyTuple_SET_ITEM(names, 0, py);
  if ((py = Py_BuildValue("(NN)", PyUnicode_FromString("STATE_PARAMS"), PyInt_FromLong(
        static_cast<typename std::underlying_type<::kaldi::SgmmWriteFlags>::type>(::kaldi::SgmmWriteFlags::kSgmmStateParams)))
      ) == nullptr) goto err;
  PyTuple_SET_ITEM(names, 1, py);
  if ((py = Py_BuildValue("(NN)", PyUnicode_FromString("NORMALIZERS"), PyInt_FromLong(
        static_cast<typename std::underlying_type<::kaldi::SgmmWriteFlags>::type>(::kaldi::SgmmWriteFlags::kSgmmNormalizers)))
      ) == nullptr) goto err;
  PyTuple_SET_ITEM(names, 2, py);
  if ((py = Py_BuildValue("(NN)", PyUnicode_FromString("BACKGROUND_GMMS"), PyInt_FromLong(
        static_cast<typename std::underlying_type<::kaldi::SgmmWriteFlags>::type>(::kaldi::SgmmWriteFlags::kSgmmBackgroundGmms)))
      ) == nullptr) goto err;
  PyTuple_SET_ITEM(names, 3, py);
  if ((py = Py_BuildValue("(NN)", PyUnicode_FromString("WRITE_ALL"), PyInt_FromLong(
        static_cast<typename std::underlying_type<::kaldi::SgmmWriteFlags>::type>(::kaldi::SgmmWriteFlags::kSgmmWriteAll)))
      ) == nullptr) goto err;
  PyTuple_SET_ITEM(names, 4, py);
  py = PyUnicode_FromString("SgmmWriteFlags");
  py_enum_class = PyObject_CallFunctionObjArgs(_IntEnum, py, names, nullptr);
  Py_DECREF(py);
err:
  Py_DECREF(names);
  return py_enum_class;
}
static PyObject* _SgmmWriteFlags{};  // set by above func in Init()

// string_to_sgmm_write_flags(s:str) -> SgmmWriteFlags
static PyObject* wrapStringToSgmmWriteFlags_as_string_to_sgmm_write_flags(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("s"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:string_to_sgmm_write_flags", names, &a[0])) return nullptr;
  ::std::string arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("string_to_sgmm_write_flags", names[0], "::std::string", a[0]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  unsigned short ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::StringToSgmmWriteFlags(std::move(arg1));
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

// get_split_targets(state_occs:Vector, target_components:int, power:float, min_count:float) -> list<int>
static PyObject* wrapGetSplitTargets_as_get_split_targets(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[4];
  char* names[] = {
      C("state_occs"),
      C("target_components"),
      C("power"),
      C("min_count"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOOO:get_split_targets", names, &a[0], &a[1], &a[2], &a[3])) return nullptr;
  ::kaldi::Vector<float>* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("get_split_targets", names[0], "::kaldi::Vector<float>", a[0]);
  int arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("get_split_targets", names[1], "int", a[1]);
  float arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("get_split_targets", names[2], "float", a[2]);
  float arg4;
  if (!Clif_PyObjAs(a[3], &arg4)) return ArgError("get_split_targets", names[3], "float", a[3]);
  ::std::vector< ::int32> ret0{};
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::GetSplitTargets(*arg1, std::move(arg2), std::move(arg3), std::move(arg4), &ret0);
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
  {C("string_to_gmm_flags"), (PyCFunction)wrapStringToGmmFlags_as_string_to_gmm_flags, METH_VARARGS | METH_KEYWORDS, C("string_to_gmm_flags(s:str) -> GmmUpdateFlags\n  Calls C++ function\n  unsigned short ::kaldi::StringToGmmFlags(::std::string)")},
  {C("gmm_flags_to_string"), (PyCFunction)wrapGmmFlagsToString_as_gmm_flags_to_string, METH_VARARGS | METH_KEYWORDS, C("gmm_flags_to_string(gmm_flags:GmmUpdateFlags) -> str\n  Calls C++ function\n  ::std::string ::kaldi::GmmFlagsToString(unsigned short)")},
  {C("augment_gmm_flags"), (PyCFunction)wrapAugmentGmmFlags_as_augment_gmm_flags, METH_VARARGS | METH_KEYWORDS, C("augment_gmm_flags(gmm_flags:GmmUpdateFlags) -> GmmUpdateFlags\n  Calls C++ function\n  unsigned short ::kaldi::AugmentGmmFlags(unsigned short)")},
  {C("string_to_sgmm_update_flags"), (PyCFunction)wrapStringToSgmmUpdateFlags_as_string_to_sgmm_update_flags, METH_VARARGS | METH_KEYWORDS, C("string_to_sgmm_update_flags(s:str) -> SgmmUpdateFlags\n  Calls C++ function\n  unsigned short ::kaldi::StringToSgmmUpdateFlags(::std::string)")},
  {C("string_to_sgmm_write_flags"), (PyCFunction)wrapStringToSgmmWriteFlags_as_string_to_sgmm_write_flags, METH_VARARGS | METH_KEYWORDS, C("string_to_sgmm_write_flags(s:str) -> SgmmWriteFlags\n  Calls C++ function\n  unsigned short ::kaldi::StringToSgmmWriteFlags(::std::string)")},
  {C("get_split_targets"), (PyCFunction)wrapGetSplitTargets_as_get_split_targets, METH_VARARGS | METH_KEYWORDS, C("get_split_targets(state_occs:Vector, target_components:int, power:float, min_count:float) -> list<int>\n  Calls C++ function\n  void ::kaldi::GetSplitTargets(::kaldi::Vector<float>, int, float, float, ::std::vector< ::int32>*)")},
  {}
};

bool Ready() {
  return true;
}

static struct PyModuleDef Module = {
  PyModuleDef_HEAD_INIT,
  "_model_common",  // module name
  "CLIF-generated module for gmm/model-common.h", // module doc
  -1,  // module keeps state in global variables
  Methods
};

PyObject* Init() {
  PyObject* module = PyModule_Create(&Module);
  if (!module) return nullptr;
  if (PyObject* m = PyImport_ImportModule("_kaldi_vector")) Py_DECREF(m);
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
  if (PyModule_AddObject(module, "GmmUpdateFlags", (_GmmUpdateFlags=wrapGmmUpdateFlags())) < 0) goto err;
  if (PyModule_AddObject(module, "SgmmUpdateFlags", (_SgmmUpdateFlags=wrapSgmmUpdateFlags())) < 0) goto err;
  if (PyModule_AddObject(module, "SgmmWriteFlags", (_SgmmWriteFlags=wrapSgmmWriteFlags())) < 0) goto err;
  return module;
err:
  Py_DECREF(module);
  return nullptr;
}

}  // namespace __model__common_clifwrap

namespace kaldi {
using namespace ::clif;
using ::clif::Clif_PyObjAs;
using ::clif::Clif_PyObjFrom;

// GmmUpdateFlags:IntEnum to/from enum ::kaldi::GmmUpdateFlags conversion

bool Clif_PyObjAs(PyObject* py, ::kaldi::GmmUpdateFlags* c) {
  assert(c != nullptr);
  if (!PyObject_IsInstance(py, __model__common_clifwrap::_GmmUpdateFlags)) {
    PyErr_Format(PyExc_TypeError, "expecting enum GmmUpdateFlags, got %s %s", ClassName(py), ClassType(py));
    return false;
  }
  typename std::underlying_type<::kaldi::GmmUpdateFlags>::type v;
  PyObject* value = PyObject_GetAttrString(py, "value");
  if (value == nullptr || !Clif_PyObjAs(value, &v)) return false;
  Py_DECREF(value);
  *c = static_cast<::kaldi::GmmUpdateFlags>(v);
  return true;
}

PyObject* Clif_PyObjFrom(const ::kaldi::GmmUpdateFlags& c, py::PostConv) {
  return PyObject_CallFunctionObjArgs(__model__common_clifwrap::_GmmUpdateFlags, PyInt_FromLong(
      static_cast<typename std::underlying_type<::kaldi::GmmUpdateFlags>::type>(c)), nullptr);
}

// SgmmUpdateFlags:IntEnum to/from enum ::kaldi::SgmmUpdateFlags conversion

bool Clif_PyObjAs(PyObject* py, ::kaldi::SgmmUpdateFlags* c) {
  assert(c != nullptr);
  if (!PyObject_IsInstance(py, __model__common_clifwrap::_SgmmUpdateFlags)) {
    PyErr_Format(PyExc_TypeError, "expecting enum SgmmUpdateFlags, got %s %s", ClassName(py), ClassType(py));
    return false;
  }
  typename std::underlying_type<::kaldi::SgmmUpdateFlags>::type v;
  PyObject* value = PyObject_GetAttrString(py, "value");
  if (value == nullptr || !Clif_PyObjAs(value, &v)) return false;
  Py_DECREF(value);
  *c = static_cast<::kaldi::SgmmUpdateFlags>(v);
  return true;
}

PyObject* Clif_PyObjFrom(const ::kaldi::SgmmUpdateFlags& c, py::PostConv) {
  return PyObject_CallFunctionObjArgs(__model__common_clifwrap::_SgmmUpdateFlags, PyInt_FromLong(
      static_cast<typename std::underlying_type<::kaldi::SgmmUpdateFlags>::type>(c)), nullptr);
}

// SgmmWriteFlags:IntEnum to/from enum ::kaldi::SgmmWriteFlags conversion

bool Clif_PyObjAs(PyObject* py, ::kaldi::SgmmWriteFlags* c) {
  assert(c != nullptr);
  if (!PyObject_IsInstance(py, __model__common_clifwrap::_SgmmWriteFlags)) {
    PyErr_Format(PyExc_TypeError, "expecting enum SgmmWriteFlags, got %s %s", ClassName(py), ClassType(py));
    return false;
  }
  typename std::underlying_type<::kaldi::SgmmWriteFlags>::type v;
  PyObject* value = PyObject_GetAttrString(py, "value");
  if (value == nullptr || !Clif_PyObjAs(value, &v)) return false;
  Py_DECREF(value);
  *c = static_cast<::kaldi::SgmmWriteFlags>(v);
  return true;
}

PyObject* Clif_PyObjFrom(const ::kaldi::SgmmWriteFlags& c, py::PostConv) {
  return PyObject_CallFunctionObjArgs(__model__common_clifwrap::_SgmmWriteFlags, PyInt_FromLong(
      static_cast<typename std::underlying_type<::kaldi::SgmmWriteFlags>::type>(c)), nullptr);
}

}  // namespace kaldi
