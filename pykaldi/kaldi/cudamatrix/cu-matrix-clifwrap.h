//////////////////////////////////////////////////////////////////////
// This file was automatically generated by CLIF to run under Python 3
// Version 0.3
//////////////////////////////////////////////////////////////////////
// source: /pykaldi/kaldi/cudamatrix/cu-matrix.clif

#include <memory>
#include "clif/python/optional.h"
#include "cudamatrix/cu-matrix.h"
#include "clif/python/postconv.h"

namespace kaldi {
using namespace ::clif;

// CLIF use `::kaldi::CuMatrix<double>` as CuDoubleMatrix
bool Clif_PyObjAs(PyObject* input, ::kaldi::CuMatrix<double>** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::CuMatrix<double>>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::CuMatrix<double>>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::CuMatrix<double>* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::CuMatrix<double>>* output);
PyObject* Clif_PyObjFrom(::kaldi::CuMatrix<double>*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::CuMatrix<double>>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::CuMatrix<double>>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::CuMatrix<double>&, py::PostConv);
// CLIF use `::kaldi::CuMatrixBase<double>` as CuDoubleMatrixBase
bool Clif_PyObjAs(PyObject* input, ::kaldi::CuMatrixBase<double>** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::CuMatrixBase<double>>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::CuMatrixBase<double>>* output);
PyObject* Clif_PyObjFrom(::kaldi::CuMatrixBase<double>*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::CuMatrixBase<double>>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::CuMatrixBase<double>>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::CuMatrixBase<double>*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::CuMatrixBase<double>&, py::PostConv) = delete;
// CLIF use `::kaldi::CuSubMatrix<double>` as CuDoubleSubMatrix
bool Clif_PyObjAs(PyObject* input, ::kaldi::CuSubMatrix<double>** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::CuSubMatrix<double>>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::CuSubMatrix<double>>* output);
PyObject* Clif_PyObjFrom(::kaldi::CuSubMatrix<double>*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::CuSubMatrix<double>>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::CuSubMatrix<double>>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::CuSubMatrix<double>*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::CuSubMatrix<double>&, py::PostConv) = delete;
// CLIF use `::kaldi::CuMatrix<float>` as CuMatrix
bool Clif_PyObjAs(PyObject* input, ::kaldi::CuMatrix<float>** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::CuMatrix<float>>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::CuMatrix<float>>* output);
bool Clif_PyObjAs(PyObject* input, ::kaldi::CuMatrix<float>* output);
bool Clif_PyObjAs(PyObject* input, ::gtl::optional<::kaldi::CuMatrix<float>>* output);
PyObject* Clif_PyObjFrom(::kaldi::CuMatrix<float>*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::CuMatrix<float>>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::CuMatrix<float>>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::CuMatrix<float>&, py::PostConv);
// CLIF use `::kaldi::CuMatrixBase<float>` as CuMatrixBase
bool Clif_PyObjAs(PyObject* input, ::kaldi::CuMatrixBase<float>** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::CuMatrixBase<float>>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::CuMatrixBase<float>>* output);
PyObject* Clif_PyObjFrom(::kaldi::CuMatrixBase<float>*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::CuMatrixBase<float>>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::CuMatrixBase<float>>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::CuMatrixBase<float>*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::CuMatrixBase<float>&, py::PostConv) = delete;
// CLIF use `::kaldi::CuSubMatrix<float>` as CuSubMatrix
bool Clif_PyObjAs(PyObject* input, ::kaldi::CuSubMatrix<float>** output);
bool Clif_PyObjAs(PyObject* input, std::shared_ptr<::kaldi::CuSubMatrix<float>>* output);
bool Clif_PyObjAs(PyObject* input, std::unique_ptr<::kaldi::CuSubMatrix<float>>* output);
PyObject* Clif_PyObjFrom(::kaldi::CuSubMatrix<float>*, py::PostConv);
PyObject* Clif_PyObjFrom(std::shared_ptr<::kaldi::CuSubMatrix<float>>, py::PostConv);
PyObject* Clif_PyObjFrom(std::unique_ptr<::kaldi::CuSubMatrix<float>>, py::PostConv);
PyObject* Clif_PyObjFrom(const ::kaldi::CuSubMatrix<float>*, py::PostConv) = delete;
PyObject* Clif_PyObjFrom(const ::kaldi::CuSubMatrix<float>&, py::PostConv) = delete;

}  // namespace kaldi

// CLIF init_module if (PyObject* m = PyImport_ImportModule("_cu_matrix")) Py_DECREF(m);
// CLIF init_module else goto err;