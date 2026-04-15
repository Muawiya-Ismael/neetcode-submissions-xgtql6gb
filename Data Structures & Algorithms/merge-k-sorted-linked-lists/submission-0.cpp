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
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) return nullptr;

        // While there is more than one list in our vector
        while (lists.size() > 1) {
            vector<ListNode*> mergedLists;

            // Step through the lists 2 at a time
            for (int i = 0; i < lists.size(); i += 2) {
                ListNode* l1 = lists[i];
                // Handle the case where there is an odd number of lists
                ListNode* l2 = (i + 1 < lists.size()) ? lists[i + 1] : nullptr;
                
                mergedLists.push_back(mergeTwoLists(l1, l2));
            }
            // Replace the old list with the newly merged smaller set
            lists = mergedLists;
        }

        return lists[0];
    }

    // Your mergeTwoLists function used exactly as provided
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* node = &dummy;
        while(list1 && list2){
            if(list1->val < list2->val){
                node->next = list1;
                list1 = list1->next;
            } else {
                node->next = list2;
                list2 = list2->next;
            }
            node = node->next;
        }
        if(list1) node->next = list1;
        else node->next = list2;
        return dummy.next;
    }
};

