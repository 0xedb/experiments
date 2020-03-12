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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode* before = new ListNode;
        ListNode* after = new ListNode;
        ListNode* nav = new ListNode;
        ListNode* cur = new ListNode;
        ListNode* end = new ListNode;
        ListNode* prev = new ListNode;
        
        nav = head;
        before = head;
        int start = 1;
        
        // get to starting point
        while(start < m) { 
            before = nav;
            nav = nav -> next;
            start++; 
        }
        
        if(start == m) end = nav; 
        
        // reverse when not n 
        while(start < n) {
            cout <<start << endl;
            cur = nav;
            nav = nav -> next; 
            cur -> next = prev;
            prev = cur;
            start++;
        } 
        if(start == n) {
            cur = nav;
            
        }
        cout << nav -> next -> val << endl;
        
        
// //         // connect before and reversed
//         before -> next = cur;
        
        return head;
    }
};   