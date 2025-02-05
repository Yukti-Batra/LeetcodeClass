#include<iostream>
using namespace std;
int main(){
    string ans[6]={"hii","my","name","is","yukti","batra"};
    for(int i=0;i<6;i=i+2){
        cout<<ans[i]<<" ";
    }
    for(int i=5;i>=0;i=i-2){
        cout<<ans[i]<<" ";
    }
    return 0;
}