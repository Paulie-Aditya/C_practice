#include <stdio.h>

typedef struct CLLNode{
    int data;
    struct CLLNode *next;
};

int length(struct CLLNode *head){
    struct CLLNode *curr = head;
    int count = 0;

    if(head == NULL){
        return 0;
    }
    do{
        curr = curr->next;
        count++;
    }while(curr != head);

    return count;
}

void printList(struct CLLNode*head){
    struct CLLNode *curr = head;
    if(head == NULL){
        return;
    }
    do{
        printf("%d -->",curr->data);
        curr = curr->next;
    }while(curr !=head);
}

void insertAtEnd(struct CLLNode**head, int data){
    struct CLLNode *curr = *head;
    struct CLLNode *newNode = (struct CLLNode*)malloc(sizeof(struct CLLNode));

    if(!newNode){
        printf("Memory Error");
        return;
    }
    newNode->data = data;
    while(curr->next != *head){
        curr = curr->next;
    }
    newNode->next = newNode;

    if(*head == NULL){
        *head = newNode;
    }
    else{
        newNode->next = *head;
        curr->next = newNode;
    }
    
}

void insertAtFront(struct CLLNode **head, int data){
    struct CLLNode* curr = *head;
    struct CLLNode* newNode = (struct CLLNode*)malloc(sizeof(struct CLLNode));

    if(!newNode){
        printf("Memory Error");
        return;
    }
    newNode->data = data;
    newNode->next = newNode;

    if(*head == NULL){
        *head = newNode;
        return;
    }
    newNode->next = *head;
    while(curr->next!= head){
        curr = curr->next;
    }
    newNode->next = *head;
    curr->next = newNode;

    *head = newNode;
}

void deleteLastNode(struct CLLNode**head){
    struct CLLNode *temp = *head;
    struct CLLNode *curr = *head;

    if(*head == NULL){
        printf("List Empty");
        return ;
    }
    while(curr->next != *head){
        temp = curr;
        curr = curr->next;
    }
    temp->next = curr->next;
    free(curr);
    return;
}

void deleteFrontNode(struct CLLNode **head){
    struct CLLNode* temp = *head;
    struct CLLNode* curr = *head;

    if(*head == NULL){
        printf("Empty List");
        return;
    }

    while(curr->next != head){
        curr = curr->next;
    }
    curr->next = (*head)->next;
    *head = (*head)->next;

    free(temp);
    return;
}
int main(void){
    return 0;
}