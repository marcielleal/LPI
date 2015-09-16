/*Escreva um programa que solicita ao usuário a quantidade de alunos de uma turma e
aloca um vetor de notas (números reais). Depois de ler as notas de todos os alunos, seu
programa deverá imprimir a média aritmética da turma. Obs: note que não deve ocorrer
desperdício de memória, e após a utilização da memória, ela deve ser liberada.*/
#include <iostream>

void func(float p[],int n){
	int i;
	std::cout<<"Digite as notas: ";
	for(i=0;i<n;i++)
		std::cin>>p[i];
}
float media(float v[],int n){
	float soma=0;
	int i;
	for(i=0;i<n;i++)
		soma+=v[i];
	
	return soma/n;
}

int main(void){
	int n;
	std::cin>>n;
	float *p=new float[n];

	func(p,n);

	std::cout<<"A média da turma é: "<<media(p,n)<<std::endl;
	
	delete p;

	return 0;
}
