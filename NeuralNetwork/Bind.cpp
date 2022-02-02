#include "NeuralNetwork.h"

PYBIND11_MODULE(NeuralNetwork, mod) {
	py::class_<NeuralNetwork>(mod, "NeuralNetwork")
		.def(py::init<const py::tuple&, const py::dict&>())
		.def("inspect", &NeuralNetwork::inspect)
		.def("forwardprop", &NeuralNetwork::forwardprop)
		.def("train", &NeuralNetwork::train)
		.def("test", &NeuralNetwork::test);
}