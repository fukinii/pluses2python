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
#include "utils/Utils.h"
#include "utils/Classes.h"
#include "Object.h"

namespace py = pybind11;

PYBIND11_MODULE(MODULE_NAME, m) {
    /*** Класс ошибок ***/

    m.def("foo", &foo);

    m.def("add", &add, py::arg("i"), py::arg("j"));

//    py::class_<Object>(m, "Object")
//            .def(py::init<int>(), py::arg("numOFClass_"))
//            .def_property("numOFClass_")
//            .def("getNumOfClass", int);
}
