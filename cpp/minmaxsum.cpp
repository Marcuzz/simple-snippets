#include <iostream>
#include <istream>
#include <vector>
#include <iterator>
#include <algorithm>

int main() {
    uint64_t sum = 0;

    uint64_t min = std::numeric_limits<uint64_t>::max();
    uint64_t max = std::numeric_limits<uint64_t>::min();

    std::vector<uint64_t> array;

    std::copy_n(std::istream_iterator<uint64_t>(std::cin), 5, std::back_inserter(array));

    for (int i = 0; i < 5; i++) {
        sum += array[i];

        if (array[i] < min) {
            min = array[i];
        }

        if (array[i] > max) {
            max = array[i];
        }
    }

    std::cout << (sum - max) << " " << (sum - min) << std::endl;

    return 0;
}
