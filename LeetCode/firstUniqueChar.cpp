==================================================================
Brute Force: (Easy to understand)
==================================================================
class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> mp;
        
        for(auto i : s){
            mp[i]++;
        }
        
        for(int i = 0; i<s.length(); i++){
            if(mp[s[i]] == 1) return i;
        }
        return -1;
    }
};
==================================================================
A bit Efficient: (Keep track of the updated values in the hashmap
using the pair of integers)
==================================================================
class Solution {
public:
    int firstUniqChar(string s) {
        map<char, pair<int, int>> mp;
        int res = s.size();
        for(int i = 0; i<s.length(); i++){
            mp[s[i]].first++;
            mp[s[i]].second = i;
        }
        
        for(auto it : mp){
            if(it.second.first == 1)
                res = min(res, it.second.second);
        }
        
        if(res == s.size()){
            return -1;
        }else 
            return res;
    }
};
==================================================================
Most Efficient: 
==================================================================
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> v(26,0);
		for(char c : s) v[c - 'a']++;
		for(int i = 0; i < s.length(); i++){
			if(v[s[i] - 'a'] == 1) return i;
		}
		return -1;
    }
};