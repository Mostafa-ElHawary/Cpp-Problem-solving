#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> set;
        for (int num : nums)
        {
            if (set.count(num))
            {
                return true;
            }
            set.insert(num);
        }
        return false;
    }
};

int main()
{
    Solution solution;
    std::vector<int> nums = {1, 2, 3, 1};
    bool result = solution.containsDuplicate(nums);
    std::cout << std::boolalpha << result << std::endl;
    return 0;
}