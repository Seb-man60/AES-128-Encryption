#include <stdint.h> //Define sets of Integer types having specified width
#ifndef AES_H
    #define AES_H
    #define DATA_SIZE 16 //Size of the data (4 x 4)
    #define STATE_ROW_SIZE 4 //Size of one row of the state
    #define ROUND_COUNT 10 //Cypher rounds
    void AESEncrypt(uint8_t* ciphertext, uint8_t* plaintext , uint8_t* key); //AES Cyphering function
    void AddRoundKey(uint8_t tableau_1 [], uint8_t tableau_2 []); //XOR with round key
    void SubBytes(uint8_t state []); //S-Box permutation
    void ShiftRows(uint8_t state []); //Shifting cyclically bytes of each row
    void MixColumns(uint8_t state []); //State columns are multiplied with a fixed polynomial
    void KeyGen(uint8_t keys [], uint8_t master_key []); //Round key generation
    void ColumnFill(uint8_t cle [] , int round);
    void OtherColumnsFill(uint8_t cle [], int round);
    void GetRoundKey(uint8_t round_key [], uint8_t keys [], int round);
    void MessageToState(uint8_t state [], uint8_t message []); //Encryption
    void StateToMessage(uint8_t message [],uint8_t state []); //Decryption
    void MCMatrixColumnProduct(uint8_t colonne []); //Multiplication of two matrix column
    void dump_state(uint8_t state [], char msg []); //Printing actual state
    uint8_t gmul(uint8_t a, uint8_t b);
    extern const uint8_t rcon [10]; //Round constant
    extern const uint8_t sboxtab [256]; //Substitution box table
    extern const uint8_t invsbox [256]; //Inversed Substitution box table
#endif