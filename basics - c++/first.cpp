// #include <iostream>
// using namespace std;

// int main() {
//     cout << 1 + 1;
// }

// # include <iostream>
// using namespace std;
// int main() {
//     cout << "suresh pun magar" ;
// }

// #include <iostream>
// using namespace std ;
// int main () {
//     cout <<"suresh pun magar" <<endl ;#endl means new line
//     cout <<"tekam oli" ;
// }

// #include <iostream>
// using namespace std ;

// int main ( ) {
//     int i   = 1 ;
//     int a   =  10 ;
//     while (i <=  a )
//     {
//         /* code */
//         cout << i ;
//         i++ ;
//     }

// }

// #include <iostream>
// using namespace std;

// int main() {
//     int i  =   1 ;
//     do
//     {
//         /* corde */
//         cout << i* i  <<endl;
//         i++;
//     } while (i <= 20 );

// }

// // write a program in c++ to print all the even number lesst than20
// #include <iostream>
// using namespace std;

// int main () {
//    int  i  = 1 ;
//    do
//    {
//     if (i % 2 ==0) {
//         cout <<i <<endl;
//     }
//     i++;
//    }while (i <= 20);

// }

// print all odd  number less than 20
// #include <iostream>
// using namespace std;

// int main () {
//     int i  = 1 ;
//     while (i<= 20)
//     {
//         if (i % 2 != 0) {

//             cout << i <<endl;
//         }
//         i++ ;
//     }

// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a = 0 ;
//     while (a<=10)
//     {
//         /* code */
//         cout << a <<endl;
//         a++;
//     }
// }

// print al the even number less than equal to 10 using while stetement
// #include <iostream>
// using namespace std;
// int main () {
//     int i  = 1  ;
//     while ( i <= 10)
//     {
//         /* code */
//         if (i % 2 !=0) {
//             cout << i <<endl;

//         }
//         i++;
//     }
// }

// #include <iostream>

// using namespace std ;

// int main () {
//     int a  = 10 ;
//     for (int i  = 1 ; i <= a ; i++){
//         cout << i <<endl ;
//     }
// }

// write a program in C++ to find the facotrial of number inter throgh the keyboard using for loop

// #include <iostream>
// using namespace std ;
// int main (){
//      int num ;
//      long int fact = 1;
//      cout<<"enter num" << endl ;
//      cin >>num;
//      for (int i  = 1 ; i <= num ;i++) {
//         fact = fact * num ;20

//      }
//      cout <<fact<<endl;
// }

// write a program multiplication table enter through the keyboard

// # include <iostream>
// using namespace std ;

// int main () {
//     int num ;
//     long int multi  = 1;
//     cout<<"Enter the number :: " <<endl;
//     cin >> num ;
//     for (int i = 0 ;  i <= 10 ; i++) {
//         multi  = num * i;
//         cout<<num * i <<endl;
//     }

// }

// to find the sum of number inter through the keyboard until the input 0 using do while

// #include <iostream>
// using namespace std;

// int main() {
//     int num  ;

//     int sum  =   0 ;
//     cout <<"Enter the number :: " <<endl ;
//     cin>>num;
//     do
//     {
//         if (num  == 0) {
//             break;
//         }
//         else {
//             sum += num;
//         }
//         cout <<sum ;
//         num++;
//     } while (num <= 1 );

// }

// wap to sum of digit enter through the keyboard  ;
// #include <iostream>
// using namespace std ;

// int main(){
//     int num ;
//     int rem ;
//     int sum  =  0 ;
//     cout << "ENter the numbers" << endl;
//     cin >> num ;
//     do {
//         rem  = num % 10 ;
//         sum   = sum + rem ;
//         num  = num/2;

//     }while(num != 0);
//     cout << sum << endl  ;
// }

// enter in the number thorugh the keyborad whether it is prime or not

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout << "Enter the number ::" << endl;
//     cin >> num;

//     int count = 0;
//     for (int i = 1; i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//             count++;
//         }
//     }

//     if (count == 2)
//     {
//         cout << "this is a prime number";
//     }
//     else
//     {
//         cout << "this is not a prime number";
//     }
// }

// wap  in c++  generate beohacci series
// #include <iostream>
// using namespace std;

// int main() {
//     int n, t1 = 0, t2 = 1, nextTerm = 0;
//     cout << "how much word display? ";
//     cin >> n;

//     for (int i = 1; i <= n; ++i) {
//         cout << t1 << ", ";
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//     }
//     return 0;
// }

// wap in c++ using function to display name and age  ;

// #include <iostream>
// using namespace std;

// // Function definition
// void displayInfo()
// {
//     cout << "Name: John" << endl;
//     cout << "Age: 25" << endl;
// }

// int main()
// {
//     displayInfo(); // Function call
//     return 0;
// }

