/**
 * @param {string} s
 * @param {number} x
 * @param {number} y
 * @return {number}
 */

var maximumGain = function(s, x, y) {
    let total = 0;
    let data = [];
    if(x>y){
        data = removeTarget(s,x,"ab")
        s = data.join("");
        removeTarget(s , y , "ba");
    }
    else{
        data = removeTarget(s,y,"ba");
        s = data.join("");
        removeTarget(s , x , "ab");
    }
    
       function removeTarget(str , points , pattern){
        let stack = [];
        for(let char of str){
            if(stack.length > 0 && stack.at(-1) + char == pattern){
                total += points;
                stack.pop();
            }else{
                stack.push(char);
            }
        }
        return stack;
    }

    return total;
};