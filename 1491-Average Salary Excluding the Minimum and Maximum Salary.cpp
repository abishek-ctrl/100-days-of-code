class Solution {
public:
    double average(vector<int>& salary) {
      int high=INT_MIN; //initialising the high with the minimum integer value
      int low=INT_MAX; //initialising the low with the maximum integer value
      double sum=0;
      for(int i=0;i<salary.size();i++){ //loop through the vector
          low=min(low,salary[i]); //update the low 
          high=max(high,salary[i]);//update the high 
          sum+=salary[i]; //increment sum with the salary value
          }
    //we return the sum minus the max and min salary and divide it by vector length minus 2
        return (sum-high-low)/(salary.size()-2); 
    }
};
