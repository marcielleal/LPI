/*Escreva um programa que monte uma lista de números inteiros positivos. Para
cada novo número inteiro digitado pelo usuário no teclado, o programa deve alocar uma
nova variável no heap e inserí-la no final da lista composta pelos números já digitados.
Quando o usuário digitar um número menor ou igual a 0 (zero), o programa deve imprimir
todos os números digitados, na ordem em que eles foram alimentados pelo usuário. Utilizar
o tipo de dados struct Item definido abaixo:
Struct Item {
int valor;
struct Item *proximo;
};*/

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

void imprime(struct Item *inicio){
	while(inicio->proximo){
		std::cout<<inicio->valor<<" ";
		inicio=inicio->proximo;
	}
	std::cout<<inicio->valor;
	std::cout<<std::endl;
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
	
	imprime(inicio);

	return 0;
}
