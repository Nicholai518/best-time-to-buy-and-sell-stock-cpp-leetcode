#include <iostream>
#include <vector>
#include <limits>

using namespace std;

class Solution 
{
public:
    int maxProfit(vector<int>& prices) 
    {
        // variables
        int min_value = std::numeric_limits<int>::max();
        int max_profit = 0;

        // iterate through the array
        for (int i = 0; i < prices.size(); i++) 
        {

            // if the current element is less than min value, update
            if (prices[i] < min_value) 
            {
                min_value = prices[i];
            }

            // otherwise if the current element - the known minimum value is greater than max profit
            // update max profit
            else if (prices[i] - min_value > max_profit) 
            {
                max_profit = prices[i] - min_value;
            }
        }
        return max_profit;
    }
};
int main()
{
    Solution solution;
    vector<int> example_one{7, 1, 5, 3, 6, 4};
    cout << "Example One : " << solution.maxProfit(example_one) << endl;
	return 0;
}
