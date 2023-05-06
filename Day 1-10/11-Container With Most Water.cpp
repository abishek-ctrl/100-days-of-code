class Solution {
public:
    int maxArea(vector<int>& height) {
        //two pointers approach
        int maxarea=0;
        //defining the left and right pointers to the start and end of the vector
        int l=0,r=height.size()-1;
        while(l<r){
            //defining area to get the minimum of the heights between two pointers
            //and multiplying it with the distance between right and left pointers
            int area=min(height[l],height[r])*(r-l);
            //updating the value of maxarea by checking with the new area
            maxarea=max(area,maxarea);
            //if the right pointer has a higher height value
            if(height[l]<height[r])l++; //increment the left pointer
            else r--; //else decrement the right pointer
        }
        return maxarea; //return the maxarea
    }
};
