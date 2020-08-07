#include<stdio.h>
#include<stdlib.h>
#include <time.h>


void u(int *a, int m ,int n) {
    int i, j;
    for(i=1; i<=m; i++){
    printf("\n");
    	for(j=1; j<=n; j++){
    *(a + i*m + j) = (2*rand()% 25 +16*j)/10;
    
    printf("%d ", *(a + i*m + j ));
}}}

  

int p(int *a, int m ,int n) {
    int i,l, j,sum;
    sum=1;
     for(i=1; i<=m; i++)
   	 for(j=1; j<=n; j++)
   	if(i!=j && i>j){
	sum=*(a + i*m + j)*sum;
}
  
return sum;
}
    

int p1(int *a, int m ,int n) {
    int i,l, j,sum;
    sum=0;
     for(i=1; i<=m; i++)
   	 for(j=1; j<=n; j++)
   	if(i!=j && i<j){
	sum++;
}    
return sum;
}

    
int main(){

    int *a;
    int m, n,s;
	a=(int *)malloc(m*n*sizeof(int));  
   m=4;
   n=4;
    
   //scanf("%d",&k);
  
printf("Elemetu masyvu a(m,n)\n");
   
u(a,m,n);
s=p(a,m,n);
printf("\n Dobutook el pid diagonal = %d ", s);
s=p1(a,m,n);
printf("\n K-st el nad diagonal = %d ", s);

//Func(a, n);

if (a== NULL){{
printf("Error");
return -1;
}}



free(a);

    return 0;
    }
    
