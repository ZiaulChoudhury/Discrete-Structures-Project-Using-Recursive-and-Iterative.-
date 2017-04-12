
//  fib_iterative.
//  Build on MAC OS X El Capitan by using X-Code.
//  Created by Ziaul Choudhury on 5/3/16.
//  Copyright © 2016 Ziaul Choudhury. All rights reserved.
//

#include <iostream>
#include <ctime>
using namespace std;

void fibonacci(){
    unsigned long long first = 0, second = 1, elements=0;
    do {
        
        cout<< "Enter the how many nth elements you want the get of fibanacchi series: ";
        cin >> elements;
        if (elements < 0) {
            cout<<"nth value has to be larger then 0. \n"
            <<"Enter again: ";
            cin>>elements;
        }
        
    } while (elements <= 0);
    
    
    int sum=0,k=0;
    for (int i = 1; i<=elements; i++) {
       
        cout << first << "\n";
        
        unsigned long long temp =(first+second);
        first=second;
        second=temp;
        
        if ((first < 2000000)&&(first > 1000000))
            cout<<"Smallest Fibonacci number greater than  has found: " <<first<<"\n";
        
        if ((first < 1836311903)&&(first > 1000000000))
            cout<<"Smallest Fibonacci number greater than 1,000,000,000 has found: " <<first<<"\n";                            bool prime=true;
                    for (int j=2; j*j<=first;j++)
                    {
                        if (first % j == 0)
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

    }
       cout<< "\nThere are "<< sum <<" prime numbers out of "<<elements<<" elements. \n\n";
    
}

int main() {

    double start_s=clock();
    fibonacci();
    double stop_s=clock();
    cout << "Execution time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << " seconds. \n"<< endl;
    
    system("pause");
    return 0;
}
