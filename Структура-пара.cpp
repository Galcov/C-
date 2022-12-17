#include <iostream>
#include <string>

class someclass
    

{
    struct Para {
        int first;			// первое число
        int second;			// второе число

        void read();			// метод ввода значений для полей
        void display();		// метод вывода значений полей на экран
        void init(int f, int s);// метод, присваивающий полям значения
        int nod();			// метод расчёта наибольшего общего делителя для полей
    };

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
    someclass x(18, 19);
    std::cout << x.function(4) << std::endl;
}

