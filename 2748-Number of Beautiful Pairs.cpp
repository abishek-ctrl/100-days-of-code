class Solution {
public:
    int first(int n){
        while(n>=10){
            n/=10;
        }
        return n; 
    }
    int last(int a){
        return a%10;
    }
    int countBeautifulPairs(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int l=last(nums[j]),f=first(nums[i]);
                if(gcd(f,l)==1) count++;
            }
        }
        return count;
    }
};
