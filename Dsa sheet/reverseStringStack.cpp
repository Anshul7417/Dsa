char* reverse(char *S, int len)
{
    //code here
    stack<char>s;
    
    for(int i=0;i<len;i++){
        char ch=S[i];
        s.push(ch);
    }
    
    int i=0;
    while(!s.empty()){
        char ch=s.top();
        s.pop();
        S[i]=ch;
        i++;
    }
    
    return S;
}