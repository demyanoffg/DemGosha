/*Измените предыдущую программу таким образом, чтобы до функции main был определен только прототип функции hello_world, а после функции main располагалось ее определение. Определите и вызове функцию, которую назовите hello_world 
и которая будет выводить на консоль строку "Hello World!".*/
#include <stdio.h>
 
void hello_world(void); 
 
int main(void)
{
    hello_world();
    return 0;
}
 
void hello_world()
{
    printf("Hello World!\n");
}