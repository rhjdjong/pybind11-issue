#include "pybind11/pybind11.h"

#include "spamlib.h"

namespace py = pybind11;

using namespace py::literals;

PYBIND11_MODULE(spam, m)
{
    m.doc() = "Example extension module";
    m.def("add", &add, "Add two integers", "x"_a, "y"_a);
}
