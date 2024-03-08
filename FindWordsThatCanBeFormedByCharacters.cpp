/*You are given an array of strings words and a string chars.
A string is good if it can be formed by characters from chars (each character can only be used once).
Return the sum of lengths of all good strings in words./*

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int sum = 0;
        vector<int> freq(26); //represents letters in alphabet, frequency of each in chars
        for(int i = 0; i<chars.length(); i++){
            freq.at(chars.at(i) -'a')++;
        }
        for(auto it = words.begin(); it!= words.end(); it++){ //checking a word
            bool good = true;
            vector<int> freqCopy = freq;
            for(int i = 0; i<it->length(); i++){ //checking each char in word
                freqCopy.at(it->at(i)-'a')--;
                if(freqCopy.at(it->at(i)-'a')<0){ //more freq of a character in words than chars
                    good = false;
                }
            }
            if(good){
                sum += it->length();
            }
        }
        return sum;
    }

};
