#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
int h[13],i,min, l;
printf("     \nMasyv H (13):\n");
for (i=0;i<13;i++)
{
h[i]=rand()% 30 +1;
printf("%d ",h[i]);
if(!(h[i]%2==0))
if(h[i]<min)
{min=h[i];
l=i+1;}
}
printf("\n\nMinimalne z neparnuh %d, i=%d",min, l);




	return 0;
}
