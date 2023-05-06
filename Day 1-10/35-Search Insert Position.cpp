//Approach-1 
//Using Binary Search

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //Basic Binary Search Logic
        int low=0,high=nums.size()-1; //Defining the Low and High Variables
        while(low<=high){ //Base condition
            
            int mid=low+(high-low) /2; //Defining the middle element 
            
            if(nums[mid]==target) return mid; //If mid element is the target, return index
            
            else if(nums[mid]<target) low=mid+1; //If target is greater, increment 'low'
            
            else high=mid-1; //If target is smaller, decrement 'high'
        }
        return low; //Return 'low' as it will be the index where the element needs to be inserted.
    }
};

//Approach-2
//Using std algorithms 'lower_bound' and 'distance' (had better time)
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto it=lower_bound(nums.begin(),nums.end(),target); //This returns an iterator that is greater than or equal to the target.
        return distance(nums.begin(),it); //we calculate the distance between the beginning of the range and the returned iterator.
    }
};
