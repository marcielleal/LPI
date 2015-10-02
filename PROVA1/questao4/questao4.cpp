#include <iostream>

/*Ordena a sequencia 
void selectionSort(int v[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(v[i]>v[j])
				std::swap(v[i],v[j]);
		}
	}
}

void imprime(int v[],int n){
	int i;
	for(i=0;i<n;i++)
		std::cout<<v[i]<<" ";
	std::cout<<std::endl;
}

void contagem(int v[],int n,int votos[],int mat[]){
	int i=0,j,k=0,l=0;
	for(j=1;i<n;j++){
		if(v[i]!=v[j]){
			votos[k]=l;
			mat[k]=v[i];
			i=j; k++; l=0;
		}
		l++;
	}
}
/*Retorna o indice do maior item do vetor
int procuraMaior(int v[],int n){
	int i,maior=-1,im;
	for(i=0;i<n;i++){
		if(v[i]>maior){ 
			maior=v[i];
			im=i;
		}
	}
	return im;
}


void imprimeLista(int votos[],int mat[],int n){
	int i,a;
	for(i=0;i<n;i++){
		a=procuraMaior(votos,n);
		if(mat[a]!=0){
			std::cout<<"Aluno de matrícula: "<<mat[a]<<" Pontuação: "<<votos[a]<<std::endl;
			votos[a]=-1;
		}
	}
}
*/

void contagem(int v[],int n){
	for(i=0;i<n;i++){
		
}
