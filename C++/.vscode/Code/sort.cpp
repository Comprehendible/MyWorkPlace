#include<iostream>

void sort(int a[]){
	int i,j,temp;
	for(i=0;i<9;i++){               
		for(j=i+1;j<10;j++){   //for(j=0;j<9-i;j++){
			if(a[i]<a[j]){     		//if(a[j]>a[j+1]){
				temp = a[i];         //temp = a[j];
				a[i] = a[j];         //a[j] = a[j+1];
				a[j] = temp;         //a[j+1] = temp;}}  左侧应优于右侧
			}
		}
	}
}

using namespace std;
int main(){
	int i,n;
	int arr[10];
	n = 10;
	cout<<"Please input 10 integers";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr);
	for(i=0;i<n;i++){
		cout<<arr[i];
		if(i!=10){
			cout<<", ";
		}
	}
}
