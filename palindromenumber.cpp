class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return 0;
        }
        long long int reversed=0;
        long long int original=x;
        
        int digit=0;
        while (x!=0){
            digit=x%10;
            reversed=reversed*10+digit;
            x=x/10;
        }
        
        if(reversed==original){
                
            return true;
        }
        
        else{
            return false;
        }
        

    }
};