#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {    
	char misto [64]; 
	char visk;
		} a;


int main(int argc, char *argv[]) {
	 
	 int i,n=26,j, l[100];
	 a *inf;  
	 
	 inf = (a *) calloc (n,sizeof(a));
	 for (i=0;i<n;i++)  {  
	 
	 	 printf("Misto ");
	 	 fflush(stdin);   
    	gets(inf[i].misto);
        printf("Kraina: ");
	 	   fflush(stdin);
	        scanf("%c",&inf[i].visk);   }
           j=0;  
         for (i=0;i<n;i++)
         if (inf[i].visk=='i'){
        if(j==0){
        printf("\nMista v Italii:\n");
        j++;}
		printf("\n%s\n",inf[i].misto );
	}
		

               return 0; }
