#include <bits/stdc++.h>
using namespace std;
void towerofhanoi(int n,char beg,char aux,char end){
    if(n==1){
        cout<<"Move disk 1 from"<<beg<<"to"<<endl;
        return;
    }
    towerofhanoi(n-1,beg,end,aux);
    cout<<"Move disk"<<n<<"from"<<beg<<"to"<<end<<endl;
    towerofhanoi(n-1,aux,beg,end);
}
int main() {
    int n;
    cout<<"Enter the number of disks:"<<endl;
    cin>>n;
    towerofhanoi(n,'A','B','C');
    


    
    return 0;
}