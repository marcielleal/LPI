/*Escreva um programa que calcula a soma de duas matrizes MxN de números reais
(double). A implementação deste programa deve considerar as dimensões fornecida pelo
usuário. Obs: represente a matriz através de variáveis do tipo double**, usando alocação
dinâmica de memória. Obs: lembre-se que diversas chamadas à função de alocação de
memória devem ser efetuadas para poder construir uma matriz.*/

#include <iostream>
#include <string.h>
void preenche(double **matriz,int m,int n){
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			std::cin>>matriz[i][j];
}

void imprime(double **matriz,int m,int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			std::cout<<matriz[i][j]<<" ";
		std::cout<<std::endl;
	}std::cout<<std::endl;
}

void soma(double **matriz,double **matriz2,double **matriz3,int m,int n){
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
			matriz3[i][j]=matriz2[i][j]+matriz[i][j];
		}
}

int main(void){
	int m,n,i;
	std::cin>>m>>n;
	
	double **matriz=new double*[m];
	double **matriz2=new double*[m];
	double **matriz3=new double*[m];
	
	if(matriz&&matriz2&&matriz3){
		for(i=0;i<m;i++){
			matriz[i]=new double[n];
			matriz2[i]=new double[n];
			matriz3[i]=new double[n];
			if((!matriz[i])||(!matriz2[i])||(!matriz3)){
				std::cout<<"Memória insuficiente"<<std::endl;
				break;
			}
		}
	}
	
	preenche(matriz,m,n);
	preenche(matriz2,m,n);
	
	soma(matriz,matriz2,matriz3,m,n);
		
	imprime(matriz3,m,n);
	if(matriz){
		for(i=0;i<m;i++){
			delete matriz[i];
			delete matriz2[i];
			delete matriz3[i];
		}delete matriz;
		delete matriz2;
		delete matriz3;
	}
	return 0;
}
