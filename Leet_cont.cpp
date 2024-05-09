/*
You are given an array happiness of length n, and a positive integer k.

There are n children standing in a queue, where the ith child has happiness value happiness[i]. You want to select k children from these n children in k turns.

In each turn, when you select a child, the happiness value of all the children that have not been selected till now decreases by 1. Note that the happiness value cannot become negative and gets decremented only if it is positive.

Return the maximum sum of the happiness values of the selected children you can achieve by selecting k children.
*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long maximumHappinessSum(vector<int>& happiness, int k)
    {
        sort(happiness.begin(), happiness.end(), greater<int>());
        long long result = 0;
        for (int i = 0; i < k; i++)
        {
            int temp = happiness[i] - i;
            if (temp < 0) temp = 0;
            result += temp;
        }
        return result;
    }



int main()
{
    vector<int>happiness;
    for (int i = 0; i < 10000; i++) happiness.push_back(10000);    
    cout<<"Result: "<< maximumHappinessSum(happiness, 10);
    return 0;
}
