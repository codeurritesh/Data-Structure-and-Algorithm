#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<"1=100 notes \n 2=50 \n 3=10 \n 4=1";
	int t;
	cin>>t;
	switch(t)
	{
		case 1: {
	cout<<"there are "<<n/100<<" notes for "<<n;
		break;
	}
	case 2: {
	cout<<"there are "<<n/50<<" notes for "<<n;
		break;
	}
	case 3: {
	cout<<"there are "<<n/10<<" notes for "<<n;
		break;
	}
	case 4: {
	cout<<"there are "<<n/1<<" notes for "<<n;
		break;
	}
		
		default:
			{
			cout<<"no distribution possible";
			break;
	}}
}
