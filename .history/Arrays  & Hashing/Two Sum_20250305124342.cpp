// First Solution
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> res;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if ((nums[i] + nums[j]) == target)
                    return {i, j};
            }
        }

        return {};
    }
};
//////////////////////////////////////////////////////////////
// Second Solution
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> m;
        int complement;

        for (int i = 0; i < nums.size(); i++)
        {
            complement = target - nums[i];
            if (m.find(complement) != m.end())
                return {m[complement], i};

            m.insert({nums[i], i});
        }

        return {};
    }
};
