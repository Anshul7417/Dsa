#include<iostream>
#include<map>
using namespace std;


int main()
{
    int comp,count=0,count2=0;
    string str;
    map<char,bool>mp;
    cin>>str>>comp;
    for(int i=0;i<str.length();i++){
        mp[str[i]];
        if(count!=comp && mp[str[i]]==false){
            mp[str[i]]=true;
        }else if(count==comp){
            count2++;
        }else{
            mp[str[i]]=false;
        }
    }

    cout<<count2;
    return 0;
    
}