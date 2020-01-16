#include <stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)b - *(int*)a );
}
int main()
{
    int i, n, a[101];
    scanf ("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    qsort(a, n, sizeof(int), cmpfunc);
    for (i = 0; i < n; i++)
        printf("%d", a[i]);
    printf ("\n");
    return 0;
}
