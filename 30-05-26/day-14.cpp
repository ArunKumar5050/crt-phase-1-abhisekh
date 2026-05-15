// #include<iostream>
// using namespace std;

// int consecutiveOnes(int n){
//     if(n == 0){
//         return 1;

//     }
//     if(n == 1){
//         return 2;
//     }
//     if(n == 2){
//         return 3;
//     }
//     return consecutiveOnes(n-1) + consecutiveOnes(n-2);


// }

// int main(){
//     cout<<consecutiveOnes(5);
//     return 0;
// }











// filing problem

// #include <iostream>
// using namespace std;

// int tilling(int n){
//     if(n<=3){
//         return 1;
//     }
//     return tilling(n-1) + tilling(n-4);
// }

// int main(){
//     cout<<tilling(10);
//     return 0;
// }















// You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

// Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

 

// Example 1:

// Input: nums = [1,2,3,1]
// Output: 4
// Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
// Total amount you can rob = 1 + 3 = 4.
// Example 2:

// Input: nums = [2,7,9,3,1]
// Output: 12
// Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
// Total amount you can rob = 2 + 9 + 1 = 12.


#include <iostream>
#include <vector>

using namespace std;

class solution{
    public:
    int rob(vector<int>& nums){
        if(nums.size() == 0){
            return 0;
        }
        if(nums.size() == 1){
            return nums[0];
        }
        if(nums.size() == 2){
            return max(nums[0], nums[1]);
        }
        return max(nums[0] + rob(vector<int>(nums.begin()+2, nums.end())), rob(vector<int>(nums.begin()+1, nums.end())));
    }
};
