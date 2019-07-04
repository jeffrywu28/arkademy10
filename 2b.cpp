#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

string *generateString(int x) {

	static const string charList = "0123456789abcdefghijklmnopqrstuvwxyz";
	srand(time(0));
	string *alphanumeric;
	alphanumeric=new string [x];
	string a[100],temp,simpan;	
	bool repeat=false;
	int i,j,k;
	for(k=0;k<x;k++)
	{
		for(i = 0; i < 32; i++) 
		{	
			do{
				repeat=false;
				temp = charList [rand() % charList.size()];
	  			for(j=0;j<=i;j++)
	  			{
	  				if(temp==a[j])
	  				{
	  					repeat=true;
	  					break;
	  				}	
	  			}	
	    	}while(repeat);
	  	a[i]=temp;
		alphanumeric[k]+=a[i];
		repeat=false;
		}
	
	}
		cout<<"[";
	for (int b=0;b<x;b++)
	{
		cout<<"'"<<alphanumeric[b]<<"',";
	}
	cout<<"]";
}

int main()
{

	cout<<generateString(2);
	return 0;
}