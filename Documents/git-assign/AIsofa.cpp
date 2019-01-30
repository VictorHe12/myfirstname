/*******
 **
 ** Author: He, WeiChao
 ** Assignment : Project 01
 ** Course : CS555 C++ For Programmers
 ** Term : Spring, 2018
 ** School : City University of Seattle
 **
 *******/

#include <iostream>
#include <unistd.h> // for using delay
#include "Alsofa.h"
using namespace std;

int main() {
    
    Account myAccount;// create the Account object
    
    // show that the initial value of myAccount's name is the empty string
    cout<<"The initial name is:"<<myAccount.getName()<<endl;
    
    //prompt for and read name
    cout<<"Please enter your name:";
    string myName;
    getline(cin, myName);// read a line of text
    myAccount.setName(myName);//put the name in myAccount
    cout<<"Your name is:"<<myAccount.getName()<<endl;//display the name stored in the object myAccount
    
    // show that the initial value of myAccount's position is 0
    cout<<"The postition of your sofa is:"<<myAccount.getPosition()<<endl;
    
    //prompt for and read the position
    cout<<"Please enter the Postition you want:";
    int nowPosition; //initial a new position
    cin>>nowPosition; //enter a new position
    myAccount.setPosition(nowPosition);//put the new position in myAccount
    
    //set a 3 sec delay for simulating the change of position
    cout<<"Please wait..."<<endl;
    sleep(3);
    
    //display the new position
    cout<<"The position have been changed, now the position is:"<<myAccount.getPosition()<<endl;
    
    return 0;
};
