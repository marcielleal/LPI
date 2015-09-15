#include "sorts.cpp"
#include "utilitarios.cpp"
void quick_CLR (int v[], int p, int r)
{
   int c, i, j, t;
   if (p < r) {      
      c = v[(p+r)/2];
      i = p-1, j = r+1;
      while (1) {
         do --j; while (v[j] > c);
         do ++i; while (v[i] < c);
         if (i >= j) break;
         t = v[i], v[i] = v[j], v[j] = t;
      }
      quick_CLR (v, p, j);
      quick_CLR (v, j+1, r);
   }
}
void quick_aux(int v[],int e,int d){
	if(e<d){
		int i,j;
		int pivo=v[d];
		
		for(i=e-1,j=e;i<=j&&j<=d;j++){
			if(v[j]<pivo){
				std::swap(v[i+1],v[j]);
				i++;
			}
		}
		quick_aux(v,e,i);
		quick_aux(v,i+1,d);
	}
}
int main(void){
	int n=7;
	int v[]={12,7,22,30,40,6,10};
	
	quick_aux(v,0,n-1);
	imprime(v,n);
	
	return 0;
}
	
