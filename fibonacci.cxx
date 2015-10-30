// Fibonacci-Folge

#include<iostream>

using namespace std;

int main(){
    int N;
    cout <<"Type in an integer N (N<47) and press return:"<< endl;
    cin >> N;
    
    int f0=0, f1=1, ftemp;
    if(N==0)
        cout <<"Result:"<<f0<< endl;
    else 
            if(N==1)
            cout <<"Result:"<<f1<< endl;
        else{
            for(int i=0; i<N-1; i++){
                ftemp=f1;
                f1=f1+f0;
                f0=ftemp;
                }
    
    cout <<"Result:"<< f1 << endl;
        }
    
    return 0;
    
}
