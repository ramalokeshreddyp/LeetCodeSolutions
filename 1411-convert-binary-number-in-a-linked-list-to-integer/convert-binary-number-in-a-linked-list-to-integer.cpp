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
    int getDecimalValue(ListNode* head) {
      int s=0;
      ListNode* temp=head;
      while(temp!=NULL)  {
        s++;
        temp=temp->next;
      }
      int sum=0;
      temp=head;
      for(int i=s-1;i>=0;i--){
        int data=temp->val;
        if(data==1){
        sum+=pow(2,i);
        }
        temp=temp->next;
      }
      return sum;
    }
};