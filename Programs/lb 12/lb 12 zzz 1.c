#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct Nomer{
	int p;
	struct Nomer *l;
}R;



char Spusok (R **head, char p1){
R *s = (R*)malloc(sizeof(R));
s -> p = p1;
s -> l = *head;

*head = s;}


char D(R *head){
char d,i;
head=head->l;
head=head->l;
d=head->p;
d;}

char Rf(R *head){
int i;
char r;
r=head->p;

r;}


int main(int argc, char *argv[]) {
    int i,n; 
	char p1;
    R *head = NULL;
    
	char d,r; 
printf("Vvedit k-st znakiv:");
scanf("%d",&n); 
printf("Vvedit znaky: "); 

for (i=0;i<n;i++)
{scanf("%c",&p1);
Spusok(&head,p1);
}

d=D(head);
r=Rf(head);

for (i=1;i<=n;i++){

if(!(i%2==0))
printf("\n\t%c ",head->p+1);
if(i%2==0)
printf("\n\t%c ",head->p-1);

if(i==1)
printf("\n\t%c ",head->p);
(head) = (head) -> l;

}

    while (head )  
    {
    (head) = (head) -> l;
    free(head);
    }
    printf("\n\nSpusok Vudaleno");


	return 0;
}
