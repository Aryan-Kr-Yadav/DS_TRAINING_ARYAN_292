#include <iostream>
using namespace std;

int main()
{
    int n, i, total, sum = 0;

    cout<<"Enter n(range 1 to n): ";
    cin>>n;
    
    int arr[n-1];
    cout << "Enter " << n - 1 << " numbers (from 1 to " << n << "):" << endl;
    for(i = 0; i < n - 1; i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }

    total = n * (n + 1) / 2;
    cout << "The missing number is: " << total - sum << endl;

}