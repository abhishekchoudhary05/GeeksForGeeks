Node* segregate(Node *head) 
{
    int arr[3]={0}, count=0;

    Node *current = head;
    while(current){
        arr[current->data]++;
        count++;
        current=current->next;
    }

    current=head;
    while(count--){

        if(arr[0]!=0){
            current->data=0;
            arr[0]--;
            current=current->next;
        }

        else if(arr[1]!=0){
            current->data=1;
            arr[1]--;
            current=current->next;            
        }
        
        else{
            current->data=2;
            arr[2]--;
            current=current->next;            
        }
    }
    return head;
    // Add code here
    
}
