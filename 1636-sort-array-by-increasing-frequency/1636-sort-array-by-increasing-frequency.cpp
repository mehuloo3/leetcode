class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
       array<int, 201> freq{0};
        for(auto num : nums) freq[num+100]++;
        sort(nums.begin(), nums.end(), [&](const int& p1, const int& p2) {
           return freq[p1+100] == freq[p2+100] ? p1 > p2 : freq[p1+100] < freq[p2+100];
        });
        return nums;
    }
};