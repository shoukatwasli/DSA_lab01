// ***1: Pointer declaration and intialization with user input.***
//#include <iostream>
//int main() {
//    int a;
//    int *ptr;     
//    std::cout << "Enter an integer: ";
//    std::cin >> a; 
//    ptr = &a; 
//    std::cout << " Value you entered is: " << *ptr << std::endl;
//    return 0;
//}
//Output
//
//
//
// 
//***02: Add two numbers.***
//#include <iostream>
//int main() {
//    int num1, num2; 
//    int *ptr;       
//    std::cout << "Enter the first integer: ";
//    std::cin >> num1;
//    std::cout << "Enter the second integer: ";
//    std::cin >> num2;
//    ptr = &num1; 
//    *ptr += num2;
//	std::cout << "The sum of " << num1 << " and " << num2 << " is: " << *ptr << std::endl; 
//	return 0;
//}
//
//Output
//
//
// 
//
//***03: Pointer Aritmatic.***
//#include <iostream>
//int main() {
//    int numbers[] = {10, 20, 30, 40, 50};
//    int *ptr = numbers;
//    for (int i = 0; i < 5; i++) {
//        std::cout << " A " << i << ": " << *ptr << std::endl;
//        ptr++; 
//    }
// return 0;
//}
//Output:
// 
// 
// 
//
//04: Accessing the value.
//#include <iostream>
//int main() {
//    int number=10000;
//    int *ptr=&number; 
//    int value=*ptr;
//    std::cout << "Value of 'number': " << value << std::endl;
//    return 0;
//}
//Output:
//
//
//
//05: Function Pointer.
//#include <iostream>
//
//int add(int a, int b) {
//    return a + b;
//}
//
//int subtract(int a, int b) {
//    return a - b;
//}
//
//int main() {
//    int (*operation)(int, int); 
//
//    operation = add;
//    std::cout << "Addition: " << operation(5, 3) << std::endl;
//
//    operation = subtract;
//    std::cout << "Subtraction: " << operation(5, 3) << std::endl;
//
//    return 0;
//}
//Output: 
//
//
//
//06: Pointer to pointer.
//#include <iostream>
//int main() {
//    int number = 12;
//    int *ptr1 = &number;
//    int **ptr2 = &ptr1;
//    std::cout << "Value of number: " << **ptr2 << std::endl;
//    return 0;
//}
//Output:
// 
//
//
//
//07: Array of pointer.
//#include <iostream>
//int main() {
//    int a = 5, b = 10, c = 15;
//    int *ptrArr[3] = {&a, &b, &c};
//    for (int i = 0; i < 3; i++) {
//        std::cout << "Value at index " << i << ": " << *ptrArr[i] << std::endl;}
//    return 0;
//}
//Output:
// 
//
//
//
//08: Pointer using Array.
//#include <iostream>
//using namespace std;
//int main()
//{
//    float arr[3];
//    float *ptr;
//    cout << "Displaying address using arrays: " << endl;
//    for (int i = 0; i < 3; ++i)
//    {
//        cout << "&arr[" << i << "] = " << &arr[i] << endl;
//    }
//    ptr = arr;
//    cout<<"\nDisplaying address using pointers: "<< endl;
//	for (int i = 0; i < 3; ++i)
//    {
//        cout << "ptr + " << i << " = "<< ptr + i << endl;
//    }
//    return 0;
//}
//Output:
// 
//
//
//09:
//#include <iostream>
//int main() {
//     char *message = "Hello, World!";
//    std::cout << "Message: " << message << std::endl;
//    return 0;
//}
//Output:
// 
//
//
//10: Pointer to Object.
//#include <iostream>
//class MyClass {
//public:
//    int data;
//    MyClass(int val) : data(val) {}
//};
//int main() {
//    MyClass obj(42);
//    MyClass *ptr = &obj;
//
//    std::cout << "Value of data: " << ptr->data << std::endl;
//    return 0;
//}
//Output:
// 
//
//11: Pointer to constant data.
//#include <iostream>
//int main() {
//    const int a = 2;
//    const int *ptr = &a;
//
//    std::cout << "Value pointed to by ptr: " << *ptr << std::endl;
//    return 0;
//}
//Output:
// 
//
//
//12: Pointer to constant pointer.
//#include <iostream>
//int main() {
//    int x = 10;
//    int *const ptr = &x;
//    std::cout << "Value pointed to by ptr: " << *ptr << std::endl;
//    return 0;
//}
//Output:
// 
//
//
//13: Pointer to with different function.
//#include <iostream>
//int add(int a, int b) {
//    return a + b;
//}
//
//int subtract(int a, int b) {
//    return a - b;
//}
//
//int main() {
//    int (*ptr)(int, int);
//    ptr = &add;
//    std::cout << "Result of addition: " << (*ptr)(4, 5) << std::endl;
//    ptr = &subtract;
//    std::cout << "Result of subtraction: " << (*ptr)(9, 3) << std::endl;
//    return 0;
//}
//Output:
// 
// 
// 
//
//14:Multiply pointer.
//#include <iostream>
//
//int main() {
//    int num1 = 5;
//    int num2 = 7;
//    int result = 0;
//    int *ptr1 = &num1;
//    int *ptr2 = &num2; 
//    result = (*ptr1) * (*ptr2);
//    std::cout << "Multiplication result: " << result << std::endl;
//    return 0;
//}
//Output: 
//
//
//
//15: Divide function.
//#include <iostream>
//
//int main() {
//    int num1 = 15;
//    int num2 = 7;
//    int result = 0;
//    int *ptr1 = &num1;
//    int *ptr2 = &num2; 
//    result = (*ptr1) / (*ptr2);
//    std::cout << "Divide result: " << result << std::endl;
//    return 0;
//}

