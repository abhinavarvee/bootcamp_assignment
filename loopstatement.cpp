#include <iostream>

using namespace std;


int main()
{
    
    int number;
    int n;

    cout << "Enter value : ";
    cin >> n;


    while (n!=0)
    {
        for(number = n;number <= n; number++) 
        {
            if(number % 2 ==0)
            {
                cout <<"The even numbers are:" <<number <<endl; 
            }
        }

        n--;20
    }

    return 0; 
}