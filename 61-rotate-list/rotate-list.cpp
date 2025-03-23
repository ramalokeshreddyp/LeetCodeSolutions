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
    ListNode* rotateRight(ListNode* head, int k) {
       if (!head || k == 0) return head;

    vector<int> res;
    ListNode *temp = head;

    while (temp != nullptr) {
        res.push_back(temp->val);
        temp = temp->next;
    }

    int s = res.size();
    k = k % s;
    if (k == 0) return head;

    int req = s - k;
    std::rotate(res.begin(), res.begin() + req, res.end());

    ListNode *headd = nullptr;
    temp = nullptr;

    for (int i = 0; i < res.size(); i++) {
        ListNode *newnode = new ListNode(res[i]);
        if (headd == nullptr) {
            headd = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }

    return headd;
    }
};