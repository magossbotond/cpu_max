#include <iostream>

using namespace std;

int main(){
    while(true){
        char* d = new char[100*1024*1024];
        for(int i = 0; i <(100*1024*1024);i+=4096){
            d[i]='x';
        }
    }
    return 0;
}
