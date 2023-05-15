class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //Using a unordered_set to store the numbers 
        unordered_set<int> freq;
        for(int num:nums){ //looping through the nums array 
            if(freq.count(num)>0) //using count to check if the element is already there
                return true;     //return true , as there is a duplicate
            else freq.insert(num); //if it doesnt exist , insert it into the freq set
        }
        return false;   //if all elements are added, then return false(no duplicates)
    }
};
