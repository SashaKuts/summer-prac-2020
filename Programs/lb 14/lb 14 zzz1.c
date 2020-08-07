#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    char m1[]="programing and computing";
    char m2[100];
    int z,i,s,j,n,l,max;


printf("Vvedit tekst \n");
//gets(m1);

s=0;
j=0;
n=strlen(m1);

for(i=0; i<n; i++)
printf("%c",m1[i]);	

printf("\n");


printf("\nDovjyna %d\n\n",n);

int k;
k=0;
z=0;
j=0;
for(i=0; i<n; i++){
if(m1[i]==' ')
{m2[j]=m1[i+1];
j++;}
if(i==0)
{m2[j]=m1[i];
j++;}}


for(l=0; l<j; l++){
  if((m2[l+1]<m2[l]))
{k=m2[l+1];
m2[l+1]=m2[l];
m2[l]=k;
}}


for(l=0; l<=j; l++){
for(i=0; i<n; i++){
if((m2[l]==m1[i]))
{
if((m1[i-1]==' '))
for(k=i; k<n; k++){
printf("%c",m1[k]);	
if(m1[k+1]==' ')
k=n;}
k++;
printf(" ");	
if(i==0)
for(k=i; k<n; k++){
printf("%c",m1[k]);	
if(m1[k+1]==' ')
k=n;}
k++;}}

}


	return 0;
}

