class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int, int> mp;
		for(int i = 0; i < nums.size(); i++){
			int tt = target - nums[i];
			if (mp.find(tt) != mp.end()){
				return {mp[tt], i};
			} 
			mp[nums[i]] = i;
		}		    
    return{-1, -1};
	}
};