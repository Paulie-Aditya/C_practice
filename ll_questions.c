#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct ListNode{
    int data;
    struct ListNode* next;
};

// Find Middle of LL
struct ListNode* middleOfLL(struct ListNode* head){
    struct ListNode* fast = head;
    struct ListNode* slow = head;

    if(head == NULL){
        return NULL;
    }
    while(fast!= NULL && fast->next !=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

//Detect Cycle in LL

bool detectLoop(struct ListNode *head){
    struct ListNode* fast = head;
    struct ListNode* slow = head;

    if(head == NULL || head->next == NULL){
        return false;
    }

    while(fast->next != NULL && fast->next->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow){
            return true;
        }
        
    }
    return false;
}

//Find start of Loop
struct ListNode* startOfLoop(struct ListNode* head){
    if(!detectLoop(head)){
        return NULL;
    }

    struct ListNode* fast = head;
    struct ListNode* slow = head;

    while(fast->next != NULL && fast->next->next != NULL){
        
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow){
            break;
        }
    }

    slow = head;

    while(slow!=fast){
        fast = fast->next;
        slow = slow->next;
    }

    return slow;
    
}

// Find Length of Loop/ Cycle in LL
int loopLength(struct ListNode* head){
    struct ListNode* start = startOfLoop(head);

    struct ListNode* temp = start;

    int length = 0;

    while(temp!=NULL){
        length++;
        temp = temp->next;
        if(temp == start){
            return length;
        }
    }

    return length;
}

// Check whether length of LL is even or odd

int isLLlengthEvenorOdd(struct ListNode* head){
    while(head!= NULL && head->next != NULL){
        head = head->next->next;
    }

    if(head){
        return 0; // Odd
    }else{
        return 1; // Even
    }
}


int main(void){
    return 0;
}