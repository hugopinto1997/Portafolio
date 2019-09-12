#include <iostream>
#include <cmath>
using namespace std;


long double lnatural(int x, int k){
    double f = (pow(-1,k-1)*pow(x,k))/k;
    if(k==15){
        return f;
    }else{
        return f+lnatural(x,k+1);
    }
}


int main(){
    int n;
    cout<<"Ingrese x: ";
    cin>>n;

    cout<<"El valor del ln(1+"<<n<<") = "<<log(1+n)<<endl;
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