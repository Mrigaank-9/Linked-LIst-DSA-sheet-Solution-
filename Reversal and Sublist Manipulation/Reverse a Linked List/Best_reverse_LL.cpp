#include <iostream>
using namespace std ;
Node* reverseLinkedList(Node* head){
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    Node *TempHead = reverse1(head->next);

    head->next->next = head;
    head->next = nullptr;
    return TempHead;
}
