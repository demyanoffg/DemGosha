/*апишите программу, которая c помощью циклов for и while выводит на консоль пять раз строку "Hello Work".*/
#include <stdio.h>
  
int main(void)
{
    for(int i=0; i < 5; i++)
    {
        printf("Hello Work\n");
    }
 
    int count = 0;
    while(count < 5)
    {
        printf("Hello Work\n");
        count++;
    }
     
    return 0;
}