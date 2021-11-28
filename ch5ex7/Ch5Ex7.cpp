/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tyler Goldsmith
 */

#include "std_lib_facilities.h"

/*
The following results can be verified using a graphing calculator, or simply plugging into the quadratic
formula
*/

bool realRoots(double a, double b, double c){
    return(pow(b,2)-(4*a*c)>=0);
}
bool oneRoot(double a, double b, double c){
    return(pow(b,2)-(4*a*c)==0);
}

int main(){
    double a;
    double b;
    double c;
    
    cout <<"The quadratic equation is of the form a*x^ 2+ b*x +c\nEnter an Integer for each of these constants (a, b and c)\n";
    
    cout <<"a: ";

    //Checks to ensure input is composed of doubles
    while (1) {
        if (cin >> a) {
            // valid input
            break;
        } else {
            // not a valid number
            cout << "Invalid Input! Please try again: ";
            cin.clear();
            while (cin.get() != '\n') ; // empty loop
            }
        }

    cout <<"b: ";

    //Checks to ensure input is composed of doubles
    while (1) {
        if (cin >> b) {
            // valid input
            break;
        } else {
            // not a valid number
            cout << "Invalid Input! Please try again: ";
            cin.clear();
            while (cin.get() != '\n') ; // empty loop
            }
        }

    cout <<"c: ";

    //Checks to ensure input is composed of doubles
    while (1) {
        if (cin >> c) {
            // valid input
            break;
        } else {
            // not a valid number
            cout << "Invalid Input! Please try again: ";
            cin.clear();
            while (cin.get() != '\n') ; // empty loop
            }
        }

    if(!realRoots(a,b,c))
        cout <<"There are no real roots to this quadratic equation";
    else if(oneRoot(a,b,c)){
        double root= (-b)/(a*2);
        cout <<"The one root to this equation is at x = " << root;
    }else{
        double root1= (-b+sqrt(pow(b,2)-(4*a*c)))/(a*2);
        double root2= (-b-sqrt(pow(b,2)-(4*a*c)))/(a*2);
        cout <<"The two roots to this equation are at x = " << root1 << " and x = " <<root2;
    }
}
