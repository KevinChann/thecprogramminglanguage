#include <stdio.h>
/*
    1.2 练习1-4
    将摄氏温度转换为对应华氏温度
    摄氏温度范围: 0-300
    原华氏度转摄氏度公式: C = (5/9)x(F-32)
*/
int main()
{
    float fahr, celsius;
    int max, min, step;
    
    max = 300;
    min = 0;
    step = 20;

    celsius = min;
    while(celsius <= max)
    {
        fahr = celsius * 9 / 5 + 32;
        printf("%3.0f%7.1f\n", celsius, fahr);
        celsius += step;
    }
    return 0;
}