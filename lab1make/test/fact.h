/**
  @file fact.h
  @brief Реализация функции вычисления факториала
  @function fact
  Вычисляет факториал от целого числа
  @param[in] num  Начальное число
  @return ret Результат вычисления факториала
*/
long fact(int num)
{
    int i = 1;
    long ret = 1;
    
    for(i = 1; i <= num; i++)
    {
		ret *= i;
    }

    return ret;
}
