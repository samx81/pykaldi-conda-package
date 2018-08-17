//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/gmm/full-gmm-ext.clif

#include <Python.h>
#include "clif/python/ptr_util.h"
#include "clif/python/optional.h"
#include "clif/python/types.h"
#include "gmm/full-gmm-clifwrap.h"
#include "gmm/diag-gmm-clifwrap.h"
#include "full-gmm-ext-clifwrap.h"
#include "clif/python/stltypes.h"
#include "clif/python/slots.h"

namespace __full__gmm__ext_clifwrap {
using namespace clif;

#define _0 py::postconv::PASS
#define _1 UnicodeFromBytes
#define _2 UnicodeFromBytes


// copy_from_diag(self:FullGmm, diaggmm:DiagGmm)
static PyObject* wrapCopyFromDiagGmm_as_copy_from_diag(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2];
  char* names[] = {
      C("self"),
      C("diaggmm"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO:copy_from_diag", names, &a[0], &a[1])) return nullptr;
  ::kaldi::FullGmm * arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("copy_from_diag", names[0], "::kaldi::FullGmm *", a[0]);
  ::kaldi::DiagGmm* arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("copy_from_diag", names[1], "::kaldi::DiagGmm", a[1]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::CopyFromDiagGmm(arg1, *arg2);
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
  {C("copy_from_diag"), (PyCFunction)wrapCopyFromDiagGmm_as_copy_from_diag, METH_VARARGS | METH_KEYWORDS, C("copy_from_diag(self:FullGmm, diaggmm:DiagGmm)\n  Calls C++ function\n  void ::kaldi::CopyFromDiagGmm(::kaldi::FullGmm *, ::kaldi::DiagGmm)")},
  {}
};

bool Ready() {
  return true;
}

static struct PyModuleDef Module = {
  PyModuleDef_HEAD_INIT,
  "_full_gmm_ext",  // module name
  "CLIF-generated module for gmm/full-gmm-ext.h", // module doc
  -1,  // module keeps state in global variables
  Methods
};

PyObject* Init() {
  PyObject* module = PyModule_Create(&Module);
  if (!module) return nullptr;
  if (PyObject* m = PyImport_ImportModule("_full_gmm")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_diag_gmm")) Py_DECREF(m);
  else goto err;
  PyEval_InitThreads();
  return module;
err:
  Py_DECREF(module);
  return nullptr;
}

}  // namespace __full__gmm__ext_clifwrap
