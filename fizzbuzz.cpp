#include <iostream>
#include<stdio.h>

int main(){

    int i; 

    for (i = 1; i <=100; i++) 
    {

        if(i % 3 != 0 && i % 5 != 0){           // show the position when position is not multiple by 3 and 5.

           std::cout << i <<  "\n";         
        }

        else {      
            if(i % 3 == 0 && i % 5 == 0){       // Combination will call Fizz and Buzz in one line when position is multiple by 3 and 5.

           std::cout <<"Fizz Buzz  \n ";
       
        }
        else{                               //condition when position is multiple of 3 then call Fizz
            
              if(i % 3 == 0){               

           std::cout <<"Fizz \n ";

        }

        if(i % 5 == 0){                //condition when position is multiple of 5 then call Buzz

         std::cout <<"Buzz  \n ";

        }
        }
          
      

        

        }

    }

    return 0;

}
