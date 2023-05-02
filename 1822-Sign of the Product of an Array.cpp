class Solution {
public:
    int arraySign(vector<int>& nums) {
        int pro=1;//defining the output
        for(int v:nums){ //looping through the elements of nums
            if(v==0) return 0;//if it has a zero, then we return zero
            else if(v<0) pro*=-1;//if negative integer, then multiply by minus
        }
        return pro;
    }
};
