class Solution {
public:
    int bulbSwitch(int n) {
        if(n<=1) return n; //If it is less than or equal to 1, then return it
//Logic : the square root of n returns the number of integers that have an odd number of factors
        return int(sqrt(n)); //we then return the square root of n 
    }
};
