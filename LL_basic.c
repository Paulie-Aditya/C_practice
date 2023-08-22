#include <stdio.h>
#include <stdlib.h>

struct ListNode{
    int data;
    struct ListNode *next;
}l1;
void print(struct ListNode *head){
    struct ListNode *curr = head;
    while(curr != NULL){
        printf("%d ->",curr->data);
        curr = curr ->next;
    }
    printf("NULL");

}

int length(struct ListNode *head){
    struct ListNode *curr = head;
    int length = 0;
    while(curr != NULL){
        length++;
        curr = curr->next;
    };
    return length;
}

struct ListNode* insertAtBeginning(struct ListNode* head, int data){
    struct ListNode* newNode;

    newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->data = data;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
        head->next = NULL;
    }
    else{
        newNode->next = head;
        head = newNode;
    }

    return head;
}

struct ListNode* insertAtEnd(struct ListNode* head, int data){
    struct ListNode* newNode;
    newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->data = data;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
        head->next = NULL;
    }
    else{
        struct ListNode *curr = head;
        while(curr->next != NULL){
            curr = curr->next;
        }
        curr->next = newNode;
    }

    return head;
}

//Inserts a new Node at position n and returns head
struct ListNode* insertAtGivenPos(struct ListNode* head, struct ListNode *new, int n){
    struct ListNode* pred = head;

    //Special Case: adding at position 1
    if(n<=1){
        new->next = head;
        return new;
    }
    //find the n-1 node (predecessor): decrement n and move down the list
    //until either the list has ended or n becomes 0

    while(--n && pred != NULL){
        pred = pred->next;

    }
    if(pred == NULL){
        return NULL;
    }
    else{
        new->next = pred->next;
        pred->next = new;
        return head;
    }
}
int main(void){
    struct ListNode* head = &l1;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    insertAtBeginning(head,0);

    print(head);
    return 0;
}