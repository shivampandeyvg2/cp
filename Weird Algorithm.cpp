#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// // // //////////////////////////////////////////// BASIC ///////////////////////

#define ll long long 
#define vll vector <ll> 
#define mp(x,y) make_pair(x,y)
#define pb push_back
#define lb(arr, key) lower_bound(arr.begin(), arr.end(), key)
#define lba(arr, n , key) lower_bound ( arr , arr+n, key)
#define ub(arr, key) upper_bound(arr.begin(), arr.end(), key)
#define uba(arr, n , key) upper_bound ( arr , arr+n, key)
#define f(i, n) for (i=0;i<n;i++) 
#define fo(i,j,n) for (i=j;i<n;i++)
#define sortvec(arr) sort (arr.begin(), arr.end())
#define pre(n) {std::cout << std::fixed;std::cout << std::setprecision(n);}





void solve ()
{
 
ll n ;
cin >> n ;
// cout << n << endl;
while (n>1)
{
    cout << n <<" ";
    if (n%2==1)
    {
        n*=3;
        n+=1;
    }
    else n/=2;
}
cout << 1 << endl;

 
}




 

    
   
// // // ///////////////////////////////////////////////////////////////////////////////////
int main() 
{ 
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
 
  #ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);   
  #endif


   ll t ;
   // cin >> t ;
   t=1;
   for (int i=1;i<=t;i++) solve ();
    
   
}






