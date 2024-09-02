#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,p;
    int count = 0;

    for (int i = 0; i < 5; i++){ 
      cout<<"Hello World";
    }
    //This loop will run only 5 times
    // Total T.C = O(1)




    for (int i = 0; i < n; i = i*2){ 
      count++;
    }
    // Total T.C = O(log(n))



    for (int i = 0; i < n; i++){  //This loop will run n times
       cout<<"Hello world";
    }
    // Total T.C = O(n)



    for (int i = 0; i < n; i++){  //This loop will run n times
       cout<<"Hello world";
    }

    for (int i = 0; i < n; i++){  //This loop will run n times
       cout<<"Good Morning";
    }
    // Total T.C = O(n + n) => O(2n) => O(n)




    for (int i = 0; i < n; i++){  //This loop will run n times
       cout<<"Hello world";
    }

    for (int i = 0; i < m; i++){  //This loop will run m times
       cout<<"Good Morning";
    }
    // Total T.C = O(n + m)




    for (int i = 0; i < n; i=i*2) //This loop will run logn times
    {
        for(int i = 0; i < n; i = i++){ //This loop will run n times
              count++;
        }
    }
    // Total T.C = O(nlogn)




    for (int i = 0; i < n; i++){  //This loop will run n times
        for (int j = 0; j < n; j++){  //This loop will run n times
            count++;
        }
    }
    // Total T.C = O(n*n) => O(n^2)



    for (int i = 0; i < n; i++){  //This loop will run n times
        for (int j = 0; j < i; j++){  //This loop will run i times
            count++;
        }
    }
    // Total T.C = O(n*n) => O(n^2)




    for (int i = 0; i < n; i++){  //This loop will run n times
        for (int j = 0; j < m; j++){  //This loop will run m times
            count++;
        }
    }
    // Total T.C = O(n*m)



    for (int i = 0; i < n; i++){  //This loop will run n times
        for (int j = i; j < m; j++){  //This loop will run m times
            count++;
        }
    }
    // Total T.C = O(n*m)



    for (int i = 0; i < n; i++){          //This loop will run n times
        for (int j = i; j < m; j++){      //This loop will run m times
            for (int k = 0; k < p; k++){  //This loop will run p times
                count++; 
            }
        }
    }
    // Total T.C = O(n*m*p)







}