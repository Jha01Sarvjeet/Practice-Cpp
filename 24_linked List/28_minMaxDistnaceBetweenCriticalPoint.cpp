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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int idx=1;
        ListNode* a=head;
        ListNode* b=head->next;
        ListNode* c=head->next->next;

        //if only two node 
        if(c==NULL)return {-1,-1};

        //for maximum distance
        int leftidx=-1;
        int rightidx=-1;

        //for minimum distance
        int leftminidx=-1;
        int rightminidx=-1;
        int mind=INT_MAX;
        while(c!=NULL){
            if((b->val > a->val && b->val > c->val) ||(b->val < a->val && b->val < c->val)){
                //for maximum
                if(leftidx== -1){
                    leftidx=idx;
                }
                else{
                    rightidx=idx;
                }

                //for minimum

                leftminidx=rightminidx;
                rightminidx=idx;
                if(leftminidx!=-1){
                    int d=rightminidx-leftminidx;
                    mind=min(mind,d);
                }
                
            }
            idx++;
            a=a->next;
            b=b->next;
            c=c->next;
          
            
        }
        int maxd=rightidx-leftidx;
        //if there is no any critical point
        if(rightidx==-1)return {-1,-1}; 
        return {mind,maxd};
    }
};