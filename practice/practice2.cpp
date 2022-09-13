#include<iostream>
using namespace std;
int main(){
   int n = 57;
   for(int i =2 ; i<n;i++){
    if(n%i==0){
        cout<<"not";
        return 0;
    }
   }
   cout<<"prime";
return 0;
}