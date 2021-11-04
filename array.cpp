#include <iostream>
using namespace std;

int main()
{
	int A[3][4] = {{6,4,4,4} , {7,8,2,6} , {5,8,6,3}} ;
	int n;
	float Jumlah, rerata, Jumlah1;

	cout << "Data pada Tabel" << "\n" << endl ;

	for (int i = 0; i <= 2; i++)
	{
		Jumlah = 0 ;
		for (int j = 0; j <= 3; j++)
		{
			cout << A[i][j] << "  " ;
		}
		cout << "\n" << endl ;
	}

	cout << "\n" << "Jumlah dan Rerata tiap baris dan kolom" << "\n" << endl ;

	for (int i = 0; i <= 2; i++)
	{
		Jumlah = 0 ;
		for (int j = 0; j <= 3; j++)
		{
			cout << A[i][j] << "     " ;
			Jumlah += A[i][j] ;
		}
		cout << " " << Jumlah << "   " << Jumlah/4 << "\n" << endl ;
	}

	for (int k = 0; k <= 3; k++)
	{
		Jumlah1 = 0 ;
		for (int l = 0; l <= 2; l++)
		{
			Jumlah1 += A[l][k] ;
		}
		cout << Jumlah1 << "    " ;
	}

	cout << "\n" << endl ;

	for (int k = 0; k <= 3; k++)
	{
		Jumlah1 = 0 ;
		for (int l = 0; l <= 2; l++)
		{
			Jumlah1 += A[l][k] ;
		}
		cout << Jumlah1/3 << "  " ;
	}

	cout << "\n" << "\n" <<"\n" <<"\n" <<"\n" << endl ;
	

	return 0;
}

