class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
            int m = x;
            double reverseNum = 0;

            while (m > 0){
                int d = m%10;

                reverseNum = reverseNum*10+d ;

                m = m/10;
            }
        if (reverseNum == x){
            return true;
        } 
        else {
            return false;
        }
    }
};