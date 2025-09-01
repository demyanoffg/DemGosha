/*Даны два числа

1
2
int a = 10;
int b = 5;
Напишите программу, которая выводит их сумму и среднее арифметическое*/
#include <stdio.h>
 
int main(void){
 
  int a = 10;
  int b = 5;
  int sum = a + b;            // сумма 
  float average = sum / 2.0;  // среднее арифметическое
  printf("Sum: %d\n", sum);
  printf("Average: %f\n", average);
 
  return 0;
}