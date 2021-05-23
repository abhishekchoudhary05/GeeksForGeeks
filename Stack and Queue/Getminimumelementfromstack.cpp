int _stack :: getMin()
{
    if(s.empty()){
        return -1;
    }
    
    return s.top();
}

/*returns poped element from stack*/
int _stack ::pop()
{
    if(s.empty()){
        return -1;
    }
    
    s.pop();
    int top = s.top();
    s.pop();
    
    if(!s.empty())
        minEle = s.top();
    return top;
}

/*push element x into the stack*/
void _stack::push(int x)
{
    if(s.empty()){
        minEle = INT_MAX;
    }
    
    if(x < minEle)
        minEle = x;
        
    s.push(x);
    s.push(minEle);
   //Your code here
}