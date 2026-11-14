#include<iostream>
using namespace std;
bool esprimo(int n)  {
    if(n <= 1){
        return false;

    }
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout << "Ingrese un numero: ";
    if( cin >> n){
        if (esprimo (n)){
            cout<<"el numero "<<n<<" es primo"<<endl;

        }
        else{
            cout<<"el numero "<<n<<" no es primo"<<endl;
        }
    }
    return  0;
}