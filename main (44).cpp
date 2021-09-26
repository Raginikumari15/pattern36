/*12344321
 123**321
 12****21
 1******1*/
#include <iostream>
using namespace std;
int main() {
int i = 4, j;
while(i >= 1) {
j = 1;
while(j <= 4) {
if(j <= i) {
cout << j;
}
else {
cout << "*";
}
j = j + 1;
}
while(j >= 1) {
if(j <= i) {
cout << j;
}
else {
cout << "*";
}
j = j - 1;
}
i = i - 1;
cout << endl;
}
}