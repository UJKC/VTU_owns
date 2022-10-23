#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, res;
    char op;
    printf("Enter the expression:\n");
    scanf("%d %c %d",&a, &op, &b);
    switch (op)
    {
        case '+': res=a+b;
        break;
        case '-': res=a-b;
        break;
        case '*': res=a*b;
        break;
        case '/': if(b!=0)
                    res=a/b;
                    else
                    printf("Error");
                    break;
        case '%': res=a%b;
        break;
        default : printf("Invalid statement");
        exit(0);
    }
    printf("%d %c %d = %d", a, op, b, res);
}
