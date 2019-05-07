//
// Created by admin on 2019/5/7.
//
#include <vector>
#include <iostream>
#include "002.h"

using namespace std;

ListNode002 *Solution002::addTwoNumbers(ListNode002 *l1, ListNode002 *l2) {
    ListNode002 dummy(0);
    ListNode002 *p = &dummy;
    unsigned int carry_digit = 0;
    while (l1 || l2 || carry_digit) {
        unsigned tmp = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry_digit;
        carry_digit = tmp / 10;
        unsigned remainder = tmp % 10;
        p->next = new ListNode002(remainder);
        p = p->next;
        l1 = l1 ? l1->next : l1;
        l2 = l2 ? l2->next : l2;
    }
    return dummy.next;
}

// 填充一个node
ListNode002 *createNode(vector<unsigned> list) {
    ListNode002 nodeBegin(0);
    ListNode002 *tmp = &nodeBegin;
    for (vector<unsigned>::iterator it = list.begin(); it != list.end(); it++) {
        tmp->next = new ListNode002(*it);
        tmp = tmp->next;
    }
    return nodeBegin.next;

}

void printNode(ListNode002 *l) {
    while (l) {
        cout << l->val;
        l = l->next;
    }
    cout << endl;
}

void test002() {
    ListNode002 *listNode1 = createNode(vector<unsigned>{2, 4, 3, 7});
    ListNode002 *listNode2 = createNode(vector<unsigned>{5, 6, 4, 4, 7});
    Solution002 solution002;
    ListNode002 *sum = solution002.addTwoNumbers(listNode1, listNode2);

    cout << "first  node :";
    printNode(listNode1);
    cout << "second node :";
    printNode(listNode2);
    cout << "sum    node :";
    printNode(sum);
}

