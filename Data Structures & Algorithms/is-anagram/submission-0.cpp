class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        map<char,int> freq;


        for(char c:s){
            freq[c]++;
        }
        for(char c:t){
            freq[c]--;
            if(freq[c]<0){
                return false;
            }
        }

        return true;
        

    }
};
