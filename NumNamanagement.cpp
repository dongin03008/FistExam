#include <iostream>

using namespace std;

int SumValue(int arr[],int size) {
    int sum = 0 ;
    for (int i = 0; i < size ; i++) {
        sum += arr[i];
    }
    return sum;
}
double GetAverage(int arr[],int size) {
    double ave = (double)SumValue(arr,size) / size;
    return ave;
}

void bubble_sort(int arr[], int n,int num) {
    int i, j, temp;

    for (i=n-1 ; i>0 ; i--)
    {
        for(j=0 ; j<i ; j++){
            if (num == 1) {
                if (arr[j] > arr[j + 1]) 
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            if (num == 2) {
                if (arr[j] < arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

    }
    cout << "{";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1) {
            cout << ",";
        }
    }
    cout << ">";

}

int main() {
	
	int nums[5];
    int sum = 0;
    int sortnum = 0;
    double ave = 0;

    cout << "1 ��° ���� �Է��� �ּ��� : ";
    cin >> nums[0];

    cout << "2 ��° ���� �Է��� �ּ��� : ";
    cin >> nums[1];

    cout << "3 ��° ���� �Է��� �ּ��� : ";
    cin >> nums[2];

    cout << "4 ��° ���� �Է��� �ּ��� : ";
    cin >> nums[3];

    cout << "5 ��° ���� �Է��� �ּ��� : ";
    cin >> nums[4];

    sum = SumValue(nums,5);
    ave = GetAverage(nums,5);
    cout << "�� : " << sum << " ��� : " << ave << endl;

    cout << "���Ĺ���� ������ �ּ��� : " << endl;
    cout << "1.�������� ���� " << endl;
    cout << "2.�������� ����" << endl;
    cin >> sortnum;

    bubble_sort(nums, 5, sortnum);

	return 0;
}