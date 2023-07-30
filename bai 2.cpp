#include<iostream>
using namespace std;
int main()
{
  int i, n;
  long cong , nhan ;
    cout<<"nhap n:  ";cin>>n;
  for(int i = 1; i <= n; i ++)
  {
    nhan = nhan * i;
    cong = cong + nhan;
  }
  cout<<"tong S= 1 + 1*2 + ... + 1*2*3...n = "<<cong;
}
