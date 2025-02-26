class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          vector<pair<int, int>> num_indices;
    for (int i = 0; i < nums.size(); ++i) {
        num_indices.push_back({nums[i], i}); 
    }
    sort(num_indices.begin(), num_indices.end());

    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int sum = num_indices[left].first + num_indices[right].first;

        if (sum == target) {
            return {num_indices[left].second, num_indices[right].second};
        } else if (sum < target) {
            ++left; // Move left pointer to the right
        } else {
            --right; // Move right pointer to the left
        }
    }

    return {};
        
    }
};