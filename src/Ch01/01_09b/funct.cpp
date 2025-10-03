#include <iostream>
#include <cstdio>

void greet(){
    printf("Hi There! ");
}
 int add(int x, int y){
    return x + y;
}

int main(){
    int result = add(22, 78);
    greet();
    std::cout << "The result of the addition is " << result << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}

