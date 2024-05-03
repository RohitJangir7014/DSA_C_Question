// # include <iostream>
// using namespace std ;
// int number(int a){
  
//     cout<<++a;
// }
// int main(){
//     int a;
//     cout<<"enter your number";
//     cin>>a;
//     number(a);
// }


#include <iostream>

using namespace std;

void tringle(){
       for(int i = 1; i<=5; i++){
        for (int j = 1; j<=i;j++){
            cout<<i<<"  ";
        }
        cout<<"\n";
    }
    
    
}

void tribhuj(){
      for(int i = 1; i<=5;i++){
        for(int j = 1 ;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    
}


void reverse_tringle(){
      
    int ro ;
    cout<<"enter the rows : ";
cin>>ro;
    

     for(int i = 1; i<=ro ; i++){
         for(int j = 1; j<=(ro + 1)  - i;j++){
             cout<<j<<" ";
         }
         cout<<"\n";
     }
    
    
}

void ladders(){
       for(int i = 1; i<=5;i++){
        for(int k = 1 ; k<=i;k++){
            cout<<" ";
        }
        for(int j = 1 ;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}



void reverse_tringle_star(){
      
    int ro ;
    cout<<"enter the rows : ";
cin>>ro;
    

     for(int i = 1; i<=ro ; i++){
         for(int j = 1; j<=(ro + 1)  - i;j++){
             cout<<"* ";
         }
         cout<<"\n";
     }
    
    
}


void left_reverse_pattern(){
  
  
    int rows = 5; 

    for (int i = 0; i < rows; i++) {
      
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }

     
        for (int k = rows - i; k >= 1; k--) {
            cout << k;
            if (k > 1) {
                cout << " ";
            }
        }

        cout << endl;
    }

  
}

void center_pattern(){
    
          int ro = 5; 

    for (int i = 0; i < ro; i++) {

        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        for (int k = ro - i; k >= 1; k--) {
            cout << k <<" ";
        }

        cout << endl;
    }

    
}

int main(){
    
  tringle();
  cout<<endl;
  
    tribhuj();
    cout<<endl;
    
    reverse_tringle();
    cout<<endl;
    
    reverse_tringle_star();
    cout<<endl;
    
    center_pattern();
    cout<<endl;
    
    ladders();    
   cout<<endl;
   
   left_reverse_pattern();
    
  
}



///////////////////////////////////////////////////////////////////////////////////

// #include <iostream>

// using namespace std;


//     string name;
    
//     int marks , marks1 , marks2 , marks3 ,marks4 , marks5 ,marks6;
    

// void input(){
    
//     cout<<"Enter your name : ";
//     getline(cin , name);
    
    
    
//      cout<<"Enter your marks  : ";
//     cin>>marks ;
    
    
   
//      cout<<"Enter your marks 1 : ";
//     cin>>marks1 ;
    
   
//      cout<<"Enter your marks 2 : ";
//     cin>>marks2 ;
    
   
//      cout<<"Enter your marks 3 : ";
//     cin>>marks3 ;
    

//      cout<<"Enter your marks 4 : ";
//     cin>>marks4 ;
    
    
//      cout<<"Enter your marks 5 : ";
//     cin>>marks5 ;
    
    
//      cout<<"Enter your marks 6 : ";
//     cin>>marks6 ;
    
//     cin.ignore();
    
// }


// void print(){
     
//     int total = marks1 + marks2 + marks3 +marks4 + marks5 + marks6 ;
//     cout<<total<<endl;
    
    
//     float per = (total*100)/marks ;
//     cout<<per<<"%";
    
// }

// int main(){
    
//      input();
   
//    print();

    
// }
//////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>

// using namespace std;

// int marks[6];

// void pass(){
    


// cout<<"Enter your marks 1 : ";
// cin>>marks[0];

// cout<<"Enter your marks 2 : ";
// cin>>marks[1];

// cout<<"Enter your marks 3 : ";
// cin>>marks[2];

// cout<<"Enter your marks 4 : ";
// cin>>marks[3];

// cout<<"Enter your marks 5 : ";
// cin>>marks[4];

// cout<<"Enter your marks 6 : ";
// cin>>marks[5];

// }


// void print(){
    
// int total = marks[0] + marks[1] + marks[2] + marks[3] + marks[4] + marks[5];

// float per = (total*100) / 600;
// cout<<per<<"%";

// }
// int main(){
// pass();
// print();
// }

/////////////////////////////////////////////////////////////////////////////////