//Q.2 Write a Program to find leap years between two given numbers and store them in an array. And then print that array.
//For example,
//Input:
//Enter the first number: 2020
//
//Enter the second number: 2040
//
//Output:
//The array is: 2020, 2024, 2028, 2032, 2036, 2040

#include<iostream>

using namespace std;
main()
{
	int a,b;
	cout << "enter the value of a:";
	cin >> a;
	cout << "enter the value of b:";
	cin >> b;

	
	int total,y;
	
	total=b-a;
	
	y=(total/4)+1;
	
	int s[y];
	
	int i;
	for(i=a;i<=b;i++)
	{
		if(i%4==0)
		{
			cout << i << endl ;
            s[y]=y;
			
		}
	}
  cout <<"total leap year count is:"<< s[y]  ;

	
	
	
	
}