/*Write a function to find the longest common prefix string amongst an array of strings. 
If there is no common prefix, return an empty string "".*/

class Solution {
    public String longestCommonPrefix(String[] strs) {
        String s = "";
        for(int i = 0; i<strs[0].length(); i++){ //go through letters of first word
            Boolean b = true; //all strings match
            char c = strs[0].charAt(i); //current letter of first word
            for(int j = 1; j<strs.length; j++){ //go through rest of string array
                if(i>strs[j].length()-1){ //out of index
                    b = false;
                    break;
                }
                if(strs[j].charAt(i)!=c) //not a match
                    b=false;
            }
            if(b==false) break;
            s += Character.toString(c);
        }
        return s;
    }
}
