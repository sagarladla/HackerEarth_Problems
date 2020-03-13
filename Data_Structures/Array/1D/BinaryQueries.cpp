/* Author - @sagarladla */

#include<bits/stdc++.h>
#include<string>
#include<bitset>
using namespace std;

int main(){
    int n,q,Query[3];
    cin>>n>>q;
    int ar[n];
    string binary;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    while(q--){
        for(int i=0;i<3;i++)
        {
            cin>>Query[i];
            if (Query[0]==1)
            {
                break;
            }
        }
        if(Query[0]==1){
            try{
                ar[1]=not ar[1];
            }
            catch(...){
                cout<<"Index out of range!!!"<<endl;
            }
        }
        else
        {
            int count=0;
            for(int i=Query[1]-1;i<Query[2]-1;i++)
            {
                binary.append(static_cast<char>(i));
                count++;
            }
            bitset<> no(binary);
            if(no.to_long()%2==0)
            {
                cout<<"EVEN\n";
            }
            else
            {
                cout<<"ODD\n";
            }
        }
        
    }
    return 0;
}
