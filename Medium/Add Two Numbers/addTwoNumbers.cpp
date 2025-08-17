struct ListNode {
         int val;
         ListNode *next;
         ListNode() : val(0), next(nullptr) {}
         ListNode(int x) : val(x), next(nullptr) {}
         ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

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

    ListNode* solution = new ListNode(0);
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        if (l1 == nullptr || l2 == nullptr) return solution;
        if (l1 == nullptr) {
            solution->val = l2->val;
        } else if (l2 == nullptr) {
            solution->val = l1->val;
        } else {
            solution->val = (l1->val + l2->val)%10;
        }

        ListNode* t1 = l1;
        ListNode* t2 = l2;

        while (!(t1->next == nullptr && t2->next == nullptr)){
            if (t1->next == nullptr) t1->next = new ListNode();
            if (t2->next == nullptr) t2->next = new ListNode();
            t1 = t1->next;
            t2 = t2->next;
        }

        solution->next = addTwoNumbersRecursive(l1->next, l2->next, (l1->val + l2->val)/10);
        return solution;
    }

    ListNode* addTwoNumbersRecursive(ListNode* l1, ListNode* l2, int carry) {
        ListNode* result;
        if (l1 == nullptr && l2 == nullptr){
            if (carry) return new ListNode(carry);
            return nullptr;
        }
        if (l1 == nullptr) {result = new ListNode(l2->val + carry);}
        else if (l2 == nullptr) {result = new ListNode(l1->val + carry);}
        else {result = new ListNode(l1->val + l2->val + carry);}

        carry = result->val/10;
        result->val = result->val % 10;
        result->next = addTwoNumbersRecursive(l1->next, l2->next, carry);

        return result;
    }

};