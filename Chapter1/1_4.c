#include <stdio.h>
/*
    1.4 符号常量
    #define 名字 替换文本
    其中{名字}通常为大写字母,以便后续程序中容易区分
    复写1_3的温度转换表程序
    公式: C = (5/9) x (F-32)
*/
#define MAX 300
#define MIN 0
#define STEP 20

int main()
{
    float fahr, celsius;
    
    for (fahr = MIN; fahr <= MAX; fahr += STEP)
    {
        celsius = 5 * ( fahr - 32) / 9;
        printf("%3.0f%9.1f\n", fahr, celsius);
    }
    return 0;
}