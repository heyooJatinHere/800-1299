#include<bits/stdc++.h>
using namespace std;

bool distinct(int num){
    unordered_map<int, int> mp;
    while(num > 0){
        int rem = num % 10;
        if(mp.find(rem) != mp.end()){
            return false;
        }else{
            mp[rem] = 1;
        }
        num=num/10;
    }
    return  true;
}

int main(){
    int year;
    int ans=0;
    cin>>year;

    for(int i=year+1;i<=9999;i++){
        if(distinct(i)){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
}