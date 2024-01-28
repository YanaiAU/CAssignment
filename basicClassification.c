//
// Created by Yanai on 1/24/24.
//

int calculateFactorial(int number);

int isPrime(int number){
    if(number == 0 || number == 1){
        return number;
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}

int isStrong(int number){
    int sum = 0, og = number;
    while(number >= 10){
        sum += calculateFactorial(number % 10);
        number /= 10;
    }
    sum += calculateFactorial(number);
    return (sum == og);
}

int calculateFactorial(int number){
    int factorial = 1;
    while( number > 0 ){
        factorial *= number;
        number--;
    }
    return factorial;
}