#include <iostream>
#include <cmath>


// Теорема Уилсона
// Если ((n-1)! + 1) % n == 0, то n является простым, а в противном случае оно не является простым

bool isPrimeNumber(int number) {
    int coefficient = number - 1;
    int factorial = 1;

    for (int i = 1; i <= coefficient; i++) {
        factorial *= i;
    }

    return (factorial + 1) % number == 0;

}

int main() {
    int number;

    std::cout << "Enter your number: ";
    std::cin >> number;

    if (isPrimeNumber(number)) {
        std::cout << number << " is prime number";
    } else {
        std::cout << number << " is not prime";
    }

    return 0;
}
