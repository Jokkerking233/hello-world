#include<bits/stdc++.h>
using namespace std;

int a[50];

void quicksort(int a[],int left,int right)
{
    int mid=a[(left+right)/2];
    int i=left;
    int j=right;
    while(i<=j)
    {
        while(a[i]<mid) i++;
        while(a[j]>mid) j--;
        if(i<=j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    if(left<j) quicksort(a,left,j);
    if(i<right) quicksort(a,i,right);
}

int main()
{
    for(int i=0;i<50;i++)
    {
        a[i]=50-i;
    }
    cout<<"init:";
    for(int i=0;i<50;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    quicksort(a,0,49);
    cout<<"aftersort:";
    for(int i=0;i<50;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
