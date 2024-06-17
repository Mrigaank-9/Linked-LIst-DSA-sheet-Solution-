#include <iostream>
using namespace std ;
Node* reverseLinkedList(Node *head)
{
    Node* prev = nullptr;
    Node* curr = head ;
    Node* forw = nullptr;
    while(curr!=nullptr){
        forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
    }
    return prev; 
}