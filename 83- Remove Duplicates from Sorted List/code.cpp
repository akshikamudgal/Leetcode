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
         // BASE CASE 1- if head is nullptr - list contains no nodes
        if (head == nullptr)
            return head;
        
        // BASE CASE 2 - if head->next is nullptr - list contains only one node
        if (head->next == nullptr)
            return head;
        
        // TWO-POINTER APPROACH
        // ptr1 - initialised with head
        auto ptr1 = head;
        // ptr2 - initilaised with head->next
        auto ptr2 = head->next;
        
        // since given list is sorted, duplicates will be adjacent to each other
        // while we can compare ptr1 and ptr2
        while (ptr2 != nullptr)
        {
            // if duplicates are found
             if (ptr1->val == ptr2->val)
            {
                // create a ptr refering to ptr2 value...
                // ...(taking ptr2->value as duplicate one)
                auto ptr = ptr2;
                
                // shift ptr2 to next node or nullptr
                ptr2 = ptr2->next;
                
                // link ptr1->next with ptr2
                // we are going to delete that duplicate value node
                ptr1->next = ptr2;
                
                // release memory to avoid memory leaks
                delete ptr;
             }
            // if they aren't dupliactes
            else
            {
                // move ptr1 to next node
                ptr1 = ptr1->next;
                // move ptr2 to next node or nullptr
                ptr2 = ptr2->next;
            }
        }
        
        // return list
        return head;
    }
};
