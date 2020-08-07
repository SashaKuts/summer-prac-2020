#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
char  naz[100],re[50],kr[50];
int r,v,d;
}a;



void p (a inform){
printf(" Film \nNazva %s \nRezuser %s \nKraina %s \nRik %d \nVartist  %d\nDohid %d \n", inform.naz, inform.re,inform.kr, inform.r, inform.v, inform.d);
printf("\n");
};

void p1 (a inform){
printf("%s %s %s\n",inform.naz,inform.re,inform.kr);
printf("\n");
};

int main(){
int i,n,l,j=0, y;
int max=0,m, b; 
char t[100];

a *inform;

printf("Vvedit Kilkist filmiv ");
scanf("%d",&n);

inform = (a *) calloc (n,sizeof(a));

for (i=0; i<n; i++){
        printf("Nazva ");
          fflush(stdin);
        gets(inform[i].naz);
         printf("Rezuser ");
          gets(inform[i].re);
         printf("Kraina ");
         gets(inform[i].kr);
        printf("Rik ");
        scanf("%d", &inform[i].r);
        printf("Vartist ");
       scanf("%d", &inform[i].v);
        printf("Dohid ");
        scanf("%d",&inform[i].d);
		
		}



l=0;
j=0;
for (i=0; i<n;i++)
{
if(inform[i].v>inform[i].d){
l++;
if(l==1)
{printf("\nFilm v ubytku \n");
l++;}

p1(inform[i]);
}
}
max=0;
m=0;

for (i=0; i<n;i++){
m=inform[i].d;
for (j=i+1; j<=n;j++){
if((inform[i].re==inform[j].re)&&!(inform[i].naz==inform[j].naz)&&!(inform[i].kr==inform[j].kr)&&!(inform[i].r==inform[j].r)&&!(inform[i].v==inform[j].v)&&!(inform[i].d==inform[j].d))
m=m+inform[j].d;}
if(m>max){
max=m;
l=i;;
}}

printf("\nNaibilshyi dohid %s  = %d\n",inform[l].re,max);


return 0;
}

