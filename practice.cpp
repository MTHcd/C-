#include <iostream>
using namespace std;

// Arrays
int main() {
    int array[8];
    for(int x=0; x < 8 ; x++)
    cin >> array[x];
    for(int x=0; x < 8; x++)
    cout << array[x] << endl;
    return 0;
}

// Guessing Game

#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;
int main()
{
srand(time(NULL));    
int number=rand()%100; 
int guess=-1;
int trycount=0;
while(guess!=number && trycount<8)

{
cout<<"Please enter a guess: ";
cin>>guess;

if(guess<number)
cout<<"Too low"<<endl;

if(guess>number)
 cout<<"Too high"<<endl;

trycount++;
}
if(guess==number)
cout<<"You guessed the number";
else
cout<<"Sorry, the number was: "<<number;
return 0;
}


