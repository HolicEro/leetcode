class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            map[nums[i]] = i;
        }
        for(int i=0;i<nums.size();i++){
            unordered_map<int, int>::const_iterator got = map.find(target-nums[i]);
            if( got != map.end() && got->second != i){
                res.push_back(i);
                res.push_back(got->second);
                return res;
            }
        }
        return -1;
    }
};