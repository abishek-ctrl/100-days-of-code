// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long low=1 , high=n;
        while(low<=high){
        int mid=(low+high)/2;
        if(isBadVersion(mid)) high=mid-1;
        else low=mid+1;
        }
        return low;
    }
};