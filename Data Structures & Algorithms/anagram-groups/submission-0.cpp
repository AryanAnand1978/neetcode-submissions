class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (string s : strs) {
            int freq[26] = {};

            // Count characters
            for (char c : s) {
                freq[c - 'a']++;
            }

            // Create unique key from frequency
            string key = "";

            for (int i = 0; i < 26; i++) {
                key += to_string(freq[i]) + "#";
            }

            // Put string into its anagram group
            mp[key].push_back(s);
        }

        // Collect all groups
        vector<vector<string>> ans;

        for (auto& p : mp) {
            ans.push_back(p.second);
        }

        return ans;
    }
};