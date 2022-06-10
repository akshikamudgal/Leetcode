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
        int n = 0;
        ListNode* t = head;
        while(t){
            n++;
            t = t->next;
        }
        if (n==0) return head;
        
        k = k%n;
        
        if(k == 0)
            return head;
        
        int j = 1;
        t = head;
         while(n-j > k){
             t = t->next;
             j++;
         }
        cout<<" "<<t->val<<" val \n";
        ListNode* tt = t->next;
        ListNode* ans = tt;
        t->next = NULL;
        
        while(tt->next){
            tt = tt->next;
        }
        tt->next = head;
        return ans;
    }
};