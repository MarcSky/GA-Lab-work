#include <QCoreApplication>
#include "chromosome.h"

//Chromosme* full_generator(void) {
//    Chromosme *p = new Chromosme[POPULATION_SIZE];

//    for (int i = 0; i < POPULATION_SIZE; i++) {
//        Chromosme a;
//        p[i] = a;
//    }

//    return (Chromosme*)p;

//}

//Chromosme* shortgun_generator(float percent, int &size) {
//    int len_full_pop = 8;
//    int len_pop = (int)(len_full_pop * (percent / 100));
//    Chromosme *p = new Chromosme[len_pop];

//    for(int i = 0; i < len_pop; i++) {
//        Chromosme a;
//        p[i] = a;
//    }

//    size = len_pop;
//    return (Chromosme*)p;
//}

//Chromosme* focusing_generator(float percent, float center_percent, float radius_percent, int &size) {
//    int len_full_pop = 8;
//    float center = round(len_full_pop*(center_percent/100));
//    float radius = round(len_full_pop*(radius_percent/100));
//    float left = center - radius;
//    float right = center + radius;
//    float length = right - left;
//    int len_pop = (int)(length * (percent / 100));

//    Chromosme *p = new Chromosme[len_pop];

//    for(int i = 0; i < len_pop; i++) {
//        Chromosme a;
//        p[i] = a;
//    }

//    size = len_pop;
//    return (Chromosme*)p;
//}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Chromosme<bool> *p;
    int size;
    p = Chromosme<bool>::population(GUNSHOT_POPULATION, BINARY_CHROMOSOME, 1,0, size);
//    qDebug() << p[0].genes[0];
    delete [] p;

    return a.exec();
}
