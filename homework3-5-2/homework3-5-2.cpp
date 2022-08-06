#include <iostream>
#include <cstring>
#include <string>

std::string make_1string(int* arr)
{
    std::string result = "Стороны: a=" + std::to_string(arr[0]) + " b=" + std::to_string(arr[1]) + " c=" + std::to_string(arr[2]);
    if (arr[3] > 0)
    {
        result = result + " d=" + std::to_string(arr[3]);
    }
    return result;
}

std::string make_2string(int* arr)
{
    std::string result = "Углы: A=" + std::to_string(arr[4]) + " B=" + std::to_string(arr[5]) + " C=" + std::to_string(arr[6]);
    if (arr[7] > 0)
    {
        result = result + " D=" + std::to_string(arr[7]);
    }
    return result;
}

class Figure
{
private:
    const int count_side_none = 0;
public:
    virtual std::string get_name_figure()
    {
        return "";
    }
    virtual void print()
    {
    }
};

class Triangle : public Figure
{
private:
    int a, b, c;
    int A, B, C;
    const int count_side_triangle = 3;
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
    std::string get_name_figure()
    {
        return "Треугольник:";
    }
    void print() override
    {
        int* arr = new int[8]{ a,b,c,0,A,B,C,0 };
        std::cout << get_name_figure() << std::endl;
        std::cout << make_1string(arr) << std::endl;
        std::cout << make_2string(arr) << std::endl;
    }
    int get_count_sides()
    {
        return count_side_triangle;
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
    std::string get_name_figure()
    {
        return "Прямоугольный треугольник:";
    }
    void print() override
    {
        int* arr = new int[8]{ a,b,c,0,A,B,C,0 };
        std::cout << get_name_figure() << std::endl;
        std::cout << make_1string(arr) << std::endl;
        std::cout << make_2string(arr) << std::endl;
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
    std::string get_name_figure()
    {
        return "Равнобедренный треугольник:";
    }
    void print() override
    {
        int* arr = new int[8]{ a,b,c,0,A,B,C,0 };
        std::cout << get_name_figure() << std::endl;
        std::cout << make_1string(arr) << std::endl;
        std::cout << make_2string(arr) << std::endl;
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
    std::string get_name_figure()
    {
        return "Равносторонний треугольник::";
    }
    void print() override
    {
        int* arr = new int[8]{ a,b,c,0,A,B,C,0 };
        std::cout << get_name_figure() << std::endl;
        std::cout << make_1string(arr) << std::endl;
        std::cout << make_2string(arr) << std::endl;
    }

};

class Quadrangle : public Figure
{
private:
    int a, b, c, d;
    int A, B, C, D;
    int count_side_quadrangle = 4;
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
    std::string get_name_figure() override
    {
        return "Четырёхугольник:";
    }
    void print() override
    {
        int* arr = new int[8]{ a,b,c,d,A,B,C,D };
        std::cout << get_name_figure() << std::endl;
        std::cout << make_1string(arr) << std::endl;
        std::cout << make_2string(arr) << std::endl;
    }
    int get_count_sides()
    {
        return count_side_quadrangle;
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
    std::string get_name_figure() override
    {
        return "Прямоуголник:";
    }
    void print() override
    {
        int* arr = new int[8]{ a,b,c,d,A,B,C,D };
        std::cout << get_name_figure() << std::endl;
        std::cout << make_1string(arr) << std::endl;
        std::cout << make_2string(arr) << std::endl;
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
    std::string get_name_figure() override
    {
        return "Квадрат:";
    }
    void print() override
    {
        int* arr = new int[8]{ a,b,c,d,A,B,C,D };
        std::cout << get_name_figure() << std::endl;
        std::cout << make_1string(arr) << std::endl;
        std::cout << make_2string(arr) << std::endl;
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
    std::string get_name_figure() override
    {
        return "Параллелограмм:";
    }
    void print() override
    {
        int* arr = new int[8]{ a,b,c,d,A,B,C,D };
        std::cout << get_name_figure() << std::endl;
        std::cout << make_1string(arr) << std::endl;
        std::cout << make_2string(arr) << std::endl;
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
    std::string get_name_figure() override
    {
        return "Ромб:";
    }
    void print() override
    {
        int* arr = new int[8]{ a,b,c,d,A,B,C,D };
        std::cout << get_name_figure() << std::endl;
        std::cout << make_1string(arr) << std::endl;
        std::cout << make_2string(arr) << std::endl;
    }


};



void get_info(Figure* figure)
{
    figure->print();
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
