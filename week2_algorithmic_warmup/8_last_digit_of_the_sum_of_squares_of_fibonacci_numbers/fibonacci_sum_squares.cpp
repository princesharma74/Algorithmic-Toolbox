#include <iostream>

int fibonacci_sum_squares_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current)%10;
        sum = (sum + (current * current)%10)%10;
    }

    return sum % 10;
}

int main() {
    long long n = 0;
    std::cin >> n;
    n%=60; 
    std::cout << fibonacci_sum_squares_naive(n);
}
