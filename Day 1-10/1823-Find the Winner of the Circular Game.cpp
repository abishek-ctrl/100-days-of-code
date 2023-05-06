class Solution {
public:
    int findTheWinner(int n, int k) {
        //Defining the 'answer' and the pointer 'i'
        int ans=0,i=1;
        //while i is smaller than n
        while(i<=n){
            //we update value of 'ans' with adding the existing value with the value of k
            //we use modulus of 'i' to keep it in between the range of the given 'n'
            ans=(ans+k)%i; 
            i++; //we increment the value of 'i'
        }
    return ans+1; //we return ans+1 as the answer
    }
};
