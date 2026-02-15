#include <iostream>
#include <thread>
#include <vector>

using namespace std;

    void cpu(){
        double d = 0;
        while(true){
            d++;
        }
    }

int main()
{
    int n = thread::hardware_concurrency();
    vector<thread> szalak;
    for(int i = 0; i < n ; i++){
        szalak.emplace_back(cpu);
    }
    for(auto& szal: szalak){
        szal.join();
    }
    return 0;
}

