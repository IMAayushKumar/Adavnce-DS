#include<iostream>
using namespace std;
int bintodec(int n){
    if(n==0){
        return 0;
    }
    return bintodec(n/10)*2+(n%10);
}
int main(){
    int n;
    cout<<"Enter your binary experssion"<<endl;
    cin>>n;
   cout<< "The converted binary into decimal :"<< bintodec(n);
}
