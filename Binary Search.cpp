#include<iostream>
using namespace std;

int
main ()
{
  int low, high, mid, arr[50], n, search, i;
  cout << "Enter the No. of Elements of the Array: ";
  cin >> n;

  cout << "Enter the Array Elements: ";
  for (i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

  cout << "Enter the Element you want to search: ";
  cin >> search;

  low = 0;
  high = n - 1;

  while (low <= high)
    {
      mid = low + (high - low) / 2;
      if (search == arr[mid])
	{
	  cout << "Element Found at: " << mid;
	  break;
	}
      else if (search < arr[mid])
	{
	  high = mid - 1;

	}
      else if (search > arr[mid])
	{
	  low = mid + 1;
	}
      else
	{
	  cout << "Element Not Found!";
	}
    }

  return 0;
}
