// ကိုယ်ရှာချင်တဲ့ ဂဏန်းက random number ထဲမှာ ဘယ်နှစ်ကြိမ်ပါလဲ၊ ဘယ်နေရာမှာပါတာလဲ
// ဆိုတာကို ရှာတဲ့ Program
// This program is finding how many times and in which place user wanted number
// from random number
// it works correctly, but sometimes it doesn't;
// ပြန်ပြင်ရေးရန် (၃ - ၁၁ - ၂၀၂၃)

#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#define RAN_NUM 20  // random number

int main()
{
    srand(time(NULL));
    int rand_num[RAN_NUM];   // random number container
    int to_find = 5;   // number wanted to find
    int count = 0;      // counting how many include
    int index[RAN_NUM];
    int rand_index = 0;
    printf("\n\t\t::::Random Number::::\n\n");
    for(int i = 0; i < RAN_NUM; i++) {
        rand_num[i] = rand() % 10;
        printf(" %d", rand_num[i]);
        if(rand_num[i] == to_find){
            count++;
            index[rand_index]= i;
            printf("(index: %d) ", index[rand_index]);
            rand_index++;
        }
    }
    if(count > 0) {
        printf("\n\nIn random number, ( %d ) contain %d - times\n", to_find, count);
        printf("and ( %d ) found at index: \n", to_find);
        for(rand_index = 0; index[rand_index] != '\0'; rand_index++){
            printf("[ %d ] ", index[rand_index]);
        }
        printf("\n");
    } else {
        printf("\n\nIn random number, %d is not include\n", to_find);
    }
    return EXIT_SUCCESS;
}

// Updated Version
// The following entire code successfully works.
// 7.11.2023(Thursday)

/*
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#define RAN_NUM 100

int main()
{
    int rand_data[RAN_NUM];
    int to_find = 15;
    int count = 0;
    int arr_index[RAN_NUM];
    int index = 0;

    srand(time(NULL));

    printf("\n\nPrinting Random Number.\n\n");
    for(int i = 0; i < RAN_NUM; i++) {
        rand_data[i] = rand() % 100;
        printf("\t\tindex %d: %d\n", i, rand_data[i]);
        if(rand_data[i] == to_find) {
            arr_index[index] = i;
            index++;
            count++;
        }
    }
    if(count > 0) {
        printf("\nfinding number: ( %d ) is found ( %d ) times - \n", to_find, count);
        for(int j = 0; j < index; j++) {
            printf("\t\tat index [ %d ]\n", arr_index[j]);
        }
    } else {
        printf("finding number: ( %d ) is not found.\n", to_find);
    }
    return EXIT_SUCCESS;
}
 */