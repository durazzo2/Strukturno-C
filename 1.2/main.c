#include <stdio.h>

int main (){
    int broj,even,odd;
    scanf ("%d",&broj);

odd = (broj/10)%10 + (broj/1000)%10;
 even = (broj%10)+(broj/100)%10+(broj/10000)%10;
 printf ("Sumata na cifrite na parnite pozicii e %d\n",even);
 printf ("Sumata na cifrite na neparnite pozicii e %d", odd);


return 0;}
