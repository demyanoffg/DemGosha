/*Напишите программу, в которой пользователь вводит в консоли название файла, 
а программа создает файл с введенным именем и выводит на консоль результат.*/
#include <stdio.h>
 
int main(void)
{
    FILE *fp;
    char fName[20];   // для ввода имени файла
    printf("Enter file name:");
    scanf("%20s",fName);
    // создаем/открываем файл
    fp=fopen(fName,"w");
    // проверяем создание файла
    if(!fp)
    {
        printf("Error!!!");
        return 1;
    }
    printf("File created successfully.");
    fclose(fp);
    return 0;
}