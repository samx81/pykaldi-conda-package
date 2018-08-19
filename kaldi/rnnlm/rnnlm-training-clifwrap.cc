//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/rnnlm/rnnlm-training.clif

#include <Python.h>
#include "clif/python/ptr_util.h"
#include "clif/python/optional.h"
#include "clif/python/types.h"
#include "itf/options-itf-clifwrap.h"
#include "cudamatrix/cu-matrix-clifwrap.h"
#include "cudamatrix/cu-sparse-matrix-clifwrap.h"
#include "nnet3/nnet-nnet-clifwrap.h"
#include "rnnlm/rnnlm-core-training-clifwrap.h"
#include "rnnlm/rnnlm-embedding-training-clifwrap.h"
#include "rnnlm/rnnlm-example-clifwrap.h"
#include "rnnlm/rnnlm-example-utils-clifwrap.h"
#include "rnnlm-training-clifwrap.h"
#include "clif/python/stltypes.h"
#include "clif/python/slots.h"

namespace __rnnlm__training_clifwrap {
using namespace clif;

#define _0 py::postconv::PASS
#define _1 UnicodeFromBytes
#define _2 UnicodeFromBytes


namespace pyRnnlmTrainer {

struct wrapper {
  PyObject_HEAD
  ::clif::Instance<::kaldi::rnnlm::RnnlmTrainer> cpp;
};
static ::kaldi::rnnlm::RnnlmTrainer* ThisPtr(PyObject*);

// __init__(train_embedding:bool, core_config:RnnlmCoreTrainerOptions, embedding_config:RnnlmEmbeddingTrainerOptions, objective_config:RnnlmObjectiveOptions, word_feature_mat:CuSparseMatrix, embedding_mat:CuMatrix, rnnlm:Nnet)
static PyObject* wrapRnnlmTrainer_as___init__(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[7];
  char* names[] = {
      C("train_embedding"),
      C("core_config"),
      C("embedding_config"),
      C("objective_config"),
      C("word_feature_mat"),
      C("embedding_mat"),
      C("rnnlm"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOO:__init__", names, &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6])) return nullptr;
  bool arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("__init__", names[0], "bool", a[0]);
  ::kaldi::rnnlm::RnnlmCoreTrainerOptions* arg2;
  if (!Clif_PyObjAs(a[1], &arg2)) return ArgError("__init__", names[1], "::kaldi::rnnlm::RnnlmCoreTrainerOptions", a[1]);
  ::kaldi::rnnlm::RnnlmEmbeddingTrainerOptions* arg3;
  if (!Clif_PyObjAs(a[2], &arg3)) return ArgError("__init__", names[2], "::kaldi::rnnlm::RnnlmEmbeddingTrainerOptions", a[2]);
  ::kaldi::rnnlm::RnnlmObjectiveOptions* arg4;
  if (!Clif_PyObjAs(a[3], &arg4)) return ArgError("__init__", names[3], "::kaldi::rnnlm::RnnlmObjectiveOptions", a[3]);
  ::kaldi::CuSparseMatrix<float> * arg5;
  if (!Clif_PyObjAs(a[4], &arg5)) return ArgError("__init__", names[4], "::kaldi::CuSparseMatrix<float> *", a[4]);
  ::kaldi::CuMatrix<float> * arg6;
  if (!Clif_PyObjAs(a[5], &arg6)) return ArgError("__init__", names[5], "::kaldi::CuMatrix<float> *", a[5]);
  ::kaldi::nnet3::Nnet * arg7;
  if (!Clif_PyObjAs(a[6], &arg7)) return ArgError("__init__", names[6], "::kaldi::nnet3::Nnet *", a[6]);
  // Call actual C++ method.
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    reinterpret_cast<wrapper*>(self)->cpp = ::clif::MakeShared<::kaldi::rnnlm::RnnlmTrainer>(std::move(arg1), *arg2, *arg3, *arg4, arg5, arg6, arg7);
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

// train(minibatch:RnnlmExample)
static PyObject* wrapTrain_as_train(PyObject* self, PyObject* args, PyObject* kw) {
  PyObject* a[1];
  char* names[] = {
      C("minibatch"),
      nullptr
  };
  if (!PyArg_ParseTupleAndKeywords(args, kw, "O:train", names, &a[0])) return nullptr;
  ::kaldi::rnnlm::RnnlmExample * arg1;
  if (!Clif_PyObjAs(a[0], &arg1)) return ArgError("train", names[0], "::kaldi::rnnlm::RnnlmExample *", a[0]);
  // Call actual C++ method.
  ::kaldi::rnnlm::RnnlmTrainer* c = ThisPtr(self);
  if (!c) return nullptr;
  Py_INCREF(args);
  Py_XINCREF(kw);
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    c->Train(arg1);
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

// num_minibatches_processed() -> int
static PyObject* wrapNumMinibatchesProcessed_as_num_minibatches_processed(PyObject* self) {
  // Call actual C++ method.
  ::kaldi::rnnlm::RnnlmTrainer* c = ThisPtr(self);
  if (!c) return nullptr;
  PyThreadState* _save;
  Py_UNBLOCK_THREADS
  int ret0;
  PyObject* err_type = nullptr;
  string err_msg{"C++ exception"};
  try {
    ret0 = c->NumMinibatchesProcessed();
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
  {C("__init__"), (PyCFunction)wrapRnnlmTrainer_as___init__, METH_VARARGS | METH_KEYWORDS, C("__init__(train_embedding:bool, core_config:RnnlmCoreTrainerOptions, embedding_config:RnnlmEmbeddingTrainerOptions, objective_config:RnnlmObjectiveOptions, word_feature_mat:CuSparseMatrix, embedding_mat:CuMatrix, rnnlm:Nnet)\n  Calls C++ function\n  void ::kaldi::rnnlm::RnnlmTrainer::RnnlmTrainer(bool, ::kaldi::rnnlm::RnnlmCoreTrainerOptions, ::kaldi::rnnlm::RnnlmEmbeddingTrainerOptions, ::kaldi::rnnlm::RnnlmObjectiveOptions, ::kaldi::CuSparseMatrix<float> *, ::kaldi::CuMatrix<float> *, ::kaldi::nnet3::Nnet *)")},
  {C("train"), (PyCFunction)wrapTrain_as_train, METH_VARARGS | METH_KEYWORDS, C("train(minibatch:RnnlmExample)\n\nTrain on one example.\n\nThe example is acquired destructively, via swapping contents.\n\nNote:\n  This function doesn't actually train on this example; what it does is\n  to train on the previous example, and provide this example to the\n  background thread that computes the derived parameters of the example.")},
  {C("num_minibatches_processed"), (PyCFunction)wrapNumMinibatchesProcessed_as_num_minibatches_processed, METH_NOARGS, C("num_minibatches_processed() -> int\n\nReturns the number of minibatches processed so far.")},
  {}
};

// RnnlmTrainer __init__
static int _ctor(PyObject* self, PyObject* args, PyObject* kw);

// RnnlmTrainer __new__
static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems);

// RnnlmTrainer __del__
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
  "_rnnlm_training.RnnlmTrainer",      // tp_name
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
  "RNNLM trainer.\n\nThe class RnnlmTrainer is for training an RNNLM (one individual training\njob, not the top-level logic about learning rate schedules, parameter\naveraging, and the like).\n\nArgs:\ntrain_embedding (bool) Whether to train the embedding matrix.\ncore_config (RnnlmCoreTrainerOptions): Options for training the core\n  RNNLM.\nembedding_config (RnnlmEmbeddingTrainerOptions): Options for training the\n  embedding matrix (only relevant if train_embedding is True).\nobjective_config (RnnlmObjectiveOptions): Options relating to the\n  objective function used for training.\nword_feature_mat (CuSparseMatrix): Either None, or a sparse word-feature\n  matrix of dimension vocab-size by feature-dim, where vocab-size is the\n  highest-numbered word plus one.\nembedding_mat (CuMatrix): The embedding matrix; this is trained if\n  `train_embedding` is True. If `word_feature_mat` is None, this is the\n  word-embedding matrix of dimension vocab-size by embedding-dim;\n  otherwise it is the feature-embedding matrix of dimension feature-dim\n  by by embedding-dim, and we have to multiply it by `word_feature_mat`\n  to get the word embedding matrix.\nrnnlm (Nnet): The RNNLM to be trained.", // tp_doc
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
  PyObject* init = wrapRnnlmTrainer_as___init__(self, args, kw);
  Py_XDECREF(init);
  return init? 0: -1;
}

static PyObject* _new(PyTypeObject* type, Py_ssize_t nitems) {
  assert(nitems == 0);
  PyObject* self = reinterpret_cast<PyObject*>(new wrapper);
  return PyObject_Init(self, &wrapper_Type);
}

static ::kaldi::rnnlm::RnnlmTrainer* ThisPtr(PyObject* py) {
  if (Py_TYPE(py) == &wrapper_Type) {
    return ::clif::python::Get(reinterpret_cast<wrapper*>(py)->cpp);
  }
  PyObject* base = PyObject_CallMethod(py, C("as_kaldi_rnnlm_RnnlmTrainer"), nullptr);
  if (base) {
    if (PyCapsule_CheckExact(base)) {
      void* p = PyCapsule_GetPointer(base, C("::kaldi::rnnlm::RnnlmTrainer"));
      if (!PyErr_Occurred()) {
        ::kaldi::rnnlm::RnnlmTrainer* c = static_cast<::kaldi::rnnlm::RnnlmTrainer*>(p);
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
    PyErr_Format(PyExc_ValueError, "can't convert %s %s to ::kaldi::rnnlm::RnnlmTrainer*", ClassName(py), ClassType(py));
  } else {
    PyErr_Format(PyExc_TypeError, "expecting %s instance, got %s %s", wrapper_Type.tp_name, ClassName(py), ClassType(py));
  }
  return nullptr;
}
}  // namespace pyRnnlmTrainer


// Initialize module

bool Ready() {
  if (PyType_Ready(&pyRnnlmTrainer::wrapper_Type) < 0) return false;
  Py_INCREF(&pyRnnlmTrainer::wrapper_Type);  // For PyModule_AddObject to steal.
  return true;
}

static struct PyModuleDef Module = {
  PyModuleDef_HEAD_INIT,
  "_rnnlm_training",  // module name
  "CLIF-generated module for rnnlm/rnnlm-training.h", // module doc
  -1,  // module keeps state in global variables
  nullptr
};

PyObject* Init() {
  PyObject* module = PyModule_Create(&Module);
  if (!module) return nullptr;
  if (PyObject* m = PyImport_ImportModule("_options_itf")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_cu_matrix")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_cu_sparse_matrix")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_nnet_nnet")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_rnnlm_core_training")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_rnnlm_embedding_training")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_rnnlm_example")) Py_DECREF(m);
  else goto err;
  if (PyObject* m = PyImport_ImportModule("_rnnlm_example_utils")) Py_DECREF(m);
  else goto err;
  PyEval_InitThreads();
  if (PyModule_AddObject(module, "RnnlmTrainer", reinterpret_cast<PyObject*>(&pyRnnlmTrainer::wrapper_Type)) < 0) goto err;
  return module;
err:
  Py_DECREF(module);
  return nullptr;
}

}  // namespace __rnnlm__training_clifwrap

namespace kaldi { namespace rnnlm {
using namespace ::clif;
using ::clif::Clif_PyObjAs;
using ::clif::Clif_PyObjFrom;

// RnnlmTrainer to/from ::kaldi::rnnlm::RnnlmTrainer conversion

bool Clif_PyObjAs(PyObject* py, ::kaldi::rnnlm::RnnlmTrainer** c) {
  assert(c != nullptr);
  if (Py_None == py) {
    *c = nullptr;
    return true;
  }
  ::kaldi::rnnlm::RnnlmTrainer* cpp = __rnnlm__training_clifwrap::pyRnnlmTrainer::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = cpp;
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::shared_ptr<::kaldi::rnnlm::RnnlmTrainer>* c) {
  assert(c != nullptr);
  ::kaldi::rnnlm::RnnlmTrainer* cpp = __rnnlm__training_clifwrap::pyRnnlmTrainer::ThisPtr(py);
  if (cpp == nullptr) return false;
  *c = ::clif::MakeStdShared(reinterpret_cast<__rnnlm__training_clifwrap::pyRnnlmTrainer::wrapper*>(py)->cpp, cpp);
  return true;
}

bool Clif_PyObjAs(PyObject* py, std::unique_ptr<::kaldi::rnnlm::RnnlmTrainer>* c) {
  assert(c != nullptr);
  ::kaldi::rnnlm::RnnlmTrainer* cpp = __rnnlm__training_clifwrap::pyRnnlmTrainer::ThisPtr(py);
  if (cpp == nullptr) return false;
  if (!reinterpret_cast<__rnnlm__training_clifwrap::pyRnnlmTrainer::wrapper*>(py)->cpp.Detach()) {
    PyErr_SetString(PyExc_ValueError, "Cannot convert RnnlmTrainer instance to std::unique_ptr.");
    return false;
  }
  c->reset(cpp);
  return true;
}

PyObject* Clif_PyObjFrom(::kaldi::rnnlm::RnnlmTrainer* c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__rnnlm__training_clifwrap::pyRnnlmTrainer::wrapper_Type, NULL, NULL);
  reinterpret_cast<__rnnlm__training_clifwrap::pyRnnlmTrainer::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::rnnlm::RnnlmTrainer>(c, ::clif::UnOwnedResource());
  return py;
}

PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::rnnlm::RnnlmTrainer> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__rnnlm__training_clifwrap::pyRnnlmTrainer::wrapper_Type, NULL, NULL);
  reinterpret_cast<__rnnlm__training_clifwrap::pyRnnlmTrainer::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::rnnlm::RnnlmTrainer>(c);
  return py;
}

PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::rnnlm::RnnlmTrainer> c, py::PostConv unused) {
  if (c == nullptr) Py_RETURN_NONE;
  PyObject* py = PyType_GenericNew(&__rnnlm__training_clifwrap::pyRnnlmTrainer::wrapper_Type, NULL, NULL);
  reinterpret_cast<__rnnlm__training_clifwrap::pyRnnlmTrainer::wrapper*>(py)->cpp = ::clif::Instance<::kaldi::rnnlm::RnnlmTrainer>(std::move(c));
  return py;
}

} }  // namespace kaldi::rnnlm