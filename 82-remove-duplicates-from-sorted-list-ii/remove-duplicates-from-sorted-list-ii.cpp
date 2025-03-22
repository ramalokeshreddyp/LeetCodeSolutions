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
    ListNode* deleteDuplicates(ListNode* head) {
       map<int,int>mpp;
       ListNode *temp=head;
       while(temp!=NULL) {
        mpp[temp->val]++;
        temp=temp->next;
       }
vector<int>res;
for(auto it:mpp){
    if(it.second==1){
        res.push_back(it.first);
    }
}
ListNode *headd=NULL;
temp=NULL;
for(int i=0;i<res.size();i++){
    ListNode *newnode=new ListNode;
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