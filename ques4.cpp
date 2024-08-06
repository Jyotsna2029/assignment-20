// Sort the array in descending order using Bubble Sort.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    cout<<"Enter the elements of the array: ";
    vector<int>v(n);
    for(int i = 0 ; i<n; i++)
    {
        cin>>v[i];
    }

    for(int i=0; i<n-1; i++)
    {
        bool flag = true;
        for(int j = 0; j<n-i-1; j++)
        {
            if(v[j]<v[j+1])
            {//swap
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
                flag = false;
            }
        }
        if(flag == true)
        {
            break;
            //swap didn't happen
        }
    }
    cout<<"The decreasing order array is: ";
    for(int i = 0 ; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
}