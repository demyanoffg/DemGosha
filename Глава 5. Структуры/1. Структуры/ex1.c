/*Определите структуру, которую назовите "employee". В структуре определите следующие элементы:
name, который имеет тип char *
age, который имеет тип int
salary, который имеет тип double
В функции main определите переменную данной структуры, присвойте ее элементам значения и выведите их на экран таким образом, чтобы консольный вывод программы был следующим:*/
#include <stdio.h>
 
struct employee
{
    char *name;
    int age;
    double salary;
};
int main(void)
{
    struct employee sam = {"Sam", 23, 4500};
    printf("Name: %s\n", sam.name);
    printf("Age: %d\n", sam.age);
    printf("Salary: %.2f\n", sam.salary);
    return 0;
}