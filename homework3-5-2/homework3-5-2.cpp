#include <iostream>
#include <cstring>
#include <string>

class Figure
{
protected:
    int count_side_quadrangle = 4;
    int count_side_triangle = 3;
    int count_side_none = 0;
public:
    virtual void print_name_figure()
    {
        std::cout << "" << std::endl;
    }
    virtual int get_c_s(int i)
    {
        return 1;
    }
};

class Triangle : public Figure
{
private:
    int a, b, c;
    int A, B, C;
public:
    Triangle(){}
    Triangle(int a, int b, int c, int A, int B, int C)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    void print_name_figure()
    {
        std::cout << "Треугольник:" << std::endl;
    }
    int get_c_s(int i) override
    {
        int arr[8]{ a,b,c,0,A,B,C,0};
        int x = arr[i];
        return x;
    }

};

class Right_triangle : public Triangle
{
private:
    int a, b, c;
    int A, B, C;
public:
    Right_triangle() {}
    Right_triangle(int a, int b, int c, int A, int B, int C)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    void print_name_figure()
    {
        std::cout << "Прямоугольный треугольник:" << std::endl;
    }
    int get_c_s(int i) override
    {
        int arr[8]{ a,b,c,0,A,B,C,0 };
        int x = arr[i];
        return x;
    }

};

class Iso_triangle : public Triangle
{
private:
    int a, b, c;
    int A, B, C;
public:
    Iso_triangle() {}
    Iso_triangle(int a, int b, int c, int A, int B, int C)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    void print_name_figure()
    {
        std::cout << "Равнобедренный треугольник:" << std::endl;
    }
    int get_c_s(int i) override
    {
        int arr[8]{ a,b,c,0,A,B,C,0 };
        int x = arr[i];
        return x;
    }

};

class Equil_triangle : public Triangle
{
private:
    int a, b, c;
    int A, B, C;
public:
    Equil_triangle() {}
    Equil_triangle(int a, int b, int c, int A, int B, int C)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    void print_name_figure()
    {
        std::cout << "Равносторонний треугольник::" << std::endl;
    }
    int get_c_s(int i) override
    {
        int arr[8]{ a,b,c,0,A,B,C,0 };
        int x = arr[i];
        return x;
    }

};

class Quadrangle : public Figure
{
private:
    int a, b, c, d;
    int A, B, C, D;
public:
    Quadrangle(){}
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    void print_name_figure() override
    {
        std::cout << "Четырёхугольник:" << std::endl;
    }
    int get_c_s(int i) override
    {
        int arr[8]{a,b,c,d,A,B,C,D};
        int x = arr[i];
        return x;

    }

};

class Rectangle : public Quadrangle
{
private:
    int a, b, c, d;
    int A, B, C, D;
public:
    Rectangle(){}
    Rectangle(int a, int b, int c, int d, int A, int B, int C, int D)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    void print_name_figure() override
    {
        std::cout << "Прямоуголник:" << std::endl;
    }
    int get_c_s(int i) override
    {
        int arr[8]{ a,b,c,d,A,B,C,D };
        int x = arr[i];
        return x;

    }

};

class Square : public Quadrangle
{
private:
    int a, b, c, d;
    int A, B, C, D;
public:
    Square() {}
    Square(int a, int b, int c, int d, int A, int B, int C, int D)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    void print_name_figure() override
    {
        std::cout << "Квадрат:" << std::endl;
    }
    int get_c_s(int i) override
    {
        int arr[8]{ a,b,c,d,A,B,C,D };
        int x = arr[i];
        return x;

    }

};

class Parallelogram : public Quadrangle
{
private:
    int a, b, c, d;
    int A, B, C, D;
public:
    Parallelogram(){}
    Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    void print_name_figure() override
    {
        std::cout << "Параллелограмм:" << std::endl;
    }
    int get_c_s(int i) override
    {
        int arr[8]{ a,b,c,d,A,B,C,D };
        int x = arr[i];
        return x;

    }

};

class Rhombus : public Quadrangle
{
private:
    int a, b, c, d;
    int A, B, C, D;
public:
    Rhombus() {}
    Rhombus(int a, int b, int c, int d, int A, int B, int C, int D)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    void print_name_figure() override
    {
        std::cout << "Ромб:" << std::endl;
    }
    int get_c_s(int i) override
    {
        int arr[8]{ a,b,c,d,A,B,C,D };
        int x = arr[i];
        return x;

    }

};

void get_info(Figure* figure)
{
    figure->print_name_figure();
    std::cout << "Стороны: a=" << figure->get_c_s(0) << " b=" << figure->get_c_s(1) << " c=" << figure->get_c_s(2);
    if (figure->get_c_s(3) != 0 && figure->get_c_s(7) != 0)
    {
        std::cout << " d=" << figure->get_c_s(3);
    }
    std::cout << std::endl;
    std::cout << "Углы: A=" << figure->get_c_s(4) << " B=" << figure->get_c_s(5) << " C=" << figure->get_c_s(6);
    if (figure->get_c_s(3) != 0 && figure->get_c_s(7) != 0)
    {
        std::cout << " D=" << figure->get_c_s(7);
    }
    std::cout << std::endl << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    //                              (    Стороны    |    Углы       )
    //                                _____________   ____________
    //                                |   |   |   |   |  |   |   |
    //                                V   V   V   V   V  V   V   V
    Figure figure;
    Triangle triangle               (10, 20, 30,     50, 60, 70);       // |
    Right_triangle right_triangle   (10, 20, 30,     50, 60, 90);       // | Треугольники
    Iso_triangle iso_triangle       (10, 20, 10,     50, 60, 50);       // |
    Equil_triangle equil_triangle   (30, 30, 30,     60, 60, 60);       // |

    Quadrangle quadrangle           (10, 20, 30, 40, 50, 60, 70, 80);   // |
    Rectangle rectangle             (10, 20, 10, 20, 90, 90, 90, 90);   // |
    Square square                   (20, 20, 20, 20, 90, 90, 90, 90);   // | Четырехуголники
    Parallelogram parallelogram     (20, 30, 20, 30, 30, 40, 30, 40);   // |
    Rhombus rhombus                 (30, 30, 30, 30, 30, 40, 30, 40);   // |

    get_info(&triangle);
    get_info(&right_triangle);
    get_info(&iso_triangle);
    get_info(&equil_triangle);
    get_info(&quadrangle);
    get_info(&rectangle);
    get_info(&square);
    get_info(&parallelogram);
    get_info(&rhombus);

}
