#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int t[6][6],i,j, max, x,y,l;
x=0; y=0;
printf("   \nMasyv T(6,6):");
for (i=0;i<6;i++)
  {
  printf("\n");
for (j=0;j<6;j++)
{t[i][j]=rand()% 30 -15;
printf("%d ",t[i][j]);

if(i==j)
{
 if((t[i][j]<0)&&!(l==1))
  { max=t[i][j];
 l=1; x=i+1; y=j+1;}
 else
 if(t[i][j]<0)
 if(t[i][j]>max)
 {max=t[i][j];
 x=i+1; y=j+1;}
 } }}
printf("\n\nMax element sered videmnuh diahonaly %d  i,j= %d %d",max,x,y);

	return 0;
}
