#include<stdio.h>
#include<stdlib.h>
#include <time.h>


void u(int *y, int k) {
    int i;
    for(i = 0; i < k; i++){
    *(y + i) = rand()% 25+1 -1*k;
    printf("%d ", *(y + i));
}}

void p(int *y, int k) {
    int i,sumv,kv,kd;
    sumv=0;
    for(i = 0; i < k; i++){
    if(*(y + i)<0){
    sumv=*(y + i)+sumv;
    kv++;}
    if(*(y + i)>0)
    kd++;}
    printf("\n\nK-st videmnyh %d, suma ih = %d\n",kv, sumv);
    printf("K-st dodatnih %d\n",kd);
    
} 

    
int main(){

    int *y;
    int k;
    y=(int *)malloc(k*sizeof(int)); 
   //scanf("%d",&k);
   k=12;
     printf("Elemetu masyvu y(k)\n");
   
   u(y, k);
p(y, k);



if (y== NULL){{
printf("Error");
return -1;
}}



free(y);

    return 0;
    }
