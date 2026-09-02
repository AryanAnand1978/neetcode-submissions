class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        int n = nums.size();
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            int k = target - nums[i];

            if (hash.find(k) != hash.end()) {
                int ans1 = hash[k];
                int ans2 = i;

                ans.push_back(ans1);
                ans.push_back(ans2);

                return ans;
            }
            else {
                hash[nums[i]] = i;
            }
        }

        return ans;
    }
};