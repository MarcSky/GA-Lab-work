#ifndef POPULATION_H
#define POPULATION_H
#include "chromosome.h"
#include <QDebug>
#define POPULATION_SIZE 10

class Population
{
public:
    Population();
    ~Population();


private:
    int size;

};

#endif // POPULATION_H
