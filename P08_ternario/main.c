#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("dammi un numero: ");
    int ans = 0;
    scanf("%d", &ans);

    printf("Il numero %d e' %s\n", ans, ( (ans%2) == 0 ? "pari" : "dispari" ) );

    printf("Il numero %d e' %s\n", ans, ( ans%2 ? "dispari" : "pari" ) );



    return 0;
}
