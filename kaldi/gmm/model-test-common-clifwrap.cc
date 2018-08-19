//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/gmm/model-test-common.clif

#include <Python.h>
#include "clif/python/ptr_util.h"
#include "clif/python/optional.h"
#include "clif/python/types.h"
#include "matrix/kaldi-vector-clifwrap.h"
#include "matrix/kaldi-matrix-clifwrap.h"
#include "gmm/full-gmm-clifwrap.h"
#include "gmm/diag-gmm-clifwrap.h"
#include "matrix/tp-matrix-clifwrap.h"
#include "model-test-common-clifwrap.h"
#include "clif/python/stltypes.h"
#include "clif/python/slots.h"

namespace __model__test__common_clifwrap {
using namespace clif;

#define _0 py::postconv::PASS
#define _1 UnicodeFromBytes
#define _2 UnicodeFromBytes


// rand_diag_gauss_features(num_samples:int, mean:VectorBase, sqrt_var:VectorBase, feats:MatrixBase)
static PyObject* wrapRandDiagGaussFeatures_as_rand_diag_gauss_features(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[4];
  char* names[] = {
      C("num_samples"),
      C("mean"),
      C("sqrt_var"),
      C("feats"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOOO:rand_diag_gauss_features", names, &a[0], &a[1], &a[2], &a[3])) return nullptr;
  int arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("rand_diag_gauss_features", names[0], "int", a[0]);
  ::kaldi::VectorBase<float>* arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("rand_diag_gauss_features", names[1], "::kaldi::VectorBase<float>", a[1]);
  ::kaldi::VectorBase<float>* arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("rand_diag_gauss_features", names[2], "::kaldi::VectorBase<float>", a[2]);
  ::kaldi::MatrixBase<float> * arg4;
  if (!Clif_PyObjAs(a[3], &arg4)) return ArgError("rand_diag_gauss_features", names[3], "::kaldi::MatrixBase<float> *", a[3]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::unittest::RandDiagGaussFeatures(std::move(arg1), *arg2, *arg3, arg4);
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

// rand_full_gauss_features(num_samples:int, mean:VectorBase, sqrt_var:TpMatrix, feats:MatrixBase)
static PyObject* wrapRandFullGaussFeatures_as_rand_full_gauss_features(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[4];
  char* names[] = {
      C("num_samples"),
      C("mean"),
      C("sqrt_var"),
      C("feats"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOOO:rand_full_gauss_features", names, &a[0], &a[1], &a[2], &a[3])) return nullptr;
  int arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("rand_full_gauss_features", names[0], "int", a[0]);
  ::kaldi::VectorBase<float>* arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("rand_full_gauss_features", names[1], "::kaldi::VectorBase<float>", a[1]);
  ::kaldi::TpMatrix<float>* arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("rand_full_gauss_features", names[2], "::kaldi::TpMatrix<float>", a[2]);
  ::kaldi::MatrixBase<float> * arg4;
  if (!Clif_PyObjAs(a[3], &arg4)) return ArgError("rand_full_gauss_features", names[3], "::kaldi::MatrixBase<float> *", a[3]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::unittest::RandFullGaussFeatures(std::move(arg1), *arg2, *arg3, arg4);
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

// init_rand_diag(dim:int, num_comp:int, gmm:DiagGmm)
static PyObject* wrapInitRandDiagGmm_as_init_rand_diag(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[3];
  char* names[] = {
      C("dim"),
      C("num_comp"),
      C("gmm"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOO:init_rand_diag", names, &a[0], &a[1], &a[2])) return nullptr;
  int arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("init_rand_diag", names[0], "int", a[0]);
  int arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("init_rand_diag", names[1], "int", a[1]);
  ::kaldi::DiagGmm * arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("init_rand_diag", names[2], "::kaldi::DiagGmm *", a[2]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::unittest::InitRandDiagGmm(std::move(arg1), std::move(arg2), arg3);
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

// init_rand_full(dim:int, num_comp:int, gmm:FullGmm)
static PyObject* wrapInitRandFullGmm_as_init_rand_full(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[3];
  char* names[] = {
      C("dim"),
      C("num_comp"),
      C("gmm"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOO:init_rand_full", names, &a[0], &a[1], &a[2])) return nullptr;
  int arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("init_rand_full", names[0], "int", a[0]);
  int arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("init_rand_full", names[1], "int", a[1]);
  ::kaldi::FullGmm * arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("init_rand_full", names[2], "::kaldi::FullGmm *", a[2]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::unittest::InitRandFullGmm(std::move(arg1), std::move(arg2), arg3);
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
  {C("rand_diag_gauss_features"), (PyCFunction)wrapRandDiagGaussFeatures_as_rand_diag_gauss_features, METH_VARARGS | METH_KEYWORDS, C("rand_diag_gauss_features(num_samples:int, mean:VectorBase, sqrt_var:VectorBase, feats:MatrixBase)\n  Calls C++ function\n  void ::kaldi::unittest::RandDiagGaussFeatures(int, ::kaldi::VectorBase<float>, ::kaldi::VectorBase<float>, ::kaldi::MatrixBase<float> *)")},
  {C("rand_full_gauss_features"), (PyCFunction)wrapRandFullGaussFeatures_as_rand_full_gauss_features, METH_VARARGS | METH_KEYWORDS, C("rand_full_gauss_features(num_samples:int, mean:VectorBase, sqrt_var:TpMatrix, feats:MatrixBase)\n  Calls C++ function\n  void ::kaldi::unittest::RandFullGaussFeatures(int, ::kaldi::VectorBase<float>, ::kaldi::TpMatrix<float>, ::kaldi::MatrixBase<float> *)")},
  {C("init_rand_diag"), (PyCFunction)wrapInitRandDiagGmm_as_init_rand_diag, METH_VARARGS | METH_KEYWORDS, C("init_rand_diag(dim:int, num_comp:int, gmm:DiagGmm)\n  Calls C++ function\n  void ::kaldi::unittest::InitRandDiagGmm(int, int, ::kaldi::DiagGmm *)")},
  {C("init_rand_full"), (PyCFunction)wrapInitRandFullGmm_as_init_rand_full, METH_VARARGS | METH_KEYWORDS, C("init_rand_full(dim:int, num_comp:int, gmm:FullGmm)\n  Calls C++ function\n  void ::kaldi::unittest::InitRandFullGmm(int, int, ::kaldi::FullGmm *)")},
  {}
};

bool Ready() {
  return true;
}

static struct PyModuleDef Module = {
  PyModuleDef_HEAD_INIT,
  "_model_test_common",  // module name
  "CLIF-generated module for gmm/model-test-common.h", // module doc
  -1,  // module keeps state in global variables
  Methods
};

PyObject* Init() {
  PyObject* module = PyModule_Create(&Module);
  if (!module) return nullptr;
  if (PyObject* m = PyImport_ImportModule("_kaldi_vector")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_kaldi_matrix")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_full_gmm")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_diag_gmm")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_tp_matrix")) Py_DECREF(m);
  else goto err;
  PyEval_InitThreads();
  return module;
err:
  Py_DECREF(module);
  return nullptr;
}

}  // namespace __model__test__common_clifwrap