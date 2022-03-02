#include <iostream>
#include "Jogador.h"

using namespace std;

int main()
{
   Jogador a(20, 3, 100);
   int n = 10;
   int *vet = new int[n];
   for(int i = 0; i < n; i++)
      cin >> vet[i];
   int pos;
   a.posicaoRanking(vet, n, &pos);

   delete[] vet; 
return 0;

}
