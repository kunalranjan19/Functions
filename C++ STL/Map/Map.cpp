#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>marksmap;
    marksmap["kunal"]=97;
    marksmap["jatin"]=91;
    marksmap["ricky"]=69;
    map<string,int>::iterator iter;
    for(iter=marksmap.begin();iter!=marksmap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
        }
}