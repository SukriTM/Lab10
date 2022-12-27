#include<iostream>
using namespace std;

//Write the function printO() here

void printO(int x, int y){
	int N=x, M=y;
	if (N>0 && M>0)
	{
		
		for (int i = 0; i < N; i++)
		{
			for (int i = 0; i < M; i++)
			{
				cout << 'O';
			}
		
			cout << '\n';
		}

	}else cout << "Invalid input";
	
}



