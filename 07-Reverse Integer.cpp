class Solution {
public:
    int reverse(int x) {
        long rev=0; //We initialise a 'long' type reverse variable 
        while(x){
          //Apply the basic integer reversing technique
            rev=rev*10+x%10; 
            x=x/10; //decrease the value of given 'x'
        }
        if(rev>INT_MAX or rev<INT_MIN) return 0; //If the reverse is greater than the 32-bit INT-MAX or if the reverse is smaller than the 32-bit INT_MIN, we return zero.
        return rev; //We return the reversed number
    }
};
