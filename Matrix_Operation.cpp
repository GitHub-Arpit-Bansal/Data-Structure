#include <iostream>
using namespace std;

class matrix{
public:
    int a[20][20],b[20][20],sum[20][20],sub[20][20],mul[20][20],i,j,r,c,k;
    void get();
    void put();
    void mat_sum();
    void mat_sub();
    void mat_mul();
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
    counter=1;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            
            cout <<"Enter the "<<counter++<<"element in the 2nd matrix: ";
            cin>>b[i][j];
            }
    }
}

void matrix::put(){
cout<<"\nGiven Matrices are \n\n";
cout<<"a=";
for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"\t"<<a[i][j];
            }
cout<<"\n";
}
cout<<"\n---------------\n";
cout<<"b=";
for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"\t"<<b[i][j];
            }
    cout<<"\n";
    }
}

void matrix::mat_sum(){
    cout<<"\n\tAddition of given Matrices: \n";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum[i][j]=a[i][j]+b[i][j];
            cout<<"\t"<<sum[i][j];
            }
    cout<<"\n";
    }
}

void matrix::mat_sub(){
    cout<<"\n\tSubstrction of given Matrices: \n";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sub[i][j]=a[i][j]-b[i][j];
            cout<<"\t"<<sub[i][j];
            }
    cout<<"\n";
    }
}
void matrix::mat_mul(){
    cout << "Multiplication of the matrices : " <<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            mul[i][j] = 0;
            for(k=0;k<c;k++){
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
     for (i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout << mul[i][j] << "\t";
        }
        cout << "\n";
    }
}

int main(){
matrix m;
int ch;
string con;

    do{
    cout<<("\n\n\t------MENU------");
    cout<<("\n1---> Accept");
    cout<<("\n2---> Display");
    cout<<("\n3---> Addition");
    cout<<("\n4---> Substraction");
    cout<<("\n5---> Multiplication");
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
        m.mat_sum();
        break;
    case 4:
        m.mat_sub();
        break;
    case 5:
        m.mat_mul();
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