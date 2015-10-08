#include <iostream>
#include "questao2.hpp"

int main(void){
	int v[]={10,20,40,56,80,12,5,50,100};
	int res;
	maximo(v,0,8,&res);
	std::cout<<res;
	return 0;
}
