#include <stdio.h>
#include <math.h>

int main(void)
{
    long int num = 612852475143;
    long int largest_prime_factor = 1;
    
    while (num % 2 == 0) {
        largest_prime_factor = 2;
        num /= 2;
    }
    
    for (long int i = 3; i <= sqrt(num); i += 2) {
        while (num % i == 0) {
            largest_prime_factor = i;
            num /= i;
        }
    }
    
    if (num > 2) {
        largest_prime_factor = num;
    }
    
    printf("%ld\n", largest_prime_factor);
    
    return 0;
}
