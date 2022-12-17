#include <iostream>

class someclass
{
private:
    double A, B;
public:
    someclass(double a, double b)
    {
        A = a;
        B = b;
    }

    double function(double x)
    {
        return A * x + B;
    }
};

int main()
{
    someclass x(17, 18);
    std::cout << x.function(4) << std::endl;
}
