#include<stdio.h>

void fun(int *p)
{
  int q = 40;
  p = &q;
}
int main()
{
  int data = 27;
  int *ptr = &data;
  printf("%d\n",&ptr);
  fun(ptr);
  printf("%d", *ptr);
  return 0;
}