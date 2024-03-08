class Solution {
public:
    bool isPowerOfFour(int n) {
        int remainder = 0;
        if(n==1){
            return true;
        }
        if(n%4!=0){
            return false;
        }
        while(n>4){
            remainder += n%4;
            n = n/4;
        }
        if(n==4&&remainder==0){
            return true;
        }
        return false;
    }
};
