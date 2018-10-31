#include <iostream>

using namespace std;

int main()
{
    int A,B,X,Y;

    cout << "masukan bilangan A: ";
    cin >> A;
    cout << "masukan bilangan B: ";
    cin >> B;

    X = A;
    Y = B;
    {if(X != Y )
        {if ( X < Y  )
                {  X = X + A;}
        else
                { Y = Y + B;}
    }

    cout << X;

    }
}
