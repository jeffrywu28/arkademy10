#include <iostream>
using namespace std;
int cetak_gambar(int x)
{
	int input,baris,kolom,temp,tempkolom;
	cout<<"input angka : "; cin>>input;
	if(input%2!=0)
	{
		for(baris=0;baris<input;baris++)
		{
			for (kolom=0;kolom<input;kolom++)
			{
				if(baris==kolom)
					cout<<"x ";
				else if(kolom==input-1-baris)
					cout<<"x ";
				else
					cout<<"= ";
			}
			cout<<endl;
		}
	}
	else
	{
		cout<<"inputan harus ganjil!";
	}

}

int main()
{
	cetak_gambar(5);
		return 0;
}