/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    // Best Optimal Solution that tends to bring the two pointers on same level
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {   
        ListNode* t1 = head1;
        ListNode* t2 = head2;

        while(t1 != t2){
            t1 = t1 -> next;
            t2 = t2 -> next;

            if(t1 == t2) return t1;

            if(t1 == NULL) t1 = head2;
            if(t2 == NULL) t2 = head1;
        }
        return t1;
    }
};