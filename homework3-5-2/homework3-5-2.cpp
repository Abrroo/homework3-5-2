#include <iostream>
#include <cstring>
#include <string>
/*
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
*/

class Figure
{
private:
    const int count_side_none = 0;
    //int a = 0, b = 0, c = 0, d = 0;
    //int A = 0, B = 0, C = 0, D = 0;
public:
    Figure() {}
   /* 
   Figure(int a, int b, int c, int A, int B, int C)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    Figure(int a, int b, int c, int d, int A, int B, int C, int D)
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
    */
    virtual std::string get_name_figure()
    {
        return "";
    }
    virtual int get_data(char x)
    {
        switch (x)
        {
        default:  return 0; break;
        }
        
    }
    void print()
    {
        std::cout << get_name_figure() << std::endl;
        std::string result1 = "Стороны: a=" + std::to_string(get_data('a')) + " b=" + std::to_string(get_data('b')) + " c=" + std::to_string(get_data('c'));
        if (get_data('d') > 0)
        {
            result1 = result1 + " d=" + std::to_string(get_data('d'));
        }
        std::string result2 = "Углы: A=" + std::to_string(get_data('A')) + " B=" + std::to_string(get_data('B')) + " C=" + std::to_string(get_data('C'));
        if (get_data('D') > 0)
        {
            result2 = result2 + " D=" + std::to_string(get_data('D'));
        }
        std::cout << result1 << std::endl;
        std::cout << result2 << std::endl << std::endl;
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
    std::string get_name_figure() override
    {
        return "Треугольник:";
    }

    int get_count_sides()
    {
        return count_side_triangle;
    }
    int get_data(char x) override
    {
        switch (x)
        {
        case 'a': return a; break;
        case 'b': return b; break;
        case 'c': return c; break;
        case 'A': return A; break;
        case 'B': return B; break;
        case 'C': return C; break;
        default:  return 0; break;
        }

    }
    void print()
    {
        Figure::print();
    }


};

class Right_triangle : public Triangle
{
private:
    int a, b, c;
    int A, B, C;
public:
    Right_triangle() {}
    Right_triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C)
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
    void print()
    {
        Figure::print();
    }

};

class Iso_triangle : public Triangle
{
private:
    int a, b, c;
    int A, B, C;
public:
    Iso_triangle() {}
    Iso_triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C)
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
    void print()
    {
        Figure::print();
    }

};

class Equil_triangle : public Triangle
{
private:
    int a, b, c;
    int A, B, C;
public:
    Equil_triangle() {}
    Equil_triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C)
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
    void print()
    {
        Figure::print();
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
    int get_count_sides()
    {
        return count_side_quadrangle;
    }
    int get_data(char x) override
    {
        switch (x)
        {
        case 'a': return a; break;
        case 'b': return b; break;
        case 'c': return c; break;
        case 'd': return d; break;
        case 'A': return A; break;
        case 'B': return B; break;
        case 'C': return C; break;
        case 'D': return D; break;
        default:  return 0; break;
        }

    }

    void print()
    {
        Figure::print();
    }

};

class Rectangle : public Quadrangle
{
private:
    int a, b, c, d;
    int A, B, C, D;
public:
    Rectangle(){}
    Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D)
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
    void print()
    {
        Figure::print();
    }

};

class Square : public Quadrangle
{
private:
    int a, b, c, d;
    int A, B, C, D;
public:
    Square() {}
    Square(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D)
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
    void print()
    {
        Figure::print();
    }

};

class Parallelogram : public Quadrangle
{
private:
    int a, b, c, d;
    int A, B, C, D;
public:
    Parallelogram(){}
    Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D)
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
    void print()
    {
        Figure::print();
    }

};

class Rhombus : public Quadrangle
{
private:
    int a, b, c, d;
    int A, B, C, D;
public:
    Rhombus() {}
    Rhombus(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D)
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
    void print()
    {
        Figure::print();
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

