/*Modificar o exercício 4 para montar a lista na ordem crescente dos números informados
pelo usuário.*/

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
void selectionEncadeada(struct Item *inicio,struct Item *fim){
	struct Item *i,*j;
	for(i=inicio;i<n-1;i=i->proximo){
		for(j=inicio->proximo;j<n;j=j->proximo){
			if(i->valor>j->valor) 
				
		}
	}
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
