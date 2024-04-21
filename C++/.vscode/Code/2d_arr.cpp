#include<iostream>
using namespace std;
int main(){
	int a[][6] = {{1,2},{3,4,5},{6,7,8,9},{10,11}};
	int (*b)[6]=a;//每行首地址
	cout<<"2d-array:";
	for(int i=0;i<4;i++){
		for(int j=0;j<6;j++){
			if(*(*(b+i)+j)){
				if(j%6==0){
					cout<<endl;
				}
				cout<<*(*(b+i)+j)<<" ";
			}
			
		}		
	}	
	cout<<endl;
}