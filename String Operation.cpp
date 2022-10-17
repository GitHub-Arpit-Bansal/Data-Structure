#include<iostream>
#include<string.h>
using namespace std;
class STRING{
public:
    int i;
    void frequency(string);
    void deletel(string);
    void chardel(string);
    void palindrome(string);
};
void STRING::frequency(string arr){
    char ch;
    cout<<"Enter the character for which you want to count frequency:";
    cin>>ch;
    int count=0;
    for(i=0;arr[i]!='\0';i++){
        if(ch==arr[i]){
            count=count+1;
        }
    }
    cout<<"The frequency of the character"<<ch<<"is="<<count<<endl;
}
void STRING::deletel(string arr){
    int j,k,flag=0;
    cout<<"Enter the two positions at which you want to delete characters:";
    cin>>j>>k;
    for(i=j-1;arr[i]!='0';i++){
        arr[i]=arr[i+1];
    }
    for(i=k-2;arr[i]!='\0';i++){
        arr[i]=arr[i+1];
    }
    cout<<"The Edited string is:";
    for(i=0;arr[i]!='\0';i++){
        cout<<arr[i];
    }
}
void STRING::chardel(string arr){
    char ch,arr1[10];
    int j,len=0;
    cout<<"Enter character to be deleted: ";
    cin>>ch;
    for(i=0;arr[i]!='\0';i++){
        len++;
    }
    for(i=j=0;i<len;i++){
        if(arr[i]!=ch){
            arr1[j++]=arr[i];
        }
    }
    cout<<"The edited string is: ";
    for(int k=0;arr1[k]!='\0';k++){
        cout<<arr1[k];
    }
}
void STRING::palindrome(string arr){
    int i,j,count=0,k,flag=0;
    for(i=0;arr[i]!='\0';i++){
        count=count+1;
    }
    int a=count/2;
    for(i=0,j=count-1;i<=a;i++,j--){
        if(arr[i]!=arr[j]){
            cout<<"Its is not a palindrom"<<endl;
            break;
        }
    }
    if(i==(a+1)){
        cout<<"It is palindrome"<<endl;
    }
}

int main()
{
    int y,choice;
    STRING obj;
    string ch;
    char ans;
    cout<<"\nEnter the String=";
    cin>>ch;
    do
    {
        cout<<"\n String operation menu\n1.Frequency\n2.Delete\n3.Delete Character \n4.Palindrom Check";
        cout<<"\n Enter your choice=";
        cin>>choice;
        switch(choice)
        {
            case 1:
                {
                    obj.frequency(ch);
                    break;
                }
            case 2:
                {
                    obj.deletel(ch);
                    break;
                }
            case 3:
                {
                    obj.chardel(ch);
                    break;
                }
            case 4:
                {
                    obj.palindrome(ch);
                    break;
                }
            default:
                {
                    cout<<"invalid input";
                }
        }
        cout<<"\n do you want to continue(Y/y)=";
        cin>>ans;
    }
    while(ans=='Y'||ans=='y');
    return 0;
}