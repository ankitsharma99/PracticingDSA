class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> umap;
        
        umap = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int val = 0;

        for(int i = 0; i<s.size(); i++){
            if(umap[s[i]] > umap[s[i+1]]){
                val += umap[s[i]];
               
            }else{
                 val -= umap[s[i]];
            }
        }
   

    
    return val;    
    }
};