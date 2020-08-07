#include<stdio.h>
#include<stdlib.h>
#include <time.h>


void r(int n, int q ,int b1) {
    int i,s;
    printf("\n");
    s=(b1*(1-pow(q,n)))/(1-q);
    printf("Suma geometr progresii %d ",s);
}

  
    
int main(){
    int n, q,b1;
   
printf("Vvedit k-st elementiv, krok q ta 1y element\n");
   scanf("%d %d %d",&n,&q,&b1);
   
r(n,q,b1);


    return 0;
    }
    
