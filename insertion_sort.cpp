// insertion sort :
// ->repeatedly take element from unsorted subarray and result in sorted subarray.

#include<iostream>
#include<vector>
using namespace std;
void insert_sort(vector<int> &v, int n);
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    insert_sort(v,n);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


void insert_sort(vector<int> &v, int n){
    for(int i=1;i<n;i++)
    {
        int curr=v[i];
        int j=i-1;
        while(j>=0 && v[j]>curr)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=curr;
    }
    return;
}
