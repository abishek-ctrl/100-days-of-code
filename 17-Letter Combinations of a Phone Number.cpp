class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        
        //checking if the given 'given' string is empty, then return a empty vector
        if(digits.empty()) return result;
        
        //defining the map for the characters(digits) to their string(alphabets)
        unordered_map<char,string> digitmap={
            {'2',"abc"},
            {'3',"def"},
            {'4',"ghi"},
            {'5',"jkl"},
            {'6',"mno"},
            {'7',"pqrs"},
            {'8',"tuv"},
            {'9',"wxyz"}
        };
        string combo; 
        generatecombo(digits,0,combo,result,digitmap); //calling the recursive function to generate combinations of the digits
        return result; //returning the result
    }
    
    //defining the function that can generate the combinations of the digits
    void generatecombo(const string& digits,int index,string& combo, vector<string>& result,unordered_map<char,string>& digitmap){
        //checking if the index reached the length of the string
        if(index==digits.size()){ //which indicated the whole combinations have been added to 'combo' 
            result.push_back(combo); //so, we push the combinations to the result vector
            return;
        }
        char digit=digits[index]; //digit : takes a single digit at a time
        string letters=digitmap[digit]; //takes all the letters linked to the digit 
        
        for(char letter : letters){ //taking one letter at a time
            combo.push_back(letter); //pushing the letter to the combinations vector 
            generatecombo(digits,index+1,combo,result,digitmap); //calling the recursive function to move on to the next digit
            combo.pop_back();//after the above letter combinations are pushed , we remove the letter
        }
    }
};
