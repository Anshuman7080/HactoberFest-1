#include<iostream>
using namespace std;
class number{
    int a;
    public:
    void input(){
        cout<<"Enter size of binary number\n";
        cin>>a;
    }
    void display(){
        int b;
        char binary[a+1];
        char iscomplement[a+1];
        cout<<"Enter binary number\n";
        cin>>binary;
        for(b=0;b<a;b++){
            if(binary[b]=='1'){
                iscomplement[b]='0';
            }
            else if(binary[b]=='0'){
                iscomplement[b]='1';
            }
        }
        iscomplement[a]='\0';
        cout<<iscomplement;
    }
};
int main(){
    number n;
    n.input();
    n.display();
    return 0;
}
