#include<iostream>
using namespace std;

int gcd(int,int);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

int gcd(int x,int y){
    int result;
    if(x%y == 0){
        return y;
    }
    else{
        result = gcd(y,x%y);
        return result;
    }

    
}