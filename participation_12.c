//Farhan Shahbaz
//Huntington


#include <stdio.h>

int main()
{
    //printf("Hello World\n");
    char my_string[] = "ThisisFarhan\n";
    printf("%s", my_string);
   
    int length = strlen(my_string);
    printf("Length of my string: %d\n", length);
   
    char arr[length];

    for(int i = 0; i < length; i++){
        char c = rand() % (125 + 1 - 33) + 33;
        arr[i] = c;
    }
   
    int l = strlen(arr);
    //printing array
    for(int i = 0; i < l; i++){
        printf("%c ", arr[i]);
    }
   
    printf("\n");
   
    char output[length];
    int i;
    for(i = 0; i < length; i++){
        char temp = arr[i] ^ my_string[i];
        output[i] = temp;
    }
    output[i] = '\0';
    printf("Ciphertext: %s\n", output);
   
   
    //Second XOR
    char output2[length];
    int j;
    for(j = 0; j < length; j++){
        char temp = output[j] ^ my_string[j];
        output2[j] = temp;
    }
    output2[j] = '\0';
    printf("Second Ciphertext: %s", output2);
    // for(int i = 0; i < length; i++){
    //     for(int j = 0; j < l; j++){
    //         char a = my_string[i];
    //         char b = arr[j];
    //         char c = a ^ b;
    //         printf("%c ", c);
    //     }
    //     break;
    // }
   
    // char output;
    // output = arr ^ my_string;
    // printf("%s", output);
    return 0;
}