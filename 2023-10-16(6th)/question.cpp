#include <bits/stdc++.h>
using namespace std;


int main() {
  cin.sync_with_stdio(0) ;
  cin.tie(0) ;

  int n ;
  cin>>n ;
  int h[n] ;
  int sum = 0 ;
  for (int i = 0; i < n ; i++)
  {
    cin>>h[i] ;
  }
  for (int i = 0; i < n; i++)
  {
    if(h[i]==0){
      if(i==0){
        sum += h[i+1] ;
      }
      else if(i==n-1){
        sum += h[i-1] ;
      }
      else{
        sum += min(h[i-1],h[i+1]) ;
      }
    }
  }
  cout<<sum<<"\n" ;


  return 0 ;
}