#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> hash; // val -> index
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (hash.count(complement)) {
            return {hash[complement], i};
        }
        hash[nums[i]] = i;
    }
    return {};
}