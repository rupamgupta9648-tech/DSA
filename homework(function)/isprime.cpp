#include <iostream>
using namespace std;
// fuction to check weather prime number or not
int isprime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i<n;i++){
        if (n%i==0){
            return false ;
        }
    }
    return true;
    
}

    

int main(){
    int n;
    cin>>n;
    if(isprime(n)){
        cout<<"prime number";
    }else{
        cout<<"not a prime number";
    }
    return 0;
}