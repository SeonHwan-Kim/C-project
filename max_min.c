#include<stdio.h>
void get_max_min(int arr[], int size, int* max, int* min) {         // �ִ� �ּ� ���� �Լ�, main�Լ����� max, min�� �ּҸ� �־����Ƿ� int* ���
    *max = *min = arr[0];           // ó������ �� ���� arr[0]�� ����
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
    printf("���� 10���� �Է��Ͻÿ� : ");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    get_max_min(arr, 10, &max, &min);       // ������ ����Ͽ� max, min�� �ּҸ� ����
    printf("�ִ� : %d\n", max);
    printf("�ּڰ� : %d\n", min);
    return 0;
}