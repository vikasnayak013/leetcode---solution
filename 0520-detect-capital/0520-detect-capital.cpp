class Solution {
public:
    bool detectCapitalUse(string s) {
        bool upper = true;
        bool lower = true;
        for(int i=0; i<s.size(); i++){

            if(s[i] >='A' && s[i]<='Z'){
                    lower =  false;
                }
                else{
                    upper = false;
                }
            }

            if(upper || lower){
                return true;
            }

            if(s[0] >= 'A' && s[0] <= 'Z') {
            for(int i = 1; i < s.size(); i++) {
                if(s[i] >= 'A' && s[i] <= 'Z') {
                    return false;
                }
            }
            return true;
        }

        
        return false;
    }
};