#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
int h[3][8],i,j;
int a[8], sum;

printf("   \nMasyv H(3,8):");
for (i=0;i<3;i++)
  {a[i]=0;
  printf("\n");
for (j=0;j<8;j++)
{h[i][j]=rand()% 30 +1;
printf("%d ",h[i][j]);
a[j]=0;
}}

printf("\n\nSumy parnyh elementiv vidpov stovpciv:\n\n");
for (j=0;j<8;j++)
{
  for (i=0;i<3;i++)
  if(h[i][j]%2==0)
  a[j]=h[i][j]+a[j];

 printf("%d ",a[j]);
}

	return 0;
}
