#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
int r[10],i, max,max1,max2;
float sr;
max=0;
max1=0;
max2=0;

printf("     \nMasyv R (10):\n");
for (i=0;i<10;i++)
{
r[i]=rand()% 30 +1;
printf("%d ",r[i]);

if(r[i]>max)
max=r[i];
if((r[i]>max1)&&!(r[i]==max))
max1=r[i];

}

for (i=0;i<10;i++)
{
if((r[i]>max2)&&!(r[i]==max1)&&!(r[i]==max))
max2=r[i];
}
sr=sqrt((max*max+max1*max1+max2*max2)/3);
printf("\nSeredne Kvadratychne: %0.1f",sr );


	return 0;
}
