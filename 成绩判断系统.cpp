#include <iostream> 
using namespace std; 
int main(){ 
//请输入成绩 
//10-9 优秀 
//8-7 良好 
//6-5 及格 
//5 分以下烂分 
int score = 0; 
cout<<"请输入成绩"<<endl; 
cin>>score; 
switch (score) 
{ 
case 10: 
case 9: 
 cout<<"优秀"<<endl; 
 break; 
case 8: 
 cout<<"良好"<<endl; 
 break; 
case 7: 
case 6: 
 cout<<"及格"<<endl; 
 break; 
default: 
 cout<<"烂分"<<endl; 
 break; 
} 
system("pause"); 
return 0; 
}