// Doubly Linked Lists
#include <stdio.h>

struct DLLNode{
    int data;
    struct DLLNode* next;
    struct DLLNode* prev;
};
//Insertion

//Insertion at beginning 
void insertAtBegin(struct DLLNode** head, int data){
    struct DLLNode *curr = *head;
    struct DLLNode *newNode = (struct DLLNode*)malloc(sizeof(struct DLLNode));

    if(!newNode){
        printf("Memory Error");
        return;
    }
    newNode->prev = NULL;
    newNode->data = data;
    newNode->next = NULL;
    if(curr == NULL){
        *head = newNode;
        return;
    }
    newNode->next = *head;
    (*head)->prev = newNode;

    *head = newNode;
}
// Insertion at End
void insertAtEnd(struct DLLNode** head, int data){
    struct DLLNode *curr = head;
    struct DLLNode *newNode = (struct DLLNode *)malloc(sizeof(struct DLLNode));
    if(!newNode){
        printf("Memory Error");
        return;
    }
    newNode->prev = NULL;
    newNode->data = data;
    newNode->next = NULL;

    if(*head == NULL){
        *head = newNode;
        return;
    }
    while(curr->next!=NULL){
        curr = curr->next;
    }
    newNode->prev = curr;
    curr->next = newNode;
}

void insert(struct DLLNode **head, int data, int pos){
    int k = 1;
    struct DLLNode *temp, *newNode;
    newNode = (struct DLLNode*)malloc(sizeof(struct DLLNode));

    if(!newNode){
        printf("Memory Error");
        return;
    }
    newNode->prev = NULL;
    newNode->data = data;
    newNode->next = NULL;
    if(pos == 1){
        newNode->next = *head;
        newNode->prev = NULL;

        if(*head){
            (*head)->prev = newNode;
        }
        *head = newNode;
        return;
    }
    temp = *head;
    while(k<pos-1 && temp->next !=NULL){
        temp = temp->next;
        k++;
    }

    if(k<pos-1){
        printf("Desired Position doesn't exist");
        return;
    }
    newNode->next = temp->next;
    newNode->prev = temp;

    if(temp->next){
        temp->next->prev = newNode;
    }
    temp->next = newNode;
    return;

}

void deleteFrontNode(struct DLLNode**head){
    struct DLLNode *temp = *head;
    if(*head == NULL){
        printf("List Empty");
        return;
    }
    temp = *head;
    *head = (*head)->next;
    (*head)->prev = NULL;
    free(temp);
    return;
}

void deleteLastNode(struct DLLNode **head){
    struct DLLNode* curr = *head;
    struct DLLNode* temp = *head;

    if(*head == NULL){
        printf("List Empty");
        return;
    }
    while(curr->next != NULL){
        curr = curr->next;
    }
    temp = curr->prev;
    temp->next = curr->next;
    free(curr);
    return;

}

void delete(struct DLLNode**head, int pos){
    struct DLLNode *temp2, *temp = *head;
    int k = 1;
    if(*head == NULL){
        printf("Empty List");
        return;
    }
    if(pos == 1){
        *head = (*head)->next;
    }
    if(*head != NULL){
        (*head)->prev = NULL;
        free(temp);
        return;
    }

    while(k<pos && temp->next!= NULL){
        temp = temp->next;
        k++;
    }
    if(k<pos-1){
        printf("Desired Position doesn't exist");
        return;
    }
    temp2 = temp->prev;
    temp2->next = temp->next;
    if(temp->next){
        temp->next->prev = temp2;
    }
    free(temp);
    return;
}

int main(void){
    
    return 0;
}