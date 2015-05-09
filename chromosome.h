#ifndef CHROMOSME_H
#define CHROMOSME_H
#define CHROMOSOME_SIZE 8
#define POPULATION_SIZE 10

#include <QtCore>
#include <math.h>
enum GENERATOR_POPULATION{GUNSHOT_POPULATION,RANDOM_POPULATION,FULL_POPULATION,FOCUSING_POPULATION};
enum CHROMOSOME_TYPE{BINARY_CHROMOSOME, STRING_CHROMOSOME, NUMBER_CHROMOSOME};

template<typename T>
class Chromosme
{
public:
    Chromosme(int t = BINARY_CHROMOSOME):typeChromosome(t)
    {
       if(typeChromosome == BINARY_CHROMOSOME) {
           memset(genes,0,sizeof(int));
//           minValue = 0;
//           maxValue = 1;
       }
       fitness = 0;
    }


    ~Chromosme(){}

    T genes[CHROMOSOME_SIZE];

    Chromosme<T>& operator =(const Chromosme<T>& t){
        if(this != &t) {
            memcpy(genes, t.genes, CHROMOSOME_SIZE);
        }
    }
    void setTypeChromosome(int type) {
        typeChromosome = type;
    }
    static Chromosme<T> *population(int generator, int type, int maxValue, int minValue, int &size, float percent = 50.0f,float radius = 0.0f, float center = 0.0f) {
        Chromosme<T> *p = NULL;
        if(generator == FULL_POPULATION || generator == RANDOM_POPULATION) {
            p = new Chromosme<T>[POPULATION_SIZE];

            for (int i = 0; i < POPULATION_SIZE; i++) {
                Chromosme<T> a(type);
                p[i] = a;
            }

            return (Chromosme<T>*)p;
        }
        else if(generator = GUNSHOT_POPULATION) {
                int len_full_pop = (int)pow((maxValue - minValue) + 1, CHROMOSOME_SIZE);
                int len_pop = (int)(len_full_pop * (percent / 100));
                p = new Chromosme<T>[len_pop];

                for(int i = 0; i < len_pop; i++) {
                    Chromosme<T> a(type);
                    p[i] = a;
                }

                size = len_pop;
                return (Chromosme<T>*)p;
        }
        return NULL;
    }
    int typeChromosome;
    int fitness;
//    unsigned char minValue;
//    unsigned char maxValue;

private:
};

#endif // CHROMOSME_H
