#include <stdio.h>
/*
주어진 정렬된 배열에 새 원소를 삽입하여 배열을 다시 정렬하는 프로그램을 작성하려고 한다.
배열의 크기는 충분히 크다고 가정하며, 삽입할 새 원소의 위치를 찾고 삽입한 후 나머지 원소들을 뒤로 이동해야 한다.
아래의 코드는 그대로 유지하고, 배열 원소를 삽입하는 insertElement() 함수를 작성하여 프로그램을 완성하시오.
*/

int insertElement(int* arr,int size, int element, int capacity ) {

    if (size >= capacity) return size;

    int i;
    // 배열 요소 값이 입력받은 값보다 크면 뒤로 한 칸 이동
    for (i = size - 1; i >= 0 && arr[i] > element; i--) {
        arr[i + 1] = arr[i];        
    }
    arr[i + 1] = element;
    return (size + 1);
}

int main() {
    int arr[10] = { 1, 2, 4, 5 }; // 배열 선언 및 초기화, 10은 배열의 최대 용량
    int size, element, capacity;

    size = 4;      // 배열의 요소 개수
    capacity = 10; // 배열의 최대 용량

    scanf_s("%d", &element);      // 요소 입력 받음

    // 새 원소 삽입
    size = insertElement(arr, size, element, capacity);

    // 결과 출력
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}