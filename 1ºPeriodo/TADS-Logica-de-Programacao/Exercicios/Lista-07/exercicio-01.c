#include <stdio.h>

int main() {
    int n, count, i;

    printf("De qual numero deseja saber a tabuada? ");
    scanf("%d", &n);
    printf("Ate qual numero deseja saber? ");
    scanf("%d", &count);

    for (i = 1; i <= count; i++)
    {
        printf("%d x %2d = %2d\n", n, i, n*i);
    }
    return 0;
}
