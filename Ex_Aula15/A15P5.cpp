/*Modificar o exercício 4 para imprimir os números digitados na ordem inversa daquela em
que eles foram informados pelo usuário.*/

#include <iostream>
struct Item{
	int valor;
	struct Item *proximo;
};

struct Item *add(struct Item* lista,int valor){
	struct Item *novo=new struct Item;
	novo->valor=valor;
	novo->proximo=NULL;
	lista->proximo=novo;
	return novo;
}

void imprime(struct Item *inicio,struct Item *fim){
	struct Item *aux=inicio;
	struct Item *aux2=fim;
	/* aux vai percorrer a lista do inicio ate um elemento anterior a aux2, sendo
	 * que aux2, ao fim do laço, torna-se aux. Ou seja, aux2 vai ser sempre o elemento anterior
	 * ao antigo aux2 na lista*/
	while(aux2!=inicio){
		aux=inicio;
		while(aux->proximo!=aux2) aux=aux->proximo;
		std::cout<<aux2->valor<<" ";
		aux2=aux;
	}std::cout<<aux2->valor<<std::endl;
}

int main(void){
	int x;
	struct Item *novo=new struct Item;
	struct Item *inicio=novo;
	
	std::cin>>x;
	if(x<0){
		std::cout<<"None value"; 
		return 0;
	}
	novo->valor=x;
	novo->proximo=NULL;
	std::cin>>x;
		
	while(x>0){
		novo=add(novo,x);
		std::cin>>x;
	}
	
	imprime(inicio,novo);

	return 0;
}
