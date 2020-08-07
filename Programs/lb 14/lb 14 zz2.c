#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    char m1[]="aaaa bbbbb ccc dddddd";
   int m2[100];
    int i,j,n,max,max1;

printf("Vvedit tekst \n");
//gets(m1);

n=strlen(m1);
for(i=0; i<n; i++)
printf("%c",m1[i]);	
printf("\n\nDovjyna %d\n\n",n);

int d,l,k;
max=0;
max1=0;
j=0;
for(i=0; i<n; i++){
d=1;   
if(i==0)
{m2[j]=i;
j++;
for(l=i; l<n; l++){
if(m1[l+1]!=' ')
d++;
else
{l=n;}}
if(d%2!=0)
j--;}

if(m1[i]==' ')
{m2[j]=i+1;
j++;
for(l=i+1; l<n; l++){
if(m1[l+1]!=' ')
d++;
else
{l=n;}}
if(d%2!=0)
j--;}

if(d%2==0)
if(d>max)
{max=d;
k=m2[j-1];
}
}



for(i=k; i<n; i++){
printf("%c",m1[i]);	
if((m1[i+1]==' '))
i=n;}


	return 0;
}

