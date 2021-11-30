#include <iostream> 
#include <queue> 
  
using namespace std; 
  
int main () 
{ 
    priority_queue <int> gquiz; 
    gquiz.push(10); 
    gquiz.push(30); 
    gquiz.push(20); 
    gquiz.push(5); 
    gquiz.push(1); 
  
  	while (!gquiz.empty()) 
    { 
        cout << gquiz.top() << " "; 
        gquiz.pop(); 
    } 
  
    return 0; 
}
