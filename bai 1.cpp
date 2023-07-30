#include<iostream>
using namespace std;
int main()
{
  int n;
  float S;
    cout<<"nhap n: ";cin>>n;
  for(int i = 1; i <= n; i++)
  {
    S = S + 1.0 / (2 * i);
  }

  cout<<"tong S= 1/2 + 1/4 + ... + 1/2n"<<n*2<<" là: "<< S;

}
