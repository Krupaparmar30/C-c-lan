#include<iostream>
//Q.1 Write a Program to find all even elements from a given 1D array.
//For example,
//Input:
//Enter array size: 5
//Enter array elements:
//a[0] = 12
//a[1] = 42
//a[2] = 15
//a[3] = 55
//a[4] = 26
//
//Output:
//Even elements of an Array: 12, 42, 26

using namespace std;
main()
{
    int n;
    cout << "enter the value of n:";
    cin >> n;
    
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
    	cout << "enter the value of a[i]:",i;
    	cin >> a[i];
	}
	
	for(i=0;i<n;i++)
	{
	    
		if(a[i]%2==0)
		{
			
			cout << a[i] << endl;
		}
	}
}