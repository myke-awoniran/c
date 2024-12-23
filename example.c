#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

#define N 6

// enum MY_CLASS
// {
// TEA='TEA',
// MYKE='MYKE',
// OPEYEMI,
// DATA_SET,
// };

void test_pointer(){
    int i = 1;
    int *p = &i;
    int *q = p;
    *q = 5;
    printf("output %d \n", *p);
}

int *find_mid(int a[], int n){
    return &a[n / 2];
}

int sum(int arr[]){
    int sum = 0, *p;

    // int last_index = sizeof(arr);

    for (p = arr; p <= arr+N-1; p++){
        sum  += *p;
    }
    return sum;
}

void min_max(int array[], int len, int *min, int *max){
    *min = *max = array[0];

    int i;
    for (i = 1; i <= len; i++){
        if (array[i]> *max){
            *max = array[i];
        }

        if(array[i]<*min){
            *min = array[i];
        }
    }
}

int min, max;

int arr[] = {1, 3, 6, 132, 0, 3};
int array_length = sizeof(arr) / sizeof(arr[0]);


int main(){
    const int8_t girls = 12;
    const int boys = 9;
    // const int students = boys + girls;
    double my_number = 12.3;

    const int * ptr = &boys; // constant pointer

    int * const null_ptr = NULL; // const pointer

    if(null_ptr){
        printf("This is my null pointer %d %d \n", *null_ptr, *ptr);
    }
    test_pointer();
    printf("Does this works? %d \n", *&boys);

    min_max(arr, array_length, &min, &max);

    int result= sum(arr);

    printf("The minimum length of the array is %d and the maximum size is %d \n", min, max);

    printf("this is my integer pointer %p \n", &boys);

    printf("this is the sum using pointers %d", result);

    // enum MY_CLASS daisy = TEA;

    // printf("my decimal number is %f", my_number);
    // printf("My name is michael %f", daisy)

    // printf("There are total of %d", students);
    return EXIT_SUCCESS;
}