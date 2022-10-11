void interLeaveQueue(queue < int > & q) {
    // Write your code here.
    queue<int> temp;
    int halfSize = q.size() / 2;
  
    for (int i = 0; i < halfSize; i++) {
        temp.push(q.front());
        q.pop();
    }
  
    while (!temp.empty()) {
        q.push(temp.front());
        q.push(q.front());
        q.pop();
        temp.pop();
    }
    
}