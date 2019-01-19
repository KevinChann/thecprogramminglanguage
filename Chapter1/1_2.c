#include <stdio.h>
/*
    1.2 变量与算术表达式
    打印出摄氏度与华氏度的对应表
    公式: C = (5/9) x (F-32)
    华氏度范围: 0-300
*/
int main()
{
    float fahr, celsius;  //华氏度, 摄氏度
    int min, max, step; //华氏度最大值,最小值和温度表刻度

    min = 0;   //温度表 华氏度最小值100
    max = 300; //温度表 华氏度最大值300
    step = 20; //温度表 20温度为一跳

    fahr = min;
    while ( fahr <= max )
    {
        celsius = 5 * (fahr - 32) / 9; //公式
        printf("%3.0f%10.1f\n", fahr, celsius);
        fahr += step; //华氏度的下一刻度
    }
    return 0;
}