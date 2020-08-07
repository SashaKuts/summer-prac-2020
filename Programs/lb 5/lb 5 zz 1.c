#include <stdio.h>
#include <stdlib.h>
#include <math.h>
             
void sl(int *a, int n) {  //функція знаходження сліду матриці 
   int i, j;
    int sum=0;
    for (i =1; i <= n; i++)
    for (j =1; j <= n; j++)
    if(i==j)
sum=sum+*(a + i*n + j); 
printf("\nSum %d\n",sum);

    
	for (i =1; i <= n; i++){
    printf("\n");
    for (j =1; j <= n; j++){
    if((*(a + i*n + j))%2==0)
	*(a + i*n + j)=sum;     
	printf("%d ",*(a+i*n+j));  }}
}

int main (){
    int *c;
    int i,j,n,l;
printf("Vvedit n ");
    scanf("%d", &n);
    c =(int *)malloc(n*n*sizeof(int));  // виділяю пам'ять на масив


for(i=1; i<=n; i++)
{printf("\n");

for (j=1; j<=n; j++){
scanf("%d ",&*(c+i*n+j));}}
//printf("%d ",    *(c + i*n + j));}}



if (c == NULL){{
printf("Error");
return -1;
}}

sl(c,n);

free(c);
return 0;
}




