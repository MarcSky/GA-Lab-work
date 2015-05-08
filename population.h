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

    void push(const Chromosme c) {
        array[size++] = c;
    }

    Chromosme * get(int &s) {
        s = size;
        return array;
    }

private:
    int size;
    Chromosme array[POPULATION_SIZE];
};

#endif // POPULATION_H
