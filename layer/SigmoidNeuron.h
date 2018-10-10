//
// Created by Alexis Gardin on 09/10/2018.
//

#ifndef NEURAL_NETWORK_FROM_SCRATCH_SIGMOIDNEURON_H
#define NEURAL_NETWORK_FROM_SCRATCH_SIGMOIDNEURON_H


#include "Neuron.h"

class SigmoidNeuron : public Neuron {
private:
    float bias;
    float error;
    float sleepness;
public:
    virtual void activateNeuron();

    virtual float getActDerivate();

    void setThreshHold();
};


#endif //NEURAL_NETWORK_FROM_SCRATCH_SIGMOIDNEURON_H
