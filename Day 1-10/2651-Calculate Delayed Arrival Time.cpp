class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        //If the sum of both inputs is greater than or equal to 24
        if(arrivalTime +delayedTime>=24){
            //we substract the sum with 24 to convert it to 24 and return the absolute value
            return abs(24-(arrivalTime+delayedTime));
        }
        //else we return the sum of both inputs
        return arrivalTime+delayedTime;
    }
};
