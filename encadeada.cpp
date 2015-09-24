#include <iostream>

typedef struct Encadeada{
	int data;
	Encadeada *next;
}Encadeada;

Encadeada *create(void){
	return new NULL;
}

Encadeada *add1(Encadeada *lista, int data){
	Encadeada *novo=new Encadeada;
	novo->data=data;
	novo->next=lista;
	return novo;
}

Encadeada *add(Encadeada *lista,int data){
	Encadeada *inicio=lista;
	while(lista->next) lista=lista->next;
	Encadeada *novo=new Encadeada;
	novo->data=data;
	novo->next=NULL;
	lista->next=novo;
	return inicio;
}

Encadeada *busca(Encadeada *lista,int v){
	while((lista->data!=v)&&lista->next) lista=lista->next;
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
bool igual(Encadeada *lista1,Encadeada *lista2){
	while((lista1->next&&lista2->next)&&(lista1->data==lista2->data)){
		lista1=lista1->next;
		lista2=lista2->next;
	}if((!lista1->next&&!lista2->next)&&(lista1->data==lista2->data) return 1;
	return 0;
}

int main(void){
	
	return 0;
}
