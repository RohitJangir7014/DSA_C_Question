// #include <iostream>
// using namespace std;

// int main (){
//     string a[3];
//         cout<<" enter the fruist name";
//         cin>>a[0];
//         cout<<"\n fruist name : "<<a[0];
//         cin>>a[1];
//         cout<<"\n fruist name : "<<a[1];
//         cin>>a[2];
//         cout<<"\n fruist name : "<<a[2];
// }
// int main(){
//     int input;
//     cout<<"enter the number";
//     cin>>input;

//     if(input%2==0){
//         cout<<"true";
//     }

//     else{
//         cout<<"false";
//     }
// }

// int main(){
//     string user_name;
//     cout<<"enter your name";
//     getline(cin,user_name);
//     cout<<"user_name";
// }




#include <iostream>
using namespace std;

int main (){

    int num;
    cout<<"Enter a Num";
    cin>>num;
for(int i = 1; i<=10;i++){ 
    int res = i*num;
    cout<<num<<"X"<<i<<"="<<res<<"\n";
}
} 