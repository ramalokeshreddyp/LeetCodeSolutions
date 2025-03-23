/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode *temp = head;
    int s = 0;
    
    while (temp != nullptr) {
        s++;
        temp = temp->next;
    }

    if (n == s) {
        temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    temp = head;
    int c = 0, req = s - n;

    while (c < req - 1) {
        temp = temp->next;
        c++;
    }

    ListNode *a = temp->next;
    temp->next = a->next;
    delete a;

    return head;
    }
};