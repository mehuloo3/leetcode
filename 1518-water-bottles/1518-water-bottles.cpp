class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        int ans=numBottles;
        while(numBottles>=numExchange)
        {
            // int newbottles=numBottles/numExchange;
            // int remain=numBottles%numExchange;
            // result=newbottles;
            // newbottles+=remain;
            // while(numBottles>=numExchange){
            // int newBottles=numBottles/numExchange;
            // int remBottles= numBottles % numExchange;
            // ans=ans+newBottles;
            // numBottles=newBottles+remBottles;

             ans=ans+numBottles/numExchange;
             numBottles=numBottles/numExchange+numBottles%numExchange;
            
            
        }
        return  ans;
    }
};