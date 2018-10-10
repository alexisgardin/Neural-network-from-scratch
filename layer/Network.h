//
// Created by Alexis Gardin on 09/10/2018.
//

#ifndef NEURAL_NETWORK_FROM_SCRATCH_NETWORK_H
#define NEURAL_NETWORK_FROM_SCRATCH_NETWORK_H


#include <string>
#include <vector>
#include "Layer.h"

class Network {
private:
    std::string name;
    std::string description;
    std::vector<Layer> layers;
public:
    void initNetwork();

    void initLayers();

    void initWeights();

    void activate();
};


#endif //NEURAL_NETWORK_FROM_SCRATCH_NETWORK_H
