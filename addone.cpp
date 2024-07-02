#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int T,i,x,temp=0;
    string sn;
    cin>>T;
    while (T>0) {
        cin>>sn; //input integer as string
        i=sn.length()-1;
        while(i>=0) {
            x=sn[i]-'0'; //extracting zero to convert char into int

            if ( (x+1)>9 ) {
                sn[i]='0'; 
                temp=1;
            } else {
                sn[i]=(x+1)+'0'; //add zero to convert int into char
                temp=0;
                break;
            }

            if (i==0&&temp==1) {
                cout<<temp<<sn<<endl;
                goto jump;
            }

        i--;
        }
        cout<<sn<<endl;
        jump:
    T--;
    }
}
