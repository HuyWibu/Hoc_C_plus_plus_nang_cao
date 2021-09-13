#include <iostream>
using namespace std;
int stop=0;
void in(int a[] , int n)
{
	for(int i = 1 ; i <= n ; i++)
	{
		cout << a[i];
	} 
	cout << endl;
}
void sinh(int a[] , int n)
{
	int i = n - 1;
	while(i > 0 && a[i] > a[i + 1])
	{
		i--;
	}
	if(i == 0)	stop = 1;
	else
	{
		int k = n ;
		while(a[i] > a[k])
		{
			k--;
		}
		swap(a[i] , a[k]); 		// 58362 ----> 58623  ----> 58632
		int c = n , r = i + 1;
		while(r < c)
		{
			swap(a[c] , a[r]);
			r++;
			c--;
		}
	}
}
void hoanvi(int a[] , int n)
{
	do
	{
		in(a,n);
		sinh(a,n);
	} 
	while(stop==0);
}
int main()
{
	int n;
	cin >> n;
	int a[100];
	for(int i = 1 ; i <= n ; i++)
		cin >> a[i];
	hoanvi(a,n);
}
