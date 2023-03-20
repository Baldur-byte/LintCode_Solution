#include <iostream>

using namespace std;

class ListNode
{
public:
    int val;
    ListNode* next;
    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class Solution
{
public:
    /**
     * @param head: head is the head of the linked list
     * @return: head of linked list
     */
    ListNode* deleteDuplicates(ListNode* head)
    {
        if (head == NULL)
        {
            return NULL;
        }
        if (head->next == NULL)
        {
            return head;
        }
        ListNode* res = head;
        while (head->next != NULL)
        {
            if (head->val == head->next->val)
            {
                head->next = head->next->next;
            }
            else
            {
                head = head->next;
            }
        }
        return res;
    }
};