#include <iostream>

int main() {
    int n = 0;

    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        std::string spaces(n - i, ' ');
        std::string pyramid(i, '#');

        std::cout << spaces << pyramid << std::endl;
    }

    return 0;
}
