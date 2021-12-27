// Given 2 numbers N & P. Print N % P.

// 1 <= N <= 10^10000
// 1 <= P <= 1015

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    int ans=0;
    long long p;
    
    cin>>n;
    cin>>p;
    for (int i = 0; i < n.length(); i++) {
        ans=((ans*10)+(n[i]-'0'))%p;
    }
    cout<<ans<<endl;
    return 0;
}
