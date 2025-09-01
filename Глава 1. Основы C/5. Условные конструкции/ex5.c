/*Напишите программу, которая определяет три переменных 
типа int и выводит на консоль переменную с наибольшим значением*/
#include <stdio.h>
 
int main(void)
{
  int a = 10, b = 15, c = 12;
  int max = c; 
 
  if(a>b && a>c)
    max=a;
  else if(b>a && b>c)
    max=b;
 
  printf("Max: %d",max);
  return 0;
}