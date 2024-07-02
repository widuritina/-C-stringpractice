#include <iostream>
#include <cstring>
using namespace std;

int main() {
	// your code goes here
    int T,i;
    char s[1001],stemp[1001];
    //string s;
    cin >>T;
    
    while(T>=0) {
        fgets(s,1001,stdin); // read letters separated by space
        i=1;
        while(i<strlen(s)-1) {
            //cout << s[i]<<","<<i;
            if( s[i-1]==' ' && islower(s[i])) s[i]=toupper(s[i]);
            if( s[i-1]!=' ' && isupper(s[i]) && islower(s[i+1])) s[i]=tolower(s[i]);
            if((i-1)==0) s[i-1]=toupper(s[i-1]);
        
        i++;
        }
        cout << s;
    T--;
    }
}
