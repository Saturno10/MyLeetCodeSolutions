class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long zeroSubarrays = 0;
        long long consecutiveZeros = 0;
        long long currentSubarraysCount = 0;
        for(int i = 0; i < nums.size(); i++){
            if (!nums[i]){
                consecutiveZeros++;
                currentSubarraysCount += consecutiveZeros;
            } else {
                zeroSubarrays += currentSubarraysCount;
                consecutiveZeros = 0;
                currentSubarraysCount = 0;
            }
        }

        return zeroSubarrays + currentSubarraysCount; // Add currentSubarraysCount in case the vector ended in one
    }
};
