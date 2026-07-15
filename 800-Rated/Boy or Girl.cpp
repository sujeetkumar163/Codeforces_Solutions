#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
   set<char>s;
   string str;
   cin>>str;
   for(size_t i=0;i<str.length();i++){
      s.insert(str[i]);
   }

   int len=s.size();
   if(len%2==0){
    cout<<"CHAT WITH HER!"<<endl;
   }
   else{
    cout<<"IGNORE HIM!"<<endl;
   }

}