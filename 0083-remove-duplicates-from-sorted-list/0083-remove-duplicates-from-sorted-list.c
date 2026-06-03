/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (head == NULL) {
        return head;
    }

    struct ListNode *temp = head;

    while (temp != NULL && temp->next != NULL) {
        struct ListNode *ptr = temp->next;
        if (temp->val == temp->next->val) {
            temp->next = ptr->next;
            free(ptr);
        } else {
            temp = temp->next;
        }
    }

    return head;
}