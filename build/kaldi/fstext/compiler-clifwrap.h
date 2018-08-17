//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/fstext/compiler.clif

#include <memory>
#include "clif/python/optional.h"
#include "fst/script/compile-impl.h"
#include "clif/python/postconv.h"

namespace fst {
using namespace ::clif;

// CLIF use `::fst::FstCompiler< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> > >` as CompactLatticeFstCompiler
bool Clif_PyObjAs(PyObject* input, ::fst::FstCompiler< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> > >** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::fst::FstCompiler< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> > >>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::fst::FstCompiler< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> > >>* output);
PyObject* Clif_PyObjFrom(::fst::FstCompiler< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> > >*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::fst::FstCompiler< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> > >>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::fst::FstCompiler< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> > >>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::fst::FstCompiler< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> > >*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::fst::FstCompiler< ::fst::ArcTpl< ::fst::CompactLatticeWeightTpl< ::fst::LatticeWeightTpl<float>, int> > >&, py::PostConv) = delete;
// CLIF use `::fst::FstCompiler< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > >` as KwsIndexFstCompiler
bool Clif_PyObjAs(PyObject* input, ::fst::FstCompiler< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > >** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::fst::FstCompiler< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > >>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::fst::FstCompiler< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > >>* output);
PyObject* Clif_PyObjFrom(::fst::FstCompiler< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > >*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::fst::FstCompiler< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > >>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::fst::FstCompiler< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > >>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::fst::FstCompiler< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > >*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::fst::FstCompiler< ::fst::ArcTpl< ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::LexicographicWeight< ::fst::TropicalWeightTpl<float>, ::fst::TropicalWeightTpl<float> > > > >&, py::PostConv) = delete;
// CLIF use `::fst::FstCompiler< ::fst::ArcTpl< ::fst::LatticeWeightTpl<float> > >` as LatticeFstCompiler
bool Clif_PyObjAs(PyObject* input, ::fst::FstCompiler< ::fst::ArcTpl< ::fst::LatticeWeightTpl<float> > >** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::fst::FstCompiler< ::fst::ArcTpl< ::fst::LatticeWeightTpl<float> > >>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::fst::FstCompiler< ::fst::ArcTpl< ::fst::LatticeWeightTpl<float> > >>* output);
PyObject* Clif_PyObjFrom(::fst::FstCompiler< ::fst::ArcTpl< ::fst::LatticeWeightTpl<float> > >*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::fst::FstCompiler< ::fst::ArcTpl< ::fst::LatticeWeightTpl<float> > >>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::fst::FstCompiler< ::fst::ArcTpl< ::fst::LatticeWeightTpl<float> > >>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::fst::FstCompiler< ::fst::ArcTpl< ::fst::LatticeWeightTpl<float> > >*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::fst::FstCompiler< ::fst::ArcTpl< ::fst::LatticeWeightTpl<float> > >&, py::PostConv) = delete;
// CLIF use `::fst::FstCompiler< ::fst::ArcTpl< ::fst::LogWeightTpl<float> > >` as LogFstCompiler
bool Clif_PyObjAs(PyObject* input, ::fst::FstCompiler< ::fst::ArcTpl< ::fst::LogWeightTpl<float> > >** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::fst::FstCompiler< ::fst::ArcTpl< ::fst::LogWeightTpl<float> > >>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::fst::FstCompiler< ::fst::ArcTpl< ::fst::LogWeightTpl<float> > >>* output);
PyObject* Clif_PyObjFrom(::fst::FstCompiler< ::fst::ArcTpl< ::fst::LogWeightTpl<float> > >*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::fst::FstCompiler< ::fst::ArcTpl< ::fst::LogWeightTpl<float> > >>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::fst::FstCompiler< ::fst::ArcTpl< ::fst::LogWeightTpl<float> > >>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::fst::FstCompiler< ::fst::ArcTpl< ::fst::LogWeightTpl<float> > >*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::fst::FstCompiler< ::fst::ArcTpl< ::fst::LogWeightTpl<float> > >&, py::PostConv) = delete;
// CLIF use `::fst::FstCompiler< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> > >` as StdFstCompiler
bool Clif_PyObjAs(PyObject* input, ::fst::FstCompiler< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> > >** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::fst::FstCompiler< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> > >>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::fst::FstCompiler< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> > >>* output);
PyObject* Clif_PyObjFrom(::fst::FstCompiler< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> > >*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::fst::FstCompiler< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> > >>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::fst::FstCompiler< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> > >>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::fst::FstCompiler< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> > >*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::fst::FstCompiler< ::fst::ArcTpl< ::fst::TropicalWeightTpl<float> > >&, py::PostConv) = delete;

}  // namespace fst

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_compiler")) Py_DECREF(m);
// CLIF init_module else goto err;
