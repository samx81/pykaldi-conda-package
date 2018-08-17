//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/tree/build-tree-utils.clif

#include <Python.h>
#include "clif/python/ptr_util.h"
#include "clif/python/optional.h"
#include "clif/python/types.h"
#include "base/iostream-clifwrap.h"
#include "tree/cluster-utils-clifwrap.h"
#include "tree/event-map-clifwrap.h"
#include "itf/clusterable-itf-clifwrap.h"
#include "tree/build-tree-clifwrap.h"
#include "tree/build-tree-questions-clifwrap.h"
#include "build-tree-utils-clifwrap.h"
#include "clif/python/stltypes.h"
#include "clif/python/slots.h"

namespace __build__tree__utils_clifwrap {
using namespace clif;

#define _0 py::postconv::PASS
#define _1 UnicodeFromBytes
#define _2 UnicodeFromBytes


// write_build_tree_stats(os:ostream, binary:bool, stats:list<tuple<list<tuple<int, int>>, Clusterable>>)
static PyObject* wrapWriteBuildTreeStats_as_write_build_tree_stats(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[3];
  char* names[] = {
      C("os"),
      C("binary"),
      C("stats"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOO:write_build_tree_stats", names, &a[0], &a[1], &a[2])) return nullptr;
  ::std::basic_ostream<char, ::std::char_traits<char> >* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("write_build_tree_stats", names[0], "::std::basic_ostream<char, ::std::char_traits<char> >", a[0]);
  bool arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("write_build_tree_stats", names[1], "bool", a[1]);
  ::kaldi::BuildTreeStatsType arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("write_build_tree_stats", names[2], "::kaldi::BuildTreeStatsType", a[2]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::WriteBuildTreeStats(*arg1, std::move(arg2), std::move(arg3));
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

// read_build_tree_stats(is:istream, binary:bool, example:Clusterable) -> list<tuple<list<tuple<int, int>>, Clusterable>>
static PyObject* wrapReadBuildTreeStats_as_read_build_tree_stats(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[3];
  char* names[] = {
      C("is"),
      C("binary"),
      C("example"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOO:read_build_tree_stats", names, &a[0], &a[1], &a[2])) return nullptr;
  ::std::basic_istream<char, ::std::char_traits<char> >* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("read_build_tree_stats", names[0], "::std::basic_istream<char, ::std::char_traits<char> >", a[0]);
  bool arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("read_build_tree_stats", names[1], "bool", a[1]);
  ::kaldi::Clusterable* arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("read_build_tree_stats", names[2], "::kaldi::Clusterable", a[2]);
  ::kaldi::BuildTreeStatsType ret0{};
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::ReadBuildTreeStats(*arg1, std::move(arg2), *arg3, &ret0);
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

// possible_values(key:int, stats:list<tuple<list<tuple<int, int>>, Clusterable>>) -> (key_found:bool, ans:list<int>)
static PyObject* wrapPossibleValues_as_possible_values(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2];
  char* names[] = {
      C("key"),
      C("stats"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO:possible_values", names, &a[0], &a[1])) return nullptr;
  int arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("possible_values", names[0], "int", a[0]);
  ::kaldi::BuildTreeStatsType arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("possible_values", names[1], "::kaldi::BuildTreeStatsType", a[1]);
  ::std::vector< ::kaldi::EventValueType> ret1{};
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  bool ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::PossibleValues(std::move(arg1), std::move(arg2), &ret1);
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

// split_stats_by_map(stats_in:list<tuple<list<tuple<int, int>>, Clusterable>>, e:EventMap) -> list<list<tuple<list<tuple<int, int>>, Clusterable>>>
static PyObject* wrapSplitStatsByMap_as_split_stats_by_map(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2];
  char* names[] = {
      C("stats_in"),
      C("e"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO:split_stats_by_map", names, &a[0], &a[1])) return nullptr;
  ::kaldi::BuildTreeStatsType arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("split_stats_by_map", names[0], "::kaldi::BuildTreeStatsType", a[0]);
  ::kaldi::EventMap* arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("split_stats_by_map", names[1], "::kaldi::EventMap", a[1]);
  ::std::vector< ::kaldi::BuildTreeStatsType> ret0{};
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::SplitStatsByMap(std::move(arg1), *arg2, &ret0);
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

// split_stats_by_key(stats_in:list<tuple<list<tuple<int, int>>, Clusterable>>, key:int) -> list<list<tuple<list<tuple<int, int>>, Clusterable>>>
static PyObject* wrapSplitStatsByKey_as_split_stats_by_key(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2];
  char* names[] = {
      C("stats_in"),
      C("key"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO:split_stats_by_key", names, &a[0], &a[1])) return nullptr;
  ::kaldi::BuildTreeStatsType arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("split_stats_by_key", names[0], "::kaldi::BuildTreeStatsType", a[0]);
  int arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("split_stats_by_key", names[1], "int", a[1]);
  ::std::vector< ::kaldi::BuildTreeStatsType> ret0{};
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::SplitStatsByKey(std::move(arg1), std::move(arg2), &ret0);
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

// convert_stats(oldN:int, oldP:int, newN:int, newP:int) -> (success:bool, stats:list<tuple<list<tuple<int, int>>, Clusterable>>)
static PyObject* wrapConvertStats_as_convert_stats(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[4];
  char* names[] = {
      C("oldN"),
      C("oldP"),
      C("newN"),
      C("newP"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOOO:convert_stats", names, &a[0], &a[1], &a[2], &a[3])) return nullptr;
  int arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("convert_stats", names[0], "int", a[0]);
  int arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("convert_stats", names[1], "int", a[1]);
  int arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("convert_stats", names[2], "int", a[2]);
  int arg4;
  if (!Clif_PyObjAs(a[3], &arg4)) return ArgError("convert_stats", names[3], "int", a[3]);
  ::kaldi::BuildTreeStatsType ret1{};
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  bool ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::ConvertStats(std::move(arg1), std::move(arg2), std::move(arg3), std::move(arg4), &ret1);
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

// sum_stats(stats_in:list<tuple<list<tuple<int, int>>, Clusterable>>) -> Clusterable
static PyObject* wrapSumStats_as_sum_stats(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("stats_in"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:sum_stats", names, &a[0])) return nullptr;
  ::kaldi::BuildTreeStatsType arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("sum_stats", names[0], "::kaldi::BuildTreeStatsType", a[0]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  ::kaldi::Clusterable * ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::SumStats(std::move(arg1));
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

// sum_normalizer(stats_in:list<tuple<list<tuple<int, int>>, Clusterable>>) -> float
static PyObject* wrapSumNormalizer_as_sum_normalizer(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("stats_in"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:sum_normalizer", names, &a[0])) return nullptr;
  ::kaldi::BuildTreeStatsType arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("sum_normalizer", names[0], "::kaldi::BuildTreeStatsType", a[0]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  float ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::SumNormalizer(std::move(arg1));
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

// sum_objf(stats_in:list<tuple<list<tuple<int, int>>, Clusterable>>) -> float
static PyObject* wrapSumObjf_as_sum_objf(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("stats_in"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:sum_objf", names, &a[0])) return nullptr;
  ::kaldi::BuildTreeStatsType arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("sum_objf", names[0], "::kaldi::BuildTreeStatsType", a[0]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  float ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::SumObjf(std::move(arg1));
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

// sum_stats_vec(stats_in:list<list<tuple<list<tuple<int, int>>, Clusterable>>>) -> list<Clusterable>
static PyObject* wrapSumStatsVec_as_sum_stats_vec(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("stats_in"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:sum_stats_vec", names, &a[0])) return nullptr;
  ::std::vector< ::kaldi::BuildTreeStatsType> arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("sum_stats_vec", names[0], "::std::vector< ::kaldi::BuildTreeStatsType>", a[0]);
  ::std::vector< ::kaldi::Clusterable *> ret0{};
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::SumStatsVec(std::move(arg1), &ret0);
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

// objf_given_map(stats_in:list<tuple<list<tuple<int, int>>, Clusterable>>, e:EventMap) -> float
static PyObject* wrapObjfGivenMap_as_objf_given_map(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2];
  char* names[] = {
      C("stats_in"),
      C("e"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO:objf_given_map", names, &a[0], &a[1])) return nullptr;
  ::kaldi::BuildTreeStatsType arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("objf_given_map", names[0], "::kaldi::BuildTreeStatsType", a[0]);
  ::kaldi::EventMap* arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("objf_given_map", names[1], "::kaldi::EventMap", a[1]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  float ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::ObjfGivenMap(std::move(arg1), *arg2);
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

// find_all_keys(stats:list<tuple<list<tuple<int, int>>, Clusterable>>, keys_type:AllKeysType) -> list<int>
static PyObject* wrapFindAllKeys_as_find_all_keys(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2];
  char* names[] = {
      C("stats"),
      C("keys_type"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO:find_all_keys", names, &a[0], &a[1])) return nullptr;
  ::kaldi::BuildTreeStatsType arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("find_all_keys", names[0], "::kaldi::BuildTreeStatsType", a[0]);
  ::kaldi::AllKeysType arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("find_all_keys", names[1], "::kaldi::AllKeysType", a[1]);
  ::std::vector< ::kaldi::EventKeyType> ret0{};
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ::kaldi::FindAllKeys(std::move(arg1), std::move(arg2), &ret0);
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

// cluster_event_map_get_mapping(e_in:EventMap, stats:list<tuple<list<tuple<int, int>>, Clusterable>>, thresh:float) -> (num_leaves:int, mapping:list<EventMap>)
static PyObject* wrapClusterEventMapGetMapping_as_cluster_event_map_get_mapping(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[3];
  char* names[] = {
      C("e_in"),
      C("stats"),
      C("thresh"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOO:cluster_event_map_get_mapping", names, &a[0], &a[1], &a[2])) return nullptr;
  ::kaldi::EventMap* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("cluster_event_map_get_mapping", names[0], "::kaldi::EventMap", a[0]);
  ::kaldi::BuildTreeStatsType arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("cluster_event_map_get_mapping", names[1], "::kaldi::BuildTreeStatsType", a[1]);
  float arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("cluster_event_map_get_mapping", names[2], "float", a[2]);
  ::std::vector< ::kaldi::EventMap *> ret1{};
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  int ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::ClusterEventMapGetMapping(*arg1, std::move(arg2), std::move(arg3), &ret1);
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

// map_event_map_leaves(e_in:EventMap, mapping:list<int>) -> EventMap
static PyObject* wrapMapEventMapLeaves_as_map_event_map_leaves(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[2];
  char* names[] = {
      C("e_in"),
      C("mapping"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OO:map_event_map_leaves", names, &a[0], &a[1])) return nullptr;
  ::kaldi::EventMap* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("map_event_map_leaves", names[0], "::kaldi::EventMap", a[0]);
  ::std::vector< ::int32> arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("map_event_map_leaves", names[1], "::std::vector< ::int32>", a[1]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  ::kaldi::EventMap * ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::MapEventMapLeaves(*arg1, std::move(arg2));
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

// split_decision_tree(orig:EventMap, stats:list<tuple<list<tuple<int, int>>, Clusterable>>, qcfg:Questions, thresh:float, max_leaves:int) -> (out_tree:EventMap, num_leaves:int, objf_impr_out:float, smallest_split_change_out:float)
static PyObject* wrapSplitDecisionTree_as_split_decision_tree(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[5];
  char* names[] = {
      C("orig"),
      C("stats"),
      C("qcfg"),
      C("thresh"),
      C("max_leaves"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOOOO:split_decision_tree", names, &a[0], &a[1], &a[2], &a[3], &a[4])) return nullptr;
  ::kaldi::EventMap* arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("split_decision_tree", names[0], "::kaldi::EventMap", a[0]);
  ::kaldi::BuildTreeStatsType arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("split_decision_tree", names[1], "::kaldi::BuildTreeStatsType", a[1]);
  ::kaldi::Questions* arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("split_decision_tree", names[2], "::kaldi::Questions", a[2]);
  float arg4;
  if (!Clif_PyObjAs(a[3], &arg4)) return ArgError("split_decision_tree", names[3], "float", a[3]);
  int arg5;
  if (!Clif_PyObjAs(a[4], &arg5)) return ArgError("split_decision_tree", names[4], "int", a[4]);
  int ret1{};
  float ret2{};
  float ret3{};
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  ::kaldi::EventMap * ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = ::kaldi::SplitDecisionTree(*arg1, std::move(arg2), *arg3, std::move(arg4), std::move(arg5), &ret1, &ret2, &ret3);
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
  PyObject* p, * result_tuple = PyTuple_New(4);
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
  if ((p=Clif_PyObjFrom(std::move(ret3), {})) == nullptr) {
    Py_DECREF(result_tuple);
    return nullptr;
  }
  PyTuple_SET_ITEM(result_tuple, 3, p);
  return result_tuple;
}


// Initialize module

static PyMethodDef Methods[] = {
  {C("write_build_tree_stats"), (PyCFunction)wrapWriteBuildTreeStats_as_write_build_tree_stats, METH_VARARGS | METH_KEYWORDS, C("write_build_tree_stats(os:ostream, binary:bool, stats:list<tuple<list<tuple<int, int>>, Clusterable>>)\n\nWrites BuildTreeStatsType. Works even if the pointers are NULL")},
  {C("read_build_tree_stats"), (PyCFunction)wrapReadBuildTreeStats_as_read_build_tree_stats, METH_VARARGS | METH_KEYWORDS, C("read_build_tree_stats(is:istream, binary:bool, example:Clusterable) -> list<tuple<list<tuple<int, int>>, Clusterable>>\n\nReads BuildTreeStatsType object. The 'example' argument must be of the same type as the stats on disk, and is needed to access to the correct `read` function")},
  {C("possible_values"), (PyCFunction)wrapPossibleValues_as_possible_values, METH_VARARGS | METH_KEYWORDS, C("possible_values(key:int, stats:list<tuple<list<tuple<int, int>>, Clusterable>>) -> (key_found:bool, ans:list<int>)\n\nConvenienve function to work out possible values of the phones from just the stats.\n\nReturns:\n  True if key was always defined inside the stats.")},
  {C("split_stats_by_map"), (PyCFunction)wrapSplitStatsByMap_as_split_stats_by_map, METH_VARARGS | METH_KEYWORDS, C("split_stats_by_map(stats_in:list<tuple<list<tuple<int, int>>, Clusterable>>, e:EventMap) -> list<list<tuple<list<tuple<int, int>>, Clusterable>>>\n\nSplits stats according to the EventMap, indexing them at output by the leaf type.")},
  {C("split_stats_by_key"), (PyCFunction)wrapSplitStatsByKey_as_split_stats_by_key, METH_VARARGS | METH_KEYWORDS, C("split_stats_by_key(stats_in:list<tuple<list<tuple<int, int>>, Clusterable>>, key:int) -> list<list<tuple<list<tuple<int, int>>, Clusterable>>>\n\nSplits stats up according to the value of a particular key, which must be always defined and nonnegative.")},
  {C("convert_stats"), (PyCFunction)wrapConvertStats_as_convert_stats, METH_VARARGS | METH_KEYWORDS, C("convert_stats(oldN:int, oldP:int, newN:int, newP:int) -> (success:bool, stats:list<tuple<list<tuple<int, int>>, Clusterable>>)\n\nConverts stats from a given context-window (N) and central position (P) to a different N and P")},
  {C("sum_stats"), (PyCFunction)wrapSumStats_as_sum_stats, METH_VARARGS | METH_KEYWORDS, C("sum_stats(stats_in:list<tuple<list<tuple<int, int>>, Clusterable>>) -> Clusterable\n\nSums stats")},
  {C("sum_normalizer"), (PyCFunction)wrapSumNormalizer_as_sum_normalizer, METH_VARARGS | METH_KEYWORDS, C("sum_normalizer(stats_in:list<tuple<list<tuple<int, int>>, Clusterable>>) -> float\n\nSums the normalizer over the stats")},
  {C("sum_objf"), (PyCFunction)wrapSumObjf_as_sum_objf, METH_VARARGS | METH_KEYWORDS, C("sum_objf(stats_in:list<tuple<list<tuple<int, int>>, Clusterable>>) -> float\n\nSums the objective function over the stats")},
  {C("sum_stats_vec"), (PyCFunction)wrapSumStatsVec_as_sum_stats_vec, METH_VARARGS | METH_KEYWORDS, C("sum_stats_vec(stats_in:list<list<tuple<list<tuple<int, int>>, Clusterable>>>) -> list<Clusterable>\n\nSum a vector of stats")},
  {C("objf_given_map"), (PyCFunction)wrapObjfGivenMap_as_objf_given_map, METH_VARARGS | METH_KEYWORDS, C("objf_given_map(stats_in:list<tuple<list<tuple<int, int>>, Clusterable>>, e:EventMap) -> float\n\nCluster the stats given the event map return the total objf given those clusters")},
  {C("find_all_keys"), (PyCFunction)wrapFindAllKeys_as_find_all_keys, METH_VARARGS | METH_KEYWORDS, C("find_all_keys(stats:list<tuple<list<tuple<int, int>>, Clusterable>>, keys_type:AllKeysType) -> list<int>\n\nReturns the sorted and unique list of all key identities in the stats.\nIf type == ALL_KEYS_INSIST_IDENTICAL, it will insis that this set of keys is the same for all the stats.\nIf type == ALL_KEYS_INTERSECTION, it will return the smallest common set of keys present in the set of stats\nif type == ALL_KEYS_UNION, it will return the union of all the keys (or undefined if a key is not present)")},
  {C("cluster_event_map_get_mapping"), (PyCFunction)wrapClusterEventMapGetMapping_as_cluster_event_map_get_mapping, METH_VARARGS | METH_KEYWORDS, C("cluster_event_map_get_mapping(e_in:EventMap, stats:list<tuple<list<tuple<int, int>>, Clusterable>>, thresh:float) -> (num_leaves:int, mapping:list<EventMap>)\n\nClusters the leaves of the EventMap, with 'thresh' a delta-likelihood threshold to control how many leaves we combine.\n\nReturns:\n  num_leaves (int): number of leaves combined\n  mapping: Mapping for leaves")},
  {C("map_event_map_leaves"), (PyCFunction)wrapMapEventMapLeaves_as_map_event_map_leaves, METH_VARARGS | METH_KEYWORDS, C("map_event_map_leaves(e_in:EventMap, mapping:list<int>) -> EventMap\n\nRemaps the event-map leaves using this mapping indexed by number of leaf")},
  {C("split_decision_tree"), (PyCFunction)wrapSplitDecisionTree_as_split_decision_tree, METH_VARARGS | METH_KEYWORDS, C("split_decision_tree(orig:EventMap, stats:list<tuple<list<tuple<int, int>>, Clusterable>>, qcfg:Questions, thresh:float, max_leaves:int) -> (out_tree:EventMap, num_leaves:int, objf_impr_out:float, smallest_split_change_out:float)\n  Calls C++ function\n  ::kaldi::EventMap * ::kaldi::SplitDecisionTree(::kaldi::EventMap, ::kaldi::BuildTreeStatsType, ::kaldi::Questions, float, int, int*, float*, float*)")},
  {}
};

bool Ready() {
  return true;
}

static struct PyModuleDef Module = {
  PyModuleDef_HEAD_INIT,
  "_build_tree_utils",  // module name
  "CLIF-generated module for tree/build-tree-utils.h", // module doc
  -1,  // module keeps state in global variables
  Methods
};

PyObject* Init() {
  PyObject* module = PyModule_Create(&Module);
  if (!module) return nullptr;
  if (PyObject* m = PyImport_ImportModule("_iostream")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_cluster_utils")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_event_map")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_clusterable_itf")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_build_tree_questions")) Py_DECREF(m);
  else goto err;
  PyEval_InitThreads();
  return module;
err:
  Py_DECREF(module);
  return nullptr;
}

}  // namespace __build__tree__utils_clifwrap
