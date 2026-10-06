#include <iostream>
using namespace std;
// function to print sum of two number
int sum(int a,int b){
    int s=a+b;
    return s;
}
// function to print min of two number
int min(int a,int b){
    if(a>b){
        cout<<"min no is:"<<b;
    }else{
        cout<<"min no is:"<<a;
    }
    return 0;

}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int s=sum(a,b);
    cout<<s;
    int m=min(a,b);
    return 0;


}