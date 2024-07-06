#include<iostream>
using namespace std;
template <class T>

class calculator{
    T a,b;
    public:
    T get_data(){                       //getting data from user
        cout<<"Enter first number: ";
        cin>>a;
        cout<<"Enter second number: ";
        cin>>b;
        return a,b;
    }
    T add(){
        return a+b;                     //fuction for addtion
    }
    T sub(){                            //fuction for subtion
        return a-b;
    }
    T mul(){                            //fuction for multion
        return a*b;
    }
    T div() {                           //fuction for divtion
    if (b != 0)
        return a / b;
    else {
        throw runtime_error("Division by zero error!"); //throw exception division by zero
        }
    }
};
int main(){
    int operation;
    cout<<"Menu"<<endl;                      // menu for operation 
    cout<<"Enter 1 for Addtion \nEnter 2 for Subtraction \nEnter 3 for Multiplication \nEnter 4 for Division"<<endl;
    cout<<"enter the value  ";
    cin>>operation;
    try{
            calculator<double> c2;
            c2.get_data();
            switch (operation) {
                        case 1:
                            cout << "Result: " << c2.add() << endl;              //To add the values
                            break;
                        case 2:
                            cout << "Result: " << c2.sub() << endl;             //To subtract the values
                            break;
                        case 3:
                            cout << "Result: " << c2.mul() << endl;             //To multiply the values
                            break;
                        case 4:
                            cout << "Result: " << c2.div() << endl;             //To divide the values
                            break;
                        default:
                            cout << "Invalid operation" << endl;                //for wrong choice
                    }
        }

    catch (const runtime_error& e) {
        cout << e.what() << endl;           //catch block of exception division by zero
    }
    return 0;
}