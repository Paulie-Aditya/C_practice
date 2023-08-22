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
struct ListNode* insertAtpos(struct ListNode* head, int data, int pos){
    struct ListNode* newNode;

    newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->data = data;
    newNode->next = NULL;

    int count = 0;
    if(head == NULL){
        head = newNode;
        head->next = NULL;
    }
    struct ListNode* curr = head;
    while(curr != NULL){
        if(count == pos-1){
            break;
        }
        curr = curr->next;
    }
    newNode->next = curr->next;
    curr->next = newNode;

    return head;

}
int main(void){
    struct ListNode* head = &l1;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,4);
    insertAtEnd(head,5);

    print(head);
    //insertAtpos(head, 3,3);
    print(head);
    return 0;
}