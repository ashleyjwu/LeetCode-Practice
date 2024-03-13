/*Given an integer x, return true if x is a palindrome, and false otherwise.*/

class Solution {
    public boolean isPalindrome(int x) {
        String s = String.valueOf(x);
        if(x<0){ //if negative, it cannot be a palindrome
            return false;
        }
        for(int i = 0; i<s.length()/2; i++){
            if (s.charAt(i)!=s.charAt(s.length()-i-1))
                return false;
        }
        return true;
    }
}
