/*Escreva um programa que lê um valor n, cria dinamicamente um vetor de n elementos, e
passa esse vetor para uma função que vai ler os seus elementos. Depois, no programa
principal, o vetor preenchido deve ser impresso. Além disso, antes de finalizar o programa,
deve-se liberar a área de memória alocada.*/

#include <iostream>

void func(int p[],int n){
	int i;
	std::cout<<"Digite os valores: ";
	for(i=0;i<n;i++)
		std::cin>>p[i];
}

int main(void){
	int n,i;
	std::cin>>n;
	int *p=new int[n];

	func(p,n);

	std::cout<<"Os valores do vetor são: ";
	for(i=0;i<n;i++)
		std::cout<<p[i]<<" ";
	std::cout<<std::endl;
	
	delete p;

	return 0;
}
