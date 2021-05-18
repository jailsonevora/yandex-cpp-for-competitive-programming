#include <iostream>
#include <cmath>

using namespace std;


struct node
{   
    node *next;
    int val;
};

node *mergeHalves(node *ptrLA, node *ptrLB){

    node *temp;

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
        temp->val= ptrLA->val;
        temp->next = NULL;

        ptrLB = ptrLB->next;
        temp = temp->next;
    }

    return temp;
}

void merge(node *ptrLA, node *ptrLB){

    if(*ptrLA == *ptrLB)
        return;
    mergeHalves(ptrLA, ptrLB);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    node *ptrLA = NULL;
    node *ptrLB = NULL;

    merge(ptrLA, ptrLB);    

}   
