/**
 * @param {string} s
 * @return {number}
 */
var minimumDeletions = function(s) {
    
    let c=0;
    let ans=0;
    for(let i in s)
        {
            if(s[i]==="a") 
                ans=Math.min(ans+1,c);
            else
             c+=1;
        }
    return ans;
};