#include <iostream>
#include <thread>

void TaskA() {
    for (int i = 0; i < 10; i++) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "TaskA\n" << i << std::endl;
    }
}

void TaskB() {
    for (int i = 0; i < 10; i++) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "TaskB\n" << i << std::endl;
    }
}

int main() {
    std::thread t1(TaskA);
    std::thread t2(TaskB);

    t1.join();
    t2.join();

    return 0;
}
