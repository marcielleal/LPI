#include <iostream>

typedef struct Encadeada{
	int data;
	Encadeada *next;
}Encadeada;

Encadeada *create(void){
	return NULL;
}

Encadeada *add1(Encadeada *lista, int data){
	Encadeada *novo=new Encadeada;
	novo->data=data;
	novo->next=lista;
	return novo;
}

Encadeada *add(Encadeada *lista,int data){
	Encadeada *novo=new Encadeada;
	novo->data=data;
	novo->next=NULL;
	
	if(lista){
		Encadeada *inicio=lista;
		while(lista->next) lista=lista->next;
		lista->next=novo;	
		return inicio;
	}return novo;
}

Encadeada *busca(Encadeada *inicio,int v){
	Encadeada *lista=inicio;
	while((lista->data!=v)&&lista->next) lista=lista->next;
	if(lista->data==v) return lista;
	return NULL;
}

Encadeada *apaga(Encadeada *inicio,int v){
	Encadeada *lista=inicio;
	lista=busca(lista,v);
	if(lista){
		if(lista==inicio){
			inicio=inicio->next;
			delete lista;
		}else{
			Encadeada *novo=inicio;
			while(novo->next!=lista) novo=novo->next;
			novo->next=lista->next;
			delete lista;
		}return inicio;
	}return NULL;
}

bool igual(Encadeada *lista1,Encadeada *lista2){
	while((lista1->next&&lista2->next)&&(lista1->data==lista2->data)){
		lista1=lista1->next;
		lista2=lista2->next;
	}if((!lista1->next&&!lista2->next)&&(lista1->data==lista2->data)) return 1;
	return 0;
}
void imprime(Encadeada *lista){
	Encadeada *pont=lista;
	for(;pont;pont=pont->next)
		std::cout<<pont->data<<" ";
	std::cout<<std::endl;
}
int main(void){
	Encadeada *pont=create();
		pont=add(pont,24);
	imprime(pont);
	pont=add(pont,36);
	imprime(pont);
	pont=add1(pont,12);
	imprime(pont);
	pont=add1(pont,15);
	imprime(pont);
	pont=add1(pont,7);
	imprime(pont);
	pont=apaga(pont,24);
	imprime(pont);
	pont=apaga(pont,36);
	imprime(pont);
	pont=apaga(pont,7);
	imprime(pont);
	pont=apaga(pont,0);
	imprime(pont);
	return 0;
}
