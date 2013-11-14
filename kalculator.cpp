#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    
    double a, b;
    char raknesatt;
    cout<< "ange vad som ska ber�knas: "<<endl; 
    cin>> a >> raknesatt>> b;
    switch (raknesatt)
    {
            case '-'
               cout<< "svar:" <<a+b;
               break;
            case '-': 
               cout<< "svar:" <<a-b;
               break;
            case '*': 
               cout<< "svar:" <<a*b;
               break;
             case '/': 
             cout<< "svar:" <<a/b;
             break;
             default: 
             cout<< "felinmatning";
             
   }

    
    system("PAUSE");
    return EXIT_SUCCESS;
}
