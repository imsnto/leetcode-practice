/**
 * @param {string} s
 * @return {number}
 */
var maxScore = function(s) {
    const lengthOfS = s.length;
    let numOfOnes = 0;

    for(let char of s){
        if(char == 1)  numOfOnes++;
    }

    let ans = 0, leftZeros=0;
    for(let i=0; i<lengthOfS-1; i++){
        if(s[i] == 0) {
            leftZeros++;
        } else numOfOnes--;

        ans = Math.max(ans, numOfOnes + leftZeros);
    }
    return ans;
};