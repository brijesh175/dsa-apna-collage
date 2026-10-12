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
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        int cnt = 0;
        while(temp){
            cnt++;
            temp = temp -> next;
        }
        if(cnt == 1){
            return true;
        }
        cnt /= 2;
        
        ListNode* curr = head;
        ListNode* prev = NULL;

        while(cnt--){
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = NULL;
        ListNode* front = NULL;
        prev = NULL;
        while(curr){
            front = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = front;
        } 
        // equaate both LL
        
        ListNode* head1 = head;
        ListNode* head2 = prev;
        while(head1){
            if(head1 -> val != head2 -> val){
                return false;
            }
            head1 = head1 -> next;
            head2 = head2-> next;
        }
        return true;
    }
};