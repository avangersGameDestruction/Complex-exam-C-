#include <iostream>
#include <iomanip>
 
int main()
{
    SolvedSolution c1, c2;
 
    std::cout << "enter values for real and imaginary coefficients ";
    c1.input(std::cin); 
    std::cout << "enter values for real and imaginary coefficients ";
    c2.input(std::cin);
 
    c1.output(std::cout);
    c2.output(std::cout);
 
    double newReal;
    std::cout << "enter a new value for real and imaginary coefficients ";
    std::cin >> newReal;
 
    c2.setreal(newReal);
 
    std::cout << "the new real coefficient is " << std::fixed << std::setprecision(2) << c2.getreal() << std::endl;
 
    c2.output(std::cout);
 
    system("pause");
    return 0;
}
 
class SolvedSolution
{
private:
    double real;
    double imag;
    void Complex();
 
public:
    void Complex()
    {
        real = imag = 0;
    }
 
    void input(std::istream& cin)
    {
        cin >> real;
        cin >> imag;
    }
 
    void output(std::istream& cout)
    {
        std::cout << std::fixed << std::setprecision(1) << real << " + " << std::fixed << std::setprecision(1) << imag << "i" << std::endl;
    }
 
    double getreal()
    {
        return real;
    }
 
    double getimag()
    {
        return imag;
    }
 
    void setreal(double inreal)
    {
        real = inreal;
    }
 
    void setimag(double inimag)
    {
        imag = inimag;
    }
};