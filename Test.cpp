//Day of which you were born assignment
#include<iostream>
#include<string>
//y is for the Year
//dom is for the DayofMonth
//m is for the month
//Armando is for the number that's being added

using namespace std;
void Getinput(int& Year, int& DayofMonth, string& Month);
void compare(string& Month, int& newr,int& DayofMonth,int& P);
void year(int& Year, int& k);
void Add(int& k);
void LeapYears(int& Year, int& k,int review);
void Remainder(int& k);

int main(){
 int y, dom,Armando,review;
 string m=" ";
 Getinput(y,dom, m);
 compare(m,Armando,dom,review);
 year(y, Armando);
 Add(Armando);
 LeapYears(y,Armando,review);
 Remainder(Armando);
  return 0;
}

void Getinput(int& Year,int& DayofMonth, string& Month){
  cout<<"What year were you born?: ";
  cin>>Year;
  cout<<"What Day of the Month where you born?(1-31)"<<endl;
  cin>>DayofMonth;
  cout<<"What month were you born?"<<endl;
  cin>>Month;
}

void compare(string& Month, int &newr, int& DayofMonth,int &P){
   if (Month == "January" || Month == "October"){
   newr=6;
    }
   else if(Month == "February" || Month == "March" || Month == "November"){
   newr=2;
  }
  else if(Month == "April" || Month == "July"){
   newr=5;
 }
  else if(Month == "May"){
   newr=0;
 }
 else if(Month== "June"){
   newr=3;
 }
 else if(Month == "August"){
   newr=1;
 }
 else if(Month=="December" || Month == "September"){
   newr=4;
 }
  newr=newr+DayofMonth;
  P=newr;
}

void year(int& Year, int& k){
  if (Year == 1900 || Year == 1901 || Year == 1902 || Year == 1903 || Year == 1904 || Year== 1905 || Year == 1906 || Year == 1907 || Year == 1908 || Year == 1909) {
    k=k+1;
  }
  if (Year == 1910 || Year == 1911 || Year == 1912 || Year == 1913 || Year == 1914 || Year== 1915 || Year == 1916 || Year == 1917 || Year == 1918 || Year == 1919) {
    k=k+6;
  }
  if (Year == 1920 || Year == 1921 || Year == 1922 || Year == 1923 || Year == 1924 || Year== 1925 || Year == 1926 || Year == 1927 || Year == 1928 || Year == 1929) {
    k=k+5;
  }
  if (Year == 1930 || Year == 1931 || Year == 1932 || Year == 1933 || Year == 1934 || Year== 1935 || Year == 1936 || Year == 1937 || Year == 1938 || Year == 1939) {
    k=k+3;
  }
  if (Year == 1940 || Year == 1941 || Year == 1942 || Year == 1943 || Year == 1944 || Year== 1945 || Year == 1946 || Year == 1947 || Year == 1948 || Year == 1949) {
  k=k+2;
  }
  if (Year == 1950 || Year == 1951 || Year == 1952 || Year == 1953 || Year == 1954 || Year== 1955 || Year == 1956 || Year == 1957 || Year == 1958 || Year == 1959) {
  k=k+0;
  }
  if (Year == 1960 || Year == 1961 || Year == 1962 || Year == 1963 || Year == 1964 || Year== 1965 || Year == 1966 || Year == 1967 || Year == 1968 || Year == 1969) {
    k=k+6;
  }
  if (Year == 1970 || Year == 1971 || Year == 1972 || Year == 1973 || Year == 1974 || Year== 1975 || Year == 1976 || Year == 1977 || Year == 1978 || Year == 1979) {
    k=k+4;
  }
  if (Year == 1980 || Year == 1981 || Year == 1982 || Year == 1983 || Year == 1984 || Year== 1985 || Year == 1986 || Year == 1987 || Year == 1988 || Year == 1989) {
    k=k+3;
  }
  if (Year == 1990 || Year == 1991 || Year == 1992 || Year == 1993 || Year == 1994 || Year== 1995 || Year == 1996 || Year == 1997 || Year == 1998 || Year == 1999) {
  k=k+1;
  }
  if (Year == 2000 || Year == 2001 || Year == 2002 || Year ==2003 || Year == 2004 || Year== 2005 || Year == 2006 || Year == 2007 || Year == 2008 || Year == 2009) {
    k=k+0;
  }
  if (Year == 2010 || Year == 2011 || Year == 2012 || Year == 2013 || Year == 2014 || Year== 2015 || Year == 2016 || Year == 2017 || Year == 2018 || Year == 2019 || Year == 2020) {
    k=k+5;
  }
  else{
    k=k;
  }
}

void Add(int& k){
  k=k+2;
}

void LeapYears(int& Year, int& k,int review){
if (k-2 == review) {
  if (Year%4 == 0 || Year%8 == 0) {
    k=k+0;
  }else{
    k=k+0;
  }
}
if (k-3 == review) {
  if (Year% 4 == 0 || Year% 8 == 0) {
    k=k+0;
  }else{
    k=k+0;
  }
}
if (k-4 == review) {
  if (Year%4 == 0 || Year% 8 == 0) {
    k=k+0;
  }else{
    k=k+1;
  }
}
if (k-5 == review) {
  if (Year%4 ==0 || Year% 8 == 0) {
    k=k+0;
  }else{
    k=k+1;
  }
}
if (k-6 == review) {
  if (Year%4 == 0 || Year % 8 == 0) {
    k=k+1;
  }else{
    k=k+1;
  }
}
if (k-7 == review) {
  if (Year%4 == 0 || Year % 8 == 0) {
    k=k+1;
  }else{
    k=k+1;
  }
}
if (k-8 == review) {
  if (Year %4 == 0 || Year % 8 == 0) {
    k=k+1;
  }else{
    k=k+2;
  }
}
}

void Remainder(int& k){
  if(k%7 == 0){
   cout<<"You were born on a Sunday!"<<endl;
  }
  if(k%7 == 1){
   cout<<"You were born on a Monday!"<<endl;
  }
  if(k%7 == 2){
   cout<<"You were born on a Tuesday!"<<endl;
  }
  if(k%7 == 3){
   cout<<"You were born on a Wednesday!"<<endl;
  }
  if(k%7 == 4){
   cout<<"You were born on a Thursday!"<<endl;
  }
  if(k%7 == 5){
   cout<<"You were born on a Friday!"<<endl;
  }
  if(k%7 == 6){
   cout<<"You were born on a Saturday!"<<endl;
  }
}
