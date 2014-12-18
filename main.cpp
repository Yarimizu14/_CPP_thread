#include <future>

int main() {
    // thread
    auto th = std::thread([=]{
            for (int i=0; i < 100; i++)
            {
                // mainと並列に実行される
                printf("thread : %d \n", i);
            }
    });

    // main
    for (int j=0; j < 100; j++)
    {
        printf("main : %d \n", j);
    }

    th.join();

    // after
    for (int k=0; k < 100; k++)
    {
        printf("after : %d \n", k);
    }

    return 0;
}
