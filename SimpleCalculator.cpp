/* Simple Calculator*/
#include <iostream>
using namespace std;

void printMenu()
{
	printf("Calculator Menu\n"
			"1) Addition\n"
			"2) Subtraction\n"
			"3) Multiplication\n"
			"4) Division\n"
			"0) Exit\n");
}
pair<float, float> get_nums()
{
    float num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    return make_pair(num1,num2);
}
float add(float a, float b)
{
    return a+b;
}
float subract(float a, float b)
{
    return a-b;
}
float multiply(float a, float b)
{
    return a*b;
}
float divide(float a, float b)
{
    return a/b;
}
int main()
{
    int selection;
    float num1, num2;
    printMenu();
    cout << "Enter operation selection" << endl;
    cin >> selection;
    while(1)
    {
        if(selection>0)
        {
            pair<float, float> nums = get_nums();
            num1 = nums.first;
            num2 = nums.second;
        }
        switch(selection)
        {
            case 1:
                cout << num1 << "+" << num2 << "=" << add(num1,num2) << endl;
                break;
            case 2:
                cout << num1 << "-" << num2 << "=" << subract(num1,num2) << endl;
                break;
            case 3:
                cout << num1 << "*" << num2 << "=" << multiply(num1,num2) << endl;
                break;
            case 4:
                cout << num1 << "/" << num2 << "=" << divide(num1,num2) << endl;
                break;
            case 0:
                cout << "Exiting..." << endl;
                return 0;
                break;
            default:
                cout << "Selection invalid!\nExitting..." << endl;
                return 0;
        }
        printMenu();
        cout << "Enter operation selection" << endl;
        cin >> selection;
    }
}