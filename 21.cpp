#include<iostream>
using namespace std;


int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main(){
    int a, b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a;
    cin>>b;
    cout<<gcd(a, b)<<endl;
return 0;
}