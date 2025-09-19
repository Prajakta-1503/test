#include<iostream>
using namespace std;
int main(){
	int a[5];
	cout<<" accept array element \n";
	for(int i=0;i<=4;i++){
		cin>>*(a+i);
	}
	int max=*(a+0);
	for(int i=1;i<=4;i++){
		if(max<*(a+i))
		max=*(a+i);
		
	}
	cout<<"maximum number is "<<max;
	
	cout<<"display array element\n";
	for(int i=0;i<=4;i++){
		cout<<*(a+i);
	}
}
