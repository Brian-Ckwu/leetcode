// Hash Table: Time = O(n), Space = O(n)

class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++) {
      int num = nums[i];
      if (m.find(num) != m.end()) {
        ans.push_back(m.find(num)->second);
        ans.push_back(i);
      } else {
        m[target - num] = i;
      }
    }
    return ans;
  }
};