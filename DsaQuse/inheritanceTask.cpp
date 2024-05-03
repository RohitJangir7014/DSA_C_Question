// #include <iostream>
// using namespace std;
// class perent{
//     public:
//     float myfun(){
//         float amount = 0;
//         cout<<"Add Money in your Account ";
//         cin>>amount;
//         return amount;
//     }
// };
// class child:public perent{
//     public:
//     void calculate(){
//         float amount = myfun();
//        cout<<"Enter your Withdrawal amount ";
//         float w_amount;
//         cin>>w_amount;

//         if(amount>=w_amount){
//             float f_amount = amount-w_amount;
//             cout<<"withdrawal succcess"<<w_amount<<endl;
//             cout<<"final amount "<<f_amount;
//         }
//         else{
//             cout<<"invalid amount";
//         }
//     }
// };
// int main (){
//     child obj1;
//     obj1.calculate();
// }




#include <iostream>
using namespace std;

class perent{
    public:
    string myfun(){
        string name;
        cout<<"enter your name : ";
         cin>>name;
         cout<<name;
         cout<<endl;
         float amount;
         cout<<"enter your amount";
         cin>>amount;
         cout<<amount;
         cout<<endl;
         string Mobilenumber;
         cout<<"enter your mobile number : ";
         cin>>Mobilenumber;
        if(Mobilenumber.length()==10){
            cout<<Mobilenumber;
        }
        else{
            
            cout <<Mobilenumber;
            cin>>Mobilenumber;
        }
         
         
         cout<<endl;
         cout<<"Airtel : , Jio : , Vi : ";
         cout<<endl;
         string SIMName;
         cout<<"enter your SimName : ";
         cin>>SIMName;

         if (SIMName == "Airtel" || SIMName == "Jio" || SIMName == "Vi") {
            cout << "You selected: " << SIMName << endl;
            int a;
            cout<<"enter your reacharg amount : ";
            cin>>a;
            if (amount>=a)
            {
                cout<<"your reacharg successfull : ";
            }
            else{
                cout<<"your belince low : ";
            }
            int FinalAmount = amount-a;
            cout<<"your FinalAmount amount is "<<FinalAmount;   
        }
         else{
            cout<<"no";
         }
    }
};

int main(){
     perent obj;
    obj.myfun();
}




