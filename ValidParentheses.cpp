class Solution {
public:
    bool isValid(string s) {
        int open1 = 0;
        int close1 = 0;
        int open2 = 0;
        int close2 = 0;
        int open3 = 0;
        int close3 = 0;
        for(int i = 0; i<s.length(); i++){
            switch(s.at(i)){
                case '(':
                    open1++;
                    break;
                case ')':
                    close1++;
                    break;
                case '[':
                    open2++;
                    break;
                case ']':
                    close2++;
                    break;
                case '{':
                    open3++;
                    break;
                case '}':
                    close3++;
                    break;
            }
        }
        return(open1==close1&&open2==close2&&open3==close3);
    }
};
