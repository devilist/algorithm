//
// Created by admin on 2018/10/10.
//

#include <iostream>
#include "001.h"

using namespace std;

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


void test001() {
    int rand[] = {8, 3, 23, 12, 87};
    vector<int> ori(rand, rand + 5);

    SolutionTwoSum solutionTwoSum;

    int target = 15;
    std::cout << "target: " << target << endl;

    vector<int> result = solutionTwoSum.twoSum(ori, target);

    for (int i = 0; i < result.size(); i++) {
        cout << result.at(i) << ": " << rand[result.at(i)] << endl;
    }
}