// to illustrates how we can write a struct to a
// binary file
#include <stdio.h>

// Define a struct
struct Person {
    char name[50];
    int age;
    float height;
};

int main()
{
    // Create an instance of the struct
    struct Person person = { "John", 35, 6.0 };

    // Open a file in binary write mode
    FILE* file = fopen("person_data.bin", "wb");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Write the struct data to the file
    size_t num_written
        = fwrite(&person, sizeof(struct Person), 1, file);
    if (num_written != 1) {
        perror("Error writing to file");
        fclose(file);
        return 1;
    }

    // Close the file
    fclose(file);

    printf("Struct data written to Binary file "
           "successfully.\n");

    return 0;
}