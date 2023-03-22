#include <stdio.h>
int main(){
    int a,b,zbir=0;
    scanf ("%d%d",&a,&b);
    for (int i=a;i<b;i++){
        if (i%3==0){
        zbir+=i;}

        }
    printf ("%d",zbir);
return 0;}
