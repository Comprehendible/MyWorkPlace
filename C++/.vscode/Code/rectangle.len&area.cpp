#include<iostream>
#include<cmath>
using namespace std;

bool AL(float a,float b,float c,float *area,float *len){
	if (a+b>c||a+c>b||b+c>a){
		float s;
		s = (a+b+c)/2.0;
		*area = sqrt(s*(s-a)*(s-b)*(s-c));
		*len = a + b + c;
		return 1;
	}else return 0;
}

int main(){
	float a,b,c,area,len;
	cin>>a>>b>>c;
	AL(a,b,c,&area,&len);
	cout<<"Area of the triangle:"<<area<<endl<<"Length of the triangle:"<<len<<endl;
}
