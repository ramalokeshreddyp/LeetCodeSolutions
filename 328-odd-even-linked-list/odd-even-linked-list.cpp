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
    ListNode* oddEvenList(ListNode* head) {
        vector<int>res;
        ListNode *temp=head;
        while(temp!=NULL){
            res.push_back(temp->val);
temp=temp->next;
        }
        int c=0;
       stable_partition(res.begin(), res.end(), [&c](int) { return (c++) % 2 == 0; });
        ListNode *headd=NULL;
        temp=NULL;
        for(int i=0;i<res.size();i++){
            ListNode* newnode=new ListNode;
            newnode->val=res[i];
            newnode->next=NULL;
            if(headd==NULL){
                headd=temp=newnode;
            }
            else{
                temp->next=newnode;
                temp=newnode;
            }
        }
        return headd;
    }
};