//
// Created by Alexis Gardin on 09/10/2018.
//

#ifndef NEURAL_NETWORK_FROM_SCRATCH_NEURON_H
#define NEURAL_NETWORK_FROM_SCRATCH_NEURON_H


class Neuron {
private:
    float actvalue = 0;
    float netvalue = 0;
public:
    float getActvalue() const;

    void setActvalue(float actvalue);

    float getNetvalue() const;

    void setNetvalue(float netvalue);

    virtual void activateNeuron() = 0;

    virtual float getActDerivate() = 0;

    virtual void setError() = 0;

    virtual void setThreshold() = 0;

    Neuron(float actvalue, float netvalue);
};


#endif //NEURAL_NETWORK_FROM_SCRATCH_NEURON_H
