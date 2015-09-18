#include <iostream>

typedef struct Encadeada{
	int data;
	Encadeada *next;
}Encadeada;

Encadeada *create(void){
	return new Encadeada;
}

Encadeada *add1(Encadeada *lista, int data){
	Encadeada *novo=new Encadeada;
	novo->data=data;
	novo->next=lista;
	return novo;
}

Encadeada *add(Encadeada *lista,int data){
	while(lista->next) lista++;
	Encadeada *novo=new Encadeada;
	novo->data=data;
	novo->next=NULL;
	lista->next=novo;
	return novo;
}

Encadeada *busca(Encadeada *lista,int v){
	while((lista->data!=v)&&lista->next) lista++;
	if (lista->data==v) return lista;
	return NULL;
}
/* Pensar
Encadeada *apaga(Encadeada *lista,int v){
	while((lista->data!=v)&&lista->next) lista++;
	if(lista->data==v){ 
		if(lista->next){
			(lista-1)->next=lista+1;
			delete lista;
			return lista;
		}else{
			lista--;
			lista->next=NULL;
			return lista;
	}return NULL;
}
*/
int igual(Encadeada *lista1,Encadeada *lista2){
	while(1){
		if(lista->next&&lista->next){
			if(lista1->data!=lista2->data) return 0;
		}
		
int main(void){
	
	return 0;
}
