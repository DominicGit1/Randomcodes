//Dominic Grant
//4/21/2019
//reverse array
#include<iostream> 
#include<fstream> 
using namespace std;

int *reverse(const int *, int);

int main()
{
	int N;
	cin >> N;
	if (N > 50 || N < 0)
		exit(0);

	int *arr1 = new int[N], index;

	fstream datafile;
	datafile.open("data.txt", ios::in | ios::out);

	for (index = 0; index < N; index++)
	{
		datafile >> arr1[index];
	}
	int *temp;

	temp = reverse(arr1, N);

	for (index = 0; index < N; index++)
		cout << temp[index] << endl;
}

int *reverse(const int *arr1, int N)
{
	int index = N - 1;
	int *arr2;
	arr2 = new int[N];
	for (int count = 0; count < N; count++)
	{
		arr2[count] = arr1[index];
		index--;
	}
	return arr2;
}


