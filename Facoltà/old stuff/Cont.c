#include <stdio.h>

int numeripari (int n, int dispari){
    for (int i = n; i > 0; i--){
        if (i % 2 != 0){
            dispari++;
            break;
        }
    }
    printf("%d", dispari);
}
int main() {
    int n;
    int dispari = 0;
        scanf("%d", &n);
    numeripari(n, dispari);
} 





