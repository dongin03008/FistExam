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

    cout << "1 번째 수를 입력해 주세요 : ";
    cin >> nums[0];

    cout << "2 번째 수를 입력해 주세요 : ";
    cin >> nums[1];

    cout << "3 번째 수를 입력해 주세요 : ";
    cin >> nums[2];

    cout << "4 번째 수를 입력해 주세요 : ";
    cin >> nums[3];

    cout << "5 번째 수를 입력해 주세요 : ";
    cin >> nums[4];

    sum = SumValue(nums,5);
    ave = GetAverage(nums,5);
    cout << "합 : " << sum << " 평균 : " << ave << endl;

    cout << "정렬방식을 선택해 주세요 : " << endl;
    cout << "1.오름차순 정렬 " << endl;
    cout << "2.내림차순 정렬" << endl;
    cin >> sortnum;

    bubble_sort(nums, 5, sortnum);

	return 0;
}