//
// Created by admin on 2019/5/7.
//

#ifndef ALGORITHM_002_H
#define ALGORITHM_002_H


/**
 * 给出两个 非空 的链表用来表示两个非负的整数。
 * 其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。
 * 如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。
 * 您可以假设除了数字 0 之外，这两个数都不会以 0 开头。
 * 示例：
 * 输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
 * 输出：7 -> 0 -> 8
 * 原因：342 + 465 = 807
 */

////////////////////////////////////////////////

struct ListNode002 {
    unsigned val;
    ListNode002 *next;

    ListNode002() : val(0), next(nullptr) {}

    explicit ListNode002(unsigned x) : val(x), next(nullptr) {}
};

class Solution002 {

public:
    ListNode002 *addTwoNumbers(ListNode002 *l1, ListNode002 *l2);
};


void test002();

#endif //ALGORITHM_002_H
