#include<iostream>
#include<string>

using namespace std;

double divide(double a, double b, int* valid)
{
    const double delta = 0.000000001;
    double ret = 0;

    if(!((-delta < b)&&(b < delta)))
    {
        ret = a/b;
        *valid = 1;
    }
    else
    {
        *valid = 0;
    }

    return ret;
}


int main(int argc, char *argv[])
{
    int valid = 0;
    double r =divide(1, 1, &valid);
    if(valid)
    {
        cout<< "r =" <<endl;
    }
    else
    {
        cout<< "Divided by zero..." <<endl;
    }


    cout<< divide(1, 1)<<endl;
    cout<< divide(1, 0)<<endl;        
    cout<< divide(0, 1)<<endl;        

    return 0;
}