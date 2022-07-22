class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target) {
map<int, int> new Hashmap;
vector<int> ans;
for (int i = 0; i < nums.size(); i++)
{
if (Hashmap.find(target - nums[i]) != Hashmap.end())
{
ans.push_back(Hashmap.find(target - nums[i])->second);
ans.push_back(i);
}
else
{
Hashmap[nums[i]] = i;
}
}
return ans;
}
};

