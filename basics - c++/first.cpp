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

// #include <iostream>
// using namespace std ;

// void sum () {
//     cout << 4 + 5  ;
// }
// int main ( ) {
//     sum  () ;
//     return 0 ;
// }

// wap in c ++ find the function aria and perimeter of rectangel

// #include  <iostream>
// using namespace std ;

// void area_rectangle() {
//     int lenght ;
//     cout<< "Enter the  length" << endl;
//     cin>> lenght ;
//     int w ;
//     cout<< "Enter the  wide"<< endl;
//     cin>>w ;
//     int area  = lenght * w;
//     cout << area<<endl;

// }
// void area_peimeter() {
//     int length ;
//     cout<< "Enter the legth :: " ;
//     cin>> length ;
//     int wide ;
//     cout<< "Enter the wide :: " ;
//     cin>> wide ;
//     int final_perimeter  = 2*(length + wide) ;
//     cout<< final_perimeter <<endl ;

// }
// int  main ( ) {
//     area_rectangle();
//     area_peimeter();
//     return  0 ;
// }

// #include  <iostream>
// using namespace std ;

// void circle_perimeter()  {
//     int r ;
//     cout << "enter the r ;" <<endl ;
//     cin >> r ;
//     int c = 2 * (3.4 * r);
//     cout << c <<endl;
// }
// void circle_area() {
//     int r ;
//     cout <<"Enter the r :: " <<endl ;
//     cin  >> r ;
//     int A  = 3.4*(r*r) ;
//     cout << A <<endl;
// }
// int main () {
//     circle_perimeter() ;
//     circle_area () ;
//     return 0 ;
// }

// #include <iostream>
// using namespace std;

// void interest ()  {
//     int p ;
//     cout << "ENter the p :: " <<endl ;
//     cin >> p ;
//     int t ;
//     cout << "ENterh the time :: " <<endl ;
//     cin  >> t  ;
//     int r  ;
//     cout <<"ENter the rate  :: "  <<endl ;
//     cin >>r  ;
//     int i  = p*t*r  ;
//     cout << i <<endl ;
// }

// int main () {
//     interest() ;
//     return  0 ;
// }

//  wap in c ++  to find the product of two number using function
//  1- no argument no return type
//  #include <iostream>
//  using namespace std;
//  int  product() ;

// int  main () {
//     product () ;
// }

//  int  product()
//  {
//      int a, b, output;
//      cout << "Enter a and b: ";
//    cin >> a >> b;
//    output = a * b;
//     cout << "Product = " << output << endl;
// }

// 2- with argument but no return type
// #include  <iostream>
// using namespace std ;
// void add (int a , int b);

// int main () {
//     int a, b  ;
//     cout << "Enter a and b" <<endl    ;
//     cin >>a >> b ;
//     add(a,b);
// }
// void add(int a ,int b ) {
//     int product   ;
//     product  = a * b ;
//     cout << "product="<<product <<endl ;
// }

// wap in c++ fiind area and perimeter using function   with argument with return type
// #include <iostream>
// using namespace std ;

// int main () {
//     int a , l , w  ;
//     cout << "Enter length and width :" <<endl ;
//     cin >> l>> w ;
//     a = area_rect(l ,w) ;
//     cout << "area ::=" << a << endl ;
// }

// int area_rect (int l , int w ) {
//      int a ;
//      a  =  w * l    ;
//      return   (a);
// }

// wap in c++  fo find the simple interest  when the value in PTR is enter through the keyboard
// #include  <iostream>
// using namespace std ;

// void main ()  {
//     int p ,t ,r  , s   ;
//     cout << "Enter p , t and r ::" <<endl;
//     cin >> p  >> t >> r   ;
//     s   = simple_interest(p , t ,r) ;
//     cout << "simple interest =" << s << endl  ;
// }
// int simple_interest(int p , int t , int r ) {
//     int  s     ;
//     s  = p * t * r ;
//     return (s);
// }

// wap to find arean and perimeter of rectangle using function with no argument but return type
#include <iostream>
// using namespace std;
// int get_area();
// int get_perimeter();
// int main()
// {
//     int area = get_area();
//     cout << "area: " << area << endl;

//     int perimeter = get_perimeter();
//     cout << "perimeter: " << perimeter << endl;
//     return 0;
// }

// int get_area()
// {
//     int w, h;
//     int area;
//     cout << "Enter width and height: " << endl;
//     cin >> w >> h;
//     area = w * h;
//     return area;
// }

// int get_perimeter()
// {
//     int w, h;
//     int perimeter;
//     cout << "Enter width and height: " << endl;
//     cin >> w >> h;
//     perimeter = 2 * (w + h);
//     return perimeter;
// }

// find the simple interest using function with no argument but return typeR
#include <iostream> 
// using namespace std ;  
// int  get_interest() ; 
 
// int main (){
//     int  simple_interest = get_interest() ;  
//     cout <<"simple_interest"<<simple_interest <<endl ; 
//     return   0 ;

// }

// int get_interest() {
//     int p_amount ,rate , time  ;  
//     int simple_interest  ;  
//     cout<<"Enter p_amount rate and time" <<endl ;  
//     cin >> p_amount >> rate >> time ;  
//     simple_interest  = (p_amount * time * rate) /100  ;
//     return simple_interest ;   
// }




