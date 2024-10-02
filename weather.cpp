#include<iostream>
#include<string>
using namespace std;
int main()
{
	float temp;
	string str,yes,no;
	string str1,high,low;
	cout<<"Enter a temperature";
	cin>>temp;
	if(temp>=10&&temp<=20)
	{
			cout<<"you have to wear a sweater"<<endl;
			cout<<"is there a rain?";
			cin>>str;
			if(str=="yes")
			{
				cout<<"you also have to wear a water proof coat"<<endl;
			}
			else if(str=="no")
			{
				cout<<"ok you may go"<<endl;
			}
			else
			{
				cout<<"invalid data!"<<endl;
			}
				cout<<"what is wind speed high or low?";
			cin>>str1;
			if(str1=="high")
			{
				cout<<"you also have to wear a wind resistant cloth"<<endl;
			}
			else if(str1=="low")
			{
				cout<<"ok fine"<<endl;
			}
			else
			{
				cout<<"invalid data!"<<endl;
			}
	}
	else if(temp>=20)
	{
		cout<<"you must wear a t-shirt";
		cout<<"\n is there a rain?";
			cin>>str;
			if(str=="yes")
			{
				cout<<"you also have to wear a water proof coat"<<endl;
			}
			else if(str=="no")
			{
				cout<<"ok fine"<<endl;
			}
			else
			{
				cout<<"invalid data!"<<endl;
			}
			cout<<"what is wind speed high or low?";
			cin>>str1;
			if(str1=="high")
			{
				cout<<"you also have to wear a wind resistant cloth"<<endl;
			}
			else if(str1=="low")
			{
				cout<<"ok fine"<<endl;
			}
			else
			{
				cout<<"invalid data!"<<endl;
			}
	}
	else if(temp<=10)
	{
		cout<<"you must wear a jacket"<<endl;
		cout<<"is there a rain?"<<endl;
			cin>>str;
			if(str=="yes")
			{
				cout<<"you also have to wear a water proof coat"<<endl;
			}
			else if(str=="no")
			{
				cout<<"ok fine"<<endl;
			}
			else
			{
				cout<<"invalid data!"<<endl;
			}
			cout<<"what is wind speed high or low?";
			cin>>str1;
			if(str1=="high")
			{
				cout<<"you have to wear a wind resistant cloth"<<endl;
			}
			else if(str1=="low")
			{
				cout<<"ok fine"<<endl;
			}
			else
			{
				cout<<"Please Enter a Correct Number!"<<endl;
			}
	}
	else
	{
		cout<<"invalid data";
	}
	return 0;
}
