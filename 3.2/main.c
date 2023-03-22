#include <stdio.h>

int main (){
    int p1,p2,p3,c1,c2,vkp1,vkp2,vkp3,a,b,c,vkp;
    scanf ("%d%d%d%d%d%d%d%d",&p1,&c1,&p2,&c2,&p3,&a,&b,&c);
    if (a>c2){
        vkp1=p3*a;
    }
    else if (a>c1){
        vkp1=p2*a;
    }
    else {
        vkp1=p1*a;
    }
    if (b>c2){
        vkp2=p3*b;
    }
    else if (b>c1){
        vkp2=p2*b;
    }
    else {
        vkp2=p1*b;
    }
    if (c>c2){
        vkp3=p3*c;
    }
    else if (c>c1){
        vkp3=p2*c;
    }
    else (vkp3=p1*c);

    vkp=vkp1+vkp2+vkp3;

   printf ("%d",vkp);

return 0;}
