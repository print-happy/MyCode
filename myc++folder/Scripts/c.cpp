#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int max(int a=1,int b=3)
{
    return (a>b)?a:b;
}
int main(){
cout<<max(5,7);
return 0;
}
