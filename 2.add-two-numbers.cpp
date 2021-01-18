/*
 * @lc app=leetcode id=445 lang=cpp
 *
 * [445] Add Two Numbers II
 */

// @lc code=start
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3=NULL;
        ListNode* first_ptr;
        bool first = true;
        int sum=0;
        while(l1!=NULL||l2!=NULL||sum>0){
            if(l1!=NULL)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            if(first){
                l3 = new ListNode(sum%10);
                first_ptr= l3;
                first = false;
            }
            else{
                l3->next = new ListNode(sum%10);
                l3 = l3->next;
            }
            sum /=10;
        }
        return first_ptr;
    }
};
// @lc code=end

