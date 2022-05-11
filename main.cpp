#include<iostream>
#include<cstdlib>
using namespace std;

struct nodo{
int num;
struct nodo*prox;
};

int main(){

//primeiro nó

nodo*lista=new nodo;
lista->num=23;
lista->prox=NULL;

//segundo nó
lista->prox=new nodo;
lista->prox->num=13;
lista->prox->prox=NULL;

//terceiro nó
lista->prox->prox=new nodo;
lista->prox->prox->num=15;
lista->prox->prox->prox=NULL;

//quarto  nó
lista->prox->prox->prox=new nodo;
lista->prox->prox->prox->num=18;
lista->prox->prox->prox->prox=NULL;

//listando um a um
cout<<"\nValordo1ono:"<<lista->num;
cout<<"\nValordo2ono:"<<lista->prox->num;
cout<<"\nValordo3ono:"<<lista->prox->prox->num;
cout<<"\nValordo4ono:"<<lista->prox->prox->prox->num;

//liberando 
delete lista;
lista=0;
cout<<"\n\n";
system("pause");
}
