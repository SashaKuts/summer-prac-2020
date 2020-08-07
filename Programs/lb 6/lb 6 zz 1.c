#include <stdio.h>
#include <stdlib.h>
#include <math.h>
             


int main (){
    int *a,*b,*c;;
    int i,j,n,l,k,li,min;
  
   
    a=(int *)malloc(k*n*sizeof(int));  // вид≥л€ю пам'€ть на масив
b =(int *)malloc(k*sizeof(int));  // вид≥л€ю пам'€ть на масив
printf("\nVvedit k-st mist ");
k=6; 
printf("\nVvedit k-st kandydativ ");
n=5;
printf("\nNas/pynkt       Kandudat");
printf("\n          a  b  c  d  e ");
for(i=1; i<=k; i++){
printf("\n   N%d     ",i);
for (j=1; j<=n; j++){
*(a + i*n + j)=rand()% 10*25 + 50;
printf("%d ", *(a + i*n + j));

if(!(li==1)){
li=1;
min=*(a + 1*n + 2);
}

if(j==2)
if(min>*(a + i*n + j))
{min=*(a + i*n + j);
l=i;}


}}

printf("\n2 kandydat nabrav min k-st %d v n/p %d",min, l);

if (a== NULL){{
printf("Error");
return -1;
}}



free(a);
return 0;
}






