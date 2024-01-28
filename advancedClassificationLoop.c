//
// Created by yanai on 1/24/24.
//
/*
int recursivePower(int, int);

int isArmstrong(int number) {
    int ogNum = number, sum = 0, nPower = 1, remainder;
    while (ogNum >= 10) {
        ogNum /= 10;
        nPower++;
    }
    ogNum = number;
    while (ogNum > 0) {
        remainder = ogNum % 10;
        sum += recursivePower(remainder, nPower);
        ogNum /= 10;
    }
    return (sum == number);
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

int isPalindrome(int number){
    int ogNum = number, reversedNum = 0, remainder;
    while (number != 0) {
        remainder = number % 10;
        reversedNum = reversedNum * 10 + remainder;
        number /= 10;
    }
    return(ogNum == reversedNum);
}
*/