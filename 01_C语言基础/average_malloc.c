#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i;
    double sum = 0, avg;
    double *p;

    printf("Input count of numbers: ");
    scanf("%d", &n);

    p = (double *)malloc(n * sizeof(double));
    if(p == NULL)
    {
        printf("Memory allocate failed!\n");
        return 1;
    }

    printf("Please input %d numbers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%lf", &p[i]);
        sum += p[i];
    }

    avg = sum / n;
    printf("Average = %.2f\n", avg);

    free(p);
    p = NULL;

    return 0;
}
