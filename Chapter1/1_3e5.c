#include <stdio.h>
/*
    1.3 练习1-5
    用for 逆序 打印温度转换表
    公式: C = (5/9) x (F-32)
*/
int main()
{
    float fahr, celsius;
    int min, max, step;

    min = 0;
    max = 300;
    step = 20;

    for (fahr = max; fahr >= min; fahr -= step)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3.0f%9.1f\n", fahr, celsius);
    }
    return 0;
}