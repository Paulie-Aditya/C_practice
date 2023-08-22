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

void *deleteFirst(struct ListNode** head){
    struct ListNode* temp;
    if(*head == NULL){
        return;
    }
    temp = *head;
    *head = (*head)->next;
    free(temp);

    return;
}

void *deleteLast(struct ListNode **head){
    struct ListNode* temp = NULL;
    struct ListNode* curr = *head;
    if(*head == NULL){
        return;
    }
    while(curr->next != NULL){
        temp = curr;
        curr = curr->next;
    }
    temp->next = NULL;
    free(curr);
    return;

}
void *delete(struct ListNode**head, int pos){
    int k = 1;
    struct ListNode*p,*q;
    if(*head == NULL){
        printf("Empty List");
        return;
    }
    p = *head;
    if(pos == 1){
        *head = (*head)->next;
        free(p);
        return;
    }
    else{
        while((p!=NULL) && k<pos){
            k++;
            q = p;
            p = p->next;
        }
        if(p == NULL){
            prinf("Position doesn't exist.\n");
            return;
        }
        else{
            q->next = p->next;
            free(p);
        }
        return;
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