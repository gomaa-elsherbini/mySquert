#include <iostream>
using namespace std;



float readNumber()
{
    float num;
    cout << "\nEnter a Number? ";
    cin >> num;
    cout << "\n";
    return num;
}

float mySqrt(float num)//10.7*10=107 
{
	for ( float i = 2; i <= round(num / 2); i = i+0.00001)
	{
        if (num == floor(i * i))
		{
            return i;
		}
	}
    return 0;
}

void printResult(string msg, float res)
{
    cout << msg << res << endl;
}



int main()
{
    int num = readNumber();

    printResult("My Sqrt result is: ", mySqrt(num));
    printResult("C++ sqrt result is : ", sqrt(num));


    return main();
}