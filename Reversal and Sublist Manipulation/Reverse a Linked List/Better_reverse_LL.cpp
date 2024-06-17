#include <iostream>
using namespace std ;
void reverseLinkedList(Node*&head , Node* curr , Node* prev){
    //base case 
    if(curr==nullptr){
        head = prev ;
        return ;
    }
    Node* forw = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forw;
    return sol(head , curr, prev);
}
