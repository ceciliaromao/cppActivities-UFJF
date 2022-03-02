#include <iostream>
#include "PilhaEncad.h"
#include "FilaEncad.h"

using namespace std;

FilaEncad* intercala(FilaEncad *f1, FilaEncad *f2) 
{
    FilaEncad *nova = new FilaEncad();
    if(f1->vazia() && f2->vazia())
    {
        return nova;
    }
    else if(f1->vazia()) 
    {
        while(!f2->vazia()) nova->enfileira(f2->desenfileira());
    }
    else if(f2->vazia())
    {
        while(!f1->vazia()) nova->enfileira(f1->desenfileira());
    }
    else
    {
        while(!f1->vazia())
        {
            nova->enfileira(f1->desenfileira());
            while(!f2->vazia())
            {
                nova->enfileira(f2->desenfileira());
                break;
            }
        }
        
        //caso ainda haja elementos em f2 depois que f1 esvaziar
        //quando f2 > f1
        while(!f2->vazia())
        {
            nova->enfileira(f2->desenfileira());
        }
    }
    
    return nova;
}

//Forma mais simplificada
FilaEncad* intercala2(FilaEncad *f1, FilaEncad *f2) 
{
    FilaEncad *nova = new FilaEncad();
    while ((!f1->vazia()) || (!f2->vazia()))
    {
        if(!f1->vazia())
        {
            int val = f1->desenfileira();
            nova->enfileira(val);
        }
        if(!f2->vazia())
        {
            int val = f2->desenfileira();
            nova->enfileira(val);
        }
    }
    return nova;
}

int main()
{
    /// TESTE COM PILHA
    PilhaEncad p;

    for(int i = 0; i < 5; i++) p.empilha(i);
    cout << "Pilha apos inserir 5 valores" << endl;
    ///p.imprime();

    for(int i = 20; i < 25; i++) p.empilha(i);
    cout << "Pilha apos inserir mais 5 valores" << endl;
    ///p.imprime();

    /// TESTE COM FILA

    FilaEncad f;
    for(int i=0; i<5; i++) f.enfileira(i);
    cout << "Fila apos inserir 5 valores" << endl;
    ///f.imprime();

    for(int i = 20; i < 25; i++) f.enfileira(i);
    cout << "Fila apos inserir mais 5 valores" << endl;
    ///f.imprime();

    return 0;
}
