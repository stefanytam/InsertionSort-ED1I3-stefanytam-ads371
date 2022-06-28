#include <iostream>
using namespace std;

void print(int t, int *a)
{
	for(int i=0; i<t; ++i)
	{
		cout << "a[" << i << "]: " << a[i] << endl;
	}
	cout << "-------" << endl;
}

void insertion_sort(int t, int *a)
{
	for (int i = 1; i < t; i++) { 
		int j = i;
	
		while (j > 0 && a[j] < a[j-1]) {
			int aux = a[j];
			a[j] = a[j - 1];
			a[j - 1] = aux;
			j -= 1;
		}
	
	}	
}

int main(int argc, char** argv)
{
	int v[8] = {49, 38, 58, 87, 34, 93, 26, 13};
	print(8, v);
	insertion_sort(8, v);
	print(8, v);
	
	return 0;
}