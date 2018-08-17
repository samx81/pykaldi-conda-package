//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/fstext/getters.clif

#include <memory>
#include "clif/python/optional.h"
#include "fst/script/getters.h"
#include "clif/python/postconv.h"

namespace fst {
using namespace ::clif;

// CLIF use `::fst::ClosureType` as ClosureType
bool Clif_PyObjAs(PyObject* input, ::fst::ClosureType* output);
PyObject* Clif_PyObjFrom(const ::fst::ClosureType&, py::PostConv);
// CLIF use `::fst::ComposeFilter` as ComposeFilter
bool Clif_PyObjAs(PyObject* input, ::fst::ComposeFilter* output);
PyObject* Clif_PyObjFrom(const ::fst::ComposeFilter&, py::PostConv);
// CLIF use `::fst::DeterminizeType` as DeterminizeType
bool Clif_PyObjAs(PyObject* input, ::fst::DeterminizeType* output);
PyObject* Clif_PyObjFrom(const ::fst::DeterminizeType&, py::PostConv);
// CLIF use `::fst::EncodeType` as EncodeType
bool Clif_PyObjAs(PyObject* input, ::fst::EncodeType* output);
PyObject* Clif_PyObjFrom(const ::fst::EncodeType&, py::PostConv);
// CLIF use `::fst::EpsNormalizeType` as EpsNormalizeType
bool Clif_PyObjAs(PyObject* input, ::fst::EpsNormalizeType* output);
PyObject* Clif_PyObjFrom(const ::fst::EpsNormalizeType&, py::PostConv);
// CLIF use `::fst::MatchType` as MatchType
bool Clif_PyObjAs(PyObject* input, ::fst::MatchType* output);
PyObject* Clif_PyObjFrom(const ::fst::MatchType&, py::PostConv);
// CLIF use `::fst::ProjectType` as ProjectType
bool Clif_PyObjAs(PyObject* input, ::fst::ProjectType* output);
PyObject* Clif_PyObjFrom(const ::fst::ProjectType&, py::PostConv);
// CLIF use `::fst::QueueType` as QueueType
bool Clif_PyObjAs(PyObject* input, ::fst::QueueType* output);
PyObject* Clif_PyObjFrom(const ::fst::QueueType&, py::PostConv);
// CLIF use `::fst::ReplaceLabelType` as ReplaceLabelType
bool Clif_PyObjAs(PyObject* input, ::fst::ReplaceLabelType* output);
PyObject* Clif_PyObjFrom(const ::fst::ReplaceLabelType&, py::PostConv);
// CLIF use `::fst::ReweightType` as ReweightType
bool Clif_PyObjAs(PyObject* input, ::fst::ReweightType* output);
PyObject* Clif_PyObjFrom(const ::fst::ReweightType&, py::PostConv);

}  // namespace fst

namespace fst { namespace script {
using namespace ::clif;

// CLIF use `::fst::script::ArcSortType` as ArcSortType
bool Clif_PyObjAs(PyObject* input, ::fst::script::ArcSortType* output);
PyObject* Clif_PyObjFrom(const ::fst::script::ArcSortType&, py::PostConv);
// CLIF use `::fst::script::MapType` as MapType
bool Clif_PyObjAs(PyObject* input, ::fst::script::MapType* output);
PyObject* Clif_PyObjFrom(const ::fst::script::MapType&, py::PostConv);
// CLIF use `::fst::script::RandArcSelection` as RandArcSelection
bool Clif_PyObjAs(PyObject* input, ::fst::script::RandArcSelection* output);
PyObject* Clif_PyObjFrom(const ::fst::script::RandArcSelection&, py::PostConv);

} }  // namespace fst::script

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_getters")) Py_DECREF(m);
// CLIF init_module else goto err;
