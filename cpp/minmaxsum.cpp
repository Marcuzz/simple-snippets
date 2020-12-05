#include <iostream>
#include <istream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>

int main() {
    const uint8_t mxArrSz = 5;
    std::vector<uint64_t> arr;
    std::copy_n(std::istream_iterator<uint64_t>(std::cin), mxArrSz, std::back_inserter(arr));

    const auto min = std::min_element(arr.begin(), arr.end());
    const auto max = std::max_element(arr.begin(), arr.end());
    const uint64_t total = std::accumulate(arr.begin(), arr.end(), 0LL);

    std::cout << total - *max << " " << total - *min << std::endl;

    return 0;
}
