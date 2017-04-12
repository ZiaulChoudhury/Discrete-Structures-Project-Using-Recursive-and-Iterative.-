//
//  main.cpp
//  fib_recursive
//  Build on MAC OS X El Capitan
//  Created by Ziaul Choudhury on 5/3/16.
//  Copyright © 2016 Ziaul Choudhury. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;



int fibonacci(int);

int main()
{
    double start_s=clock();
    
    double elements, first = 0;
    int sum=0,k=0;
    do {
        
        cout<< "Enter the how many nth elements you want the get of fibanacchi series: ";
        cin >> elements;
        if (elements<0) {
            cout<<"nth value has to be larger then 0. \n"
            <<"Enter again: ";
            cin>>elements;
        }
        
    } while (elements < 0);
    
    cout<< "Fibonacci series\n";
    
    for ( int i = 1 ; i <= elements ; i++ )
    {
        cout<< fibonacci(first)<<"\n";
        first++;
        bool prime=true;
        for (int j=2; j*j<=first;j++)
        {
            if (fibonacci(first) % j == 0)
            {
                prime=false;
                break;
            }
        }
        
        if(prime) {
            sum= k+1;
            k=sum;
            cout<< "Prime ---> ";
            
        }
        
        if (fibonacci(first) < 2000000 &&(fibonacci(first) > 1000000))
            cout<<"Smallest Fibonacci number greater than  has found: " <<(fibonacci(first))<<"\n";
        
        
        if (fibonacci(first) < 1836311903 && (fibonacci(first) > 1000000000))
            cout<<"Smallest Fibonacci number greater than 1,000,000,000 has found: " <<(fibonacci(first))<<"\n";
        
        
        
        
    }
    cout<< "\nThere are "<< sum <<" prime numbers out of "<<elements<<" elements. \n\n";
    
    double stop_s=clock();
    cout << "execution time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << " seconds"<< endl;
    system("pause");
    return 0;
}


int fibonacci(int n)
{
    if ( n == 0 )
        return 0;
    else if ( n == 1 )
        return 1;
    else
        return ( fibonacci(n-1) + fibonacci(n-2) );
}

