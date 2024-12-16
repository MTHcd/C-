#include <iostream>
#include <string>
#include <typeinfo>

int main()
{
  // declaring types
  int var1 = 20;
  int var2 = 3;
  bool var5 = true;
  bool var6 = 1;
  bool var8 = 0;
  // branches
  if (var1 >= var2) {
          cout << "var1 is greater or equal than var2" << endl;
  } else {
          cout << "var1 is not greater or equal than var2" << endl;
  }
  // if the condition is true, it check in cascade case1, case2, case3 down to default;
  // CHECK again
  switch(1) 
    {
      case '1':
            break;
      case '2':
            break;
      case '3':
            break;
      default:
            court << "1 equivalents to true" << endl;
    }

  // use visualization to help you
  // get it: var1++ implies storing value into new memory and modifying value of var1 in "old
  // memory";
  // get it: --var1 implies decrementing by 1 the value storeed in var1 then assigning the 
  // associated value;
  int postincrement = var1++;
  int preincrement = ++var1;
  int postdecrement = var1--;
  int predecrement = --var1;

  double var3 = 39;
  float var4 = 2.4;
  
  return 1;

}
