#include <iostream>
#include <string.h>

using namespace std;

std::string convert_digit(int d) {
    std::string s_d;
    switch (d) {
        case 1:
            s_d="satu "; break;
        case 2:
            s_d="dua "; break;
        case 3:
            s_d="tiga "; break;
        case 4:
            s_d="empat "; break;
        case 5:
            s_d="lima "; break;
        case 6:
            s_d="enam "; break;
        case 7:
            s_d="tujuh "; break;
        case 8:
            s_d="delapan "; break;
        case 9:
            s_d="sembilan "; break;
        default:  
        break;
    }
    return s_d;
}

int checksatu(std::string& s_d) {
    if(s_d=="satu ") {
        return 0;
    }
    return 1;
}
int checknol(std::string& s_d) {
    if(s_d=="") {
        return 0;
    }
    return 1;
}


void appends(std::string& s_d, int c, std::string& s_result) {
    std::string s_temp="",s_temp2="";
    
    switch (c) {
        case 1: s_temp=s_d; break;
        case 2:
        case 5: 
            if(checknol(s_d)!=0) s_temp=s_d+ "puluh "; 
            if(checksatu(s_d)==0) {
                s_temp="sepuluh ";
                if(checksatu(s_result)==0) {
                    s_temp="sebelas "; 
                    s_result="";
                }
                else if(checknol(s_result)!=0 ||  strncmp(s_result.c_str(),"seribu",6)!=0 ) {
                    
                    s_temp=s_result + "belas ";
                    s_result="";
                }

                const char* c_result=s_result.c_str();
                //std::cout << "c_result" << c_result << std::endl;
                if(strncmp(c_result,"seribu",6)==0) {
                    //std::cout << "disini" << std::endl;
                    s_temp="sebelas ribu "+ s_result; 
                    s_result="";
                }
            }
        break;
        case 3:
        case 6: 
            if(checknol(s_d)!=0) s_temp=s_d+ "ratus "; 
            if(checksatu(s_d)==0) s_temp="seratus ";
        break;
        case 4: 
            if(checknol(s_d)!=0) s_temp=s_d+ "ribu "; 
            if(checksatu(s_d)==0) s_temp="seribu ";
            break;
        default: break;
    }

    s_temp2=s_result;
    s_result=s_temp+s_temp2;

}


main () {
    int N,d=1,count=1;
    std::string s_d="",s_result="",s_result2="",s_temp="",s_temp2="";
    cout << "Rp. ";
    std::cin >> N;
    
    while (N>0) {
        d=N%10;
        N=N/10;
        s_d=convert_digit(d);

        appends(s_d,count,s_result);
        std::cout << s_result << std::endl;

        
        count++;
        //std::cout << count << std::endl;
    } 
    std::cout << "Nominal: " << s_result+"rupiah";
    //std::cout << "Nominal2: " << s_result2;
return 0;
}