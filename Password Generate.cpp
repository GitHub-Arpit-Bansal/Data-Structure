/* Method 1*/
#include <iostream>
using namespace std;

class password{
    char seta[6]={'1','3','a','s','t','i'};
    int count;
    public: 
        void combination();
    
};
void password::combination(){
    count=0;
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            for(int k=0;k<6;k++){
                for(int l=0;l<6;l++){
                    cout<<seta[i]<<seta[j]<<seta[k]<<seta[l];
                    cout<<"\t";
                    count++;
                }
            }
        } 
    }
    cout<<"\nTotal no of Combinations are: "<<count;
}
int main(){
    password p;
    p.combination();


    return 0;
}

/* Method 2*/
/*
#include <iostream>
#include <cstdlib>
using namespace std;
char password[]="13sati";
int password_length=sizeof(password)-1;
int main(){

    int n;
    cout<<"Generated password of length 4 is: ";
        for(int i=0;i<4;i++){
            cout<<password[rand() % password_length];
        }
    return 0;
}
*/


/* Method 3*/
/*
#include <iostream>
#include <cstdlib>
using namespace std;
char s[]="sati13";

class pwdgenerator{
    int strleng=sizeof(s)-1;
    public:
    void pwd(){
        int n,i;
        cout<<"\n\nGenerated password of length 4 is: ";
        for(i=0;i<4;i++){
            cout<<s[rand() % strleng];
        }
    }
};

int main(){
 
    pwdgenerator ob;
    ob.pwd();
    return 0;
}
*/
