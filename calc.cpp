#include <iostream> 



double firstNum;
double secNum;
int operation;
double result;
int again = 0;


int main(){


do{

 std::cout << "Enter first number: "; 
 std::cin >> firstNum; 
 std::cout << "Enter second number: "; 
 std::cin >> secNum; 
 
do{

std::cout << "1. Addition" << '\n' ;
std::cout << "2. Subtraction" << '\n' ;
std::cout << "3. Multiplication" << '\n' ;
std::cout << "4. Division" << '\n' ;
std::cout << "Choose Operation" << '\n' ; 
std::cin >> operation; 

if(operation == 1){
 result = firstNum + secNum;
 std::cout << "Sum: ";
 std::cout << result << '\n';
}
else if(operation == 2) {
result = firstNum - secNum;
std::cout << "Difference: ";
std::cout << result << '\n';
}
else if(operation == 3) {
result = firstNum * secNum;
std::cout << "Product: ";
std::cout << result << '\n';
}
else if(operation == 4) {
result = firstNum / secNum;
std::cout << "Quotient: ";
std::cout << result << '\n';
}
else{
std::cout << "You did not select an operation" << '\n'; 
}



}while(operation==0 || operation > 4);

std::cout << "1. Calculate Again" << '\n';
std::cout << "2. Exit " << '\n';
std::cout << "Enter option:" << '\n';
std::cin >> again;

}while(again==1);









}