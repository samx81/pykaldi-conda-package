//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/fstext/lexicographic-weight.clif

#include <memory>
#include "clif/python/optional.h"
#include "fstext/lexicographic-weight-ext.h"
#include "clif/python/postconv.h"

namespace fst {
using namespace ::clif;

// CLIF use `::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > >` as KwsIndexWeight
bool Clif_PyObjAs(PyObject* input, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > >** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > >>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > >>* output);
bool Clif_PyObjAs(PyObject* input, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > >* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > >>* output);
PyObject* Clif_PyObjFrom(::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > >*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > >>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > >>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > >&, py::PostConv);
// CLIF use `::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> >` as KwsTimeWeight
bool Clif_PyObjAs(PyObject* input, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> >** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> >>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> >>* output);
bool Clif_PyObjAs(PyObject* input, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> >* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> >>* output);
PyObject* Clif_PyObjFrom(::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> >*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> >>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> >>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> >&, py::PostConv);

}  // namespace fst

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_lexicographic_weight")) Py_DECREF(m);
// CLIF init_module else goto err;
