//
// Created by yanai on 1/24/24.
//

int recursivePower(int, int);

int countDigits(int);

int isArmstrongRecursive(int, int);

int recursiveReverseNum(int, int);

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

int isPalindrome(int num){
    int reversed = 0;
    reversed = recursiveReverseNum(num, 0);
    if(num == reversed) { return 1;}
    return 0;
}

int recursiveReverseNum(int num, int reversed) {
    if(num == 0) { return reversed;}
    int remainder = num % 10;
    reversed = reversed * 10 + remainder;
    return recursiveReverseNum(num/10, reversed);
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
