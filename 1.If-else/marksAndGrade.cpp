#include <iostream>
using namespace std;

void marksAndGrade(int marks)
{
    if (marks>=90)
    {
        cout<<"Excellent";
    }
    else if (marks >= 75 && marks <=90)
    {
       cout<<"Very good.";
    }
    else if (marks >= 60 && marks <=75)
    {
        cout<<"Good.";
    }
    else{
        cout<<"Below average.";
    }
    
    
    
    
}

int main()
{
    int marks;
    cout<<"Enter your marks ";
    cin>>marks;

    marksAndGrade(marks);
}