#include <iostream>

typedef struct {
	int left;
	int right;
}realtype;

/*Recebe um número do tipo 0.abcdef..., positivo ou negativo, tal que a,b,c,d.. 
 * são inteiros e retorna um inteiro positivo abcdef.. */
int frac_int(float aux){
	do aux*=10; while(aux-(int)aux);
	return (int)(aux>0?aux:-aux);
}
/*Recebe um float num e retorna um ponteiro para uma estrutura do tipo realtype 
 * correspondente ao float num*/
realtype *real_realtype(float num){
	int left=num;
	int right=frac_int(num-left);
	realtype *novo=new realtype;
	novo->left=left;
	novo->right=right;
	return novo;
}
float realtype_real(realtype* real){
	float num=real->left;
	float aux=real->right;
	do aux/=10; while((int)aux);
	(num<0)? num-=aux:num+=aux;
	return num;
}
int main(void){
	realtype *a=real_realtype(892.5416);
	realtype *b=new realtype;
	b->left=1496;
	b->right=7561456;
	float g=realtype_real(b);
	std::cout.precision(25);
	std::cout<<g<<std::endl;
	return 0;
}
