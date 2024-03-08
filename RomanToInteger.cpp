/*Given a roman numeral, convert it to an integer.*/

class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        for(int i = 0; i<s.length(); i++){
            int val = 0;
            switch (s.at(i)){
                case 'I':
                    val = 1;
                    break;
                case 'V':
                    val = 5;
                    if(i>0 && s.at(i-1)=='I')
                        val-=2;
                    break;
                case 'X':
                    val = 10;
                    if(i>0 && s.at(i-1)=='I')
                        val-=2;
                    break;
                case 'L':
                    val = 50;
                    if(i>0 && s.at(i-1)=='X')
                        val-=20;
                    break;
                case 'C':
                    val = 100;
                    if(i>0 && s.at(i-1)=='X')
                        val-=20;
                    break;
                case 'D':
                    val = 500;
                    if(i>0 && s.at(i-1)=='C')
                        val-=200;
                    break;
                case 'M':
                    val = 1000;
                    if(i>0 && s.at(i-1)=='C')
                        val-=200;
                    break;
                
            }
            total += val;
        }
        return total;
    }
};
