#include <stdio.h>
#include <math.h>

int main() {
    for (long long int i=sqrt(600851475143); i>1; i--) {
        if (600851475143 % i == 0) {
            int is_prime = 1;
            for (long long int j=2; j*j<=i; j++) {
                if (i % j == 0) {
                    is_prime = 0;
                    break;
                }
            }
            if (is_prime) {
                printf("%lld\n", i);
                break;
            }
            
        }
    }
    return 0;
}