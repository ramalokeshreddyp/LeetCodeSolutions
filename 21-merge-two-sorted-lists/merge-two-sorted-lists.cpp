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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> v;
    
    ListNode *temp = list1;
    while (temp != NULL) {
        v.push_back(temp->val);
        temp = temp->next;
    }
    
    temp = list2;
    while (temp != NULL) {
        v.push_back(temp->val);
        temp = temp->next;
    }
    
    
    sort(v.begin(), v.end());
    
    
    ListNode *head = NULL, *tail = NULL;
    
    for (int i = 0; i < v.size(); i++) {
        ListNode* newnode = new ListNode(v[i]);
        
        if (head == NULL) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }
    
    return head;
    }
};