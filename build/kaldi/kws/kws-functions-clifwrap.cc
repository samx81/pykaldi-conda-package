//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/kws/kws-functions.clif

#include <Python.h>
#include "clif/python/ptr_util.h"
#include "clif/python/optional.h"
#include "clif/python/types.h"
#include "fstext/lattice-weight-clifwrap.h"
#include "fstext/vector-fst-clifwrap.h"
#include "fstext/encode-clifwrap.h"
#include "kws-functions-clifwrap.h"
#include "clif/python/stltypes.h"
#include "clif/python/slots.h"

namespace __kws__functions_clifwrap {
using namespace clif;
using namespace fst;

#define _0 py::postconv::PASS
#define _1 UnicodeFromBytes
#define _2 UnicodeFromBytes


// _lattice_to_kws_index(clat:CompactLatticeVectorFst, utterance_id:int, max_silence_frames:int, max_states:int, allow_partial:bool) -> (success:bool, index_transducer:KwsIndexVectorFst)
static PyObject* wrapLatticeToKwsIndex_as__lattice_to_kws_index(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[5];
  char* names[] = {
      C("clat"),
      C("utterance_id"),
      C("max_silence_frames"),
      C("max_states"),
      C("allow_partial"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOOOO:_lattice_to_kws_index", names, &a[0], &a[1], &a[2], &a[3], &a[4])) return nullptr;
  ::fst::VectorFst< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> >, ::fst::VectorState< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> >, ::std::allocator< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> > > > >* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("_lattice_to_kws_index", names[0], "::fst::VectorFst< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> >, ::fst::VectorState< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> >, ::std::allocator< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> > > > >", a[0]);
  int arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("_lattice_to_kws_index", names[1], "int", a[1]);
  int arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("_lattice_to_kws_index", names[2], "int", a[2]);
  int arg4;
  if (!Clif_PyObjAs(a[3], &arg4)) return ArgError("_lattice_to_kws_index", names[3], "int", a[3]);
  bool arg5;
  if (!Clif_PyObjAs(a[4], &arg5)) return ArgError("_lattice_to_kws_index", names[4], "bool", a[4]);
  ::fst::VectorFst< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::fst::VectorState< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::std::allocator< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > > > > ret1{};
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  bool ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::LatticeToKwsIndex(*arg1, std::move(arg2), std::move(arg3), std::move(arg4), std::move(arg5), &ret1);
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
  // Convert return values to Python.
  PyObject* p, * result_tuple = PyTuple_New(2);
  if (result_tuple == nullptr) return nullptr;
  if ((p=Clif_PyObjFrom(std::move(ret0), {})) == nullptr) {
    Py_DECREF(result_tuple);
    return nullptr;
  }
  PyTuple_SET_ITEM(result_tuple, 0, p);
  if ((p=Clif_PyObjFrom(std::move(ret1), {})) == nullptr) {
    Py_DECREF(result_tuple);
    return nullptr;
  }
  PyTuple_SET_ITEM(result_tuple, 1, p);
  PyObject* pyproc = ImportFQName("kaldi.util._value_error_on_false");
  if (pyproc == nullptr) {
    Py_DECREF(result_tuple);
    return nullptr;
  }
  p = PyObject_CallObject(pyproc, result_tuple);
  Py_DECREF(pyproc);
  Py_CLEAR(result_tuple);
  result_tuple = p;
  return result_tuple;
}

// _lattice_to_kws_index_destructive(clat:CompactLatticeVectorFst, utterance_id:int, max_silence_frames:int, max_states:int, allow_partial:bool) -> (success:bool, index_transducer:KwsIndexVectorFst)
static PyObject* wrapLatticeToKwsIndexDestructive_as__lattice_to_kws_index_destructive(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[5];
  char* names[] = {
      C("clat"),
      C("utterance_id"),
      C("max_silence_frames"),
      C("max_states"),
      C("allow_partial"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOOOO:_lattice_to_kws_index_destructive", names, &a[0], &a[1], &a[2], &a[3], &a[4])) return nullptr;
  ::fst::VectorFst< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> >, ::fst::VectorState< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> >, ::std::allocator< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> > > > > * arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("_lattice_to_kws_index_destructive", names[0], "::fst::VectorFst< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> >, ::fst::VectorState< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> >, ::std::allocator< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> > > > > *", a[0]);
  int arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("_lattice_to_kws_index_destructive", names[1], "int", a[1]);
  int arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("_lattice_to_kws_index_destructive", names[2], "int", a[2]);
  int arg4;
  if (!Clif_PyObjAs(a[3], &arg4)) return ArgError("_lattice_to_kws_index_destructive", names[3], "int", a[3]);
  bool arg5;
  if (!Clif_PyObjAs(a[4], &arg5)) return ArgError("_lattice_to_kws_index_destructive", names[4], "bool", a[4]);
  ::fst::VectorFst< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::fst::VectorState< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::std::allocator< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > > > > ret1{};
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  bool ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::LatticeToKwsIndexDestructive(arg1, std::move(arg2), std::move(arg3), std::move(arg4), std::move(arg5), &ret1);
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
  // Convert return values to Python.
  PyObject* p, * result_tuple = PyTuple_New(2);
  if (result_tuple == nullptr) return nullptr;
  if ((p=Clif_PyObjFrom(std::move(ret0), {})) == nullptr) {
    Py_DECREF(result_tuple);
    return nullptr;
  }
  PyTuple_SET_ITEM(result_tuple, 0, p);
  if ((p=Clif_PyObjFrom(std::move(ret1), {})) == nullptr) {
    Py_DECREF(result_tuple);
    return nullptr;
  }
  PyTuple_SET_ITEM(result_tuple, 1, p);
  PyObject* pyproc = ImportFQName("kaldi.util._value_error_on_false");
  if (pyproc == nullptr) {
    Py_DECREF(result_tuple);
    return nullptr;
  }
  p = PyObject_CallObject(pyproc, result_tuple);
  Py_DECREF(pyproc);
  Py_CLEAR(result_tuple);
  result_tuple = p;
  return result_tuple;
}

// optimize_kws_index(index:KwsIndexVectorFst, max_states:int=default)
static PyObject* wrapOptimizeKwsIndex_as_optimize_kws_index(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2]{};
  char* names[] = {
      C("index"),
      C("max_states"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O|O:optimize_kws_index", names, &a[0], &a[1])) return nullptr;
  int nargs;  // Find how many args actually passed in.
  for (nargs = 2; nargs > 1; --nargs) {
    if (a[nargs-1] != nullptr) break;
  }
  ::fst::VectorFst< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::fst::VectorState< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::std::allocator< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > > > > * arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("optimize_kws_index", names[0], "::fst::VectorFst< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::fst::VectorState< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::std::allocator< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > > > > *", a[0]);
  int arg2;
  if (nargs > 1) {
    if (!a[1]) arg2 = (int)-1;
    else if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("optimize_kws_index", names[1], "int", a[1]);
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
  case 1:
    ::kaldi::OptimizeKwsIndex(arg1); break;
  case 2:
    ::kaldi::OptimizeKwsIndex(arg1, std::move(arg2)); break;
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

// encode_kws_disambiguation_symbols(index:KwsIndexVectorFst, encode_table:KwsIndexEncodeTable)
static PyObject* wrapEncodeKwsDisambiguationSymbols_as_encode_kws_disambiguation_symbols(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2];
  char* names[] = {
      C("index"),
      C("encode_table"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO:encode_kws_disambiguation_symbols", names, &a[0], &a[1])) return nullptr;
  ::fst::VectorFst< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::fst::VectorState< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::std::allocator< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > > > > * arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("encode_kws_disambiguation_symbols", names[0], "::fst::VectorFst< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::fst::VectorState< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::std::allocator< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > > > > *", a[0]);
  ::fst::internal::EncodeTable< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > > * arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("encode_kws_disambiguation_symbols", names[1], "::fst::internal::EncodeTable< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > > *", a[1]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::EncodeKwsDisambiguationSymbols(arg1, arg2);
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

// _search_kws_index(index:KwsIndexVectorFst, keyword:StdVectorFst, encode_table:KwsIndexEncodeTable, n_best:int) -> (success:bool, results:list<tuple<int, int, int, float>>)
static PyObject* wrapSearchKwsIndex_as__search_kws_index(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[4];
  char* names[] = {
      C("index"),
      C("keyword"),
      C("encode_table"),
      C("n_best"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOOO:_search_kws_index", names, &a[0], &a[1], &a[2], &a[3])) return nullptr;
  ::fst::VectorFst< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::fst::VectorState< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::std::allocator< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > > > >* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("_search_kws_index", names[0], "::fst::VectorFst< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::fst::VectorState< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::std::allocator< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > > > >", a[0]);
  ::fst::VectorFst< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> >, ::fst::VectorState< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> >, ::std::allocator< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> > > > >* arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("_search_kws_index", names[1], "::fst::VectorFst< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> >, ::fst::VectorState< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> >, ::std::allocator< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> > > > >", a[1]);
  ::fst::internal::EncodeTable< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > >* arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("_search_kws_index", names[2], "::fst::internal::EncodeTable< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > >", a[2]);
  int arg4;
  if (!Clif_PyObjAs(a[3], &arg4)) return ArgError("_search_kws_index", names[3], "int", a[3]);
  ::std::vector< ::std::tuple< ::int32, ::int32, ::int32, double> > ret1{};
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  bool ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::SearchKwsIndex(*arg1, *arg2, *arg3, std::move(arg4), &ret1);
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
  // Convert return values to Python.
  PyObject* p, * result_tuple = PyTuple_New(2);
  if (result_tuple == nullptr) return nullptr;
  if ((p=Clif_PyObjFrom(std::move(ret0), {})) == nullptr) {
    Py_DECREF(result_tuple);
    return nullptr;
  }
  PyTuple_SET_ITEM(result_tuple, 0, p);
  if ((p=Clif_PyObjFrom(std::move(ret1), {})) == nullptr) {
    Py_DECREF(result_tuple);
    return nullptr;
  }
  PyTuple_SET_ITEM(result_tuple, 1, p);
  PyObject* pyproc = ImportFQName("kaldi.util._value_error_on_false");
  if (pyproc == nullptr) {
    Py_DECREF(result_tuple);
    return nullptr;
  }
  p = PyObject_CallObject(pyproc, result_tuple);
  Py_DECREF(pyproc);
  Py_CLEAR(result_tuple);
  result_tuple = p;
  return result_tuple;
}

// _search_kws_index_detailed(index:KwsIndexVectorFst, keyword:StdVectorFst, encode_table:KwsIndexEncodeTable, n_best:int) -> (success:bool, results:list<tuple<int, int, int, float>>, matched_seq:KwsIndexVectorFst)
static PyObject* wrapSearchKwsIndex_as__search_kws_index_detailed(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[4];
  char* names[] = {
      C("index"),
      C("keyword"),
      C("encode_table"),
      C("n_best"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOOO:_search_kws_index_detailed", names, &a[0], &a[1], &a[2], &a[3])) return nullptr;
  ::fst::VectorFst< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::fst::VectorState< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::std::allocator< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > > > >* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("_search_kws_index_detailed", names[0], "::fst::VectorFst< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::fst::VectorState< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::std::allocator< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > > > >", a[0]);
  ::fst::VectorFst< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> >, ::fst::VectorState< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> >, ::std::allocator< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> > > > >* arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("_search_kws_index_detailed", names[1], "::fst::VectorFst< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> >, ::fst::VectorState< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> >, ::std::allocator< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> > > > >", a[1]);
  ::fst::internal::EncodeTable< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > >* arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("_search_kws_index_detailed", names[2], "::fst::internal::EncodeTable< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > >", a[2]);
  int arg4;
  if (!Clif_PyObjAs(a[3], &arg4)) return ArgError("_search_kws_index_detailed", names[3], "int", a[3]);
  ::std::vector< ::std::tuple< ::int32, ::int32, ::int32, double> > ret1{};
  ::fst::VectorFst< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::fst::VectorState< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::std::allocator< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > > > > ret2{};
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  bool ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::SearchKwsIndex(*arg1, *arg2, *arg3, std::move(arg4), &ret1, &ret2);
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
  // Convert return values to Python.
  PyObject* p, * result_tuple = PyTuple_New(3);
  if (result_tuple == nullptr) return nullptr;
  if ((p=Clif_PyObjFrom(std::move(ret0), {})) == nullptr) {
    Py_DECREF(result_tuple);
    return nullptr;
  }
  PyTuple_SET_ITEM(result_tuple, 0, p);
  if ((p=Clif_PyObjFrom(std::move(ret1), {})) == nullptr) {
    Py_DECREF(result_tuple);
    return nullptr;
  }
  PyTuple_SET_ITEM(result_tuple, 1, p);
  if ((p=Clif_PyObjFrom(std::move(ret2), {})) == nullptr) {
    Py_DECREF(result_tuple);
    return nullptr;
  }
  PyTuple_SET_ITEM(result_tuple, 2, p);
  PyObject* pyproc = ImportFQName("kaldi.util._value_error_on_false");
  if (pyproc == nullptr) {
    Py_DECREF(result_tuple);
    return nullptr;
  }
  p = PyObject_CallObject(pyproc, result_tuple);
  Py_DECREF(pyproc);
  Py_CLEAR(result_tuple);
  result_tuple = p;
  return result_tuple;
}

// _compute_detailed_statistics(keyword:KwsIndexVectorFst, encode_table:KwsIndexEncodeTable) -> (stats:list<tuple<int, int, int, float>>, ilabels:list<list<int>>)
static PyObject* wrapComputeDetailedStatistics_as__compute_detailed_statistics(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2];
  char* names[] = {
      C("keyword"),
      C("encode_table"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO:_compute_detailed_statistics", names, &a[0], &a[1])) return nullptr;
  ::fst::VectorFst< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::fst::VectorState< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::std::allocator< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > > > >* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("_compute_detailed_statistics", names[0], "::fst::VectorFst< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::fst::VectorState< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::std::allocator< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > > > >", a[0]);
  ::fst::internal::EncodeTable< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > >* arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("_compute_detailed_statistics", names[1], "::fst::internal::EncodeTable< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > >", a[1]);
  ::std::vector< ::std::tuple< ::int32, ::int32, ::int32, double> > ret0{};
  ::std::vector< ::std::vector< ::fst::ArcTpl<LexicographicWeight<TropicalWeightTpl<float>, LexicographicWeight<TropicalWeightTpl<float>, TropicalWeightTpl<float> > > >::Label> > ret1{};
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::ComputeDetailedStatistics(*arg1, *arg2, &ret0, &ret1);
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
  // Convert return values to Python.
  PyObject* p, * result_tuple = PyTuple_New(2);
  if (result_tuple == nullptr) return nullptr;
  if ((p=Clif_PyObjFrom(std::move(ret0), {})) == nullptr) {
    Py_DECREF(result_tuple);
    return nullptr;
  }
  PyTuple_SET_ITEM(result_tuple, 0, p);
  if ((p=Clif_PyObjFrom(std::move(ret1), {})) == nullptr) {
    Py_DECREF(result_tuple);
    return nullptr;
  }
  PyTuple_SET_ITEM(result_tuple, 1, p);
  return result_tuple;
}


// Initialize module

static PyMethodDef Methods[] = {
  {C("_lattice_to_kws_index"), (PyCFunction)wrapLatticeToKwsIndex_as__lattice_to_kws_index, METH_VARARGS | METH_KEYWORDS, C("_lattice_to_kws_index(clat:CompactLatticeVectorFst, utterance_id:int, max_silence_frames:int, max_states:int, allow_partial:bool) -> (success:bool, index_transducer:KwsIndexVectorFst)\n  Calls C++ function\n  bool ::kaldi::LatticeToKwsIndex(::fst::VectorFst< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> >, ::fst::VectorState< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> >, ::std::allocator< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> > > > >, int, int, int, bool, ::fst::VectorFst< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::fst::VectorState< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::std::allocator< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > > > >*)")},
  {C("_lattice_to_kws_index_destructive"), (PyCFunction)wrapLatticeToKwsIndexDestructive_as__lattice_to_kws_index_destructive, METH_VARARGS | METH_KEYWORDS, C("_lattice_to_kws_index_destructive(clat:CompactLatticeVectorFst, utterance_id:int, max_silence_frames:int, max_states:int, allow_partial:bool) -> (success:bool, index_transducer:KwsIndexVectorFst)\n  Calls C++ function\n  bool ::kaldi::LatticeToKwsIndexDestructive(::fst::VectorFst< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> >, ::fst::VectorState< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> >, ::std::allocator< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> > > > > *, int, int, int, bool, ::fst::VectorFst< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::fst::VectorState< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::std::allocator< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > > > >*)")},
  {C("optimize_kws_index"), (PyCFunction)wrapOptimizeKwsIndex_as_optimize_kws_index, METH_VARARGS | METH_KEYWORDS, C("optimize_kws_index(index:KwsIndexVectorFst, max_states:int=default)\n\nOptimizes KWS index.\n\nOptimizes KWS index by doing encoded epsilon removal, determinization and\nminimization.\n\nArgs:\n  index (KwsIndexVectorFst): The index FST.\n  max_states (int): The maximum number of states allowed in the output.\n      If <= 0, any number of states in the output is OK. Default: -1.")},
  {C("encode_kws_disambiguation_symbols"), (PyCFunction)wrapEncodeKwsDisambiguationSymbols_as_encode_kws_disambiguation_symbols, METH_VARARGS | METH_KEYWORDS, C("encode_kws_disambiguation_symbols(index:KwsIndexVectorFst, encode_table:KwsIndexEncodeTable)\n\nEncodes (disambiguation-symbol, utterance-id) pairs.\n\nEncodes labels on final arcs. Replaces output labels of final arcs\n(utterance ids) with the encoded labels. Replaces input labels of final\narcs (disambiguation symbols) with epsilons.\n\nArgs:\n  index (KwsIndexVectorFst): The index FST.\n  encode_table (KwsIndexEncodeTable): The table to use for encoding\n      (disambiguation-symbol, utterance-id) pairs into output labels.\n      This table is used by :meth:`search_kws_index`.")},
  {C("_search_kws_index"), (PyCFunction)wrapSearchKwsIndex_as__search_kws_index, METH_VARARGS | METH_KEYWORDS, C("_search_kws_index(index:KwsIndexVectorFst, keyword:StdVectorFst, encode_table:KwsIndexEncodeTable, n_best:int) -> (success:bool, results:list<tuple<int, int, int, float>>)\n  Calls C++ function\n  bool ::kaldi::SearchKwsIndex(::fst::VectorFst< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::fst::VectorState< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::std::allocator< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > > > >, ::fst::VectorFst< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> >, ::fst::VectorState< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> >, ::std::allocator< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> > > > >, ::fst::internal::EncodeTable< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > >, int, ::std::vector< ::std::tuple< ::int32, ::int32, ::int32, double> >*)")},
  {C("_search_kws_index_detailed"), (PyCFunction)wrapSearchKwsIndex_as__search_kws_index_detailed, METH_VARARGS | METH_KEYWORDS, C("_search_kws_index_detailed(index:KwsIndexVectorFst, keyword:StdVectorFst, encode_table:KwsIndexEncodeTable, n_best:int) -> (success:bool, results:list<tuple<int, int, int, float>>, matched_seq:KwsIndexVectorFst)\n  Calls C++ function\n  bool ::kaldi::SearchKwsIndex(::fst::VectorFst< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::fst::VectorState< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::std::allocator< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > > > >, ::fst::VectorFst< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> >, ::fst::VectorState< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> >, ::std::allocator< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> > > > >, ::fst::internal::EncodeTable< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > >, int, ::std::vector< ::std::tuple< ::int32, ::int32, ::int32, double> >*, ::fst::VectorFst< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::fst::VectorState< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::std::allocator< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > > > >*)")},
  {C("_compute_detailed_statistics"), (PyCFunction)wrapComputeDetailedStatistics_as__compute_detailed_statistics, METH_VARARGS | METH_KEYWORDS, C("_compute_detailed_statistics(keyword:KwsIndexVectorFst, encode_table:KwsIndexEncodeTable) -> (stats:list<tuple<int, int, int, float>>, ilabels:list<list<int>>)\n  Calls C++ function\n  void ::kaldi::ComputeDetailedStatistics(::fst::VectorFst< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::fst::VectorState< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > >, ::std::allocator< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > > > >, ::fst::internal::EncodeTable< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > >, ::std::vector< ::std::tuple< ::int32, ::int32, ::int32, double> >*, ::std::vector< ::std::vector< ::fst::ArcTpl<LexicographicWeight<TropicalWeightTpl<float>, LexicographicWeight<TropicalWeightTpl<float>, TropicalWeightTpl<float> > > >::Label> >*)")},
  {}
};

bool Ready() {
  return true;
}

static struct PyModuleDef Module = {
  PyModuleDef_HEAD_INIT,
  "_kws_functions",  // module name
  "CLIF-generated module for kws/kws-functions.h", // module doc
  -1,  // module keeps state in global variables
  Methods
};

PyObject* Init() {
  PyObject* module = PyModule_Create(&Module);
  if (!module) return nullptr;
  if (PyObject* m = PyImport_ImportModule("_lattice_weight")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_vector_fst")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_encode")) Py_DECREF(m);
  else goto err;
  PyEval_InitThreads();
  return module;
err:
  Py_DECREF(module);
  return nullptr;
}

}  // namespace __kws__functions_clifwrap