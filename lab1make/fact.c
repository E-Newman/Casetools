/** 
  @file fact.c
  @brief Краткая программа на языке С для вычисления факториала небольших натуральных чисел
  @date 10 сентября 2018 года
  @copyright Copyright (c) 2018 Evgeny Parenchenkov <parenche@cs.karelia.ru>
  
  @function main
  Основная функция программы, получает на вход целое число, проверяет, что оно находится
  в диапазоне от 1 до 10, и, если число корректно, вычисляет его факториал
  @param[in] int argc, char**argv Параметры командной строки (не используются)
  @return 0/1 0 означает успех, 1 - ошибку
*/

#include <stdio.h>
#include "fact.h"

int main(int argc, char**argv)
{
    int num = 0;
    printf("Введите число от 1 до 10\n");
    scanf("%d", &num);
    if (num < 1 || num > 10)
    {
	printf("Плохое число!\n");
	return 1;
    } else {
	printf("Факториал от %d - %ld\n", num, fact(num));
	return 0;
    }
}
