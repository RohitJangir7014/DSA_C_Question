#include <iostream>
using namespace std;

class Naruse{
    private:
    int aga;
    long number;
    string name,email,Address;
    public:
    Naruse(int aga,long number,string name,string email,string Address){

        cout<<"your name is "<<name<<endl;
        cout<<"your email is "<<email<<endl;
        cout<<"your age is "<<aga<<endl;
        cout<<"your number is "<<number<<endl;
        cout<<"your address is "<<Address<<endl;

    } 

    
};

int main (){
    Naruse obj1(19,9983091105,"vikash","vikash@321gmail.com","121-ramkui");
}




// #include <iostream>
//  using namespace std;

//     string Name,Email,Number,Address;
//     long Age;
//     cout<<"Enter Your Name: ";
//     getline(cin, Name);
//     cin>>Name;
//     cout<<"Enter Your subject: ";
//     getline(cin, Email);
//     cin>>Email;
//     cout<<"Enter Your Exprince: ";
//     getline(cin, Address);
//     cin>>Address;
//     cout<<"Enter Your P.No: ";
//     cin>>Number;
//     cout<<"Enter Your Age: ";
//     cin>>Age;
