//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/util/kaldi-holder.clif

#include <Python.h>
#include "clif/python/ptr_util.h"
#include "clif/python/optional.h"
#include "clif/python/types.h"
#include "matrix/kaldi-vector-clifwrap.h"
#include "matrix/kaldi-matrix-clifwrap.h"
#include "kaldi-holder-clifwrap.h"
#include "clif/python/stltypes.h"
#include "clif/python/slots.h"

namespace __kaldi__holder_clifwrap {
using namespace clif;

#define _0 py::postconv::PASS
#define _1 UnicodeFromBytes
#define _2 UnicodeFromBytes


// extract_matrix_range(input:Matrix, range:str, m:Matrix) -> bool
static PyObject* wrapExtractObjectRange_as_extract_matrix_range(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[3];
  char* names[] = {
      C("input"),
      C("range"),
      C("m"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOO:extract_matrix_range", names, &a[0], &a[1], &a[2])) return nullptr;
  ::kaldi::Matrix<float>* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("extract_matrix_range", names[0], "::kaldi::Matrix<float>", a[0]);
  ::std::string arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("extract_matrix_range", names[1], "::std::string", a[1]);
  ::kaldi::Matrix<float> * arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("extract_matrix_range", names[2], "::kaldi::Matrix<float> *", a[2]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  bool ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::ExtractObjectRange(*arg1, std::move(arg2), arg3);
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

// extract_vector_range(input:Vector, range:str, v:Vector) -> bool
static PyObject* wrapExtractObjectRange_as_extract_vector_range(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[3];
  char* names[] = {
      C("input"),
      C("range"),
      C("v"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOO:extract_vector_range", names, &a[0], &a[1], &a[2])) return nullptr;
  ::kaldi::Vector<float>* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("extract_vector_range", names[0], "::kaldi::Vector<float>", a[0]);
  ::std::string arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("extract_vector_range", names[1], "::std::string", a[1]);
  ::kaldi::Vector<float> * arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("extract_vector_range", names[2], "::kaldi::Vector<float> *", a[2]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  bool ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::ExtractObjectRange(*arg1, std::move(arg2), arg3);
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

// extract_range_specifier(rxfilename_with_range:str, data_rxfilename:str, range:str) -> bool
static PyObject* wrapExtractRangeSpecifier_as_extract_range_specifier(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[3];
  char* names[] = {
      C("rxfilename_with_range"),
      C("data_rxfilename"),
      C("range"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOO:extract_range_specifier", names, &a[0], &a[1], &a[2])) return nullptr;
  ::std::string arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("extract_range_specifier", names[0], "::std::string", a[0]);
  ::std::basic_string<char, ::std::char_traits<char>, ::std::allocator<char> >  arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("extract_range_specifier", names[1], "::std::basic_string<char, ::std::char_traits<char>, ::std::allocator<char> > *", a[1]);
  ::std::basic_string<char, ::std::char_traits<char>, ::std::allocator<char> >  arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("extract_range_specifier", names[2], "::std::basic_string<char, ::std::char_traits<char>, ::std::allocator<char> > *", a[2]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  bool ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::ExtractRangeSpecifier(std::move(arg1), &arg2, &arg3);
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
  {C("extract_matrix_range"), (PyCFunction)wrapExtractObjectRange_as_extract_matrix_range, METH_VARARGS | METH_KEYWORDS, C("extract_matrix_range(input:Matrix, range:str, m:Matrix) -> bool\n  Calls C++ function\n  bool ::kaldi::ExtractObjectRange(::kaldi::Matrix<float>, ::std::string, ::kaldi::Matrix<float> *)")},
  {C("extract_vector_range"), (PyCFunction)wrapExtractObjectRange_as_extract_vector_range, METH_VARARGS | METH_KEYWORDS, C("extract_vector_range(input:Vector, range:str, v:Vector) -> bool\n  Calls C++ function\n  bool ::kaldi::ExtractObjectRange(::kaldi::Vector<float>, ::std::string, ::kaldi::Vector<float> *)")},
  {C("extract_range_specifier"), (PyCFunction)wrapExtractRangeSpecifier_as_extract_range_specifier, METH_VARARGS | METH_KEYWORDS, C("extract_range_specifier(rxfilename_with_range:str, data_rxfilename:str, range:str) -> bool\n  Calls C++ function\n  bool ::kaldi::ExtractRangeSpecifier(::std::string, ::std::basic_string<char, ::std::char_traits<char>, ::std::allocator<char> > *, ::std::basic_string<char, ::std::char_traits<char>, ::std::allocator<char> > *)")},
  {}
};

bool Ready() {
  return true;
}

static struct PyModuleDef Module = {
  PyModuleDef_HEAD_INIT,
  "_kaldi_holder",  // module name
  "CLIF-generated module for util/kaldi-holder.h", // module doc
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
  PyEval_InitThreads();
  return module;
err:
  Py_DECREF(module);
  return nullptr;
}

}  // namespace __kaldi__holder_clifwrap
