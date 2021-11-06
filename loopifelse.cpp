#include <iostream>
using namespace std;

/*
	g++ loopifelse.cpp -o

	gomenne
*/	

int main()
{
	int the, pro, m;
	bool n;
	char kp;

	do
	{
		cout << "Masukkan nomor: " ;
		cin >> pro ;

			switch(pro){
				case 1:
					for (int i = 0; i < 5; i++)
					{
						for (int j = 0; j < 5; j++)
						{
							if (j < 2)
							{
								n = true ;
							}
							else
							{
								n = false ;
							}

							cout << n << "   " ;
						}
						cout << endl ;
					}
					break;
				case 2: 	
					for (int i = 0; i < 5; i++)
					{
						for (int j = 0; j < 5; j++)
						{
							if (i < 3)
							{
								n = true ;
							}
							else
							{
								n = false ;
							}

							cout << n << "   " ;
						}
						cout << endl ;
					}
					break;
				case 3: 	
					m = 0 ;
					for (int i = 0; i < 5; i++)
					{
						m += 1 ;
						for (int j = 1; j <= 5; j++)
						{
							if (j == m)
							{
								n = false ;
							}
							else
							{
								n = true ;
							}

							cout << n << "   " ;
						}
						cout << endl ;
					}
					break ;
			}			

			cout << "Mau mengulang lagi? (Y/N) " ;
			cin >> kp ;

	} while (kp == 'y' || kp == 'Y');

	cout << "Program selesai" << endl ;

	
	return 0;
}
