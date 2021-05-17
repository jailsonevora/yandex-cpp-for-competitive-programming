#include <iostream>
#include <cmath>

using namespace std;

struct node
{   
    node *next;
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


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    /* Start with the empty list */
    node* head = NULL; 
  
    /* Use push() to construct below list */
    // push(&head); 
    // push(&head); 
    // push(&head); 
    // push(&head); 
    // push(&head);

    cout<<"count of nodes is "<< get(head); 
}   
