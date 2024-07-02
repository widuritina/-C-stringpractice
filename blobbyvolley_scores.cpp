#include <iostream>
using namespace std;

int main() {
    int t,i,j,alice,bob;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        string s;
        cin>>s;
        i=0;
        j=1;
        alice=0;bob=0;
        while(i<n,j<n) {
            if (s[i]==s[j]) { //check if win
                if (s[i]=='A') {
                    alice+=1;
                } else {
                    bob+=1;
                }
            } else {
                //nothing to do
            }
            
        //cout<<"a"<<alice; 
        i++;
        j++;
        }
        if(s[0]=='A') {alice+=1;}
        cout<<alice<<" "<<bob<<endl;
    
    
    t--;    // your code goes here
    }

}
