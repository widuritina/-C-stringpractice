#include <iostream>
#include <cstring>
using namespace std;

int main() {
	// your code goes here
    int T,i;
    char sS[6],sT[6],sM[6];
    cin >> T;
    
    while (T>0) {
        cin >> sS;
        cin >> sT;
        //cout << sS;
        //cout << strlen(sS) << endl;
        
        i=0;
        while(i<strlen(sS)) {
            //cout << sS[i] << endl;
            if(sS[i]==sT[i]) {
                //cout << "same" << endl;
                sM[i]='G';
            } else sM[i]='B';
            i++;
        }
        cout << sM << endl;
        T--;
    }
}