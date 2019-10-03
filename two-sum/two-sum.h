
#include <vector>
#include <map>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> nbTb;
        int i;
        vector<int> Result;
        map<int, int>::iterator it_r;

        for (i = 0; i <= nums.size() - 1; i++)
        {

            if ((it_r = nbTb.find(target - nums[i])) != nbTb.end())
            {
                Result.push_back(it_r->second);
                Result.push_back(i);                
                break;
            }
            else
            {
                nbTb[nums[i]] = i;
            }
        }

        return Result;
    }
};