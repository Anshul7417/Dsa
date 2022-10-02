void solve(stack<int>& myStack, int x){
    if(myStack.size()==0){
        myStack.push(x);
        return;
    }
    
    int t=myStack.top();
    myStack.pop();
    
    solve(myStack,x);
    
    myStack.push(t);
    
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    solve(myStack,x);
    
    return myStack;
}
