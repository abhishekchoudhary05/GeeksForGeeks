bool isPalindrome(Node *head)
{
    if(head == NULL){
        return true;
    }
    
    stack<int> st;
    
    Node *current=head;
    while(current!=NULL){
        st.push(current->data);
        current=current->next;
    }
    
    current=head;
    while(!st.empty()){
        if(current->data!=st.top()){
            return false;
        }
        st.pop();
        current=current->next;
    }

    return true;
    //Your code here
}


// time complexity O(n)
// space complexity O(n)