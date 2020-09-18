#include <bits/stdc++.h>
#include <iostream>

using namespace std;



int main()
{
    int n;
    cin >> n;
    int a[50];
    int t=0,s=0;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(n>0){
        int d=n%2;
        n=n/2;
        if(d==1){   
            s++;
            if(s>=t)
            t=s;
        }
        else{
            s=0;
        }   
    }
    cout<<t;
    return 0;
}
