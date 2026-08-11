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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp_for = head;
        ListNode* temp_back = nullptr;
        if (head == nullptr) return {};
        while (temp_for != nullptr){
            
            temp_for = head->next;
            head->next = temp_back;
            temp_back = head;
            head = temp_for;
            
        }
        
        return temp_back;

    }
};
