class Solution {
public:
    string greatestLetter(string s) {
        string ans= "";
        
           for(char ch ='Z' ; ch>='A'; ch--){
            bool lower = false;
            bool upper = false;

            for(int i=0; i<s.size(); i++){
                if(s[i] == ch){
                    upper = true;
                }
                if(s[i] == ch +32){
                    lower = true;
                }
            }
            if(upper && lower){
                    ans.push_back(ch);
                     return ans;
                }
           }
       return ans;
    }
};