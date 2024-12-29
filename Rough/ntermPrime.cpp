#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= num; i++) { // Check divisors up to sqrt(num)
        if (num % i == 0) return false; // If divisible, not prime
    }
    return true; // If no divisors, number is prime
}

int main() {
    int n, count = 0, current = 2;

    // Taking input from the user
    cout << "Enter the number of prime terms to print: ";
    cin >> n;

    cout << "First " << n << " prime numbers are:" << endl;

    // Loop to find and print the first n prime numbers
    while (count < n) {
        if (isPrime(current)) {
            cout << current << " ";
            count++;
        }
        current++;
    }
    cout << endl;

    return 0;
}
