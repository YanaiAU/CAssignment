//
// Created by yanai on 1/24/24.
//

int recursivePower(int, int);

int countDigits(int);

int isArmstrongRecursive(int, int);

int isArmstrong(int number) {
    int digits = countDigits(number);
    return (isArmstrongRecursive(number ,digits) == number);
}

int isArmstrongRecursive(int number, int digits) {
    if (number == 0)
        return 0;
    else
        return recursivePower(number % 10, digits) + isArmstrongRecursive(number / 10, digits);
}

int countDigits(int number) {
    int digits = 1;
    while( number >= 10) {
        number /= 10;
        digits++;
    }
    return digits;
}

int isPalindrome(int number){
    int x = number;
    int counter = 0;
    if (number < 10) { return 1;}
    while ( x >= 10 ) { x /= 10, counter++; }
    int y = number % 10;
    if ( x != y ) { return 0;}
    if ( counter  == 2 ) { return 1; }
    number = number - (x * recursivePower(10, counter) );
    number %= 10;
    return isPalindrome(number);
}

int recursivePower(int number, int nPower) {
    if (nPower < 0) {
        return 0;
    }
    if (nPower == 0)
        return 1;
    else if (nPower == 1)
        return number;
    else
        return number * recursivePower(number, nPower - 1);
}
