#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)    // 5�� �ݺ�. �ٱ��� ������ ���� ����
    {
        for (int j = 0; j < 5; j++)    // 5�� �ݺ�. ���� ������ ���� ����
        {
            printf("*");               // �� ���
        }
        printf("\n");              // ���� �������� ���� �� �׸� �� ���� �ٷ� �Ѿ
    }

    return 0;
}