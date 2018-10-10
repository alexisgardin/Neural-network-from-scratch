//
// Created by Alexis Gardin on 09/10/2018.
//

#ifndef NEURAL_NETWORK_FROM_SCRATCH_LAYER_H
#define NEURAL_NETWORK_FROM_SCRATCH_LAYER_H


#include <vector>
#include "Neuron.h"

class Layer {
private:
    int layers = 0;
    std::vector<Neuron> neurons;
public:
    void defineLayers();

    void activate();

    float getErrorDerivate();
};


#endif //NEURAL_NETWORK_FROM_SCRATCH_LAYER_H
