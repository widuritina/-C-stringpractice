#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T,i,X,pCarl,pChef,mCarl;
    char S[15];
    
    cin>>T;
    while (T>0) {
        cin>>X;
        cin>>S;
        //cout<<"string "<<S<<endl;
        i=0,pCarl=0,pChef=0;
        while(i<strlen(S)) {
            if(S[i]=='C') pCarl+=2;
            if(S[i]=='N') pChef+=2;
            if(S[i]=='D') { pCarl+=1; pChef+=1;}
        i++;
        }
        //cout<<"point of carl"<<pCarl<<endl;
        
        if(pCarl>pChef) mCarl=60*X;
        if(pCarl<pChef) mCarl=40*X;
        if(pCarl==pChef) mCarl=55*X;
        cout<<mCarl<<endl;
    T--;
    }
}