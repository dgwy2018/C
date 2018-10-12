#include <stdio.h>

int main()
{
    int i, j;
    double c;
    double sum = 0.0;
    for (i = 1; i <= 50; i++)
    {
        c = 1;
        for (j = 1; j <=i ; j++)
        {
            c *= j;
        }
        sum += c;
    }
    printf("1+2!+3!+...+20!µÄºÍÎª£º%lf\n", sum);
    // system("pause");
    return 0;
}
