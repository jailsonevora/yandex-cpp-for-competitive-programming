#include <iostream>
#include <cmath>

using namespace std;


struct node
{   
    node *next;
    int val;
};

int get(node *str){

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

    while (ptrLA != NULL && ptrLB != NULL)
    {
        if(ptrLA->val <= ptrLB->val){
            temp = new node;
            temp->val= ptrLA->val;
            temp->next = NULL;
            ptrLA = ptrLA->next;
        }
        else{
            temp = new node;
            temp->val= ptrLB->val;
            temp->next = NULL;
            ptrLB = ptrLB->next;
        }
        temp = temp->next;
    }
    // Copy the remaining elements of
    // *ptrLA, if there are any
    while (ptrLA != NULL) {
        temp = new node;
        temp->val= ptrLA->val;
        temp->next = NULL;

        ptrLA = ptrLA->next;
        temp = temp->next;
    }
 
    // Copy the remaining elements of
    // *ptrLB, if there are any
    while (ptrLB != NULL) {
        temp = new node;
        temp->val= ptrLB->val;
        temp->next = NULL;

        ptrLB = ptrLB->next;
        temp = temp->next;
    }
    return temp;
}

void merge(node *ptrLA, node *ptrLB){

    if(ptrLA == ptrLB)
        return;
    mergeHalves(ptrLA, ptrLB);
}

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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    /* Start with the empty list */   
    node *ptrLA = NULL;
    node *ptrLAHead = NULL;

    node *ptrLB = NULL;
    node *ptrLBHead = NULL;

  
    /* Use push() to construct below list */
    push(&ptrLA,1); 
    push(&ptrLA,3); 
    push(&ptrLA,5); 
    push(&ptrLA,6); 
    push(&ptrLA,8);

    push(&ptrLB,2); 
    push(&ptrLB,4); 
    push(&ptrLB,7); 
    push(&ptrLB,9); 
    push(&ptrLB,8);

    

    node *temp = mergeHalves(ptrLA, ptrLB);
    cout<<"count of nodes is "<< get(temp);
}   
