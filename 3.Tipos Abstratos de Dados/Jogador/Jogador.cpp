#include <iostream>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include "Jogador.h"

using namespace std;

Jogador::Jogador(int p, int m, int t)
{
   setPontuacao(p);
   setMelhorClassificacao(m);
   setTotalTitulos(t);
}
 
void Jogador::setPontuacao(int p)
{
   if(p < 0 || p > 20000)
   {
       cout << "Pontuacao invalida!" << endl;
       exit(1);
   }
   pontuacao = p;
}
 
void Jogador::setMelhorClassificacao(int m)
{
   if(m < 0)
   {
       cout << "Classificacao invalida!" << endl;
       exit(1);
   }
   melhorClassificacao = m;
}
 
void Jogador::setTotalTitulos(int t)
{
   if(t < 0)
   {
       cout << "Total de titulos invalido!" << endl;
       exit(1);
   }
   totalTitulos = t;
}
 
void Jogador::posicaoRanking(int ranking[], int n, int *pos)
{
   int i;
   for(i = 0; i < n; i++)
   {
       if(pontuacao > ranking[i])
           break;
   }
   *pos = i+1;
   cout << "Jogador eh o numero " << *pos << " do ranking" << endl;
   if(i > melhorClassificacao)
   {
       cout << "Essa eh a melhor classificacao do jogador";
       melhorClassificacao = i;
   }
}

