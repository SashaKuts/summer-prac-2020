#include <stdio.h>
#include <stdlib.h>




int main(int argc, char *argv[]) {
float x, y;
printf("Vvedit koord tocky(x,y) ");
scanf("%f%f",&x ,&y);
if((x>=-4)&&(x<=4)&&(y>=-4)&&(y<=4))
{if((x*x+y*y>16))
printf("Tocka vhodyt v vydilenu obl");
else
printf("Tocka ne vhodyt v vydilenu obl");
}
else
printf("Tocka ne vhodyt v vydilenu obl");

	return 0;
}
