#include<iostream>
		#include<cstring>
		using namespace std;
		int main(){
			const char *s[]={"China","America","Japan","France","Germany","Canada"};
			const char **p;
			p=s;
			cout<<"排序前："<<endl;
			for(int i=0;i<6;i++){
				cout<<*(p+i);
				if(i<=4){
					cout<<"   ";       
				}
			}
			cout<<endl;
			
			for(int i=0;i<5;i++){
				for(int j=i+1;j<6;j++){
					if(strcmp(*(p+i),*(p+j))>0){
						const char *temp;
						temp=*(p+i);
						*(p+i)=*(p+j);
						*(p+j)=temp;
					}
				}
			}
			cout<<"排序后："<<endl;
			for(int i=0;i<6;i++){
				cout<<*(p+i);
				if(i<=4){
				cout<<"   ";       
								}
			}
			cout<<endl;
			system("pause");
			
		};