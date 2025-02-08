#include<iostream>
using namespace std;

void rev(int s,int e,string &str){
    if(s>e){
        return;
    }
    swap(str[s],str[e]);
    rev(++s,--e,str);
}

int main(){
   string name="sakshi";
   rev(0,name.length()-1,name);
   cout<<name<<endl;

}