
class KthLargest {
public:
   priority_queue<int, vector<int>, greater<int>>a;
    int K;

    KthLargest(int k, vector<int>& nums) {
        K = k;
        for (int num : nums) {
            a.push(num);
            if (a.size() > K) {
                a.pop();
            }
        }
    }

    int add(int val) {
       a.push(val);
        if (a.size() > K) {
            a.pop();
        }
        return a.top();
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */