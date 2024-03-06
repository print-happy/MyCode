/*#include<iostream> //命名空间
namespace sysu
{
    void dusuang();
    namespace student
    {
        void dusuang();
    }
}
void dusuang()
{
    std::cout<<"dusuang is 2"<<std::endl;
}
void sysu::dusuang()
{
    std::cout<<"dusuang is 0"<<std::endl;
}
void sysu::student::dusuang()
{
    std::cout<<"dusuang is 1"<<std::endl;
}
int main(){
    //using namespace sysu::student;
    dusuang();
}*/

#include<bits/stdc++.h>  //string类型
using namespace std;
int main()
{
    /*string s1="hello",s2,s3;  //字符串拼接
    cout<<sizeof(string)<<endl;
    cin>>s2;
    s3=s1+s2;
    cout<<s3<<endl;
    s3+={'h','e','l','l','o'};
    cout<<s3;*/

    /*string s1="crocodile\ntoxicsoda";
    int len=s1.length();  
    const char* cs1=s1.c_str();
    cout<<cs1<<" length is: "<<len;*/  //.length()&.c_str()

    /*string s1="crocodiletoxicsoda";
    int pos=s1.find("toxic",2); //find(string|char*|char s [,int pos=0])
    int rpos=s1.rfind("toxic",0);
    s1.replace(pos,5,"sweet");
    cout<<pos<<s1<<rpos;
    s1.replace(pos,5,"verysweet");  //replace(int pos, int count, string|char*|char s)
    cout<<pos<<s1<<rpos;*/
    auto i=1;
    cout<<i;
    string s1="crocodiletoxicsoda";
    string s2=s1.substr(3,5);
}
