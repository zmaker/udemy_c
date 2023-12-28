#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("dammi un numero: ");
    int ans = 0;
    scanf("%d", &ans);

    printf("dammi il divisore: ");
    int div = 0;
    scanf("%d", &div);

    if (div) {
      printf("%d\n", ans/div);
    } else {
      printf("div 0\n");
    }

    return 0;
}
