#include <iostream>
using namespace std;

 
 
#define MAX 100
void 
Nhapmang (int a[], int n) 
{
  
 
 
for (int i = 0; i < n; ++i)
    
 
 
cin >> a[i];

 
 
} 
 
int 



isBenford (int a[], int n) 
{
  
 
 
int b = 0, c = 0;
  
 
 
for (int i = 0; i < n; ++i)
    
 
 
    {
      
 
 
int d = a[i];
      
 
 
while (d >= 10)
	
 
 
	{
	  
 
 
d = d / 10;
	
 
 
}
      
 
 
if (d == 1)
	
 
 
++b;
      
 
 
if (d == 4)
	
 
 
++c;
    
 
 
}
  
 
 
if (b >= 3 && c >= 1)
    
return 1;
  
return 0;

}


 
int
main () 
{
  
int a[MAX], n = 10;
  
Nhapmang (a, n);
  
if (isBenford (a, n) == true)
    
cout << "TRUE" << endl;
  
  else
    
cout << "FALSE" << endl;
  
return 0;

}


 
 
 
 
