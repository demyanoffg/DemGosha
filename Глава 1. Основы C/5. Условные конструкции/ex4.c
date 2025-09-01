/*Напишите программу, которая определяет переменную типа int со значением 5. 
Используйте конструкцию switch..case для проверки, что значение переменной равно одному из значений из набора [4, 5, 6].*/
#include <stdio.h>
 
int main(void)
{
    int number = 5;
    switch(number)
    {
        case 4: 
            printf("number = 4");
            break;
         
        case 5: 
            printf("number = 5");
            break;
         
        case 6: 
            printf("number = 6");
            break;
    }
    return 0;
}