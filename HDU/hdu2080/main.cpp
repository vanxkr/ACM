#include <iostream>
#include <iomanip>
#include <cmath>
#define PI 3.141592653589793
using namespace std;
int main()
{
    int t;
    double x1, y1, angle1;
    double x2, y2, angle2;
    cin >> t;
    while (t --)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        angle1 = atan2(x1, y1);
        angle2 = atan2(x2, y2);
        cout << fixed << setprecision(2) << (abs)(angle1 - angle2)*180/PI << endl;
    }
    return 0;
}
