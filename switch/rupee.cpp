#include <iostream>
using namespace std;
int main()
{
    int amount = 1330;
    
  int Rs100 , Rs50 , Rs20 , Rs1;

  switch(1)
  {
      case 1: Rs100=amount/100; // 1330/100 =13 
              amount=amount%100; // 30
              cout<<"No of 100 Rupee notes required are="<<Rs100<<endl;
              
         
      case 2: Rs50=amount/50; // 30/50 =0
              amount=amount%50;
              cout<<"No of 50 Rupee notes required are="<<Rs50<<endl;
              

      case 3: Rs20=amount/20; //30/20 = 1
              amount=amount%20; //10
              cout<<"No of 20 Rupee notes required are="<<Rs20<<endl;
               

      case 4: Rs1=amount/1; // 10/1 =10
              amount=amount%1; 
              cout<<"No of 1 Rupee notes required are="<<Rs1<<endl; 
                  
           }
}
    
    
  
// 1330 rs k liye kitne 100 , 50 , 20, 10 k note lgenge
