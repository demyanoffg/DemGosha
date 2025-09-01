/*Определите структуру, которую назовите "person". В структуре определите следующие элементы:
name, который имеет тип char *
age, который имеет тип int
В функции main определите переменную данной структуры и присвойте ее элементам значения. Также определите указатель на эту переменную и через этот указатель выведите значения элементов структуры.*/
#include <stdio.h>
 
struct person
{
    char *name;
    int age;
};
 
int main(void)
{
    struct person sam = {"Sam", 23};
    struct person *p_sam = &sam;
    printf("Name: %s \n", p_sam -> name);
    printf("Age: %d \n", (*p_sam).age);
    return 0;
}