#include<bits/stdc++.h>
using namespace std;

int main(){
    string broze, decode;
    cin>>broze;
    for(int i=0;i<broze.size();i++){
        if(broze[i]=='.'){
            decode+='0';
        }else if(broze[i]=='-'){
            if(broze[i+1]=='.'){
                decode+='1';
                
            }else{
                decode+='2';
            }
            i++;
        }
    }

    cout<<decode<<endl;
}