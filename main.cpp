#include <iostream>

using namespace std;

//called variable
int neckLace(int a, int b);

int main()
{
    int orig1, orig2;
    cout << "Please enter two digits seperated by a space: ";
    // Notice how we can read two values in one line
    cin >> orig1 >> orig2;
    
    cout << neckLace(orig1, orig2);
    // cout << "Total Steps: "
   
    return 0;
}
 // a, b 3, 4
int neckLace(int a, int b){
    int steps = 0;
    int newCount = a + b; // 3 + 4 = 7
    //print a b a+b a+b+1 
    cout << a <<" "<< b << " " << newCount << " "; // 3 4 7 
    steps += 1;
    
    int temp = b; // 4
    int temp1;
    //cout << temp << " ";  // 3 4 7 1 
    steps += 1;
  // add numbers up 
   for (int a = 1; a < 12; a++)
   {
        newCount = newCount + temp; // a+b +1 or 3 4 7 1 8  8+9 = 17
        temp = newCount; // 9
        
        if(newCount > 9){ 
            newCount %= 10;  
              temp = temp1;
        }
        
      
      cout << newCount << " "; steps += 1;
      
      // answer = 3 4 7 1 8 9 7 6 3 9 |2| 7 6 3 9 7
   }
   
   // 
   
  /* while(newCount != b)
   {
        if(newCount == 9){ 
            temp = newCount - 1;  // 8
        }
        
        if(newCount > 9){ 
              cout << (newCount % 10) << endl;  
              temp = newCount;
        }
        
      newCount = newCount + temp; // a+b +1 or 3 4 7 1 8 
    
    
      
      cout << newCount << " "; steps += 1;
                                    /*
                                        1. 3 4 7 1 8 
                                        2. 3 4 7 1 8 9
                                        
                                    */
    //  temp = newCount + 1;
       
   //}
    
    return steps;
}
