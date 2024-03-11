class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map;
        vector<int> intersection;
        int sizeNum1 = nums1.size();
        int sizeNum2 = nums2.size();
        for(int i = 0; i<sizeNum1; i++){ //make map have values of nums1
            if(map.find(nums1.at(i)) == map.end()) //make sure value is not alr in map
                map[nums1.at(i)] = nums1.at(i);
        }

        unordered_map<int, int> intermap;
        for(int i = 0; i<sizeNum2; i++){
            if(map.find(nums2.at(i)) != map.end()){ //nums2 value is in nums1
                if(intermap.find(nums2.at(i)) == intermap.end()){
                    intersection.push_back(nums2.at(i));
                    intermap[nums2.at(i)] = nums2.at(i);
                }
            }
        }
        return intersection;
    }
};
