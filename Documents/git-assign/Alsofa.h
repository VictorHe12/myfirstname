/*******
 **
 ** Author: He, WeiChao
 ** Assignment : Project 01
 ** Course : CS555 C++ For Programmers
 ** Term : Spring, 2018
 ** School : City University of Seattle
 **
 *******/

#include <string>
using namespace std;

class Account{
public:
    //member function that set the id name in the object
    void setName(string idName){
        name=idName; //store the id name
    }
    
    //member function that retrieves the id name from the object
    string getName() const{
        return name; //return the name's value to this function calls
    }
    
    //member function that set the back position of the sofa in the object
    void setPosition(int nowposition){
        position=nowposition; //store the position
    }
    
    //member function that retrieves the back position of the sofa from the object
    int getPosition() const{
        return position;  //return the position's value to this function calls
    }
private:
    string name;//data member containing the id holder's name
    int position=0;//data member containing the back position of sofa with a initial value.
    
};
