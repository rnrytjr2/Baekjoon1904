// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
int DP[1000001];
int Tiled(int length);
int N;
int main()
{
	cin >> N;
	DP[1] = 1;
	DP[2] = 2;
	Tiled(N);
	cout << DP[N];
}
int Tiled(int length)
{

	if (length == 1)
	{
		return 1;
	}
	else if (length == 2)
	{
		return 2;
	}
	else if (DP[length] != 0)
	{
		return DP[length];
	}
	else 
	{
		return DP[length] = (Tiled (length-1) + Tiled(length-2))% 15746;
	}
}