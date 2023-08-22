class Solution {
public: 
    int reverse(int x){
        
        int res = 0;
        while(x>0){
            int r = x%10; 
            if(res>INT_MAX/10 or (res == INT_MAX/10 and r>7)) return 0;
            if(res<INT_MIN/10 or (res==INT_MIN/10 and r<-8)) return 0;
            res = res * 10 + r; 
            x = x/10;
        }
        return res; 
    }
    bool isPalindrome(int x) {
        int y = reverse(x);
        if(x == y) return true;
        return false;
    }
};