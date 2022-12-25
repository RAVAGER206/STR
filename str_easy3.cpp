#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;


string itc_cmp_str(string n, string m, int u){ // 11
string o;
int i, l, d;
d = itc_len(n);
if (m[0] == '\0')
return n;
for (i = 0; i < u; i++)
o = o + n[i];
for (l = 0; m[l] != '\0'; l++)
if (i < d){
o = o + m[l];
i++;
}
if (i <= d)
for (i; n[i] !='\0'; i++)
o = o + n[i];
return o;
} // end


int itc_find_str(string s1, string s2){ // 12
int i, l, k;
string o;
i = 0;
l = 0;
k = 0;
for (i = 0; s1[i] != '\0'; i++){
if (s1[i] == s2[l]){
o = o + s1[i];
l++;
}
if (o == s2)
return i - (k - 1);
}
return -1;
} // end


string itc_three_str(string s1, string s2, string s3){ // 13
string sp, sv;
int l;
l = 0;
for (int i = 0; s1[i] != '\0'; i++){
if (s1[i] == s2[l]){
sp = sp + s1[i];
l++;
if (sp == s2)
sv = sv + s3;
}
else{
sv = sv + s1[i - l];
l = 0;
i = i - (l - 1);
}
}
return sv;
} // end
