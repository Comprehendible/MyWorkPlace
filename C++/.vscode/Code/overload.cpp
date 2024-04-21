#include<iostream>
#include<cmath>
using namespace std;
void dis(int x=0,int y=0,int z=0){
	float d;
	d = sqrt(x*x+y*y+z*z);
	if(y==0&&z==0){
		cout<<"Distance from "<<"("<<x<<") to origin: "<<d<<endl;		
	}else if (z==0){
		cout<<"Distance from "<<"("<<x<<", "<<y<<") to origin: "<<d<<endl;
	}else cout<<"Distance from ("<<x<<", "<<y<<", "<<z<<") to origin: "<<d<<endl;
}

void dis(float x=0,float y=0,float z=0){
	float d;
	d = sqrt(x*x+y*y+z*z);
	if(y==0&&z==0){
		cout<<"Distance from "<<"("<<x<<") to origin: "<<d<<endl;		
	}else if (z==0){
		cout<<"Distance from "<<"("<<x<<", "<<y<<") to origin: "<<d<<endl;
	}else cout<<"Distance from ("<<x<<", "<<y<<", "<<z<<") to origin: "<<d<<endl;
}

int main(){
	int x=1,y=1,z=1;
	float a=1.5,b=-1.5;
	dis(a,b);
	dis(x,y,z);
	
}
