/*Напишите программу, которая проверят, равны ли две переменных. Если они равно, то выводит "equal", а если не равны, то выводит "not equal":*/
#include <stdio.h>
  
int main(void)
{
    int a = 22;
    int b = 15;
    if (a == b)
    {
        printf("equal");
    }
    else
    {
        printf("not equal");
    }
    return 0;
}