#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    freopen("input.txt","w",stdout);
    int a[10];
    for(int i=0;i<10;i++)
    {
        a[i]=rand();
        cout<<a[i]<<"\n";
    }
}
