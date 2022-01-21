#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
int t=n;

		n=n/100;
		cout<<"there are "<<n<<" notes of 100";
		cout<<endl;
n=t-n*100;
t=n;
n=n/20;
	cout<<"there are "<<n<<" notes of 20";
		cout<<endl;
	n=t-n*20;
		t=n;
	n=n/10;

		cout<<"there are "<<n<<" notes of 10";
			cout<<endl;
		n=t-n*10;
	n=n/1;
			cout<<"there are "<<n<<" notes of 1";
				cout<<endl;
			
		
		
	

}
