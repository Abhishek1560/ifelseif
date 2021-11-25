#include <iostream>
using namespace std;

int main()  {
int Days;
cout<<"Enter value for Days:";
cin>>Days;
if(Days==1) {
cout<<"its Sunday";
}
else if(Days==2)  {
cout<<"its Monday";
}
else if(Days==3)  {
cout<<"its Tuesday";
}
else if(Days==4)  {
cout<<"its Wednesday";
}
else if(Days==5)  {
cout<<"its Thursday";
}
else if(Days==6)  {
cout<<"its Friday";
}
else if(Days==7)  {
cout<<"its Saturday";
}
else{
cout<<"You entered wrong input ";
}
return 0;
}
