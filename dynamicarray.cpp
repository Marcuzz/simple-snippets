#include <iostream>
#include <list>
#include <vector>

int main() {
    int n, q, lastAnswer = 0;

    std::list<int> seqList;

    std::cin >> n >> q;

    for (int i = 0; i < q; i++) {
        int query, sequence, element;
        std::cin >> query >> sequence >> element;

        const int index = ((sequence ^ 0) % 2);

        auto it = seqList.begin();
        std::advance(it, index);

        std::cout << "index 2: " << index << std::endl;
        std::cout << "iterator 2: " << *it << std::endl;

        if (query == 1) {
            seqList.insert(it, element);
            continue;
        }

        const int current = *it;
        lastAnswer = current % seqList.size();

        std::cout << lastAnswer << std::endl;
    }

    return 0;
}
