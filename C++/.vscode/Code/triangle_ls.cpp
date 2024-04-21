#include<iostream>
#include<cmath>

void LS(float a,float b,float c,float *L,float *S){
    if(a+b>c||a+c>b||b+c>a){
    *L = a+b+c;
    float s;
    s = (a+b+c)/2.0;
    *S = sqrt(s*(s-a)*(s-b)*(s-b)); 
    }
}
    using namespace std;

    int main(){
    float a,b,c,L,S;
    cin>>a>>b>>c;
    LS(a,b,c,&L,&S);
    cout<<L<<S;
}