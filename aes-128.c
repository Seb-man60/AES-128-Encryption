#include <stdio.h>

#include "aes-128.h"

void dump_state(uint8_t state []){
    for(int i = 0 ; i < 16 ; i++){
        printf("%02X ", state[i]);
    }
    printf("\n");
}

//Tag ShiftRow
void ShiftRows(uint8_t state []){
    uint8_t *s = (uint8_t *)state;

    for(int i = 1 ; i < STATE_ROW_SIZE ; i++){
        for(int r = 0 ; r < i ; r++){
            uint8_t temporary = s[i * 4];
            for(int j = 0 ; j < STATE_ROW_SIZE ; j++){
                s[i * 4 + j] = s[i * 4 + (j + 1)];
            }
            s[i * 4 + (STATE_ROW_SIZE - 1)] = temporary;
        }
    }
}

int main(){
    uint8_t input[] = {
        0x63, 0xEB, 0x9F, 0xA0,
        0xC0, 0x2F, 0x93, 0x92,
        0xAB, 0x30, 0xAF, 0xC7,
        0x20, 0xCB, 0x2B, 0xA2
    };

    printf("Start    : ");
    dump_state(input);

    ShiftRows(input);

    printf("ShiftRow : ");
    dump_state(input);

    printf("\nExpected : 63 EB 9F A0 2F 93 92 C0 AF C7 AB 30 A2 20 CB 2B\n");

    return 0;
}