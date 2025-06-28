/*725. Split Linked List in Parts

Given the head of a singly linked list and an integer k, split the linked list into k consecutive linked list parts.

The length of each part should be as equal as possible: no two parts should have a size differing by more than one. This may lead to some parts being null.

The parts should be in the order of occurrence in the input list, and parts occurring earlier should always have a size greater than or equal to parts occurring later.

Return an array of the k parts.*/
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
class Solution
{
public:
    vector<ListNode *> splitListToParts(ListNode *head, int k)
    {
        vector<ListNode *> ans(k);
        int n = 0;
        int m = 0;
        ListNode *temp = head;
        while (temp != NULL)
        {
            n++;
            temp = temp->next;
        }

        temp = head;
        int NO_of_ll = n / k;
        int rem = n % k;

        while (temp != NULL)
        {
            int size = NO_of_ll;
            if (rem > 0)
            {
                size = size + 1;
            }
            else
            {
                size = size;
            }

            ListNode *tempc = new ListNode(-1);
            ListNode *c = tempc;
            for (int i = 0; i < size; i++)
            {
                c->next = temp;
                temp = temp->next;
                c = c->next;
            }
            c->next = NULL;
            ans[m++] = tempc->next;
            if (rem > 0)
                rem--;
        }

        return ans;
    }
};