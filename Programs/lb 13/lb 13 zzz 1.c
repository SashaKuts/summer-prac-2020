#include <stdio.h>
#include <stdlib.h>


int main (void)
{  FILE *f; int i,n=100;

   printf ("File open ");
   f=fopen ("greting.txt","w");
    printf("Vvedit K ");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	if(i%2!=0)
	{i;
	if (f != NULL)
   {
    fprintf (f,"%d",i);
    }
   else
   {printf("Pomulka,hos ne to\n");}
   }
   
   fclose (f);
   printf (" File close ");
   return 0;
}
