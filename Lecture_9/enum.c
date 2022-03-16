#include<stdio.h> 
//values will auto increment from 0 if not defined 
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun}; 
 
//names must be unique values can be defined and do NOT have to be unique 
enum status { run, clear=5, suspend, resume, hold=6 }; 
 
int main() 
{ 
 enum week day; 
 enum status stat; 
 day = Wed; 
 printf("%d\n",day); 
 stat = run; 
 printf("%d\n",stat); 
 stat = clear; 
 printf("%d\n",stat); 
 stat = suspend; 
 printf("%d\n",stat); 
 stat = resume; 
 printf("%d\n",stat); 
 stat = hold; 
 printf("%d\n",stat); 
 return 0; 
} 
