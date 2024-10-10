class Solution {
public:
    int trap(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n-1;

        int leftmax = 0;
        int rightmax = 0;

        int res = 0;

        while(left <= right){
            if(nums[left] <= nums[right]){
                if(nums[left] < leftmax){
                    res += leftmax - nums[left];
                }else{
                    leftmax = nums[left];
                }
                left++;
            }else{
                if(nums[right] < rightmax){
                    res += rightmax - nums[right];
                }else{
                    rightmax = nums[right];
                }
                right--;
            }
        }
        return res;
    }
};