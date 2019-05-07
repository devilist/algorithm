//
// Created by admin on 2019/5/7.
//

#include <set>
#include <cmath>
#include "003.h"

using namespace std;

// 滑动窗口法
int Solution003::lengthOfLongestSubstring(std::string s) {
    size_t len = s.size();
    set<char> set; // 窗口
    unsigned result = 0, left = 0, right = 0;
    while (left < len && right < len) {
        if (set.end() == set.find(s.at(right))) { // 缓存中没有该字符
            set.insert(s.at(right));
            right++; // 窗口右侧右移
            result = max(result, right - left);
        } else {
            set.erase(s.at(left++)); // 窗口左侧右移
        }
    }
    return result;
}

void test003() {
    Solution003 solution003;
    int result = solution003.lengthOfLongestSubstring("asfalilif");
    cout << "result is: " << result << endl;
}
