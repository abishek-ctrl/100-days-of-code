class Solution {
public:
    int maxVowels(string s, int k) {
        //defining the count and maxcount to note the vowel occurences
        int count=0;
        int maxcount=0;
        
        //defining a set to store the vowels 
        unordered_set<char> vowels={'a','e','i','o','u'};
        //looping through the first substring of length 'k'
        for(int i=0;i<k;i++){
            //check if it has vowels
            if(vowels.count(s[i])) count++; //if yes, increment count 
        }
        maxcount=count; //update maxcount to the count value
        
        //start from the 'k' index
        for(int i=k;i<s.size();i++){ 
            if(vowels.count(s[i-k])) //check if the left element from 'k' is a vowel 
                count--; //if yes, reduce count, as we dont include it in the next substring
            if(vowels.count(s[i])) //check if the right most element from 'i-k' is a vowel or not
                count++; // if yes, we increment count, as we include it in next substring
            
            maxcount=max(count,maxcount); //update the maxcount depending on the count value
        }
        
        return maxcount;
    }
};
