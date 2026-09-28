class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>mp;

        for(int i=0; i < s.length(); i++) {
            if(mp.find(s[i]) == mp.end()) {
                mp[s[i]] = 1;
            } else {
                mp[s[i]]++;
            }
        }

        for(int j=0; j<t.length(); j++) {
            if(mp.find(t[j]) == mp.end()) {
                return false;
            } else if (mp[t[j]] == 1)
                {
                    mp.erase(t[j]);
                } else {
                    mp[t[j]]--;
                }
        }

        return !mp.size();
    }
};
