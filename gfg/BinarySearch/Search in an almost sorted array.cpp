// C++ program to find an element
// in an almost sorted array
#include <stdio.h>

// A recursive binary search based function.
// It returns index of x in given array
// arr[l..r] is present, otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
 while(l<=r)
 {
   
   int mid = l+ (r-l)/2 ;
   if(arr[mid]==x)
     return mid ;
   if(mid-1 >= l & arr[mid-1] == x)
     return mid-1;
   if (mid+1 <= r && arr[mid+1] == x)
     return mid+1;
   else if (arr[mid] > x)
     r= mid -2;
   else
     l = mid + 2 ;
 }
   
return - 1;
		
}

// We reach here when element is not present in array


// Driver Code
int main(void)
{
int arr[] = {3, 2, 10, 4, 40};
int n = sizeof(arr) / sizeof(arr[0]);
int x = 4;
int result = binarySearch(arr, 0, n - 1, x);
(result == -1) ? printf("Element is not present in array")
			: printf("Element is present at index %d",
						result);
return 0;
}
