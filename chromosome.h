#ifndef CHROMOSME_H
#define CHROMOSME_H
#define CHROMOSOME_SIZE 8
#include <QtCore>

class Chromosme
{
public:
    Chromosme();
    ~Chromosme();
    int ngenes;
private:
    QString sgenes;
    int fitness;
};

#endif // CHROMOSME_H
