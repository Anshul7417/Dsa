void SortedStack :: sort()
{
   //Your code here
  priority_queue<int> box;
  while(!s.empty()){
      box.push(s.top());
      s.pop();
  }
   while(!box.empty())

  {
     cout<<box.top()<<" ";
     box.pop();
  }
}
