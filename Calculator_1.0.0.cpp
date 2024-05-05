#include <iostream>
using namespace std;

int main(){
    int number;
    double num1, num2, addition, subtraction, multiplication, division;
    bool checkerForFirstInput, checkerForSecondInput;

    cout<< "Welcome to the Calculator!\n"
        << "Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division: ";
    cin >> number;
    do {
        if (cin.fail()) {
            cout << "Invalid input. Please enter 1 for addition or 2 for subtraction: ";
            cin.clear();
            cin.ignore(1000, '\n');
            cin >> number;
            
        }
        else if ((number != 1 && number != 2 && number != 3 && number!=4)){
            cout << "Please enter right number ";
            cin >> number;
        }
    } while ((number != 1 && number != 2 && number != 3 && number!=4));
    
    switch (number){
        case 1:
            cout << "Please type the first number to addition: ";
            cin >> num1;
            checkerForFirstInput = cin.fail();
            do
            {
                if (checkerForFirstInput==1){
                    cout << "Please enter a valid number for first number: ";
                    cin.clear(); 
                    cin.ignore(1000, '\n');
                    cin >> num1;
                    checkerForFirstInput = cin.fail();
                }
            } while (checkerForFirstInput==1);
            
            cout << "Please type the second number to addition: ";
            cin.clear();
            cin.ignore(1000, '\n');
            cin >> num2;
            checkerForSecondInput = cin.fail();
            do
            {
                if (checkerForSecondInput==1){
                    cout << "Please enter a valid number for second number: ";
                    cin.clear(); 
                    cin.ignore(1000, '\n');
                    cin >> num2;
                    checkerForSecondInput = cin.fail();
                }

            } while (checkerForSecondInput==1);
            addition=(num1+num2);
            cout << "The solution of addition is: " << addition;
            break;
        
        case 2:
            cout << "Please type the first number to subtraction: ";
            cin >> num1;
            checkerForFirstInput = cin.fail();
            do
            {
                if (checkerForFirstInput){
                    cout << "Please enter a valid number for first number: ";
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cin >> num1;
                    checkerForFirstInput = cin.fail();
                }
            } while (checkerForFirstInput==1);
            
            cout << "Please type the second number to subtraction: ";
            cin.clear(); 
            cin.ignore(1000, '\n');
            cin >> num2;
            checkerForSecondInput = cin.fail();
            do
            {
                if (checkerForSecondInput==1){
                    cout << "Please enter a valid number for second number: ";
                    cin.clear(); 
                    cin.ignore(1000, '\n');
                    cin >> num2;
                    checkerForSecondInput = cin.fail();
                }

            } while (checkerForSecondInput==1);
            subtraction=(num1-num2);
            cout << "The solution of subtraction is: " << subtraction;            
            break;
            
        case 3:
            cout << "Please type the first number to multiplication: ";
            cin >> num1;
            checkerForFirstInput = cin.fail();
            do
            {
                if (checkerForFirstInput==1){
                    cout << "Please enter a valid number for first number: ";
                    cin.clear(); 
                    cin.ignore(1000, '\n');
                    cin >> num1;
                    checkerForFirstInput = cin.fail();
                }
            } while (checkerForFirstInput==1);
            
            cout << "Please type the second number to multiplication: ";
            cin.clear();
            cin.ignore(1000, '\n');
            cin >> num2;
            checkerForSecondInput = cin.fail();
            do
            {
                if (checkerForSecondInput==1){
                    cout << "Please enter a valid number for second number: ";
                    cin.clear(); 
                    cin.ignore(1000, '\n');
                    cin >> num2;
                    checkerForSecondInput = cin.fail();
                }

            } while (checkerForSecondInput==1);
            multiplication=(num1*num2);
            cout << "The solution of multiplication is: " << multiplication;
            break;
                    
        case 4:
            cout << "Please type the first number to division: ";
            cin >> num1;
            checkerForFirstInput = cin.fail();
            do
            {
                if (checkerForFirstInput==1){
                    cout << "Please enter a valid number for first number: ";
                    cin.clear(); 
                    cin.ignore(1000, '\n');
                    cin >> num1;
                    checkerForFirstInput = cin.fail();
                }
            } while (checkerForFirstInput==1);
            
            cout << "Please type the second number to division: ";
            cin.clear();
            cin.ignore(1000, '\n');
            cin >> num2;
            checkerForSecondInput = cin.fail();
            do
            {
                if (checkerForSecondInput==1){
                    cout << "Please enter a valid number for second number: ";
                    cin.clear(); 
                    cin.ignore(1000, '\n');
                    cin >> num2;
                    checkerForSecondInput = cin.fail();
                }

            } while (checkerForSecondInput==1);
            division=(num1/num2);
            cout << "The solution of division is: " << division;
            break;
     
        }
return 0;
}
