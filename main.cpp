#include <iostream>
#include <string>
#include <chrono>
#include <ctime>

std::string prime(int input){
    if (input == 1){return "not prime";}
    else if (input == 2){return "prime";}
    else{
        for (int i = 2; i < input; i++){
            if (input % i == 0){return "not prime";}
        }   
        return "prime";
    }
}
int main(int argc, char const *argv[])
{
    auto start = std::chrono::system_clock::now();
    for (int i = 0; i <= 1000000; i++)
    {
        std::cout << i << " is a " << prime(i) << "\n";
    }
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end-start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << "finished computation at " << std::ctime(&end_time)
              << "elapsed time: " << elapsed_seconds.count() << "s"
              << std::endl;
    system("pause");
    return 0;
}
