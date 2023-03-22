#include <stdio.h>

int main() {
    float a,b,c;
    scanf ("%f%f%f",&a,&b,&c);
  if (a<b&&a<c)
  printf ("1");
  if (b<a&&b<c)
  printf ("2");
  if (c<a&&c<b)
  printf ("3");
   if (a==b&&b<c)
  printf ("12");
   if (b==c&&b<a)
  printf ("23");
   if (a==c&&a<b)
  printf ("13");
  if (a==b&&b==c)
  printf ("123");

return 0;

}
