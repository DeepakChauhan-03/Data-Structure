//WAP to print the sum of complex numbers
#include<iostream>
using namespace std;
class Complex{
    int real,imag;
    public:
    Complex(){
        real = imag = 0;
    }
    Complex(int i, int j){
        real = i;
        imag = j;
    }
    void Sum(Complex T1, Complex T2){
        real = T1.real + T2.real;
        imag = T1.imag + T2.imag;
    }
    void Show(){
        cout<<real<<"+i"<<imag<<endl;
    }
};
int main(){
    Complex c1(2,3),c2(4,6),c3;
    c3.Sum(c1,c2);
    c1.Show();
    c2.Show();
    c3.Show();
    return 0;
}