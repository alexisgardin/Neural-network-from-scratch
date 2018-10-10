//
// Created by Alexis Gardin on 09/10/2018.
//

#ifndef NEURAL_NETWORK_FROM_SCRATCH_WEIGHT_H
#define NEURAL_NETWORK_FROM_SCRATCH_WEIGHT_H


#include <string>

class Weight {
private:
    std::string id;
    int rows;
    int cols;
    bool isLearnable;
public:
    void initWeights();

    void randomWeights();

    void defineConnectionScheme();

    virtual void calcError() = 0;

    virtual void updateWeight() = 0;

};


#endif //NEURAL_NETWORK_FROM_SCRATCH_WEIGHT_H
