#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
int f[5][5],i,j;
int a[5], min, l;

printf("   \nMasyv F(5,5):");
for (i=0;i<5;i++)
  {a[i]=1;
  printf("\n");

for (j=0;j<5;j++)
{f[i][j]=rand()% 30 -15;
printf("%d ",f[i][j]);
if(f[i][j]>0)
a[i]=f[i][j]*a[i];
} }

printf("\n\nNovyi masyv:");
for (i=0;i<5;i++)
{
printf("%d ",a[i]);
  if(a[i]<min)
  {min=a[i];	
   l=i+1;}
}
printf("\n Minimalmnyi element %d i=%d",min,l);

	return 0;
}
