// # include <iostream>
// using namespace std;

// class firtclass{
//     public:
//     int vikash;
//     void myfun(){
//         cout<<"My Name Is Vikash.";
//     }

// };


// int main(){
//     firtclass vikash;
//     firtclass vikash2;
//     vikash2.vikash=80;
//     vikash.vikash=70;
//     cout<<vikash.vikash<<endl;
//     cout<<vikash2.vikash<<endl;
//     vikash2.myfun();
//     cout<<endl;
//     vikash.myfun();
// }



#include <iostream>
using namespace std;

class rohit {
public:
    void total(float Hindi, float maths, float english, float science) {
        float total_marks = Hindi + maths + english + science;
        cout << "Total marks: " << total_marks << endl;
        
       float per_marks = total_marks/400*100;
        cout<< "your percentage is : " << per_marks<<endl;

    };
};

int main() {
   float Hindi, maths, english, science;

    cout << "enter your marks Hindi: ";
    cin >> Hindi;
    cout << "enter your marks Math: ";
    cin >> maths;
    cout << "enter your marks English: ";
    cin >> english;
    cout << "enter your marks Science: ";
    cin >> science;
  

    rohit obj;
    obj.total(Hindi, maths, english, science);
}