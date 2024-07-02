#include <iostream>
#include <cstring>
using namespace std;

int main() {
	// your code goes here
	int T,N,i,count;
	char S[1001];
    cin>>T;
    
    while (T>0) {
        cin>>N;
        cin>>S;
        //cout<<S<<endl;
        
        i=0;
        count=0;
        while(i<strlen(S)) {
            if (S[i]==S[i+1]) count++;
            
        i++;
        }
        cout << count << endl;
        
        
    T--;
    }
}
