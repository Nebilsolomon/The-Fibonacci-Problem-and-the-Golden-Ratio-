//
//  main.cpp
//  Project3
//
//  Created by nebil on 11/5/22.
//

#include <iostream>

using namespace std;

int problem1A(int n);


void problem1B_equation1();
void problem1B_equation2(int n);
int maxSubArraySum(int a[], int size);
int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "==== Part1 A ========" << endl;
    cout << "15th term is " <<  problem1A(15)<< endl;

    
    cout << "======= Part1 B  For p ========== " << endl;
  
     problem1B_equation1();
    
    // e
    cout << "======= Part1 B  20 term of sequence ========== " << endl;
    problem1B_equation2(20);
    

    cout << "====== Part1 B output from both equations ====== " << endl;
   // firt function ask user p and print next term of sequence Fibonacci
    
    problem1B_equation1();
    
    // this function just print outputs sequence Fibonacci
    problem1B_equation2(3);
    
    cout << "====== Part1 B Confirming or disproving the maxim ==== "<< endl;

    
    
    
    
    
    cout << "======= Part2 B  ========== " << endl;
    
    



    
    
    int a[] = { -3, -5, 5, -1, -3, 1, 5, -6 };
        int n = sizeof(a) / sizeof(a[0]);
     
        // Function Call
        int max_sum = maxSubArraySum(a, n);
        cout << "Maximum contiguous sum is " << max_sum;
    
    
 
    return 0;
}



int problem1A(int n) {
    
    if(n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    
    return problem1A(n-1)+problem1A(n-2);
    
 
}


void problem1B_equation1() {
    
    float p;


    cout<<" Enter p ";
    cin>>p;
    float b = p - int(p);
    while(p <= 0 || b != 0) {
    cout<<"p should be postive and non-foloating point please enter again";
    cin>>p;
    b = p - int(p);

    }
    cout << "p is a non-floating point positive integer" << endl;
    int nextSeriesFib = 1.618 * p;
    cout<<"next term of the sequence of p is  : " <<nextSeriesFib<<endl;
    


}


  void problem1B_equation2(int n) {
    
      if (n == 0) {
        cout<<"Zero number of Fibonacci  is 0 ";

        
    } else if( n==1) {
        
     cout<<"First number of Fibonacci s is 1";
    }
     else {
            float a1 = pow((1+sqrt(5)),n);

            float a2 = pow((1-sqrt(5)),n);

            float a3 = pow(2,n)*sqrt(5);
            float Fibonacci = (a1-a2)/a3;
            cout<<""<<n<< " term of Fibonacci is "<<Fibonacci<<endl;
            cout<<"next term  "<<Fibonacci * (1.618);

         
}

  }


//Part 2

int maxSubArraySum(int a[], int size)
{
    int max_so_far = 0;
    int max_ending_here = 0;
 
    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here){
            max_so_far = max_ending_here;
           
        }
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
