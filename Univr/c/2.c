
#include <stdio.h>

int main() {
int n, m;
m = 1;
scanf("%d", &n);

if(n <= 0){
  printf("numero invalito");
return 0;
}

if (n <= 2){
  printf("non è primo.\n");
return 0;
}

printf("Divisori di %d: ", n);

for (int i = 1; i <= n; ++i){
  if (n % i == 0) {
            printf("%d ", i);

        if (i != 1 && i != n) {
            m = 0;
      }
    }
  }
  if (m) {
        printf("\n%d is a prime number.\n", n);
    } else {
        printf("\n%d is not a prime number.\n", n);
    }

    return 0;
}


/*
#include <stdio.h>

int main() {
    int n;

    // Input a positive integer n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Check if n is less than 2
    if (n < 2) {
        printf("N is not a prime number.\n");
        return 0;
    }

    // Initialize a flag to check if N is a prime number
    int isPrime = 1;

    // Print divisors of N
    printf("Divisors of %d: ", n);
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            printf("%d ", i);

            // Check if i is not 1 or N; if true, N is not prime
            if (i != 1 && i != n) {
                isPrime = 0;
            }
        }
    }

    // Print whether N is a prime number
    if (isPrime) {
        printf("\n%d is a prime number.\n", n);
    } else {
        printf("\n%d is not a prime number.\n", n);
    }

    return 0;
}
*/