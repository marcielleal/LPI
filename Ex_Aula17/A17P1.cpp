#include <iostream>

int soma(Encadeada *lista){
	Encadeada *i=lista;
	int soma;
	for(soma=0;i->next;i=i->next,soma+=i->data);
	return soma;
}
int somaR_aux(Encadeada *i){
	return i->data+somaR_aux(i->next);
}
int somaR(Encadeada *lista){
	Encadeada *i=lista;
	return somaR_aux(i);
}
