#include <iostream>

using namespace std;

int sucessor(int n, int vet[], int x) {
 if(n == 1){
   if(vet[0] > x){
     return vet[0];
   }
   else{
     return -1;
   }
 }
 
 int suc = sucessor(n-1, vet, x);
  if(suc < vet[n-1] && suc > x){
   return suc;
 } else{
   if(suc < vet[n-1] && suc <= x){
     return -1;
   }
   else{
     return vet[n-1];
   }
 }
}

int main() {
 int n, x;
 cout << "Informe o tamanho do vetor: ";
 cin >> n;
 
 cout << "Informe o valor de x: ";
 cin >> x;
 
 int *vet = new int [n];
 for (int i = 0; i < n; i++){
   while (vet[i] <= 0) //para garantir que é um numero positivo
   {
     cout << "Informe o " << i+1 << "° elemento do vetor: ";
     cin >> vet [i];
   }
 }
 
 int S = sucessor(n, vet, x);
 
 cout << S << endl;
 return 0;
}
