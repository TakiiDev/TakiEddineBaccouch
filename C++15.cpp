#include <iostream>;
using namespace std;
double f(double x, double n) {
    return (pow(x, n));
}
double derivative(double x) {
    double h;
    /*cout << "Choose precision (10^-n) n must be an integer :" << endl;
    cin >> n;*/
    cout << "Input The function's power for which to derivate! \n  " << "x^";
    double n;
    cin >> n;
    h = pow(10, -7);
    return (f(x + h, n) - f(x, n)) / h;
}
int main()
{
    double x;
    cout << "Input x:";
    cin >> x;
    cout << derivative(x);
    return 0;
}
