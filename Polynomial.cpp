#include <iostream>
#include<math.h>
using namespace std;
struct poly{
    int coeff;
    int expo;
};

int ipop(struct poly p[]){
    int t1,i,k;
    cout <<"\nEnter the polynomial details:";
    cout<<"\nEnter the total number of terms in the polynomial: " ;
    cin>>t1;
    cout<<"Enter the COEFFICIENT and EXPONENT"<<endl;

    for (i=0;i<t1;i++){
        cout<<"Enter the Coefficient("<<i+1<<"):";
        cin>>p[i].coeff;
        cout<<" Enter the Exponent("<<i+1<<"):";
        cin>>p[i].expo;
        }
        cout<<"\nThe polynomial is: ";
        for(k=0;k<t1-1;k++){
            cout<<p[k].coeff <<"(x^"<<p[k].expo<<")+";
            }
        cout<<p[k].coeff <<"(x^"<<p[k].expo<<")";
        return t1;
}

void add_poly(){
    int t1,t2;
    struct poly p2[20];
    struct poly p3[20];
    struct poly p4[20];
    cout<<"\n First polynomial : ";
    t1=ipop(p2);
    cout<<"\n Second polynomial : ";
    t2=ipop(p3);
    int i,j,k;
    i=0;
    j=0;
    k=0;
    while(i<t1 && j<t2){
        if(p2[i].expo==p3[j].expo){
           p4[k].coeff=p2[i].coeff + p3[j].coeff;
           p4[k].expo=p2[k].expo;
           i++;
           j++;
           k++;
        }
        else if(p2[i].expo>p3[j].expo){
           p4[k].coeff=p2[i].coeff;
           p4[k].expo=p2[k].expo;
           i++;
           k++;
        }
        else{
            p4[k].coeff=p3[j].coeff;
            p4[k].expo=p3[j].expo;
            j++;
            k++;   
        }
    }
    while(i<t1){
        p4[k].coeff=p2[i].coeff;
        p4[k].expo=p2[i].expo;
        i++;
        k++;
    }
    while(j<t2){
        p4[k].coeff=p3[j].coeff;
        p4[k].expo=p3[j].expo;
        j++;
        k++;
    } 
    cout<<"\n Addition of the given polynomial is : ";
    for(i=0;i<k-1;i++){
        cout<<p4[i].coeff <<"(x^"<<p4[i].expo<<")+";
    }
    cout<<p4[i].coeff <<"(x^"<<p4[i].expo<<")";
}
void mul_poly(){
    int t1,t2,i,j,c;
    struct poly p2[20];
    struct poly p3[20];
    struct poly p4[50];
    cout<<"\n First polynomial";
    t1=ipop(p2);
    cout<<"Second polynomial";
    t2=ipop(p3);
    c=-1;
    for(i=0;i<t1;i++){
        for(j=0;j<t2;j++){
            p4[++c].expo=p2[i].expo + p3[j].expo;
            p4[++c].coeff=p2[i].coeff + p3[j].coeff;
        }
    }
    cout<<"The Product Of Two Polynomials is: \n";
    cout<<endl;
    for(i=0;i<c;i++)
        cout<<p4[i].coeff<<"(x^"<<p4[i].expo<<")+";
    cout<<p4[i].coeff<<"(x^"<<p4[i].expo<<")";
}
int main(){
    int ch;
    char ans;
    struct poly p1[20];
    do{
        cout<<"\n ******Menu******";
        cout<<"\n 1.Taking input and printing polynomial \n 2.Addition \n 3.MultipIication \n Enter choice: ";
        cin>>ch;
        switch(ch){
        case 1:ipop(p1);
            break;
        case 2:add_poly();
            break;
        case 3:mul_poly();
            break;
        }
    cout<<"\nDo you want to continue (y/Y): ";
    cin>>ans;
    }
    while(ans=='Y'||ans=='y');
    return 0;
}