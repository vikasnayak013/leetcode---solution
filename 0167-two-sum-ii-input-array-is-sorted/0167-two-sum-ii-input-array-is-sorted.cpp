// class Solution {   {Insme TLE aa raha h to method two pe jayenege }
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i=0; i<nums.size(); i++){
//             for(int j=i+1; j<nums.size(); j++){
//                 if(nums[i]+nums[j]==target){
//                     return {i+1,j+1};
//                 }
//             }
//         }
//         return {};    
//     }
// };
    //  !!!!!!!!!!!!!!   [ Two pionter] !!!!!!!!!!!!!!!
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int i=0;
        int j=n-1;
        while(i < j){
            if(nums[i] + nums[j] == target){
                return {i+1,j+1};     //1-indexed 
            }
            else if(nums[i]+nums[j] > target){
                j--;
            }
            else if(nums[i]+nums[j] < target){
                i++;
            }
            
        }
        return {};

    }
};

