#include<iostream>
#include <iomanip>
#include <cmath>

int main(){
    using namespace std;
    double s,v;
    cin>>s>>v;
    double t=s/v;
    int min;
    int h;

    min=ceil(t)+10;
    min=480-min;

    if(min>0){
    h=min/60;
    min=min%60;}
    else{
        min=24*60+min;
        h=min/60;
        min=min%60;
    }
    cout<<setw(2)<<setfill('0')<<h<<':';
    cout<<setw(2)<<setfill('0')<<min;
    return 0;
}