//
// Created by admin on 2018/10/10.
//

#include <iostream>
#include "algorithm/001_twosum/SolutionTwoSum.h"

static void test_001();


static void test() {
    test_001();
}

static void test_001() {

    int rand[] = {8, 3, 23, 12, 87};
    vector<int> ori(rand, rand + 5);

    SolutionTwoSum solutionTwoSum;

    int target = 15;
    cout << "target: " << target << endl;

    vector<int> result = solutionTwoSum.twoSum(ori, target);

    for (int i = 0; i < result.size(); i++) {
        cout << result.at(i) << ": " << rand[result.at(i)] << endl;
    }
}