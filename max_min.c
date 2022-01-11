#include<stdio.h>
void get_max_min(int arr[], int size, int* max, int* min) {         // 최대 최소 구분 함수, main함수에서 max, min의 주소를 넣었으므로 int* 사용
    *max = *min = arr[0];           // 처음에는 두 값에 arr[0]값 넣음
    for(int i = 0; i < size; i++)
    {
        if(*max < arr[i]) {
            *max = arr[i];
        }
        else if(*min > arr[i]) {
            *min = arr[i];
        }
    }
}
int main(void) {
    int max = 0;
    int min = 0;
    int arr[10] = {0, };
    printf("숫자 10개를 입력하시오 : ");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    get_max_min(arr, 10, &max, &min);       // 포인터 사용하여 max, min의 주소를 넣음
    printf("최댓값 : %d\n", max);
    printf("최솟값 : %d\n", min);
    return 0;
}