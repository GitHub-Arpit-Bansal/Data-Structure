#include <iostream>
using namespace std;
class matrix{
public:
    int a[20][20],b[20][20],i,j,r,c;
    void get();
    void put();
    void transpose();
    void uppertri();
    void diagonalsum();
};

void matrix::get(){
    cout<<"Enter the number of row and column: ";
    cin>>r>>c;
    int counter=1;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout <<"Enter the "<<counter++<<"element in the 1st matrix: ";
            cin>>a[i][j];
            }
    }
}

void matrix::put(){
cout<<"\nGiven Matrices is: \n";
for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"\t"<<a[i][j];
            }
cout<<"\n";
}
}

void matrix::transpose(){
    cout<<"\n\tTranspose of given Matrix: \n";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<a[j][i]<<"\t";
            }
    cout<<"\n";
    }
}

void matrix::uppertri(){
    if(i!=j){
        cout<<"\nNot a Square Matrix, Operation not allowed";
    }
    else{
    int flag1=0;    //flag 0 means no problem
    for(i=1;i<r;i++){
        for(j=0;j<i;j++){
            if(a[i][j]!=0)
                flag1=1;    // flag1=1 means problem 
        }
    }
    if(flag1==0){
        cout<<"\nThis is Upper Triangular Matrix.\n";}
    else{    
        cout<<"\nThis is not an Upper Triangular Matrix.\n";}
    }      
}
void matrix::diagonalsum(){
    int left=0,right=0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i==j)
                left+=a[i][j];
            if((i+j)==r-1)
                right+=a[i][j];    
        }
    }
    cout<<"Sum of left diagonal elements: "<<left<<endl;
    cout<<"Sum of right diagonal elements: "<<right<<endl;
}

int main(){
matrix m;
int ch;
string con;

    do{
    cout<<("\n\n\t------MENU------");
    cout<<("\n1---> Accept Matix");
    cout<<("\n2---> Display Matrix");
    cout<<("\n3---> Transpose ");
    cout<<("\n4---> Upper Triangluar Matrix");
    cout<<("\n5---> Diagonal Summation");
    cout<<("\n6---> EXIT");
    cout<<("\nPlease Enter Your Choice: ");
    cin>>ch;
    
    switch (ch)
    {
    case 1:
        m.get();
        break;
    case 2:
        m.put();
        break;
    case 3:
        m.transpose();
        break;
    case 4:
        m.uppertri();
        break;
    case 5:
        m.diagonalsum();
        break;
    case 6:
        exit(0);    
        break;
    default:
        cout<<"Enter Valid Choice:";
        break;
    }
    cout<<("\nDo you want to continue(y/Y): ");
    cin>>con;
    } while (con=="Y"||con=="y");
return 0;
}