#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;


string itc_cmp_str(string str1, string str2, int num){ // 11
string q = "";
string b;
long long (c = itc_len(str1); g = itc_len(str2); a)
for(a = 0; a < num; a++){
q += str1[a];
}
for(a = 0; a < g; a++){
q += str2[a];
}
for(a = num; a < c; a++){
q += str1[a];
}
for(a = 0; a < c; a++){
b += q[a];
}
return b;
} // end



int itc_find_str (string s1, string s2){ // 12
int i, l;
string o;
i = 0;
l = 0;
for (i = 0; s1[i] != '\0'; i++){
if (s1[i] == s2[l]){
o = o + s1[i];
l++;
}
else{
o = "\0";
l = 0;
}
if (o == s2)
return i - (l - 1);
}
return -1;
} // end


string itc_three_str (string s1, string s2, string s3){ // 13
string sp, sv;
int l, i;
l = 0;
sp = "\0";
for (i = 0; s1[i] != '\0'; i++){
if (s1[i] == s2[l]){
sp = sp + s1[i];
l++;
if (sp == s2){
sv = sv + s3;
sp = "\0";
}
}
else{
sv = sv + s1[i];
l = 0;
sp = "\0";
}
}
return sv;
} // end


int itc_max_char_on_end(string str){ // 14
long long lenght = itc_len(str);
int x = 0;
int xmax = 0;
for (int i = 0; i < lenght; i++){
if (str[i] >= 48 && str[i] <= 57){
x++;
}
else{
x = 0;
}
if (x > xmax){
xmax = x;
}
}
return xmax;
}
