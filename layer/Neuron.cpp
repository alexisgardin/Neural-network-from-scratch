//
// Created by Alexis Gardin on 09/10/2018.
//

#include "Neuron.h"

float Neuron::getActvalue() const {
    return actvalue;
}

void Neuron::setActvalue(float actvalue) {
    Neuron::actvalue = actvalue;
}

float Neuron::getNetvalue() const {
    return netvalue;
}

void Neuron::setNetvalue(float netvalue) {
    Neuron::netvalue = netvalue;
}

Neuron::Neuron(float actvalue, float netvalue) : actvalue(actvalue), netvalue(netvalue) {}
