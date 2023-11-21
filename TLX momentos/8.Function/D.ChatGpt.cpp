#include <iostream>

void primeFactorization(int n) {
    for (int i = 2; i * i <= n; i++) {
        int count = 0;
        while (n % i == 0) {
            n /= i;
            count++;
        }
        if (count > 0) {
            std::cout << i;
            if (count > 1)
                std::cout << "^" << count;
            if (n > 1)
                std::cout << " x ";
        }
    }
    if (n > 1)
        std::cout << n;
}

int main() {
    int N;
    std::cin >> N;

    primeFactorization(N);

    return 0;
}
