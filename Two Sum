class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> numIndices;
        for(int i = 0; i<nums.size(); i++){
            int complement = target - nums.at(i);
            if(numIndices.find(complement)!=numIndices.end()){
                ans.push_back(i);
                ans.push_back(numIndices[complement]);
            }
            numIndices[nums.at(i)] = i;
        }
        return ans;
    }
};
