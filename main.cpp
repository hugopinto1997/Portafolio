#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int n;
    cout<<"Ingrese x: ";
    cin>>n;

    cout<<"El valor aprox del ln(1+"<<n<<") = "<<lnatural(n,1);

    double R=0;
    double f;
    for(int i=1; i<=15; i++){
        f =double ((pow(-1,i-1)*pow(n,i))/i);
        R = R+f;
    }
    cout<<endl<<R;


    return 0;
}