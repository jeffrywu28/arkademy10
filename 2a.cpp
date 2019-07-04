#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

string *generateString(int x) {

	static const string charList = "0123456789abcdefghijklmnopqrstuvwxyz";
	srand(time(0));
	string *alphanumeric;
	alphanumeric= new string [x];
	for(int y=0;y<x;y++)
	{
		for(int i = 0; i < 32; i++) 
		{
		alphanumeric[y] += charList [rand() % charList.size()];
		}
	}
	cout<<"[";
	for (int a=0;a<x;a++)
	{
		cout<<"'"<<alphanumeric[a]<<"',";
	}
	cout<<"]";
}

int main()
{

	cout<<generateString(2);
	return 0;
}