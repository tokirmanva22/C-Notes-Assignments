//Program of add sub div mul
#include<bits/stdc++.h>
using namespace std;

void add()
{
	int a,b;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	
	cout<<"Result is :"<<(a+b)<<endl;
}

void sub()
{
	int a,b;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	
	cout<<"Result is :"<<a-b<<endl;
}

void multiply()
{
	int a,b;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	
	cout<<"Result is :"<<a*b<<endl;
}

void div()
{
	int a,b;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	
	cout<<"Result is :"<<a/b<<endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	
	cout<<"1.Addition"<<endl;
	cout<<"2.Substraction"<<endl;
	cout<<"3.Multiplication"<<endl;
	cout<<"4.Division"<<endl;
	
	int i;
	cout<<"-----What you want to do-----";
	cin>>i;
	
	switch (i)
	{
		case 1: add();
		        break;
		case 2: sub();
		        break;
		case 3: multiply();
		        break;
		case 4: div();
		        break;
	}
	return 0;
}
