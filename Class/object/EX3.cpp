#include<bits/stdc++.h>
using namespace std;
class Book{
    public:
    string title;
    string author;
    int year;
};
int main(){
    Book bookObj1;
    bookObj1.title = "Matilda, ";
    bookObj1.author = "Roald Dahl, ";
    bookObj1.year = 1988;

    Book bookObj2;
    bookObj2.title = "The Giving Tree, ";
    bookObj2.author = "Shel Silverstein, ";
    bookObj2.year = 1964;

    cout << bookObj1.title << bookObj1.author << bookObj1.year << "\n";
    cout << bookObj2.title << bookObj2.author << bookObj2.year;

    return 0;
    
}