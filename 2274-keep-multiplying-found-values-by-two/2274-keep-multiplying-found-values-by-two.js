/**
 * @param {number[]} nums
 * @param {number} original
 * @return {number}
 */
var findFinalValue = function(nums, original) {
    let n=nums.length;
    nums.sort((a, b) => a - b)
    for(let i=0;i<n;i++)
    {
        if(nums[i]==original)
        {
            original=original*2;
        }
    }
    return original;
};