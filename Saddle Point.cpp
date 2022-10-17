#include <iostream>
using namespace std;

class saddlemat{
    int mat[10][10],i,j,row,col,min,max;
    public:
        saddlemat(){
            i=j=row=col=0;
            min=max=0;
        }
        void getdata();
        void showdata();
        void saddlepoint();
};
void saddlemat::getdata(){
    cout<<"\n\t-----Program by Bansal------\n";
    cout<<"\nEnter the number of row: ";
    cin>>row;
    cout<<"\nEnter the number of column: ";
    cin>>col;
    int counter=1;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<"\nEnter the "<<counter<< "st element: ";
            cin>>mat[i][j]; 
            counter++;
        }
    }
}
void saddlemat::showdata(){
    cout<<"\nThe elements of Matrix are: \n";
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<mat[i][j]<<"\t";
        }    
        cout<<"\n";
    }
}

void saddlemat::saddlepoint(){
    int greatest[5],smallest[5];
    for(i=0;i<5;i++){
        greatest[i]=smallest[i]=0; 
    }    
    for(i=0;i<row;i++){
        smallest[i]=mat[i][0];
        for(j=0;j<col;j++){
            if(mat[i][j]<=smallest[i]){
                smallest[i]=mat[i][j];
                cout<<"\nsmallest ["<<i<<"] "<<smallest[i];
            }
        }
    }
    cout<<"\n\n";   
    for(j=0;j<col;j++){
        greatest[j]=mat[0][j];
        for(i=0;i<row;i++){
            if(mat[i][j]>=greatest[j]){
                greatest[j]=mat[i][j];
                cout<<"\nGreatest ["<<j<<"] "<<greatest[j];
            }
        }
    }
    max=smallest[0];
    for(i=0;i<row;i++){
        if(smallest[i]>=max){
            max=smallest[i];
        }
    }

    min=greatest[0];
    for(j=0;j<col;j++){
        if(min>=greatest[j]){
            min=greatest[j];
        }
    }    
    if(min==max){
        cout<<"\n\nSaddle Point "<<min<<" is present in the array\n\n";
    }
    else{
        cout<<"\n\nSaddle point is not present in the given matrix\n\n";
    }

}


int main(){
    saddlemat s1;
    s1.getdata();
    s1.showdata();
    s1.saddlepoint();
    return 0;
}