#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[20]; cin >> s;
    int d = strlen(s);
    string e[] = { "one", "two", "three" ,"four", "five", "six", "seven", "eight", "nine", "zero"};
    string q[] = {  "twenty", "thirty" , "forty" , "fifty" , "sixty" , "seventy" , "eighty" , "ninety" };
   if(d == 1)
   {
 
 
    if(s[0] == '1') cout << e[0] << '\n';
     if(s[0] == '2') cout << e[1] << '\n';
      if(s[0] == '3') cout << e[2] << '\n';
       if(s[0] == '4') cout << e[3] << '\n';
        if(s[0] == '5') cout << e[4] << '\n';
         if(s[0] == '6') cout << e[5] << '\n';
          if(s[0] == '7') cout << e[6] << '\n';
           if(s[0] == '8') cout << e[7] << '\n';
            if(s[0] == '9') cout << e[8] << '\n';
             if(s[0] == '0') cout << e[9] << '\n';
   }
   if(d == 2)
   {
       if(s[0] == '1')
       {
           if(s[1] == '0') cout << "ten\n";
           if(s[1] == '1') cout << "eleven\n";
           if(s[1] == '2') cout << "twelve\n";
            if(s[1] == '3') cout << "thirteen\n";
             if(s[1] == '4') cout << "fourteen\n";
              if(s[1] == '5') cout << "fifteen\n";
               if(s[1] == '6') cout << "sixteen\n";
               if(s[1] == '7') cout << "seventeen\n";
                if(s[1] == '8') cout << "eighteen\n";
                 if(s[1] == '9') cout << "nineteen\n";
 
       }
       if(s[0] == '2')
       {
           if(s[1] == '0') cout << q[0] << '\n';
           if(s[1] == '1') cout << q[0] << "-" << e[0] << '\n';
           if(s[1] == '2') cout << q[0] << "-" << e[1] << '\n';
           if(s[1] == '3') cout << q[0] << "-" << e[2] << '\n';
           if(s[1] == '4') cout << q[0] << "-" << e[3] << '\n';
           if(s[1] == '5') cout << q[0] << "-" << e[4] << '\n';
           if(s[1] == '6') cout << q[0] << "-" << e[5] << '\n';
           if(s[1] == '7') cout << q[0] << "-" << e[6] << '\n';
           if(s[1] == '8') cout << q[0] << "-" << e[7] << '\n';
           if(s[1] == '9') cout << q[0] << "-" << e[8] << '\n';
 
 
       }
        if(s[0] == '3')
       {
           if(s[1] == '0') cout << q[1] << '\n';
           if(s[1] == '1') cout << q[1] << "-" << e[0] << '\n';
           if(s[1] == '2') cout << q[1] << "-" << e[1] << '\n';
           if(s[1] == '3') cout << q[1] << "-" << e[2] << '\n';
           if(s[1] == '4') cout << q[1] << "-" << e[3] << '\n';
           if(s[1] == '5') cout << q[1] << "-" << e[4] << '\n';
           if(s[1] == '6') cout << q[1] << "-" << e[5] << '\n';
           if(s[1] == '7') cout << q[1] << "-" << e[6] << '\n';
           if(s[1] == '8') cout << q[1] << "-" << e[7] << '\n';
           if(s[1] == '9') cout << q[1] << "-" << e[8] << '\n';
 
 
       }
        if(s[0] == '4')
       {
           if(s[1] == '0') cout << q[2] << '\n';
           if(s[1] == '1') cout << q[2] << "-" << e[0] << '\n';
           if(s[1] == '2') cout << q[2] << "-" << e[1] << '\n';
           if(s[1] == '3') cout << q[2] << "-" << e[2] << '\n';
           if(s[1] == '4') cout << q[2] << "-" << e[3] << '\n';
           if(s[1] == '5') cout << q[2] << "-" << e[4] << '\n';
           if(s[1] == '6') cout << q[2] << "-" << e[5] << '\n';
           if(s[1] == '7') cout << q[2] << "-" << e[6] << '\n';
           if(s[1] == '8') cout << q[2] << "-" << e[7] << '\n';
           if(s[1] == '9') cout << q[2] << "-" << e[8] << '\n';
 
 
       }
       if(s[0] == '5')
       {
           if(s[1] == '0') cout << q[3] << '\n';
           if(s[1] == '1') cout << q[3] << "-" << e[0] << '\n';
           if(s[1] == '2') cout << q[3] << "-" << e[1] << '\n';
           if(s[1] == '3') cout << q[3] << "-" << e[2] << '\n';
           if(s[1] == '4') cout << q[3] << "-" << e[3] << '\n';
           if(s[1] == '5') cout << q[3] << "-" << e[4] << '\n';
           if(s[1] == '6') cout << q[3] << "-" << e[5] << '\n';
           if(s[1] == '7') cout << q[3] << "-" << e[6] << '\n';
           if(s[1] == '8') cout << q[3] << "-" << e[7] << '\n';
           if(s[1] == '9') cout << q[3] << "-" << e[8] << '\n';
 
 
       }
        if(s[0] == '6')
       {
           if(s[1] == '0') cout << q[4] << '\n';
           if(s[1] == '1') cout << q[4] << "-" << e[0] << '\n';
           if(s[1] == '2') cout << q[4] << "-" << e[1] << '\n';
           if(s[1] == '3') cout << q[4] << "-" << e[2] << '\n';
           if(s[1] == '4') cout << q[4] << "-" << e[3] << '\n';
           if(s[1] == '5') cout << q[4] << "-" << e[4] << '\n';
           if(s[1] == '6') cout << q[4] << "-" << e[5] << '\n';
           if(s[1] == '7') cout << q[4] << "-" << e[6] << '\n';
           if(s[1] == '8') cout << q[4] << "-" << e[7] << '\n';
           if(s[1] == '9') cout << q[4] << "-" << e[8] << '\n';
 
 
       }
       if(s[0] == '7')
       {
           if(s[1] == '0') cout << q[5] << '\n';
           if(s[1] == '1') cout << q[5] << "-" << e[0] << '\n';
           if(s[1] == '2') cout << q[5] << "-" << e[1] << '\n';
           if(s[1] == '3') cout << q[5] << "-" << e[2] << '\n';
           if(s[1] == '4') cout << q[5] << "-" << e[3] << '\n';
           if(s[1] == '5') cout << q[5] << "-" << e[4] << '\n';
           if(s[1] == '6') cout << q[5] << "-" << e[5] << '\n';
           if(s[1] == '7') cout << q[5] << "-" << e[6] << '\n';
           if(s[1] == '8') cout << q[5] << "-" << e[7] << '\n';
           if(s[1] == '9') cout << q[5] << "-" << e[8] << '\n';
 
 
       }
       if(s[0] == '8')
       {
           if(s[1] == '0') cout << q[6] << '\n';
           if(s[1] == '1') cout << q[6] << "-" << e[0] << '\n';
           if(s[1] == '2') cout << q[6] << "-" << e[1] << '\n';
           if(s[1] == '3') cout << q[6] << "-" << e[2] << '\n';
           if(s[1] == '4') cout << q[6] << "-" << e[3] << '\n';
           if(s[1] == '5') cout << q[6] << "-" << e[4] << '\n';
           if(s[1] == '6') cout << q[6] << "-" << e[5] << '\n';
           if(s[1] == '7') cout << q[6] << "-" << e[6] << '\n';
           if(s[1] == '8') cout << q[6] << "-" << e[7] << '\n';
           if(s[1] == '9') cout << q[6] << "-" << e[8] << '\n';
 
 
       }
       if(s[0] == '9')
       {
           if(s[1] == '0') cout << q[7] << '\n';
           if(s[1] == '1') cout << q[7] << "-" << e[0] << '\n';
           if(s[1] == '2') cout << q[7] << "-" << e[1] << '\n';
           if(s[1] == '3') cout << q[7] << "-" << e[2] << '\n';
           if(s[1] == '4') cout << q[7] << "-" << e[3] << '\n';
           if(s[1] == '5') cout << q[7] << "-" << e[4] << '\n';
           if(s[1] == '6') cout << q[7] << "-" << e[5] << '\n';
           if(s[1] == '7') cout << q[7] << "-" << e[6] << '\n';
           if(s[1] == '8') cout << q[7] << "-" << e[7] << '\n';
           if(s[1] == '9') cout << q[7] << "-" << e[8] << '\n';
 
       }
   }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}