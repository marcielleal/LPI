#include <iostream>
#include <math.h>
void imprime(int a){
std::cout<<a<<"\n";
}
/*--------------------Exercicio 2 --------------------*/
long int DEC_BIN(long int num){
long int quoc=num/2;
if(num==1) return 1;
return (num%2+10*DEC_BIN(quoc));
}
/*--------------------Fim de 2 --------------------*/
/*--------------------Execicio 4--------------------*/
//4a
float somaDeInversos(float n){
if(n==1) return 1;
return (1/n)+(somaDeInversos(n-1));
}
//4b
float somatorio(float n){
if(n==1) return 0.5;
return ((pow(n,2)+1)/(n+3))+(somaDeInversos(n-1));
}
/*--------------------Fim de 4--------------------*/
/*--------------------Execicio 5--------------------*/
float somaDeInversosI(float n){
float soma=0.0;
for(i=1;i<=n;i++){
soma+=1/i;
}return soma;
}
/*--------------------Fim de 5--------------------*/
/*--------------------Execicio 8--------------------*/
int mudaCor(I[][],
int main(void){
long int x;
while(1){
std::cin>>x;
std::cout<<DEC_BIN(x)<<"\n";
}
return 0;
}
