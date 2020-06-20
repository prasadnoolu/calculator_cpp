#include <iostream>
#include <cstdio>

using namespace std;
int x=1;
char op;

double multiplication()
{
    double product;
    cin>>product;
    while(1)
    {
        cin>>op;
        if(op == '*')
        {
            double temp;
            cin>>temp;
            product *= temp;
        }
        else if(op == '/')
        {
            double temp;
            cin>>temp;
            product /= temp;
        }
        else break;
    }
    return product;
}

double addition()
{
    double sum = multiplication();
    while(op != '=')
    {
        if(op == '+')
            sum += multiplication();
        else if(op == '-')
            sum -= multiplication();
        else
        {
            cout<<"Operator error"<<endl;
            return 0.0;
        }
    }
    return sum;
}

int main()
{
    char cAgain;
    int x;
    do
    {
        
        x=1;
		cout << "Enter the Expression Below \n" << endl;
            while (x != 0, x--)
            {
                double result = addition();
                cout<<result<<endl;
            }
        
    cout << "Would you like to run the program again.(Y/N)" << endl;
            cin >> cAgain;
    } 
	while (cAgain == 'Y' || cAgain == 'y');
	if (cAgain == 'N' || cAgain == 'n')
	{
		return 0;
	}
    
}