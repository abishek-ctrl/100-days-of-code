class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxn=0,high=0;
        int n=gain.size();
        for(int i=0;i<n;i++){
            high+=gain[i];
            if(high>maxn) maxn=high;
        }
        return maxn;
    }
};