class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int i=0;
        int n = s.length();
        int open = 0;
        int close = 0;
        int start = 0;
        while(i<n){
            if(s[i]=='(') open++;
            else if(s[i]==')') close++;
            
            if(open==close){
                string sub = s.substr(start+1,open+close-2);
                open=0;
                close=0;
                start = i+1;
                result += sub;
            }
            
            i++;
        }
        return result;
    }
};