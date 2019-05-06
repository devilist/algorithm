//
// Created by admin on 2019/5/6.
//

#include <iostream>
#include "algorithm.h"
#include "001.h"

void alg_fire() {
    test001();
}

void test001() {
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


