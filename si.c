#include <stdio.h>

int main()
{
    int si, p, t, r;
    printf("Enter the value of p, t, r:\n");
    scanf("%d %d %d", &p, &t, &r);
    si=(p*t*r)/100;
    printf("The simple interest is: %d",si);
}