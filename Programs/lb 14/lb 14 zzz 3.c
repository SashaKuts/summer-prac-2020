#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    char m1[]="aaaa bbbbb ccc 123456789abcdef";
   int m2[100];
    int i,j,n,max,max1;

printf("Vvedit tekst \n");
//gets(m1);

n=strlen(m1);
for(i=0; i<n; i++)
printf("%c",m1[i]);	
printf("\n\nDovjyna %d\n\n",n);

for(i=0; i<n; i++)
if((m1[i]=='1')||(m1[i]=='2')||(m1[i]=='3')||(m1[i]=='4')||(m1[i]=='5')||(m1[i]=='6')||(m1[i]=='7')||(m1[i]=='8')||(m1[i]=='9')||(m1[i]=='a')||(m1[i]=='b')||(m1[i]=='c')||(m1[i]=='d')||(m1[i]=='e')||(m1[i]=='f'))
m1[i]='+';


for(i=0; i<n; i++)
printf("%c",m1[i]);	


	return 0;
}
