#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    float a,b,c;
    int d,e,f;
    cout << "Bang gia tri:" << endl;
    cout << "f(x)=ax^2+bx+c"<<endl;
    cout << "Nhap a= "; cin >> a;
    cout << "Nhap b= "; cin >> b;
    cout << "Nhap c= "; cin >> c;
    cout << "------------------" <<endl;
    cout << "Pham vi bang"<< endl;
    cout << "Bat đau  : " ; cin >> d;
    cout << "Ket thuc : " ; cin >> e;
    cout << "Buoc     : " ; cin >> f;
    cout << setfill('-');
    cout << setw(18) << "-" <<endl;
    cout << setfill(' ');
    cout << setw(3) << left << " ";
    cout << setw(4) << left << "x";
    cout << setw(3) << left<< "|";
    cout << setw(3) << left << "f(x)" <<endl;
    for (int x=d; x<e+1 ; x=x+f){
        cout << setw(1) << left << " ";
        cout << setw(6) << left << x;
        cout << setw(3) << left << "|";
        cout << setw(3) << right << a*pow(x,2)+b*x+c << endl;
    }
    
    return 0;
}
