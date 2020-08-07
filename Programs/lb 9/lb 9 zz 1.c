#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    char m1[]="Programming and computing";
    char m2[100];
    int z,i,s,j,n,l,k;


printf("Vvedit tekst\n");
//gets(m1);
j=0;
n=strlen(m1);

for(i=0; i<n; i++){
printf("%c",m1[i]);
}
printf("\n\nDovjyna %d\n",n);

printf("\n");


for(i=0; i<n; i++){
if(!(m1[i]==' '))
{m2[i]=m1[i];

}

if((m2[i]=='a')||(m2[i]=='e')||(m2[i]=='y')||(m2[i]=='u')||(m2[i]=='i')||(m2[i]=='o'))
{z=m2[j];
m2[j]=m2[i];
j++;
m2[i]=z;
}
}

for(i=0; i<n; i++)
if(!(m1[i]==' '))
printf("%c",m2[i]);


	return 0;
}


