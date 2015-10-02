#include "questao3.hpp"

bool verificaRepeticao(int S[],int n){
	int i,j;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(S[i]==S[j])
				return true;				
	return false;
}
