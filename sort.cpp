#include <iostream>
using namespace std;
int main()
{
    int n = 10,i;
    int num[n] = {1,2,3,4,5,6,7,8,9,10};
     
	 cout<<"\nThe Original Array is:\n";
    for(int i = 0; i<10; i++)
    cout<<num[i]<<" ";
    cout<<"\n\nThe Reverse of Given Array is:\n";
    for(int i =(10-1); i>=0; i--)
        cout << num[i] << " ";
        cout<<endl;
    return 0;
    }

