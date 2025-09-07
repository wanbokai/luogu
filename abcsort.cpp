#include<iostream>

int main(){
    using namespace std;
    int num[3];
    int a,b,c;
    cin>>a>>b>>c;
    int t;

    if(a>b){
        t=a; a=b; b=t;
    }
    if(a>c){
        t=a; a=c; c=t;
    }
    if(b>c){
        t=b; b=c; c=t;
    }

    char i,j,k;
    cin>>i>>j>>k;
    num[0]=a,num[1]=b,num[2]=c;
    cout<<num[i-65]<<" "<<num[j-65]<<" "<<num[k-65];
}