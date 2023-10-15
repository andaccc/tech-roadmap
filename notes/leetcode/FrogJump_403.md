# Frog Jump 403

## Problems
Frog can must jump on stone

Initial Jump = 1 unit
next jump must = last jump k, k - 1, k + 1 

- The number of stones is ≥ 2 and is < 1,100.
- Each stone's position will be a non-negative integer < 231.
- The first stone's position is always 0.

## Example 
[0,1,3,5,6,8,12,17]
0 -> 1 -> 3 -> 5 -> 8 -> 12 -> 17
return True

[0,1,2,3,4,8,9,11]
return False

## Solution 
### Brute Force
- recursion find all possibilities on each jump
- n * 3n

Time: O(3 ^ n)

-> Timeout

### DP
- Store last jump for each index
- Check each last jump is possible for what next jump
- If last index has solution jump
- then return true

Time:  `O(3n^2), worst: n * 3n
Space: O(n)`

```C#
class Solution {
public:     
    bool canCross(vector<int>& stones) {
        vector<unordered_set<int>> dp(stones.size());
        
        // base case jump is 1 unit
        dp[0].insert(1);
        if (stones[1] != 1) {
            return false;
        } 
        
        dp[1].insert(1);
        
        for(int currentIdx=1; currentIdx < stones.size(); currentIdx++) {
            // check all stored last jumps
            for (auto it = dp[currentIdx].begin(); it != dp[currentIdx].end(); it++) {          

                int lastJump = *it;

                 // k-1, k, k+1
                for(int jump=lastJump-1; jump<=lastJump+1; jump++) {
                    // check possible next stones 
                    for(int nextIdx=currentIdx+1; nextIdx< stones.size(); nextIdx++){
                        
                        if(stones[currentIdx] + jump == stones[nextIdx]){
                            dp[nextIdx].insert(jump);
                        }
                        else if (stones[currentIdx] + jump < stones[nextIdx]) {
                            // only check to stones within jump range 
                            break;
                        }
                    }
                }              
            }
        }

        // check possible jump in last stone
        if (dp[stones.size() - 1].size() > 0) {
            return true;
        }
        
        return false;
    }
};
```