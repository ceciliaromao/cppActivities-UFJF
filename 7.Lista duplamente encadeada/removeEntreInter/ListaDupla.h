#ifndef LISTADUPLA_H_INCLUDED
#define LISTADUPLA_H_INCLUDED
#include "NoDuplo.h"

class ListaDupla
{
public:
    ListaDupla();
    ~ListaDupla();
    bool busca(int val);
    int get(int k);
    void set(int k, int val);
    void insereInicio(int val);
    void removeInicio();
    void insereFinal(int val); /// exercicio
    void removeFinal();        /// exercicio

    void removeEntreInter(int v1, int v2);
private:
    NoDuplo *primeiro;
    NoDuplo *ultimo;
    int n;
};
#endif
