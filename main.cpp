#include <QCoreApplication>
#include "chromosome.h"
#include "population.h"

Chromosme* full_generator(void) {
    Chromosme p[POPULATION_SIZE];

    for (int i = 0; i < POPULATION_SIZE; i++) {
        Chromosme a;
        p[i] = a;
    }

    return (Chromosme*)p;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    Chromosme a1;
//    Chromosme a2;
//    Population p;
//    p.push(a1);
//    int size;
//    Chromosme *t = p.get(size);
    Chromosme *p;
    p = full_generator();
    qDebug() << p[0].ngenes;

//    delete p;

    return a.exec();
}
