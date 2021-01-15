#include<iostream>
using namespace std;

long long int fibonacci(long long int);


int main(){
    cout << fibonacci(50);
    return 0; 
}

long long int fibonacci(long long int x){
    if(x == 1 or x == 0){
        return x;
    }
    else{
        x = fibonacci(x-1)+fibonacci(x-2);
        return x;
    }
}