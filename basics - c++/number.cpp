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
#include <iostream> 
using namespace std ; 

int main () { 
    int a , b ,c ; 
    cout << "Enter the value of a, b and  c : ";
    cin >> a >> b >> c ; 
    if (a > b && a > c) { 
        cout << "a is greatest " << a << endl ; 
    }
    else if (b > a && b > c) { 
        cout << "b is greatest " << b << endl ; 
    }
    else { 
        cout << "c is greatest " << c << endl ; 
    }
}