#ifndef CHROMOSME_H
#define CHROMOSME_H
#define CHROMOSOME_SIZE 8
#include <QtCore>

class Chromosme
{
public:
    Chromosme()
    {
       memset(genes,0,sizeof(int));
    //    ngenes = qrand()%100;
    //    for (int i = 0; i < CHROMOSOME_SIZE - 1; i++) {
    //        char x = (qrand() % 2) ? '1' : '0';
    //        sgenes += x;
    //    }
        fitness = 0;
    }


    ~Chromosme(){

    }

    bool genes[CHROMOSOME_SIZE];

    Chromosme& operator =(const Chromosme& t){
        if(this != &t) {
            memcpy(genes, t.genes, CHROMOSOME_SIZE);
        }
    }

private:
    int fitness;
};

#endif // CHROMOSME_H
