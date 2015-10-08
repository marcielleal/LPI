#include <iostream>
#include "questao4.cpp"
int main(void){
	int n,i;
	std::cin>>n;
	int *S=new int[n];
	
	for(i=0;i<n;i++)
		std::cin>>S[i];
	
		
	contagem(S,n,votos,mat);
	imprime(S,n);imprime(votos,n);imprime(mat,n);
	imprimeLista(votos,mat,7);
	
	return 0;
}
