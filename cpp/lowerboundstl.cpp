#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main() {
    int n, q;
    std::vector<int> v;

    std::cin >> n;
    std::copy_n(std::istream_iterator<int>(std::cin), n, std::back_inserter(v));
    std::cin >> q;

    for (int i = 0; i < q; i++) {
        int number;
        std::cin >> number;

        auto low = std::lower_bound(v.begin(), v.end(), number);
        int result = low - v.begin() + 1;
        if (v[low - v.begin()] == number) {
            std::cout << "Yes ";
        } else {
            std::cout << "No ";
        }

        std::cout << result << std::endl;
    }

    return 0;
}
