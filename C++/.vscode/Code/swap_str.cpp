#include<iostream>
using namespace std;
#include<cstring>
int swap (char *p1,char *p2){
	char temp[20];
	strcpy(temp,p1);
	strcpy(p1,p2);
	strcpy(p2,temp);
	
}

int main(){
    string str1[3];
	for(int i=0;i<3;i++){
		cin>>str1[i];
	}
	string str2[30];
	for(int i=0;i<3;i++){
		cin>>str2[i];
	}
	for(int i=0;i<3;i++){
		swap(str1[i],str2[i]);
	}
	cout<<"Array1: {";
	for(int i=0;i<3;i++){
		cout<<"\""<<str1[i]<<"\"";
		if(i<2){
			cout<<", ";
		}
	}
	cout<<"}"<<endl;
	cout<<"Array2: {";
	for(int i=0;i<3;i++){
			cout<<"\""<<str2[i]<<"\"";
			if(i<2){
				cout<<", ";
}}
cout<<"}"<<endl;
}