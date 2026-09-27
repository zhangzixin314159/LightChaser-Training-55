#include <stdio.h>

int main(void)
{
    double a, b;
    char op;
    printf("请输入表达式（例：3 + 5）：");
    scanf("%lf %c %lf", &a, &op, &b);

    switch(op)
    {
        case '+':
            printf("结果 = %.2f\n", a + b);
            break;
        case '-':
            printf("结果 = %.2f\n", a - b);
            break;
        case '*':
            printf("结果 = %.2f\n", a * b);
            break;
        case '/':
            if(b == 0)
            {
                printf("错误：除数不能为0！\n");
            }
            else
            {
                printf("结果 = %.2f\n", a / b);
            }
            break;
        default:
            printf("不支持该运算符\n");
    }
    return 0;
}
