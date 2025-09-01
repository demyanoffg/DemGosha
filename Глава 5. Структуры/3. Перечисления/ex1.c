/*Определите перечисление, которое называется "color" и которое представляет цвет. 
В этом перечислении определите три константы: RED, GREEN и BLUE.
Определите в функции main переменную этого перечисления. В конструкции switch в зависимости от значения этой переменной выведите на консоль название цвета.*/
#include <stdio.h>
 
enum color
{
    RED,
    GREEN,
    BLUE
};
int main(void)
{
    enum color myColor = GREEN;
    switch(myColor)
    {
        case RED:
            printf("red");
            break;
        case GREEN:
            printf("green");
            break;
        case BLUE:
            printf("blue");
            break;
    }
    return 0;
}