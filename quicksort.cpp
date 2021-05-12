#include<bits/stdc++.h>
using namespace std;

vector<int> num;
int len=0;

void quicksortnum(int left,int right)
{
    int mid=num[(left+right)/2];
    int i=left;
    int j=right;
    while(i<=j)
    {
        while(num[i]<mid) i++;
        while(num[j]>mid) j--;
        if(i<=j)
        {
            int temp=num[i];
            num[i]=num[j];
            num[j]=temp;
            i++;
            j--;
        }
    }
    if(left<j) quicksortnum(left,j);
    if(i<right) quicksortnum(i,right);
}


void shufflenum(int length)
{
    srand((unsigned)time(NULL));
    int i=length;
    while(i)
    {
        int pos=rand()%i;
        swap(num[pos],num[i-1]);
        i--;
    }
}

int main()
{
    cin>>len;
    num.resize(len);
    for(int i=0;i<len;i++)
    {
        num[i]=i;
    }
    shufflenum(len);
    cout<<"init:";
    for(int i=0;i<len;i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;
    quicksortnum(0,len-1);
    cout<<"aftersort:";
    for(int i=0;i<len;i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;
    return 0;
}
