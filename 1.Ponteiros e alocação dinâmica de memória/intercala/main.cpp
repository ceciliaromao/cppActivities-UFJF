#include <iostream>

using namespace std;

int* intercala(int v1[], int v2[], int n, int *t)
{
  *t = 0;
  for(int i = 0; i < n; i++)
  {
    if(v1[i] != v2[i])
      (*t)+=2;
    else
      (*t)+=1;
  }
  if(*t == 0) return NULL;
  int *r = new int[*t];
  int j = 0;
  for(int i = 0; i < n; i++)
  {
    if(v1[i] != v2[i])
    {
      r[j++] = v1[i];
      r[j++] = v2[i];
    }
    else
    {
      r[j++] = v1[i];
    }
  }    
  return r;
}


int main()
{
  int n, t, *vet1, *vet2, *vet3;
  cin >> n;
 
  vet1 = new int[n];
  vet2 = new int[n];
  for(int i = 0; i < n; i++)
    cin >> vet1[i];
  for(int i = 0; i < n; i++)
    cin >> vet2[i];
  
  vet3 = intercala(vet1, vet2, n, &t);
 
  for(int i = 0; i < t; i++)
    cout << vet3[i] << " ";
  cout << endl;
 
  delete [] vet1;
  delete [] vet2;
  delete [] vet3;
  return 0;
}
