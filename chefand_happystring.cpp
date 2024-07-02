#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,i,j,temp;
    cin>>t;
    while(t>0){
        string s;
        cin>>s;
        i=0;
        j=1;
        temp=0;
        while(i<s.length(),j<s.length()-1) {
            if(s[i]=='a' || s[i]=='i' || s[i]=='u' 
            ||s[i]=='e' || s[i]=='o') {
                temp+=1;
                if(!(s[j]=='a' || s[j]=='i' || s[j]=='u' 
                ||s[j]=='e' || s[j]=='o') && temp<3) {
                    //cout<<"uncontiguous"<<endl;
                    temp=0; //reset counting for uncontiguous substring <=2
                }
            } 

            
        i++; 
        j++;
        }
        //cout<<"temp"<<temp<<endl;

        if(temp>2) {
            cout<<"Happy"<<endl;
        } else cout<<"Sad"<<endl;
    
    t--;
    }

}
