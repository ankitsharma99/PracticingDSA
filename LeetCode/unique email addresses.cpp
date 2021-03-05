class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> s;
        
        for(auto mail : emails){
            string res;
            int i;
            for(i = 0; mail[i] != '@'; i++){
                if(mail[i] == '.') continue;
                else if(mail[i] == '+') break;
                else res += mail[i];
            }
            i = mail.find('@');
            res += mail.substr(i, mail.length() - 1);
            s.insert(res);
        }
        return s.size();
    }
};