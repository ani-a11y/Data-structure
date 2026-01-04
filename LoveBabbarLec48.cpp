

               // Que - Remove duplicates from a sorted LL

               
node* uniqueSortedList(node* head){
    //empty list
    if(head == NULL){
        return NULL;
    }
    //non empty list
    node* curr = head
    while(curr != NULL){
        if((curr -> next != NULL) && curr -> data == curr -> next -> data){
            node* next_next =curr -> next -> next;
            node*nodetodelete = curr ->next;
            delete(nodetodelete);
        }else{
            curr = curr -> next;
        }
    }
    return head;
}



// remove duplicates from  unsorted LL

node* uniqueUnSortedList( node* head){

    if(head ==NULL){
        return NULL;
    }
    node* curr = head;
    while( curr != NULL){
        node* temp = curr -> next;
        if( temp -> data == curr -> data){
            node* nodetodelete = temp;
            delete(nodetodelete);
        }
    }
}