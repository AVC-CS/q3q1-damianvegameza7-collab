#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    double root1, root2;
    // TODO
    cout << "Enter three numbers" << endl;
    cin >> a >> b >> c;
    // TODO
    root1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    root2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);


    cout << setprecision(2) << fixed;
    if(root1 < root2) {
        cout << root1 << " " << root2 << endl;
        
    } else {
        cout << root2 << " " << root1 << endl;
    }
    return 0;
}
