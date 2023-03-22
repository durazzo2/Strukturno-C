#include <stdio.h>

int main(){
float p0,prag1,p1,prag2,p2,primanja,end;
scanf ("%f%f%f%f%f%f",&p0,&prag1,&p1,&prag2,&p2,&primanja);
if (primanja<prag1){
    end = primanja*(p0);
}
else if (primanja<prag2){
    end= (prag1*p0+(primanja-prag1)*p1);
}
else if (primanja>prag2)
{
    end = (prag1*p0+(prag2-prag1)*p1+(primanja-prag2)*p2);
}
printf ("%.2f",end/100);
return 0;}
