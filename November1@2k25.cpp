class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> removeSet(nums.begin(), nums.end());

        ListNode dummy(0);
        ListNode* prev = &dummy;
        ListNode* curr = head;

        while (curr) {
            if (removeSet.count(curr->val) == 0) {
                prev->next = curr;
                prev = prev->next;
            }
            curr = curr->next;
        }

        prev->next = nullptr;
        return dummy.next;
    }
};
