#include <iostream>
#include <sstream>

// rule: "| x - y | >= 0"
int absolute_difference(int x, int y) {
    return (x < y) ? (y - x) : (x - y);
}

int main() {
    int n;
    int x = 0;
    int y = 0;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int input = 0;

            std::cin >> input;

            if (i == j) {
                x += input;
            }

            if (i + j == (n - 1)) {
                y += input;
            }
        }
    }

    std::cout << absolute_difference(x, y) << std::endl;

    return 0;
}
