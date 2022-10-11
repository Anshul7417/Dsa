	string FirstNonRepeating(string A){
		    // Code here
		    unordered_map<char,int>m;
		    queue<char>q;
		    string ans="";
		    
		    for(int i=0;i<A.length();i++){
		        char ch=A[i];
		        m[ch]++;
		        
		        q.push(ch);
		        
		        while(!q.empty()){
		            if(m[q.front()]>1){
		                q.pop();
		            }else{
		                ans.push_back(q.front());
		                break;
		            }
		        }
		        
		        if(q.empty()) ans.push_back('#');
		    }
		    return ans;
		}
		}