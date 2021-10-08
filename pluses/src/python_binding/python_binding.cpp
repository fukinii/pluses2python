//
// Created by kuznetsov on 07.10.2021.
//

#include <pybind11/chrono.h>
#include <pybind11/complex.h>
#include <pybind11/eigen.h>
#include <pybind11/functional.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "Add.h"

namespace py = pybind11;

PYBIND11_MODULE(MODULE_NAME, m) {
  /*** Класс ошибок ***/

  m.def("foo", &foo);
}
