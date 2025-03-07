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
        ListNode *temp=head;
        //vector<int>v;
        set<int>s;
        while(temp!=NULL){
            s.insert(temp->val);
            temp=temp->next;
        }
        //sort(v.begin(),v.end());
        ListNode *head1=NULL;
        temp=NULL;
        for(auto it=s.begin();it!=s.end();it++){
            ListNode *newnode=new ListNode;
newnode->val=*it;
newnode->next=NULL;
if(head1==NULL){
    head1=temp=newnode;
}
else{
    temp->next=newnode;
    temp=newnode;
}
        }
        return head1;
    }
};