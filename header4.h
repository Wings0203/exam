#ifndef UNTITLED2_HEADER4_H
#define UNTITLED2_HEADER4_H
#include <iostream>
using list = int;

struct node{
    list value;
    node* next;
};

node* Add2List(node* head, list num);
#endif //UNTITLED2_HEADER4_H
