class Solution {
public:
    int tribonacci(int n) {
       if (n == 0){
        return 0;
       } 
       else if ((n == 1) || (n == 2)) {
        return 1;
       } 
       else {
        
        double frterm = 0;
        double secterm = 1;
        double trterm = 1;

        for (int i = 1; i <= n; i++){
          
           double forterm = frterm + secterm + trterm ;

            frterm = secterm ;
            secterm = trterm ;
            trterm = forterm ;
            }
        return frterm;
       }
    }
};