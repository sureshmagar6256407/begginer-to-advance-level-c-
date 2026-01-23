// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     cout << "4" << endl;
// //     cout << 4 << endl;
// //     cout << 4 + 3 << "\n";
// //     cout << "4*3 ";
// // }

// // #include <iostream>
// // using namespace std ;  
// // int  get_interest() ; 
 
// // int main (){
// //     int  simple_interest = get_interest() ;  
// //     cout <<"simple_interest"<<simple_interest <<endl ; 
// //     return   0 ;

// // }

// // int get_interest() {
// //     int p_amount ,rate , time  ;  
// //     int simple_interest  ;  
// //     cout<<"Enter p_amount rate and time" <<endl ;  
// //     cin >> p_amount >> rate >> time ;  
// //     simple_interest  = (p_amount * time * rate) /100  ;
// //     return simple_interest ;   
// // }


// // #include <iostream> 
// // using namespace std ;  
// // int get_factorial ()  ;
// // int main ( ) { 
// //     int factorial    = get_factorial()  ;   
// //     cout << "factorial: " << factorial   ;  
// //     return  0 ; 
// // }

// // int get_factorial () { 
//     //     int num ;  
// //     cout <<"Enter the num: "  ;  
// //     cin >> num ;
// //     int i   = 1   ; 
// //     int factorial =   1 ; 
// //     while  (i <= num) { 
//     //         factorial = factorial * i   ;
// //         i++ ;
// //     }
// //     return factorial ;
// // }




// // wap in c++  to find the greater amount of two number   
// // #include <iostream> 
// // using  namespace std;  
// // int get_num() ; 

// // int main() {
// //     int greate_num  = get_num()  ;  
// //     cout <<"greate_num" <<greate_num ; 
// //     return  0;
// //  }
// //  int get_num() { 
// //     int greate_num ; 
// //     int a,  b ; 
// //     cout << "Enter the a and b " <<endl ; 
// //     cin>> a >> b ; 
// //     if (a >b   ) { 
// //         greate_num  = a ; 
// //     }
// //     else if (b > a ) { 
// //         greate_num = b;
// //     }
// //     else { 
// //         cout << "a and b is equal" <<endl ; 
// //     }
// //     return greate_num  ;
// //  }


// //  using function to check enter wheter num  is armstrong or not 
// #include <iostream> 
// using namespace std ;  
// int get_num() ; 
// int main() {  
//     int arm_num   = get_arm ()  ; 
//     cout << "arm_num" <<arm_num  ;  
//     return   0 ; 
// }
// int get_arm() { 
//     int arm_num    ; 
//     int the_num  = 153;  
//     int user_num   ;  
//     cout <<"enter the num ::" <<endl ;  
//     cin >> user_num ; 
//     for (int i = 1 ; i<user_num ; i++) { 
        

//     }

//     return arm_num ; 

// }


// write program in c ++ greatest number using 3 number
// #include <iostream> 
// using namespace std ; 

// int main () { 
//     int a , b ,c ; 
//     cout << "Enter the value of a, b and  c : ";
//     cin >> a >> b >> c ; 
//     if (a > b && a > c) { 
//         cout << "a is greatest " << a << endl ; 
//     }
//     else if (b > a && b > c) { 
//         cout << "b is greatest " << b << endl ; 
//     }
//     else { 
//         cout << "c is greatest " << c << endl ; 
//     }
// }

// #wap the find the factorial of number enter through the keyboard
// #include <iostream>  
// using namespace std  ; 
// int getFactorial(int num) {
    //     int i = 1 ; 
//     int factorial = 1 ; 
//     while (i <= num) { 
    //         factorial = factorial * i ; 
    //         i++ ; 
//     }
//     return factorial ;
// }
// int main () { 
//     int num ; 
//     cout << "Enter the number: ";
//     int result = getFactorial(num) ;
//     cout << "Factorial of " << num << " is " << result << endl ; 
// }


// #include <iostream>  
// using namespace std  ; 

// int  main ( ) {  
//     int i  = 0    ; 
//      int num  = 10   ;  
//      while ( i <= num) 
//      {
//         /* code */
//         cout << i << endl;
//         i ++ ;
//      }
     


// }



// wap in c++ to find the sum of digits enter through the keyboard using function
// #include <iostream> 
// using namespace std ;  
// int get_sum_of_digits(int num) {
//     int sum = 0;
//     while (num > 0) {
//         sum += num % 10;
//         num /= 10;
//     }
//     return sum;
// }
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     cout << "Sum of digits: " << get_sum_of_digits(num) << endl;
//     return 0;
// }

// wap in c++ to generate efnoserius upto 10 terms using function  
// #include <iostream> 
// using namespace std ;  
// void generate_fibonacci(int terms) {
//     int a = 0, b = 1;
//     cout << a << " " << b << " ";
//     for (int i = 2; i < terms; i++) {
//         int c = a + b;
//         cout << c << " ";
//         a = b;
//         b = c;
//     }
// }

// #include <iostream>
// #include <cmath>
// using namespace std;

// bool isArmstrong(int num) {
//     int originalNum = num;
//     int digits = 0;
//     int sum = 0;
    
//     // Count number of digits
//     int temp = num;
//     while (temp > 0) {
//         digits++;
//         temp /= 10;
//     } 
//     // Calculate sum of powers
//     temp = num;
//     while (temp > 0) {
//         int digit = temp % 10;
//         sum += pow(digit, digits);
//         temp /= 10;
//     } 
//     return sum == originalNum;
// }
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
    
//     if (isArmstrong(num)) {
//         cout << num << " is an Armstrong number" << endl;
//     } else {
//         cout << num << " is not an Armstrong number" << endl;
//     }
//     return 0;
// }



// wap using recursion to find the factorail  of numbers enter through the keyboard
// #include <iostream>
// using namespace std;

// int factorial(int n) {
//     if (n == 0) {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     cout << "Factorial of " << num << " is " << factorial(num) << endl;
//     return 0;
// }

//wap to multipy two number using function    

// #include <iostream>  
// using namespace std  ;  

// int multiply(int a, int b) {
//     return a * b;
// } 
// int main() {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     cout << "Product: " << multiply(a, b) << endl;
//     return 0;
// }


// wap to using function to find the  power of number.if a  is  base and b is a power    
#include <iostream>
using namespace std ;  

