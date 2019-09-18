#include <stdio.h>
int main()
{
  int c, n;
  while(scanf("%d", &n)!=EOF){
  int fac = 1;
  for (c = 1; c <= n; c++)
  fac = fac * c;
  printf("%d\n",fac);
  }
  return 0;
}
