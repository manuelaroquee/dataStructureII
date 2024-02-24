#include<stdio.h>

int busca (int n, int* vet, int elem){
    int i;
    for (i=0; i<n; i++)
     if (elem == vet[i])
        return i; //encontrado
    return -1; //não encontrado
  }
  
int main(){
    int vet[6] = {10,20,30,40,50,60};
    int n=6;
    int elem =60;
    int x=busca(n,vet,elem);
    
    printf("%d " " %d", x, elem);
   
  }
