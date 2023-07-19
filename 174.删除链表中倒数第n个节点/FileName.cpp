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

class Solution {
public:
    /**
    * @param head: The first node of linked list.
    * @param n: An integer
    * @return: The head of linked list.
    */
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        // write your code here
        ListNode* front = head, * back = head;
        for (int i = 0; i < n; i++)
        {
            front = front->next;
        }

        ListNode *del;
        if (front == NULL)
        {
            del = head;
            head = head->next;
        }
        else
        {
            while (front->next != NULL)
            {
                front = front->next;
                back = back->next;
            }
            del = back->next;
            back->next = back->next->next;
        }
        delete del;
        return head;
    }
};