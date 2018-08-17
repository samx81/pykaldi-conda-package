//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/base/io-funcs.clif

#include <Python.h>
#include "clif/python/ptr_util.h"
#include "clif/python/optional.h"
#include "clif/python/types.h"
#include "base/iostream-clifwrap.h"
#include "io-funcs-clifwrap.h"
#include "clif/python/stltypes.h"
#include "clif/python/slots.h"

namespace __io__funcs_clifwrap {
using namespace clif;

#define _0 py::postconv::PASS
#define _1 UnicodeFromBytes
#define _2 UnicodeFromBytes


// write_token(os:ostream, binary:bool, token:str)
static PyObject* wrapWriteToken_as_write_token(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[3];
  char* names[] = {
      C("os"),
      C("binary"),
      C("token"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOO:write_token", names, &a[0], &a[1], &a[2])) return nullptr;
  ::std::basic_ostream<char, ::std::char_traits<char> >* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("write_token", names[0], "::std::basic_ostream<char, ::std::char_traits<char> >", a[0]);
  bool arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("write_token", names[1], "bool", a[1]);
  ::std::string arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("write_token", names[2], "::std::string", a[2]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::WriteToken(*arg1, std::move(arg2), std::move(arg3));
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

// peek(is:istream, binary:bool) -> int
static PyObject* wrapPeek_as_peek(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2];
  char* names[] = {
      C("is"),
      C("binary"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO:peek", names, &a[0], &a[1])) return nullptr;
  ::std::basic_istream<char, ::std::char_traits<char> >* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("peek", names[0], "::std::basic_istream<char, ::std::char_traits<char> >", a[0]);
  bool arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("peek", names[1], "bool", a[1]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  int ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::Peek(*arg1, std::move(arg2));
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

// read_token(is:istream, binary:bool) -> str
static PyObject* wrapReadToken_as_read_token(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2];
  char* names[] = {
      C("is"),
      C("binary"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO:read_token", names, &a[0], &a[1])) return nullptr;
  ::std::basic_istream<char, ::std::char_traits<char> >* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("read_token", names[0], "::std::basic_istream<char, ::std::char_traits<char> >", a[0]);
  bool arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("read_token", names[1], "bool", a[1]);
  ::std::string ret0{};
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::ReadToken(*arg1, std::move(arg2), &ret0);
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

// peek_token(is:istream, binary:bool) -> int
static PyObject* wrapPeekToken_as_peek_token(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2];
  char* names[] = {
      C("is"),
      C("binary"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO:peek_token", names, &a[0], &a[1])) return nullptr;
  ::std::basic_istream<char, ::std::char_traits<char> >* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("peek_token", names[0], "::std::basic_istream<char, ::std::char_traits<char> >", a[0]);
  bool arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("peek_token", names[1], "bool", a[1]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  int ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::PeekToken(*arg1, std::move(arg2));
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

// expect_token(is:istream, binary:bool, token:str)
static PyObject* wrapExpectToken_as_expect_token(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[3];
  char* names[] = {
      C("is"),
      C("binary"),
      C("token"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOO:expect_token", names, &a[0], &a[1], &a[2])) return nullptr;
  ::std::basic_istream<char, ::std::char_traits<char> >* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("expect_token", names[0], "::std::basic_istream<char, ::std::char_traits<char> >", a[0]);
  bool arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("expect_token", names[1], "bool", a[1]);
  ::std::string arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("expect_token", names[2], "::std::string", a[2]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::ExpectToken(*arg1, std::move(arg2), std::move(arg3));
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
  {C("write_token"), (PyCFunction)wrapWriteToken_as_write_token, METH_VARARGS | METH_KEYWORDS, C("write_token(os:ostream, binary:bool, token:str)\n\nWrites non-empty string of non-space characters.")},
  {C("peek"), (PyCFunction)wrapPeek_as_peek, METH_VARARGS | METH_KEYWORDS, C("peek(is:istream, binary:bool) -> int\n\nConsumes whitespace (if binary == True) and returns the peek value.")},
  {C("read_token"), (PyCFunction)wrapReadToken_as_read_token, METH_VARARGS | METH_KEYWORDS, C("read_token(is:istream, binary:bool) -> str\n\nReads and returns the next token (throws exception on failure)")},
  {C("peek_token"), (PyCFunction)wrapPeekToken_as_peek_token, METH_VARARGS | METH_KEYWORDS, C("peek_token(is:istream, binary:bool) -> int\n\nReturns the first character of the next token or -1 if EOF.")},
  {C("expect_token"), (PyCFunction)wrapExpectToken_as_expect_token, METH_VARARGS | METH_KEYWORDS, C("expect_token(is:istream, binary:bool, token:str)\n\nTries to read the given token and throws exception on failure.")},
  {}
};

bool Ready() {
  return true;
}

static struct PyModuleDef Module = {
  PyModuleDef_HEAD_INIT,
  "_io_funcs",  // module name
  "CLIF-generated module for base/io-funcs.h", // module doc
  -1,  // module keeps state in global variables
  Methods
};

PyObject* Init() {
  PyObject* module = PyModule_Create(&Module);
  if (!module) return nullptr;
  if (PyObject* m = PyImport_ImportModule("_iostream")) Py_DECREF(m);
  else goto err;
  PyEval_InitThreads();
  return module;
err:
  Py_DECREF(module);
  return nullptr;
}

}  // namespace __io__funcs_clifwrap