#include <iostream>
#include <cmath>

using namespace std;


struct node
{   
    node *next;
    int val;
};

int getSize(node *str){

    node *temp = str;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

node *mergeHalves(node *ptrLA, node *ptrLB){

    node *temp = NULL;
    node *tempM = temp;
    node *tempA = ptrLA;
    node *tempB = ptrLB;

    while (tempA != NULL && tempB != NULL)
    {
        if(tempA->val <= tempB->val){
            tempM = new node;
            tempM->val = tempA->val;
            tempM->next = temp;
            temp = tempM;

            tempA = tempA->next;
        }
        else{
            tempM = new node;
            tempM->val = tempB->val;
            tempM->next = temp;
            temp = tempM;

            tempB = tempB->next;
        }
    }
    // Copy the remaining elements of
    // *ptrLA, if there are any
    while (tempA != NULL) {
        tempM = new node;
        tempM->val = tempA->val;
        tempM->next = temp;
        temp = tempM;

        tempA = tempA->next;
    }
 
    // Copy the remaining elements of
    // *ptrLB, if there are any
    while (tempB != NULL) {
        tempM = new node;
        tempM->val = tempA->val;
        tempM->next = temp;
        temp = tempM;

        tempB = tempB->next;
    }
    return temp;
}

void merge(node *ptrLA, node *ptrLB){

    if(ptrLA == ptrLB)
        return;
    mergeHalves(ptrLA, ptrLB);
}

/* Given a reference (pointer to pointer)
to the head of a list and an int, inserts
a new node on the front of the list. */
void push(node** head_ref, int new_data)
{
    /* 1. allocate node */
    node* new_node = new node();
 
    /* 2. put in the data */
    new_node->val = new_data;
 
    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);
 
    /* 4. move the head to point to the new node */
    (*head_ref) = new_node;
}

/* Given a reference (pointer to pointer) to the head
of a list and an int, appends a new node at the end */
void append(node** head_ref, int new_data)
{
    /* 1. allocate node */
    node* new_node = new node();
 
    node *last = *head_ref; /* used in step 5*/
 
    /* 2. put in the data */
    new_node->val = new_data;
 
    /* 3. This new node is going to be
    the last node, so make next of
    it as NULL*/
    new_node->next = NULL;
 
    /* 4. If the Linked List is empty,
    then make the new node as head */
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
 
    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;
 
    /* 6. Change the next of last node */
    last->next = new_node;
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    /* Start with the empty list */   
    node *ptrLA = NULL;
    node *ptrLB = NULL;
  
    /* Use push() to construct below list */
    push(&ptrLA,8);
    push(&ptrLA,6); 
    push(&ptrLA,5); 
    push(&ptrLA,3);
    push(&ptrLA,1); 

    push(&ptrLB,9); 
    push(&ptrLB,8);
    push(&ptrLB,7);
    push(&ptrLB,4);
    push(&ptrLB,2);
        

    node *temp = mergeHalves(ptrLA, ptrLB);
    cout<<"count of nodes is "<< getSize(temp);
}   
