#include <iostream>
using namespace std;
// function for rever a digit
int rev(int n){
    int a=0;
    while(n!=0){
        int l=n%10;
        a=a*10+l;
        n=n/10;

    }
    return a;

}
//function for sum of digit
int sum(int n){
    int sum=0;
    while(n!=0){
        int ld=n%10;
        sum=sum+ld;
        n=n/10;
    }
    return sum;
}
// function to count number of digit in a number
int count(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;

    }
    return count;
}


int main(){
    int n;
    cin>>n;
    int rev1=rev(n);
    cout<<rev1<<endl;
    int sum1=sum(n);
    cout<<sum1<<endl;
    int count1=count(n);
    cout<<count1<<endl;
    return 0;
}