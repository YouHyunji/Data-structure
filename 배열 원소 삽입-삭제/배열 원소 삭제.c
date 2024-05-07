#include <stdio.h>

int deleteElement(int arr[], int *size, int value) {
    int i, j;
    int found = 0;

    // 배열을 순회하며 삭제할 값을 찾음
    for (i = 0; i < *size; i++) {
        if (arr[i] == value) {
            found = 1;
            // 삭제할 값이 발견되면 배열을 재조정하여 빈 자리를 채움
            for (j = i; j < *size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            (*size)--; // 배열의 크기를 하나 줄임
            i--; // 중복된 값을 처리하기 위해 인덱스를 감소
        }
    }
    return found;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = 5; // 배열의 초기 크기
    int value, found;

    scanf_s("%d", &value); //삭제할 값 입력
    
    found = deleteElement(arr, &size, value);

    // 삭제 후 배열 출력
    if (found) {
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    }
    else
        printf("Not found");
    return 0;
}
