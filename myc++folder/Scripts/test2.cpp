#include <bits/stdc++.h>
using namespace std;

int main()
{
   bool flag = false;
   int n = 100;
   cout << "{2, ";
   for (int i = 3; i <= n; ++i){
      flag = true;
      for (int j = 2; j < sqrt(i) + 1; ++j){
            if(i % j == 0){
               flag = false;
               break;
            }
      }
      if(flag){
            cout << i << ", ";
      }
   }
   cout << "}" << endl;
   return 0;
}