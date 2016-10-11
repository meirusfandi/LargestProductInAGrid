//brute force code cpp solution with debug comment

#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int a[20][20];
	long long max=0;
	long long temp;
 
	for (int i=0;i<20;i++){
		for (int j=0;j<20;j++){
			cin>>a[i][j];
		}
	}
 
	for (int i=0;i<20;i++){
		for (int j=0;j<20;j++){
	//	cout<<i<<" "<<j<<" -->";	
			if (j<17){
				temp=1;
				for (int k=0;k<4;k++){
					temp = temp*a[i][j+k];
				}
			//	cout<<max<<" "<<temp<<" ";
				if (temp>max){
					max=temp;
				}
			}
 
			if (i<17){
				temp=1;
				for (int k=0;k<4;k++){
					temp = temp*a[i+k][j];
				}
			//	cout<<max<<" "<<temp<<" ";
				if (temp>max){
					max=temp;
				}
			}
 
			if ((j<17) && (i<17)){
				temp=1;
				for (int k=0;k<4;k++){
					temp = temp*a[i+k][j+k];
				}
			//	cout<<max<<" "<<temp<<" ";
				if (temp>max){
					max=temp;
				}
			}
			if ((j>2) && (i<17))
			{
				temp=1;
				for (int k=0;k<4;k++){
					temp = temp*a[i+k][j-k];
				}
			//	cout<<max<<" "<<temp;
				if (temp>max){
					max=temp;
				}
			}
		//	cout<<endl;
		}
	}
	cout<<"\nnilai terbesarnya adalah "<<max;
	return 0;
}
