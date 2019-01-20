#include <stdio.h>
/*
    1.3 for语句
    接着1.2的华氏度摄氏度对应表,用for代替while编写
    公式: C = (5/9) x (F-32)
*/
int main()
{
    float fahr, celsius;
    int max, min, step;

    max = 300;
    min = 0;
    step = 20;

    for(fahr = min; fahr <= max; fahr = fahr + 20)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3.0f%9.1f\n", fahr, celsius);
    }
    return 0;
}