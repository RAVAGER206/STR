#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;

string itc_even_place(string n){
string l, m;
m = "-1";
for (int i = 0; n[i] != '\0'; i++)
if (n[i] % 2 == 0)
l = l + n[i];
if (itc_len(l) == 0)
return m;
return l;
}


double itc_percent_lower_uppercase(string n){
double s, l;
s = 0;
l = 0;
for (int i = 0; n[i] != '\0'; i++){
if (n[i] >= 65 && n[i] <= 90){
s = s + 1;
}
if (n[i] >= 97 && n[i] <= 119){
l = l + 1;
}
}
if (s > l)
return (l/s)*100;
return (s/l)*100;
}


string itc_reverse_str(string n){
string l;
int len;
len = itc_len(n);
for (int i = len-1; i != 0; i--)
l = l + n[i];
l = l + n[0];
return l;
}


string itc_slice_str(string n, int z, int v){
string m;
int i;
if (z < v){
while (i != z)
i = i + 1;
for (i; i <= v; i++)
m = m + n[i];
}
else
m = "0";
return m;
}


bool itc_equal_reverse(string n){
string l;
l = itc_reverse_str(n);
if (l == n)
return 1;
return 0;
}
