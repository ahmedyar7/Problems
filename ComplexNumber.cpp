include <iostream>
using namespace std;

class Complex
{
private:
    int n1;
    int n2;
    int i1;
    int i2;

public:
    // Constructor:
    Complex()
    {
        // Inputting the real Part:
        cout << "Enter the number 1: ";
        int num1;
        cin >> num1;
        n1 = num1;
        cout << "Enter the number 2: ";
        int num2;
        cin >> num2;
        n2 = num2;
        // Inputting the Imaginary part:
        cout << "Enter the Img1: ";
        int img1;
        cin >> img1;
        i1 = img1;
        cout << "Enter the Img2: ";
        int img2;
        cin >> img2;
        i2 = img2;
    }
    // Methods:
    void add()
    {
        i1, i2, n1, n2;
        int realSum = n1 + n2;
        int imgSum = i1 + i2;
        cout << "The Addition \n";
        cout << realSum << " + " << imgSum << "i" << endl;
    }

    void subract()
    {
        i1, i2, n1, n2;
        int real = n1 - n2;
        int img = i1 - i2;
        cout << "The Difference \n";
        cout << real << " + " << img << "i" << endl;
    }

    void display()
    {
        i1, i2, n1, n2;
        cout << n1 << " + " << i1 << "i" << endl;
        cout << n2 << " + " << i2 << "i" << endl;
    }
};

int main()
{
    class Complex c;
    c.display();
    c.add();
    c.subract();
}
