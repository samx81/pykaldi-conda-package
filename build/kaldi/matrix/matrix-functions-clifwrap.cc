//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/matrix/matrix-functions.clif

#include <Python.h>
#include "clif/python/ptr_util.h"
#include "clif/python/optional.h"
#include "clif/python/types.h"
#include "matrix/matrix-common-clifwrap.h"
#include "matrix/kaldi-vector-clifwrap.h"
#include "matrix/kaldi-matrix-clifwrap.h"
#include "matrix-functions-clifwrap.h"
#include "clif/python/stltypes.h"
#include "clif/python/slots.h"

namespace __matrix__functions_clifwrap {
using namespace clif;

#define _0 py::postconv::PASS
#define _1 UnicodeFromBytes
#define _2 UnicodeFromBytes


// complex_fft(v:VectorBase, forward:bool, tmp_work:Vector=default)
static PyObject* wrapComplexFft_as_complex_fft(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[3]{};
  char* names[] = {
      C("v"),
      C("forward"),
      C("tmp_work"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO|O:complex_fft", names, &a[0], &a[1], &a[2])) return nullptr;
  int nargs;  // Find how many args actually passed in.
  for (nargs = 3; nargs > 2; --nargs) {
    if (a[nargs-1] != nullptr) break;
  }
  ::kaldi::VectorBase<float> * arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("complex_fft", names[0], "::kaldi::VectorBase<float> *", a[0]);
  bool arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("complex_fft", names[1], "bool", a[1]);
  ::kaldi::Vector<float> * arg3;
  if (nargs > 2) {
    if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("complex_fft", names[2], "::kaldi::Vector<float> *", a[2]);
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
  case 2:
    ::kaldi::ComplexFft(arg1, std::move(arg2)); break;
  case 3:
    ::kaldi::ComplexFft(arg1, std::move(arg2), arg3); break;
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

// real_fft(v:VectorBase, forward:bool)
static PyObject* wrapRealFft_as_real_fft(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2];
  char* names[] = {
      C("v"),
      C("forward"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO:real_fft", names, &a[0], &a[1])) return nullptr;
  ::kaldi::VectorBase<float> * arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("real_fft", names[0], "::kaldi::VectorBase<float> *", a[0]);
  bool arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("real_fft", names[1], "bool", a[1]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::RealFft(arg1, std::move(arg2));
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

// compute_dct_matrix(M:Matrix)
static PyObject* wrapComputeDctMatrix_as_compute_dct_matrix(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("M"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:compute_dct_matrix", names, &a[0])) return nullptr;
  ::kaldi::Matrix<float> * arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("compute_dct_matrix", names[0], "::kaldi::Matrix<float> *", a[0]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::ComputeDctMatrix(arg1);
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

// compute_pca(X:MatrixBase, U:MatrixBase, A:MatrixBase, print_eigs:bool=default, exact:bool=default)
static PyObject* wrapComputePca_as_compute_pca(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[5]{};
  char* names[] = {
      C("X"),
      C("U"),
      C("A"),
      C("print_eigs"),
      C("exact"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOO|OO:compute_pca", names, &a[0], &a[1], &a[2], &a[3], &a[4])) return nullptr;
  int nargs;  // Find how many args actually passed in.
  for (nargs = 5; nargs > 3; --nargs) {
    if (a[nargs-1] != nullptr) break;
  }
  ::kaldi::MatrixBase<float>* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("compute_pca", names[0], "::kaldi::MatrixBase<float>", a[0]);
  ::kaldi::MatrixBase<float> * arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("compute_pca", names[1], "::kaldi::MatrixBase<float> *", a[1]);
  ::kaldi::MatrixBase<float> * arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("compute_pca", names[2], "::kaldi::MatrixBase<float> *", a[2]);
  bool arg4;
  if (nargs > 3) {
    if (!a[3]) return DefaultArgMissedError("compute_pca", names[3]);
    if (!Clif_PyObjAs(a[3], &arg4)) return ArgError("compute_pca", names[3], "bool", a[3]);
  }
  bool arg5;
  if (nargs > 4) {
    if (!Clif_PyObjAs(a[4], &arg5)) return ArgError("compute_pca", names[4], "bool", a[4]);
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
  case 3:
    ::kaldi::ComputePca(*arg1, arg2, arg3); break;
  case 4:
    ::kaldi::ComputePca(*arg1, arg2, arg3, std::move(arg4)); break;
  case 5:
    ::kaldi::ComputePca(*arg1, arg2, arg3, std::move(arg4), std::move(arg5)); break;
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

// add_outer_product_plus_minus(alpha:float, a:VectorBase, b:VectorBase, plus:MatrixBase, minus:MatrixBase)
static PyObject* wrapAddOuterProductPlusMinus_as_add_outer_product_plus_minus(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[5];
  char* names[] = {
      C("alpha"),
      C("a"),
      C("b"),
      C("plus"),
      C("minus"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOOOO:add_outer_product_plus_minus", names, &a[0], &a[1], &a[2], &a[3], &a[4])) return nullptr;
  float arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("add_outer_product_plus_minus", names[0], "float", a[0]);
  ::kaldi::VectorBase<float>* arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("add_outer_product_plus_minus", names[1], "::kaldi::VectorBase<float>", a[1]);
  ::kaldi::VectorBase<float>* arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("add_outer_product_plus_minus", names[2], "::kaldi::VectorBase<float>", a[2]);
  ::kaldi::MatrixBase<float> * arg4;
  if (!Clif_PyObjAs(a[3], &arg4)) return ArgError("add_outer_product_plus_minus", names[3], "::kaldi::MatrixBase<float> *", a[3]);
  ::kaldi::MatrixBase<float> * arg5;
  if (!Clif_PyObjAs(a[4], &arg5)) return ArgError("add_outer_product_plus_minus", names[4], "::kaldi::MatrixBase<float> *", a[4]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::AddOuterProductPlusMinus(std::move(arg1), *arg2, *arg3, arg4, arg5);
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

// assert_same_dim_matrix(mat1:MatrixBase, mat2:MatrixBase)
static PyObject* wrapAssertSameDim_as_assert_same_dim_matrix(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2];
  char* names[] = {
      C("mat1"),
      C("mat2"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO:assert_same_dim_matrix", names, &a[0], &a[1])) return nullptr;
  ::kaldi::MatrixBase<float>* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("assert_same_dim_matrix", names[0], "::kaldi::MatrixBase<float>", a[0]);
  ::kaldi::MatrixBase<float>* arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("assert_same_dim_matrix", names[1], "::kaldi::MatrixBase<float>", a[1]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::AssertSameDim(*arg1, *arg2);
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
  {C("complex_fft"), (PyCFunction)wrapComplexFft_as_complex_fft, METH_VARARGS | METH_KEYWORDS, C("complex_fft(v:VectorBase, forward:bool, tmp_work:Vector=default)\n  Calls C++ function\n  void ::kaldi::ComplexFft(::kaldi::VectorBase<float> *, bool, ::kaldi::Vector<float> *)")},
  {C("real_fft"), (PyCFunction)wrapRealFft_as_real_fft, METH_VARARGS | METH_KEYWORDS, C("real_fft(v:VectorBase, forward:bool)\n  Calls C++ function\n  void ::kaldi::RealFft(::kaldi::VectorBase<float> *, bool)")},
  {C("compute_dct_matrix"), (PyCFunction)wrapComputeDctMatrix_as_compute_dct_matrix, METH_VARARGS | METH_KEYWORDS, C("compute_dct_matrix(M:Matrix)\n  Calls C++ function\n  void ::kaldi::ComputeDctMatrix(::kaldi::Matrix<float> *)")},
  {C("compute_pca"), (PyCFunction)wrapComputePca_as_compute_pca, METH_VARARGS | METH_KEYWORDS, C("compute_pca(X:MatrixBase, U:MatrixBase, A:MatrixBase, print_eigs:bool=default, exact:bool=default)\n  Calls C++ function\n  void ::kaldi::ComputePca(::kaldi::MatrixBase<float>, ::kaldi::MatrixBase<float> *, ::kaldi::MatrixBase<float> *, bool, bool)")},
  {C("add_outer_product_plus_minus"), (PyCFunction)wrapAddOuterProductPlusMinus_as_add_outer_product_plus_minus, METH_VARARGS | METH_KEYWORDS, C("add_outer_product_plus_minus(alpha:float, a:VectorBase, b:VectorBase, plus:MatrixBase, minus:MatrixBase)\n  Calls C++ function\n  void ::kaldi::AddOuterProductPlusMinus(float, ::kaldi::VectorBase<float>, ::kaldi::VectorBase<float>, ::kaldi::MatrixBase<float> *, ::kaldi::MatrixBase<float> *)")},
  {C("assert_same_dim_matrix"), (PyCFunction)wrapAssertSameDim_as_assert_same_dim_matrix, METH_VARARGS | METH_KEYWORDS, C("assert_same_dim_matrix(mat1:MatrixBase, mat2:MatrixBase)\n\nChecks if mat1 and mat2 have the same dimensions.\n\nRaises:\n    Error if mat1.num_rows!=mat2.num_rows\n    or mat1.num_cols!=mat2.num_cols")},
  {}
};

bool Ready() {
  return true;
}

static struct PyModuleDef Module = {
  PyModuleDef_HEAD_INIT,
  "_matrix_functions",  // module name
  "CLIF-generated module for matrix/matrix-functions.h", // module doc
  -1,  // module keeps state in global variables
  Methods
};

PyObject* Init() {
  PyObject* module = PyModule_Create(&Module);
  if (!module) return nullptr;
  if (PyObject* m = PyImport_ImportModule("_matrix_common")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_kaldi_vector")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_kaldi_matrix")) Py_DECREF(m);
  else goto err;
  PyEval_InitThreads();
  return module;
err:
  Py_DECREF(module);
  return nullptr;
}

}  // namespace __matrix__functions_clifwrap
