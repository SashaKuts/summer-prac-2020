#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {    
	char name [64];
	char misto [64]; 
	char vyl [64]; 
	int nomer ; 
	int vik; 
	char visk;
	} a;


int main(int argc, char *argv[]) {
	 
	 int i,n=3,n1, n2, k,l,min;
	 a *inf;  
	 float sum=0;
	 inf = (a *) calloc (n,sizeof(a));
	 for (i=0;i<n;i++)  {  
	 
	 printf("Im'a: ");
	 	fflush(stdin);
	 	gets(inf[i].name);
	 
    	 printf("Misto: ");
	 	 fflush(stdin);   
    	  gets(inf[i].misto);
	     
		 printf("Vyl: ");
	 	 fflush(stdin);   
		  gets(inf[i].vyl);
	     
	 printf("Nomer byd :");
     fflush(stdin);   
		  scanf("%d", &inf[i].nomer);
	     
	    
		  printf("Vik ");
	      scanf("%d",&inf[i].vik);
	
	    printf("Viyskovozobovuazanyu(t/f)");
		    fflush(stdin);
	        scanf("%c",&inf[i].visk);   }
             
       	min=60;
	    for (i=0;i<n;i++)
         if (inf[i].visk=='t')
	     if (inf[i].vik<min){
        min=inf[i].vik;
		l=i;
		k++;
		}
        printf("Z1 Naimolodshyi %s  = %d year",inf[l].name, min);
       
       if(k>0){
       printf("\n\nZ2 Viiskovozobovz:\n");
	   for (i=0;i<n;i++)
       if (inf[i].visk=='t')
	   printf("%s %s %s\n",inf[i].name, inf[i].misto,inf[i].vyl);
       }
       if(k!=n){
      
       printf("\nVvedit diapazon bydunkiv\n");
       scanf("%d%d",&n1,&n2);
       printf("Z3 NeViiskovozobovz:\n");
	   for (i=0;i<n;i++)
       if((inf[i].nomer>=n1)&&(inf[i].nomer<=n2))
       if (inf[i].visk=='f')
       printf("%s %s %s %d\n",inf[i].name, inf[i].misto,inf[i].vyl, inf[i].nomer);
       }

int max;  
l=0;
        	max=0;
	    for (i=0;i<n;i++)
         if (inf[i].visk=='t')
	     if (inf[i].vik>max){
        max=inf[i].vik;
		l=i;
		}
		if(max!=0)
        printf("\nZ4 Naystarshuy Viyskovozobovyazanyu %s  = %d year",inf[l].name, max);
       	   
       	l=0;   
	   	max=0;
	    for (i=0;i<n;i++)
         if (inf[i].visk=='f')
	     if (inf[i].vik>max){
        max=inf[i].vik;
		l=i;
		}
        if(max!=0)
		printf("\nZ4 Naystarshuy Neviyskovozobovyazanyu %s  = %d year",inf[l].name, max);
       	
	   
        return 0; }
