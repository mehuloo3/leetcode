class Solution {
    vector<int>original;
    int n;
public:
    Solution(vector<int>& nums) {
        original=nums;
        n=nums.size();
    }
    
    vector<int> reset() {
        return original;
    }
    
    vector<int> shuffle() {
        vector<int>arr=original;
        for(int i=arr.size()-1;i>=0;i--)
        {
            int ind=rand()%(i+1);
            swap(arr[i],arr[ind]);
        }
        
        return arr;
            
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */