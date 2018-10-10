cmake_minimum_required(VERSION 3.12)
project(Neural_network_from_scratch)
set(MNIST_INCLUDE_DIR ${CMAKE_CURRENT_LIST_DIR}/include)
set(MNIST_DATA_DIR ${CMAKE_CURRENT_LIST_DIR})
set(MNIST_FOUND TRUE)
set(CMAKE_CXX_STANDARD 11)

include_directories(${MNIST_INCLUDE_DIR})
add_executable(Neural_network_from_scratch main.cpp layer/Network.cpp layer/Network.h layer/Layer.cpp layer/Layer.h layer/Neuron.cpp layer/Neuron.h layer/SigmoidNeuron.cpp layer/SigmoidNeuron.h weight/Weight.cpp weight/Weight.h weight/SigmoidWeight.cpp weight/SigmoidWeight.h)

target_compile_definitions(Neural_network_from_scratch PRIVATE MNIST_DATA_LOCATION="${MNIST_DATA_DIR}")