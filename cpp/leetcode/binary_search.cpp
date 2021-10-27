class Solution {
public:
    int static search(const std::vector<int> &nums, const int &target) {
        int min = 0;
        int max = (int) nums.size() - 1;
        int guess = 0;

        while (min <= max) {
            guess = (min + max) / 2;

            // We found it!
            if (nums[guess] == target) {
                return guess;
            }

            // Guess is too low
            if (nums[guess] < target) {
                min = guess + 1;
            }

            // Guess is too high
            if (nums[guess] > target) {
                max = guess - 1;
            }
        }

        return -1;
    }
};
