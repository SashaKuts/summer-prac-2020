#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    char m1[]="Kutsyshyn Oleksandr Muhailovych";
    char m2[100];
    int z,i,s,j,n,l,max;


printf("Vvedit tekst ");
//gets(m1);

s=0;
j=0;
n=strlen(m1);

printf("\n");

for(i=0; i<n; i++){
if(m1[i]=='a')
z++;
printf("%c",m1[i]);
}
printf("\n\nDovjyna %d",n);
printf("\nK-st liter a - %d\n\n",z);



z=0;
for(i=0; i<n; i++){
if(m1[i]==' ')
z++;
if(z==1){
if ((m1[i]>96) && (m1[i]<123))
{m1[i]=m1[i]-32;
printf("%c",m1[i]);
 }
else
printf("%c",m1[i]);
}
if(z==2)
l++;
}
printf("\nk-st bukv = %d",l-1);
	return 0;
}


