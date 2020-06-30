#include <iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<map>
//#include<bits/stdc++.h>
using namespace std;
/*
void vectordemo(){

        vector<int> A={11,2,3,14};

        cout<<A[1]<<endl;

        A.push_back(100);
        A.push_back(100);
        A.push_back(123);
        sort(A.begin(),A.end());   //O(nlogn) merge sort
        for(int i:A)
        {
            cout<<i<<" ";
        }
        cout<<"iterator application"<<endl;
        vector<int>::iterator t=A.begin();
        for(t=A.begin();t<A.end();t++)
        {
            cout<<*t<<" ";
        }

        bool present=binary_search(A.begin(),A.end(),100);
        cout<<present<<endl;
        present=binary_search(A.begin(),A.end(),144);
        cout<<present<<endl;

}
*/
void setdemo(){

    set<int>s;
    s.insert(1);
    s.insert(-1);
        s.insert(-16);
        s.insert(10);    //O(logn)
        s.insert(-10);

    for(int i:s)
        {
         cout<<i<<" ";
        }
 cout<<endl;
    auto t=s.find(-10);
    if(t==s.end())
    {
        cout<<"not present"<<endl;

    } else
        cout<<"present"<<endl;




}

void mapdemo()
{

    map<char,int>m;
    string s="deeksha singh";
    for(char c:s)
    {
        m[c]++;

    }
    cout<<m['e']<<" "<<m['a']<<endl;

}

int main() {

 //setdemo();
 mapdemo();
    return 0;
}
