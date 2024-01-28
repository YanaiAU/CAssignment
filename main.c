#include <stdio.h>
#include "NumClass.h"

int main() {
    int num1, num2, smaller, bigger;
    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 < num2) {
        smaller = num1;
        bigger = num2;
    } else {
        smaller = num2;
        bigger = num1;
    }

    printf("The Armstrong numbers are:");
    for (int i = smaller; i <= bigger; i++) {
        if (isArmstrong(i)) {
            printf(" %d", i);
        }
    }
    printf("\nThe Palindrome numbers are:");
    for (int i = smaller; i <= bigger; i++) {
        if (isPalindrome(i)) { printf(" %d", i); }
    }
    printf("\nThe Prime numbers are:");
    for (int i = smaller; i <= bigger; i++) {
        if (isPrime(i)) { printf(" %d", i); }
    }
    printf("\nThe Strong numbers are:");
    for (int i = smaller; i <= bigger; i++) {
        if (isStrong(i)) { printf(" %d", i); }
    }

    return 0;
}
