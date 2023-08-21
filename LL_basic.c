#include <stdio.h>
#include <stdlib.h>

struct ListNode{
    int data;
    struct ListNode *next;
};
void print(struct ListNode *head){
    struct ListNode *curr = head;
    while(curr != NULL){
        printf("%d ->",curr->data);
        curr = curr ->next;
    };

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
int main(void){
    return 0;
}