#include <cstdlib>
#include <stdio.h>
#include <time.h>
using namespace std;

int main(int argc, char** argv) {
    int PlayerVallue;
        while(1) {
            printf ("Введите Ваше число\n");
                scanf("%d",&PlayerVallue);
                    srand(time(NULL));
                        int AiVallue = rand() % 10 +1;
                        printf ("%d \n", AiVallue);