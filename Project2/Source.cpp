#include <iostream>
using namespace std;


typedef unsigned int uint;
bool is_sort_asc(int* arr, uint size) //ascending
{
	if (arr != nullptr && size > 0)
	{
		for (uint i = 0;i < size - 1;i++)
		{
			if (arr[i] > arr[i + 1])//не отсортирован 
			{
				return false;
		     }
	    }
		return true;
	}
	else 
	{
		return false;

	}
	
}

int main()
{
	const int N = 5;
	int arr[N] = { 1,3,5,7,9 };
	if (is_sort_asc(arr, N)) {
		cout << "Array=SORTED\n";

	}
	else
	{
		cout << "Array!= sorted\n";
	}

}