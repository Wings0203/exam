#include "header4.h"

node* Add2List(node* head, int num){
    if (!head)
    {
        node* curr = new node;
        curr->value = num;
        curr->next = nullptr;
        return curr;
    }
    node* curr = head;
    while (curr && curr->next)
    {
        curr = curr->next;
    }
    curr->next = new node;
    curr->next->value = num;
    curr->next->next = nullptr;
    return head;
}