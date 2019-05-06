//
// Created by admin on 2018/10/10.
//

#include "001.h"


// 时间复杂度 o(n2)
vector<int> SolutionTwoSum::twoSum(vector<int> &nums, int target) {
    vector<int> result;
    if (!nums.empty()) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums.at(i) + nums.at(j) == target) {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
    }
    return result;
}
