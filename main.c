#include <stdio.h>
#include <stdlib.h>

void main()
{
  int a,b,c;
  a=1+3;
  b=2;
  c=a+b;
  printf("%d\n",c);

  int i,j,k;
  printf("输入两个数求和：");
  scanf("%d %d",&i,&j);
  k=i+j;
  printf("%d\n",k);

  a=a+10;
  a+=10;

  a=a+1;
  a++;
  ++a;

  a--;
  --a;



}
