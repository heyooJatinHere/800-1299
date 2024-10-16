#include<iostream>
using namespace std;

int main(){
    int r,c;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int num;
            cin>>num;
            if(num==1){
                r=i+1;
                c=j+1;
                break;
            }
        }
    }
    cout<<abs(3-r)+abs(3-c)<<endl;
}