// Basic Solution
class Solution
{
public:
    bool hasDuplicate(vector<int> &nums)
    {
        for (int &num : nums)
        {
            if (count(nums.begin(), nums.end(), num) > 1)
                return true;
        }

        return false;
    }
};
//////////////////////////////////////////////////////////////////
// Another Better one
class Solution
{
public:
    bool hasDuplicate(vector<int> &nums)
    {
        return unordered_set<int>(nums.begin(), nums.end()).size() < nums.size();
    }
};