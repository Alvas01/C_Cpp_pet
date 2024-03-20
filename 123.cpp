#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    bool d = (a < b and b < c);
    
    if (not d) {
        if (b < a and a < c) {
            int temp = a;
            a = b;
            b = temp;
        }
        
        else if (b < c and c < a) {
            int temp = a;
            a = b;
            b = c;
            c = temp;
        }
        
        else if (a < c and c < b) {
            int temp = b;
            b = c;
            c = temp;
        }
        
        else if (c < b and b < a) {
            int temp = a;
            a = c;
            c = temp;
        }
        
        else if (c < a and a < b) {
            int temp = c;
            c = b;
            b = a;
            a = temp;
        }
    
    }
    
    cout << a << " " << b << " " << c;
    
    return 0;
}