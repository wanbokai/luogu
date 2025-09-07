#include<iostream>
#include<cmath>
#include <iomanip>

int main(){
    using namespace std;
    double a,b,c;
    double p;
    cin>>a>>b>>c;
    p=(a+b+c)/2;
    double result=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<fixed<<setprecision(1)<<result;
    return 0;
}