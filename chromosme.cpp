#include "chromosome.h"

Chromosme::Chromosme()
{
    ngenes = qrand()%100;
    for (int i = 0; i < CHROMOSOME_SIZE - 1; i++) {
        char x = (qrand() % 2) ? '1' : '0';
        sgenes += x;
    }
    fitness = 0;
}

Chromosme::~Chromosme()
{

}

