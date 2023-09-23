#include<bits/stdc++.h>
using namespace std ;

int main(){
  cin.sync_with_stdio(0) ;
  cin.tie(0) ;

  int f ;
  cin>>f ;
  int n ;
  int t = 0 ;
  cin>>n ;
  int y[n] ;
  for (int i = 0; i < n; i++)
  {
    cin>>y[i] ;
  }
  for (int i = 0; i < n ; i++)
  {
    cout<<f<<' ' ;
    if(f==0&&y[i]==2||f==2&&y[i]==5||f==5&&y[i]==0){
      cout<<": Won at round "<<i+1;
      return 0;
    }
    else if(y[i]==0&&f==2||y[i]==2&&f==5||y[i]==5&&f==0){
      cout<<": Lost at round "<<i+1;
      return 0 ;
    }
  }
  cout<<"Drew at round "<<n;
  return 0 ;
}
    
    