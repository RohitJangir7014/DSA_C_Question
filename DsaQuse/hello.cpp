include <iostream> 
using namespace std;

int main (){
    int a = 5;
    for (int i = 0 ; i<a; i++){
        for(int j = 0 ; j<a; j++){
            if(i==0||i==a||j==0||j==a){
                cout<<'*';
            }else{cout<<" ";}
        }
    }

}