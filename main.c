//
//  main.c
//  f
//
//  Created by Stanislav Klepikov on 01.10.2024.
//


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int number();

void print(int [], int, int []);
int ds[10]= {1,2,3,4};
int main(void) {
    setlocale(LC_ALL, "Russian");
    int num;
    num = number();
    int arr[num];
    int fr[] = {2,34,65,22};
    print(arr, num, fr);

    return 0;
}

int number() {
    int elements_count;
    int valid_input = 0;

    while (!valid_input) {
        printf("Введите количество элементов в массиве (от 1 до 10): ");

        if (scanf("%d", &elements_count) != 1) {
            printf("Ошибка: Введите целое число!\n");
            while (getchar() != '\n');
        } else if (elements_count < 1 || elements_count > 10) {
            printf("Ошибка: Число должно быть в диапазоне от 1 до 10!\n");
        } else {
            valid_input = 1;
        }
    }
    return elements_count;
}

void print(int arr[], int num, int fr[]) {
    for (int i = 0; i < num; i++) {
        printf("Введите значение №%d: ", i + 1);
        while (scanf("%d", &arr[i]) != 1) {
            printf("Ошибка: Введите целое число для элемента №%d!\n", i + 1);
            while (getchar() != '\n');
        }
    }

    printf("\nМассив:\n");
    for (int i2 = 0; i2 < num; i2++) {
        printf("arr[%d] = %d\n", i2, arr[i2]);
    }
    printf("массив public");
    for (int i3 = 0; i3 < 10; i3++) {
        printf("ds[%d] = %d\n", i3, ds[i3]);
    }
    printf("массив main");
    for (int i4 = 0; i4 < 10; i4++) {
        printf("fr[%d] = %d\n", i4, fr[i4]);
    }
}
