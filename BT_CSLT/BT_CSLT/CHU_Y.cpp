 //Cấu trúc SWITCH

/*
switch(expression)
{
case value_1:
statements;
break;
case value_2:
statements;
break;
...
case value_n:
statements;
break;
[default:
statements;]
}
*/


// Cấu trúc WHILE 
/*
while (condition)
statement;
*/
// WHILE thì nhập giá trị đầu


// Cấu trúc DO_WHILE
/*
do{
statement;
} while (condition);
*/


// Cấu trúc FOR
/*
for (initialization; condition; update)
statement;
*/
// FOR thì nhập giá trị cuối


// Hàm có sẵn trong thư viện (predefined function)
// Để sử dụng các hàm có sẵn trong thư viện, phải thêm header file
// vào đầu chương trình :
#include <iostream> // (các hàm về nhập / xuất)
#include <iomanip> // (các hàm về định dạng nhập / xuất)
#include <cmath> // (các hàm về toán)
#include <cctype> // (các hàm về ký tự)
#include <ctime> // (các hàm về ngày, giờ)
#include <string> // (các hàm về chuỗi)

 
// Cú pháp của HÀM
/*
returnDataType functionName ([parameterList])
{
statements;
[return expression;]
}
*/


// Chuyển đổi kiểu tường minh
// static_cast<type>(expression) //expression: biểu thức 
// type: kiểu dữ liệu 
// vd static_cast<int>(7.9) => 7 
// vd static_cast<double>(25) => 25.0